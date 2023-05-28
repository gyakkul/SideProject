// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexDeltaModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexDeltaModel() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerGeomCacheModel();
	NEURALNETWORKINFERENCE_API UClass* Z_Construct_UClass_UNeuralNetwork_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexDeltaModel();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UVertexDeltaModel();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UVertexDeltaModel_NoRegister();
// End Cross Module References
	void UVertexDeltaModel::StaticRegisterNativesUVertexDeltaModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexDeltaModel);
	UClass* Z_Construct_UClass_UVertexDeltaModel_NoRegister()
	{
		return UVertexDeltaModel::StaticClass();
	}
	struct Z_Construct_UClass_UVertexDeltaModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NNINetwork_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NNINetwork;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumHiddenLayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumHiddenLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumNeuronsPerLayer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumNeuronsPerLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BatchSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BatchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LearningRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LearningRate;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexDeltaModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerGeomCacheModel,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexDeltaModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexDeltaModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * The vertex delta model, which uses a GPU based neural network.\n * This model acts more as an example of how to implement a model that only uses the GPU.\n * It is not as efficient as the Neural Morph Model, even though that model runs on the CPU.\n * Unlike the Neural Morph Model this Vertex Delta Model does not generate any morph targets. All the vertex deltas are directly output\n * by the neural network. This buffer of output deltas remains on the GPU and is then used as input buffer directly inside an optimus deformer graph.\n */" },
		{ "IncludePath", "VertexDeltaModel.h" },
		{ "ModuleRelativePath", "Public/VertexDeltaModel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The vertex delta model, which uses a GPU based neural network.\nThis model acts more as an example of how to implement a model that only uses the GPU.\nIt is not as efficient as the Neural Morph Model, even though that model runs on the CPU.\nUnlike the Neural Morph Model this Vertex Delta Model does not generate any morph targets. All the vertex deltas are directly output\nby the neural network. This buffer of output deltas remains on the GPU and is then used as input buffer directly inside an optimus deformer graph." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NNINetwork_MetaData[] = {
		{ "Comment", "/** The NNI neural network. */" },
		{ "ModuleRelativePath", "Public/VertexDeltaModel.h" },
		{ "ToolTip", "The NNI neural network." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NNINetwork = { "NNINetwork", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexDeltaModel, NNINetwork), Z_Construct_UClass_UNeuralNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NNINetwork_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NNINetwork_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumHiddenLayers_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of hidden layers that the neural network model will have.\\nHigher numbers will slow down performance but can deal with more complex deformations. */" },
		{ "ModuleRelativePath", "Public/VertexDeltaModel.h" },
		{ "ToolTip", "The number of hidden layers that the neural network model will have.\\nHigher numbers will slow down performance but can deal with more complex deformations." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumHiddenLayers = { "NumHiddenLayers", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexDeltaModel, NumHiddenLayers), METADATA_PARAMS(Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumHiddenLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumHiddenLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumNeuronsPerLayer_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of units/neurons per hidden layer. Higher numbers will slow down performance but allow for more complex mesh deformations. */" },
		{ "ModuleRelativePath", "Public/VertexDeltaModel.h" },
		{ "ToolTip", "The number of units/neurons per hidden layer. Higher numbers will slow down performance but allow for more complex mesh deformations." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumNeuronsPerLayer = { "NumNeuronsPerLayer", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexDeltaModel, NumNeuronsPerLayer), METADATA_PARAMS(Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumNeuronsPerLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumNeuronsPerLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumIterations_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of iterations to train the model for. */" },
		{ "ModuleRelativePath", "Public/VertexDeltaModel.h" },
		{ "ToolTip", "The number of iterations to train the model for." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexDeltaModel, NumIterations), METADATA_PARAMS(Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_BatchSize_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of frames per batch when training the model. */" },
		{ "ModuleRelativePath", "Public/VertexDeltaModel.h" },
		{ "ToolTip", "The number of frames per batch when training the model." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_BatchSize = { "BatchSize", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexDeltaModel, BatchSize), METADATA_PARAMS(Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_BatchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_BatchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_LearningRate_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** The learning rate used during the model training. */" },
		{ "ModuleRelativePath", "Public/VertexDeltaModel.h" },
		{ "ToolTip", "The learning rate used during the model training." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_LearningRate = { "LearningRate", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexDeltaModel, LearningRate), METADATA_PARAMS(Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_LearningRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_LearningRate_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexDeltaModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NNINetwork,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumHiddenLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumNeuronsPerLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_NumIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_BatchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexDeltaModel_Statics::NewProp_LearningRate,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexDeltaModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexDeltaModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexDeltaModel_Statics::ClassParams = {
		&UVertexDeltaModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexDeltaModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexDeltaModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexDeltaModel()
	{
		if (!Z_Registration_Info_UClass_UVertexDeltaModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexDeltaModel.OuterSingleton, Z_Construct_UClass_UVertexDeltaModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexDeltaModel.OuterSingleton;
	}
	template<> VERTEXDELTAMODEL_API UClass* StaticClass<UVertexDeltaModel>()
	{
		return UVertexDeltaModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexDeltaModel);
	UVertexDeltaModel::~UVertexDeltaModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexDeltaModel, UVertexDeltaModel::StaticClass, TEXT("UVertexDeltaModel"), &Z_Registration_Info_UClass_UVertexDeltaModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexDeltaModel), 466785328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModel_h_3562489624(TEXT("/Script/VertexDeltaModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
