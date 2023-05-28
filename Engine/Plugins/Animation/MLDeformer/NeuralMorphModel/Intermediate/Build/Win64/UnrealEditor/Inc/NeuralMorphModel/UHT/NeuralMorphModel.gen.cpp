// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralMorphModel.h"
#include "NeuralMorphTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralMorphModel() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModel();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphModel();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphModel_NoRegister();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphNetwork_NoRegister();
	NEURALMORPHMODEL_API UEnum* Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode();
	NEURALMORPHMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphBoneGroup();
	NEURALMORPHMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphCurveGroup();
	UPackage* Z_Construct_UPackage__Script_NeuralMorphModel();
// End Cross Module References
	void UNeuralMorphModel::StaticRegisterNativesUNeuralMorphModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralMorphModel);
	UClass* Z_Construct_UClass_UNeuralMorphModel_NoRegister()
	{
		return UNeuralMorphModel::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralMorphModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneGroups;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveGroups;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalNumMorphTargetsPerBone_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalNumMorphTargetsPerBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalNumMorphTargets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalNumMorphTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalNumHiddenLayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalNumHiddenLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalNumNeuronsPerLayer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalNumNeuronsPerLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalNumHiddenLayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalNumHiddenLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalNumNeuronsPerLayer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalNumNeuronsPerLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BatchSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BatchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LearningRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LearningRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LearningRateDecay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LearningRateDecay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegularizationFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RegularizationFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeuralMorphNetwork_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NeuralMorphNetwork;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralMorphModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerMorphModel,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The neural morph model.\n * This generates a set of highly compressed morph targets to approximate a target deformation based on bone rotations and/or curve inputs.\n * During inference, the neural network inside this model runs on the CPU and outputs the morph target weights for the morph targets it generated during training.\n * Groups of bones and curves can also be defined. Those groups will generate a set of morph targets together as well. This can help when shapes depend on multiple inputs.\n * An external morph target set is generated during training and serialized inside the ML Deformer asset that contains this model.\n * When the ML Deformer component initializes the morph target set is registered. Most of the heavy lifting is done by the UMLDeformerMorphModel class.\n * The neural morph model has two modes: local and global. See the ENeuralMorphMode for a description of the two.\n * @see ENeuralMorphMode\n */" },
		{ "IncludePath", "NeuralMorphModel.h" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The neural morph model.\nThis generates a set of highly compressed morph targets to approximate a target deformation based on bone rotations and/or curve inputs.\nDuring inference, the neural network inside this model runs on the CPU and outputs the morph target weights for the morph targets it generated during training.\nGroups of bones and curves can also be defined. Those groups will generate a set of morph targets together as well. This can help when shapes depend on multiple inputs.\nAn external morph target set is generated during training and serialized inside the ML Deformer asset that contains this model.\nWhen the ML Deformer component initializes the morph target set is registered. Most of the heavy lifting is done by the UMLDeformerMorphModel class.\nThe neural morph model has two modes: local and global. See the ENeuralMorphMode for a description of the two.\n@see ENeuralMorphMode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_BoneGroups_Inner = { "BoneGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNeuralMorphBoneGroup, METADATA_PARAMS(nullptr, 0) }; // 687623709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_BoneGroups_MetaData[] = {
		{ "Category", "Inputs and Output" },
		{ "Comment", "/**\n\x09 * The set of bones that are grouped together and generate morph targets together as a whole.\n\x09 * This can be used in case multiple bones are correlated to each other and work together to produce given shapes.\n\x09 * Groups are only used when the model is in Local mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The set of bones that are grouped together and generate morph targets together as a whole.\nThis can be used in case multiple bones are correlated to each other and work together to produce given shapes.\nGroups are only used when the model is in Local mode." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_BoneGroups = { "BoneGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, BoneGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_BoneGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_BoneGroups_MetaData)) }; // 687623709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_CurveGroups_Inner = { "CurveGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNeuralMorphCurveGroup, METADATA_PARAMS(nullptr, 0) }; // 4109012533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_CurveGroups_MetaData[] = {
		{ "Category", "Inputs and Output" },
		{ "Comment", "/**\n\x09 * The set of curves that are grouped together and generate morph targets together as a whole.\n\x09 * This can be used in case multiple curves are correlated to each other and work together to produce given shapes.\n\x09 * Groups are only used when the model is in Local mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The set of curves that are grouped together and generate morph targets together as a whole.\nThis can be used in case multiple curves are correlated to each other and work together to produce given shapes.\nGroups are only used when the model is in Local mode." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_CurveGroups = { "CurveGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, CurveGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_CurveGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_CurveGroups_MetaData)) }; // 4109012533
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "Comment", "/**\n\x09 * The mode that the neural network will operate in. \n\x09 * Local mode means there is one tiny network per bone, while global mode has one network for all bones together.\n\x09 * The advantage of local mode is that it has higher performance, while global mode might result in better deformations.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The mode that the neural network will operate in.\nLocal mode means there is one tiny network per bone, while global mode has one network for all bones together.\nThe advantage of local mode is that it has higher performance, while global mode might result in better deformations." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, Mode), Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_Mode_MetaData)) }; // 1694469100
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumMorphTargetsPerBone_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** \n\x09 * The number of morph targets to generate per bone, curve or group.\n\x09 * Higher numbers result in better approximation of the target deformation, but also result in a higher memory footprint and slower performance.\n\x09 */" },
		{ "DisplayName", "Num Morphs Per Bone/Curve/Group" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The number of morph targets to generate per bone, curve or group.\nHigher numbers result in better approximation of the target deformation, but also result in a higher memory footprint and slower performance." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumMorphTargetsPerBone = { "LocalNumMorphTargetsPerBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, LocalNumMorphTargetsPerBone), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumMorphTargetsPerBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumMorphTargetsPerBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumMorphTargets_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** \n\x09 * The number of morph targets to generate in total. \n\x09 * Higher numbers result in better approximation of the target deformation, but also result in a higher memory footprint and slower performance.\n\x09 */" },
		{ "DisplayName", "Num Morph Targets" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The number of morph targets to generate in total.\nHigher numbers result in better approximation of the target deformation, but also result in a higher memory footprint and slower performance." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumMorphTargets = { "GlobalNumMorphTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, GlobalNumMorphTargets), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumMorphTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_NumIterations_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMax", "1000000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** \n\x09 * The number of iterations to train the model for. \n\x09 * If you are quickly iterating then around 1000 to 3000 iterations should be enough.\n\x09 * If you want to generate final assets you might want to use a higher number of iterations, like 10k to 100k.\n\x09 * Once the loss doesn't go down anymore, you know that more iterations most likely won't help much.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The number of iterations to train the model for.\nIf you are quickly iterating then around 1000 to 3000 iterations should be enough.\nIf you want to generate final assets you might want to use a higher number of iterations, like 10k to 100k.\nOnce the loss doesn't go down anymore, you know that more iterations most likely won't help much." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, NumIterations), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_NumIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_NumIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumHiddenLayers_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09 * The number of hidden layers that the neural network model will have.\n\x09 * Higher numbers will slow down performance but can deal with more complex deformations. \n\x09 * For the local model you most likely want to stick with a value of one or two.\n\x09 */" },
		{ "DisplayName", "Num Hidden Layers" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The number of hidden layers that the neural network model will have.\nHigher numbers will slow down performance but can deal with more complex deformations.\nFor the local model you most likely want to stick with a value of one or two." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumHiddenLayers = { "LocalNumHiddenLayers", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, LocalNumHiddenLayers), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumHiddenLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumHiddenLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumNeuronsPerLayer_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "1" },
		{ "Comment", "/** \n\x09 * The number of units/neurons per hidden layer. \n\x09 * Higher numbers will slow down performance but allow for more complex mesh deformations. \n\x09 * For the local mode you probably want to keep this around the same value as the number of morph targets per bone.\n\x09 */" },
		{ "DisplayName", "Num Neurons Per Layer" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The number of units/neurons per hidden layer.\nHigher numbers will slow down performance but allow for more complex mesh deformations.\nFor the local mode you probably want to keep this around the same value as the number of morph targets per bone." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumNeuronsPerLayer = { "LocalNumNeuronsPerLayer", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, LocalNumNeuronsPerLayer), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumNeuronsPerLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumNeuronsPerLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumHiddenLayers_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMax", "6" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of hidden layers that the neural network model will have.\\nHigher numbers will slow down performance but can deal with more complex deformations. */" },
		{ "DisplayName", "Num Hidden Layers" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The number of hidden layers that the neural network model will have.\\nHigher numbers will slow down performance but can deal with more complex deformations." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumHiddenLayers = { "GlobalNumHiddenLayers", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, GlobalNumHiddenLayers), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumHiddenLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumHiddenLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumNeuronsPerLayer_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of units/neurons per hidden layer. Higher numbers will slow down performance but allow for more complex mesh deformations. */" },
		{ "DisplayName", "Num Neurons Per Layer" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The number of units/neurons per hidden layer. Higher numbers will slow down performance but allow for more complex mesh deformations." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumNeuronsPerLayer = { "GlobalNumNeuronsPerLayer", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, GlobalNumNeuronsPerLayer), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumNeuronsPerLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumNeuronsPerLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_BatchSize_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of frames per batch when training the model. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The number of frames per batch when training the model." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_BatchSize = { "BatchSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, BatchSize), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_BatchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_BatchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LearningRate_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** The learning rate used during the model training. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The learning rate used during the model training." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LearningRate = { "LearningRate", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, LearningRate), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LearningRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LearningRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LearningRateDecay_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** \n\x09 * The learning rate decay rate. If this is set to 1, the learning rate will not change. \n\x09 * This is a multiplication factor. Every 1000 iterations, the new learning rate will be equal to\n\x09 * CurrentLearningRate * LearningRateDecay. This allows us to take slightly larger steps in the first iterations, and slowly take smaller steps.\n\x09 * Generally you want this to be between 0.9 and 1.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The learning rate decay rate. If this is set to 1, the learning rate will not change.\nThis is a multiplication factor. Every 1000 iterations, the new learning rate will be equal to\nCurrentLearningRate * LearningRateDecay. This allows us to take slightly larger steps in the first iterations, and slowly take smaller steps.\nGenerally you want this to be between 0.9 and 1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LearningRateDecay = { "LearningRateDecay", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, LearningRateDecay), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LearningRateDecay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LearningRateDecay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_RegularizationFactor_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** \n\x09 * The regularization factor. Higher values can help generate more sparse morph targets, but can also lead to visual artifacts. \n\x09 * A value of 0 disables the regularization, and gives the highest quality, at the cost of higher runtime memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The regularization factor. Higher values can help generate more sparse morph targets, but can also lead to visual artifacts.\nA value of 0 disables the regularization, and gives the highest quality, at the cost of higher runtime memory usage." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_RegularizationFactor = { "RegularizationFactor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, RegularizationFactor), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_RegularizationFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_RegularizationFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_NeuralMorphNetwork_MetaData[] = {
		{ "Comment", "/**\n\x09 * The neural morph model network.\n\x09 * This is a specialized network used for inference, for performance reasons.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralMorphModel.h" },
		{ "ToolTip", "The neural morph model network.\nThis is a specialized network used for inference, for performance reasons." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_NeuralMorphNetwork = { "NeuralMorphNetwork", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModel, NeuralMorphNetwork), Z_Construct_UClass_UNeuralMorphNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_NeuralMorphNetwork_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_NeuralMorphNetwork_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeuralMorphModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_BoneGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_BoneGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_CurveGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_CurveGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumMorphTargetsPerBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumMorphTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_NumIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumHiddenLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LocalNumNeuronsPerLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumHiddenLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_GlobalNumNeuronsPerLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_BatchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LearningRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_LearningRateDecay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_RegularizationFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModel_Statics::NewProp_NeuralMorphNetwork,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralMorphModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralMorphModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralMorphModel_Statics::ClassParams = {
		&UNeuralMorphModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNeuralMorphModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralMorphModel()
	{
		if (!Z_Registration_Info_UClass_UNeuralMorphModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralMorphModel.OuterSingleton, Z_Construct_UClass_UNeuralMorphModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralMorphModel.OuterSingleton;
	}
	template<> NEURALMORPHMODEL_API UClass* StaticClass<UNeuralMorphModel>()
	{
		return UNeuralMorphModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralMorphModel);
	UNeuralMorphModel::~UNeuralMorphModel() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNeuralMorphModel)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralMorphModel, UNeuralMorphModel::StaticClass, TEXT("UNeuralMorphModel"), &Z_Registration_Info_UClass_UNeuralMorphModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralMorphModel), 4087168126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h_418887198(TEXT("/Script/NeuralMorphModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
