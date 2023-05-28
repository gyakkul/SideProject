// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NearestNeighborTrainingModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNearestNeighborTrainingModel() {}
// Cross Module References
	MLDEFORMERFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UMLDeformerTrainingModel();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborModel_NoRegister();
	NEARESTNEIGHBORMODELEDITOR_API UClass* Z_Construct_UClass_UNearestNeighborTrainingModel();
	NEARESTNEIGHBORMODELEDITOR_API UClass* Z_Construct_UClass_UNearestNeighborTrainingModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NearestNeighborModelEditor();
// End Cross Module References
	DEFINE_FUNCTION(UNearestNeighborTrainingModel::execGetMeshIndexBuffer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetMeshIndexBuffer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborTrainingModel::execGetUnskinnedVertexPositions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetUnskinnedVertexPositions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborTrainingModel::execGetKmeansNumClusters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKmeansNumClusters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborTrainingModel::execGetKmeansAnimNumFrames)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SkeletonId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKmeansAnimNumFrames(Z_Param_SkeletonId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborTrainingModel::execGetKmeansNumAnims)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKmeansNumAnims();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborTrainingModel::execSampleKmeansFrame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SampleKmeansFrame(Z_Param_Frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborTrainingModel::execSampleKmeansAnim)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SkeletonId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SampleKmeansAnim(Z_Param_SkeletonId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborTrainingModel::execGetPartNumNeighbors)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPartNumNeighbors(Z_Param_PartId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborTrainingModel::execSetSamplerPartData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetSamplerPartData(Z_Param_PartId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborTrainingModel::execSamplePart)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SamplePart(Z_Param_PartId,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborTrainingModel::execGetPartVertexMap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetPartVertexMap(Z_Param_PartId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborTrainingModel::execGetNearestNeighborModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNearestNeighborModel**)Z_Param__Result=P_THIS->GetNearestNeighborModel();
		P_NATIVE_END;
	}
	struct NearestNeighborTrainingModel_eventKmeansClusterPoses_Parms
	{
		int32 PartId;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		NearestNeighborTrainingModel_eventKmeansClusterPoses_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct NearestNeighborTrainingModel_eventTrain_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		NearestNeighborTrainingModel_eventTrain_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct NearestNeighborTrainingModel_eventUpdateNearestNeighborData_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		NearestNeighborTrainingModel_eventUpdateNearestNeighborData_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_UNearestNeighborTrainingModel_KmeansClusterPoses = FName(TEXT("KmeansClusterPoses"));
	int32 UNearestNeighborTrainingModel::KmeansClusterPoses(const int32 PartId) const
	{
		NearestNeighborTrainingModel_eventKmeansClusterPoses_Parms Parms;
		Parms.PartId=PartId;
		const_cast<UNearestNeighborTrainingModel*>(this)->ProcessEvent(FindFunctionChecked(NAME_UNearestNeighborTrainingModel_KmeansClusterPoses),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UNearestNeighborTrainingModel_Train = FName(TEXT("Train"));
	int32 UNearestNeighborTrainingModel::Train() const
	{
		NearestNeighborTrainingModel_eventTrain_Parms Parms;
		const_cast<UNearestNeighborTrainingModel*>(this)->ProcessEvent(FindFunctionChecked(NAME_UNearestNeighborTrainingModel_Train),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UNearestNeighborTrainingModel_UpdateNearestNeighborData = FName(TEXT("UpdateNearestNeighborData"));
	int32 UNearestNeighborTrainingModel::UpdateNearestNeighborData()
	{
		NearestNeighborTrainingModel_eventUpdateNearestNeighborData_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UNearestNeighborTrainingModel_UpdateNearestNeighborData),&Parms);
		return Parms.ReturnValue;
	}
	void UNearestNeighborTrainingModel::StaticRegisterNativesUNearestNeighborTrainingModel()
	{
		UClass* Class = UNearestNeighborTrainingModel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKmeansAnimNumFrames", &UNearestNeighborTrainingModel::execGetKmeansAnimNumFrames },
			{ "GetKmeansNumAnims", &UNearestNeighborTrainingModel::execGetKmeansNumAnims },
			{ "GetKmeansNumClusters", &UNearestNeighborTrainingModel::execGetKmeansNumClusters },
			{ "GetMeshIndexBuffer", &UNearestNeighborTrainingModel::execGetMeshIndexBuffer },
			{ "GetNearestNeighborModel", &UNearestNeighborTrainingModel::execGetNearestNeighborModel },
			{ "GetPartNumNeighbors", &UNearestNeighborTrainingModel::execGetPartNumNeighbors },
			{ "GetPartVertexMap", &UNearestNeighborTrainingModel::execGetPartVertexMap },
			{ "GetUnskinnedVertexPositions", &UNearestNeighborTrainingModel::execGetUnskinnedVertexPositions },
			{ "SampleKmeansAnim", &UNearestNeighborTrainingModel::execSampleKmeansAnim },
			{ "SampleKmeansFrame", &UNearestNeighborTrainingModel::execSampleKmeansFrame },
			{ "SamplePart", &UNearestNeighborTrainingModel::execSamplePart },
			{ "SetSamplerPartData", &UNearestNeighborTrainingModel::execSetSamplerPartData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics
	{
		struct NearestNeighborTrainingModel_eventGetKmeansAnimNumFrames_Parms
		{
			int32 SkeletonId;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkeletonId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::NewProp_SkeletonId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::NewProp_SkeletonId = { "SkeletonId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventGetKmeansAnimNumFrames_Parms, SkeletonId), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::NewProp_SkeletonId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::NewProp_SkeletonId_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventGetKmeansAnimNumFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::NewProp_SkeletonId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "GetKmeansAnimNumFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::NearestNeighborTrainingModel_eventGetKmeansAnimNumFrames_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims_Statics
	{
		struct NearestNeighborTrainingModel_eventGetKmeansNumAnims_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventGetKmeansNumAnims_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "GetKmeansNumAnims", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims_Statics::NearestNeighborTrainingModel_eventGetKmeansNumAnims_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters_Statics
	{
		struct NearestNeighborTrainingModel_eventGetKmeansNumClusters_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventGetKmeansNumClusters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "GetKmeansNumClusters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters_Statics::NearestNeighborTrainingModel_eventGetKmeansNumClusters_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics
	{
		struct NearestNeighborTrainingModel_eventGetMeshIndexBuffer_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventGetMeshIndexBuffer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "GetMeshIndexBuffer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::NearestNeighborTrainingModel_eventGetMeshIndexBuffer_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel_Statics
	{
		struct NearestNeighborTrainingModel_eventGetNearestNeighborModel_Parms
		{
			UNearestNeighborModel* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventGetNearestNeighborModel_Parms, ReturnValue), Z_Construct_UClass_UNearestNeighborModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "GetNearestNeighborModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel_Statics::NearestNeighborTrainingModel_eventGetNearestNeighborModel_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics
	{
		struct NearestNeighborTrainingModel_eventGetPartNumNeighbors_Parms
		{
			int32 PartId;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::NewProp_PartId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventGetPartNumNeighbors_Parms, PartId), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::NewProp_PartId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::NewProp_PartId_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventGetPartNumNeighbors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "GetPartNumNeighbors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::NearestNeighborTrainingModel_eventGetPartNumNeighbors_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics
	{
		struct NearestNeighborTrainingModel_eventGetPartVertexMap_Parms
		{
			int32 PartId;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::NewProp_PartId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventGetPartVertexMap_Parms, PartId), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::NewProp_PartId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::NewProp_PartId_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventGetPartVertexMap_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "GetPartVertexMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::NearestNeighborTrainingModel_eventGetPartVertexMap_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics
	{
		struct NearestNeighborTrainingModel_eventGetUnskinnedVertexPositions_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventGetUnskinnedVertexPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "GetUnskinnedVertexPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::NearestNeighborTrainingModel_eventGetUnskinnedVertexPositions_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::NewProp_PartId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventKmeansClusterPoses_Parms, PartId), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::NewProp_PartId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::NewProp_PartId_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventKmeansClusterPoses_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "KmeansClusterPoses", nullptr, nullptr, sizeof(NearestNeighborTrainingModel_eventKmeansClusterPoses_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics
	{
		struct NearestNeighborTrainingModel_eventSampleKmeansAnim_Parms
		{
			int32 SkeletonId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkeletonId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::NewProp_SkeletonId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::NewProp_SkeletonId = { "SkeletonId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventSampleKmeansAnim_Parms, SkeletonId), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::NewProp_SkeletonId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::NewProp_SkeletonId_MetaData)) };
	void Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NearestNeighborTrainingModel_eventSampleKmeansAnim_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NearestNeighborTrainingModel_eventSampleKmeansAnim_Parms), &Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::NewProp_SkeletonId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "SampleKmeansAnim", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::NearestNeighborTrainingModel_eventSampleKmeansAnim_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics
	{
		struct NearestNeighborTrainingModel_eventSampleKmeansFrame_Parms
		{
			int32 Frame;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Frame;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::NewProp_Frame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventSampleKmeansFrame_Parms, Frame), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::NewProp_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::NewProp_Frame_MetaData)) };
	void Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NearestNeighborTrainingModel_eventSampleKmeansFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NearestNeighborTrainingModel_eventSampleKmeansFrame_Parms), &Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "SampleKmeansFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::NearestNeighborTrainingModel_eventSampleKmeansFrame_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics
	{
		struct NearestNeighborTrainingModel_eventSamplePart_Parms
		{
			int32 PartId;
			int32 Index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventSamplePart_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventSamplePart_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventSamplePart_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "SamplePart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::NearestNeighborTrainingModel_eventSamplePart_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics
	{
		struct NearestNeighborTrainingModel_eventSetSamplerPartData_Parms
		{
			int32 PartId;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::NewProp_PartId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventSetSamplerPartData_Parms, PartId), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::NewProp_PartId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::NewProp_PartId_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventSetSamplerPartData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "SetSamplerPartData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::NearestNeighborTrainingModel_eventSetSamplerPartData_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_Train_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_Train_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventTrain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_Train_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_Train_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_Train_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Main training function, with implementation in python. */" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
		{ "ToolTip", "Main training function, with implementation in python." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_Train_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "Train", nullptr, nullptr, sizeof(NearestNeighborTrainingModel_eventTrain_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_Train_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_Train_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_Train_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_Train_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_Train()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_Train_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborTrainingModel_UpdateNearestNeighborData_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborTrainingModel_UpdateNearestNeighborData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborTrainingModel_eventUpdateNearestNeighborData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborTrainingModel_UpdateNearestNeighborData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborTrainingModel_UpdateNearestNeighborData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborTrainingModel_UpdateNearestNeighborData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborTrainingModel_UpdateNearestNeighborData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborTrainingModel, nullptr, "UpdateNearestNeighborData", nullptr, nullptr, sizeof(NearestNeighborTrainingModel_eventUpdateNearestNeighborData_Parms), Z_Construct_UFunction_UNearestNeighborTrainingModel_UpdateNearestNeighborData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_UpdateNearestNeighborData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborTrainingModel_UpdateNearestNeighborData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborTrainingModel_UpdateNearestNeighborData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborTrainingModel_UpdateNearestNeighborData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborTrainingModel_UpdateNearestNeighborData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNearestNeighborTrainingModel);
	UClass* Z_Construct_UClass_UNearestNeighborTrainingModel_NoRegister()
	{
		return UNearestNeighborTrainingModel::StaticClass();
	}
	struct Z_Construct_UClass_UNearestNeighborTrainingModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PartSampleDeltas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartSampleDeltas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PartSampleDeltas;
		static const UECodeGen_Private::FIntPropertyParams NewProp_KmeansResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KmeansResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KmeansResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerTrainingModel,
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModelEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansAnimNumFrames, "GetKmeansAnimNumFrames" }, // 499716239
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumAnims, "GetKmeansNumAnims" }, // 731890244
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_GetKmeansNumClusters, "GetKmeansNumClusters" }, // 3096040134
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_GetMeshIndexBuffer, "GetMeshIndexBuffer" }, // 1978505053
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_GetNearestNeighborModel, "GetNearestNeighborModel" }, // 622233667
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartNumNeighbors, "GetPartNumNeighbors" }, // 3624012427
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_GetPartVertexMap, "GetPartVertexMap" }, // 3874410662
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_GetUnskinnedVertexPositions, "GetUnskinnedVertexPositions" }, // 214935913
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_KmeansClusterPoses, "KmeansClusterPoses" }, // 1225206832
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansAnim, "SampleKmeansAnim" }, // 1302007203
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_SampleKmeansFrame, "SampleKmeansFrame" }, // 480430416
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_SamplePart, "SamplePart" }, // 3304547691
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_SetSamplerPartData, "SetSamplerPartData" }, // 312651095
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_Train, "Train" }, // 834381857
		{ &Z_Construct_UFunction_UNearestNeighborTrainingModel_UpdateNearestNeighborData, "UpdateNearestNeighborData" }, // 3696029458
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NearestNeighborTrainingModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_PartSampleDeltas_Inner = { "PartSampleDeltas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_PartSampleDeltas_MetaData[] = {
		{ "Category", "Training Data" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_PartSampleDeltas = { "PartSampleDeltas", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborTrainingModel, PartSampleDeltas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_PartSampleDeltas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_PartSampleDeltas_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_KmeansResults_Inner = { "KmeansResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_KmeansResults_MetaData[] = {
		{ "Category", "Training Data" },
		{ "ModuleRelativePath", "Public/NearestNeighborTrainingModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_KmeansResults = { "KmeansResults", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborTrainingModel, KmeansResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_KmeansResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_KmeansResults_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_PartSampleDeltas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_PartSampleDeltas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_KmeansResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::NewProp_KmeansResults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearestNeighborTrainingModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::ClassParams = {
		&UNearestNeighborTrainingModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNearestNeighborTrainingModel()
	{
		if (!Z_Registration_Info_UClass_UNearestNeighborTrainingModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNearestNeighborTrainingModel.OuterSingleton, Z_Construct_UClass_UNearestNeighborTrainingModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNearestNeighborTrainingModel.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODELEDITOR_API UClass* StaticClass<UNearestNeighborTrainingModel>()
	{
		return UNearestNeighborTrainingModel::StaticClass();
	}
	UNearestNeighborTrainingModel::UNearestNeighborTrainingModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearestNeighborTrainingModel);
	UNearestNeighborTrainingModel::~UNearestNeighborTrainingModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNearestNeighborTrainingModel, UNearestNeighborTrainingModel::StaticClass, TEXT("UNearestNeighborTrainingModel"), &Z_Registration_Info_UClass_UNearestNeighborTrainingModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNearestNeighborTrainingModel), 1796860174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_1585431157(TEXT("/Script/NearestNeighborModelEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
