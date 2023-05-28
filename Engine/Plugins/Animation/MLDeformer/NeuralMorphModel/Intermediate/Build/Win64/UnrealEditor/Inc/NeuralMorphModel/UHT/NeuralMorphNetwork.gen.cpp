// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralMorphNetwork.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralMorphNetwork() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphMLP();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphMLP_NoRegister();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphMLPLayer();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphMLPLayer_NoRegister();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphNetwork();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphNetwork_NoRegister();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphNetworkInstance();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphNetworkInstance_NoRegister();
	NEURALMORPHMODEL_API UEnum* Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode();
	UPackage* Z_Construct_UPackage__Script_NeuralMorphModel();
// End Cross Module References
	void UNeuralMorphMLPLayer::StaticRegisterNativesUNeuralMorphMLPLayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralMorphMLPLayer);
	UClass* Z_Construct_UClass_UNeuralMorphMLPLayer_NoRegister()
	{
		return UNeuralMorphMLPLayer::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralMorphMLPLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInputs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumOutputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Weights;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Biases_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Biases_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Biases;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A fully connected layer, which contains the weights and biases for those connections. */" },
		{ "IncludePath", "NeuralMorphNetwork.h" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "A fully connected layer, which contains the weights and biases for those connections." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_NumInputs_MetaData[] = {
		{ "Comment", "/** The weight matrix number of inputs (rows). */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The weight matrix number of inputs (rows)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_NumInputs = { "NumInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphMLPLayer, NumInputs), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_NumInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_NumInputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_NumOutputs_MetaData[] = {
		{ "Comment", "/** The weight matrix number of outputs (columns). */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The weight matrix number of outputs (columns)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_NumOutputs = { "NumOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphMLPLayer, NumOutputs), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_NumOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_NumOutputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Depth_MetaData[] = {
		{ "Comment", "/** The number of instances of inputs and outputs. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The number of instances of inputs and outputs." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphMLPLayer, Depth), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Depth_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Weights_Inner = { "Weights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Weights_MetaData[] = {
		{ "Comment", "/** A 2D array of weights. The number of weights equals NumRows x NumColumns x Depth. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "A 2D array of weights. The number of weights equals NumRows x NumColumns x Depth." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphMLPLayer, Weights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Weights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Weights_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Biases_Inner = { "Biases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Biases_MetaData[] = {
		{ "Comment", "/** The biases. The number of biases will be the same as the number of columns multiplied by the depth. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The biases. The number of biases will be the same as the number of columns multiplied by the depth." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Biases = { "Biases", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphMLPLayer, Biases), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Biases_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Biases_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_NumInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_NumOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Weights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Weights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Biases_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::NewProp_Biases,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralMorphMLPLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::ClassParams = {
		&UNeuralMorphMLPLayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralMorphMLPLayer()
	{
		if (!Z_Registration_Info_UClass_UNeuralMorphMLPLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralMorphMLPLayer.OuterSingleton, Z_Construct_UClass_UNeuralMorphMLPLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralMorphMLPLayer.OuterSingleton;
	}
	template<> NEURALMORPHMODEL_API UClass* StaticClass<UNeuralMorphMLPLayer>()
	{
		return UNeuralMorphMLPLayer::StaticClass();
	}
	UNeuralMorphMLPLayer::UNeuralMorphMLPLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralMorphMLPLayer);
	UNeuralMorphMLPLayer::~UNeuralMorphMLPLayer() {}
	void UNeuralMorphMLP::StaticRegisterNativesUNeuralMorphMLP()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralMorphMLP);
	UClass* Z_Construct_UClass_UNeuralMorphMLP_NoRegister()
	{
		return UNeuralMorphMLP::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralMorphMLP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Layers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralMorphMLP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphMLP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An MLP neural network.\n */" },
		{ "IncludePath", "NeuralMorphNetwork.h" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "An MLP neural network." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNeuralMorphMLP_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNeuralMorphMLPLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphMLP_Statics::NewProp_Layers_MetaData[] = {
		{ "Comment", "/** The network weights and biases of the main network. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The network weights and biases of the main network." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuralMorphMLP_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphMLP, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphMLP_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphMLP_Statics::NewProp_Layers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeuralMorphMLP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphMLP_Statics::NewProp_Layers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphMLP_Statics::NewProp_Layers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralMorphMLP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralMorphMLP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralMorphMLP_Statics::ClassParams = {
		&UNeuralMorphMLP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNeuralMorphMLP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphMLP_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphMLP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphMLP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralMorphMLP()
	{
		if (!Z_Registration_Info_UClass_UNeuralMorphMLP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralMorphMLP.OuterSingleton, Z_Construct_UClass_UNeuralMorphMLP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralMorphMLP.OuterSingleton;
	}
	template<> NEURALMORPHMODEL_API UClass* StaticClass<UNeuralMorphMLP>()
	{
		return UNeuralMorphMLP::StaticClass();
	}
	UNeuralMorphMLP::UNeuralMorphMLP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralMorphMLP);
	UNeuralMorphMLP::~UNeuralMorphMLP() {}
	void UNeuralMorphNetwork::StaticRegisterNativesUNeuralMorphNetwork()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralMorphNetwork);
	UClass* Z_Construct_UClass_UNeuralMorphNetwork_NoRegister()
	{
		return UNeuralMorphNetwork::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralMorphNetwork_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainMLP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MainMLP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupMLP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroupMLP;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputMeans_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMeans_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputMeans;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputStd_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputStd_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputStd;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMorphsPerBone_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMorphsPerBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBones_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCurves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFloatsPerCurve_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFloatsPerCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumGroups_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumItemsPerGroup_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumItemsPerGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralMorphNetwork_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetwork_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The specialized neural network for the Neural Morph Model.\n * This class is used to do inference at runtime at a higher performance than using UNeuralNetwork.\n * The reason why it is faster is because it is a highly specialized network for this specific model.\n * When the model is a local mode based model, there can be actually two neural networks inside this: one main network and a bone/curve group network.\n * The group network uses groups of bones or curves to generate morph targets, rather than individual bones/curves.\n */" },
		{ "IncludePath", "NeuralMorphNetwork.h" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The specialized neural network for the Neural Morph Model.\nThis class is used to do inference at runtime at a higher performance than using UNeuralNetwork.\nThe reason why it is faster is because it is a highly specialized network for this specific model.\nWhen the model is a local mode based model, there can be actually two neural networks inside this: one main network and a bone/curve group network.\nThe group network uses groups of bones or curves to generate morph targets, rather than individual bones/curves." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_MainMLP_MetaData[] = {
		{ "Comment", "/** The MLP that acts as main network. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The MLP that acts as main network." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_MainMLP = { "MainMLP", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphNetwork, MainMLP), Z_Construct_UClass_UNeuralMorphMLP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_MainMLP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_MainMLP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_GroupMLP_MetaData[] = {
		{ "Comment", "/** The MLP for the bone and curve groups, when in local mode. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The MLP for the bone and curve groups, when in local mode." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_GroupMLP = { "GroupMLP", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphNetwork, GroupMLP), Z_Construct_UClass_UNeuralMorphMLP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_GroupMLP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_GroupMLP_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputMeans_Inner = { "InputMeans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputMeans_MetaData[] = {
		{ "Comment", "/** The means of the input values, used to normalize inputs. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The means of the input values, used to normalize inputs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputMeans = { "InputMeans", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphNetwork, InputMeans), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputMeans_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputMeans_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputStd_Inner = { "InputStd", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputStd_MetaData[] = {
		{ "Comment", "/** The standard deviation of the input values, used to normalize inputs. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The standard deviation of the input values, used to normalize inputs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputStd = { "InputStd", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphNetwork, InputStd), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputStd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputStd_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_Mode_MetaData[] = {
		{ "Comment", "/** The mode of the network, either local or global. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The mode of the network, either local or global." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphNetwork, Mode), Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_Mode_MetaData)) }; // 1694469100
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumMorphsPerBone_MetaData[] = {
		{ "Comment", "/** The number of morph targets per bone, if set Mode == Local, otherwise ignored. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The number of morph targets per bone, if set Mode == Local, otherwise ignored." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumMorphsPerBone = { "NumMorphsPerBone", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphNetwork, NumMorphsPerBone), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumMorphsPerBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumMorphsPerBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumBones_MetaData[] = {
		{ "Comment", "/** The number of bones that were input. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The number of bones that were input." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumBones = { "NumBones", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphNetwork, NumBones), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumBones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumCurves_MetaData[] = {
		{ "Comment", "/** The number of curves that were input. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The number of curves that were input." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumCurves = { "NumCurves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphNetwork, NumCurves), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumFloatsPerCurve_MetaData[] = {
		{ "Comment", "/** The number of floats per curve. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The number of floats per curve." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumFloatsPerCurve = { "NumFloatsPerCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphNetwork, NumFloatsPerCurve), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumFloatsPerCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumFloatsPerCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumGroups_MetaData[] = {
		{ "Comment", "/** The number of groups. This is a group of bones/curves that create their own morphs. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The number of groups. This is a group of bones/curves that create their own morphs." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumGroups = { "NumGroups", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphNetwork, NumGroups), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumItemsPerGroup_MetaData[] = {
		{ "Comment", "/** The number of items (bones/curves) per group. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The number of items (bones/curves) per group." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumItemsPerGroup = { "NumItemsPerGroup", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphNetwork, NumItemsPerGroup), METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumItemsPerGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumItemsPerGroup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeuralMorphNetwork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_MainMLP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_GroupMLP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputMeans_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputMeans,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputStd_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_InputStd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumMorphsPerBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumFloatsPerCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetwork_Statics::NewProp_NumItemsPerGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralMorphNetwork_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralMorphNetwork>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralMorphNetwork_Statics::ClassParams = {
		&UNeuralMorphNetwork::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNeuralMorphNetwork_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetwork_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetwork_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetwork_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralMorphNetwork()
	{
		if (!Z_Registration_Info_UClass_UNeuralMorphNetwork.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralMorphNetwork.OuterSingleton, Z_Construct_UClass_UNeuralMorphNetwork_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralMorphNetwork.OuterSingleton;
	}
	template<> NEURALMORPHMODEL_API UClass* StaticClass<UNeuralMorphNetwork>()
	{
		return UNeuralMorphNetwork::StaticClass();
	}
	UNeuralMorphNetwork::UNeuralMorphNetwork(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralMorphNetwork);
	UNeuralMorphNetwork::~UNeuralMorphNetwork() {}
	void UNeuralMorphNetworkInstance::StaticRegisterNativesUNeuralMorphNetworkInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralMorphNetworkInstance);
	UClass* Z_Construct_UClass_UNeuralMorphNetworkInstance_NoRegister()
	{
		return UNeuralMorphNetworkInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Network_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Network;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * An instance of a UNeuralMorphNetwork.\n * The instance holds its own input and output buffers and only reads from the network object it was instanced from.\n * This allows it to be multithreaded.\n */" },
		{ "IncludePath", "NeuralMorphNetwork.h" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "An instance of a UNeuralMorphNetwork.\nThe instance holds its own input and output buffers and only reads from the network object it was instanced from.\nThis allows it to be multithreaded." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::NewProp_Network_MetaData[] = {
		{ "Comment", "/** The neural network this is an instance of. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphNetwork.h" },
		{ "ToolTip", "The neural network this is an instance of." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::NewProp_Network = { "Network", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphNetworkInstance, Network), Z_Construct_UClass_UNeuralMorphNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::NewProp_Network_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::NewProp_Network_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::NewProp_Network,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralMorphNetworkInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::ClassParams = {
		&UNeuralMorphNetworkInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralMorphNetworkInstance()
	{
		if (!Z_Registration_Info_UClass_UNeuralMorphNetworkInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralMorphNetworkInstance.OuterSingleton, Z_Construct_UClass_UNeuralMorphNetworkInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralMorphNetworkInstance.OuterSingleton;
	}
	template<> NEURALMORPHMODEL_API UClass* StaticClass<UNeuralMorphNetworkInstance>()
	{
		return UNeuralMorphNetworkInstance::StaticClass();
	}
	UNeuralMorphNetworkInstance::UNeuralMorphNetworkInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralMorphNetworkInstance);
	UNeuralMorphNetworkInstance::~UNeuralMorphNetworkInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphNetwork_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphNetwork_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralMorphMLPLayer, UNeuralMorphMLPLayer::StaticClass, TEXT("UNeuralMorphMLPLayer"), &Z_Registration_Info_UClass_UNeuralMorphMLPLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralMorphMLPLayer), 1468176991U) },
		{ Z_Construct_UClass_UNeuralMorphMLP, UNeuralMorphMLP::StaticClass, TEXT("UNeuralMorphMLP"), &Z_Registration_Info_UClass_UNeuralMorphMLP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralMorphMLP), 387039466U) },
		{ Z_Construct_UClass_UNeuralMorphNetwork, UNeuralMorphNetwork::StaticClass, TEXT("UNeuralMorphNetwork"), &Z_Registration_Info_UClass_UNeuralMorphNetwork, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralMorphNetwork), 2240806361U) },
		{ Z_Construct_UClass_UNeuralMorphNetworkInstance, UNeuralMorphNetworkInstance::StaticClass, TEXT("UNeuralMorphNetworkInstance"), &Z_Registration_Info_UClass_UNeuralMorphNetworkInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralMorphNetworkInstance), 1805681115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphNetwork_h_3846644259(TEXT("/Script/NeuralMorphModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphNetwork_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphNetwork_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
