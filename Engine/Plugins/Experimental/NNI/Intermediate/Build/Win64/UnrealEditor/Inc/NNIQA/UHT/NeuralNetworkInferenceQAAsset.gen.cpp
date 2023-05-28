// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralNetworkInferenceQA/Internal/NeuralNetworkInferenceQAAsset.h"
#include "NeuralNetworkInference/Public/NeuralTensor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralNetworkInferenceQAAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NEURALNETWORKINFERENCE_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralTensor();
	NEURALNETWORKINFERENCEQA_API UClass* Z_Construct_UClass_UNeuralNetworkInferenceQAAsset();
	NEURALNETWORKINFERENCEQA_API UClass* Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_NoRegister();
	NEURALNETWORKINFERENCEQA_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset();
	NEURALNETWORKINFERENCEQA_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset();
	UPackage* Z_Construct_UPackage__Script_NeuralNetworkInferenceQA();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorTestAsset;
class UScriptStruct* FNeuralNetworkInferenceQAOperatorTestAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorTestAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorTestAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset, (UObject*)Z_Construct_UPackage__Script_NeuralNetworkInferenceQA(), TEXT("NeuralNetworkInferenceQAOperatorTestAsset"));
	}
	return Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorTestAsset.OuterSingleton;
}
template<> NEURALNETWORKINFERENCEQA_API UScriptStruct* StaticStruct<FNeuralNetworkInferenceQAOperatorTestAsset>()
{
	return FNeuralNetworkInferenceQAOperatorTestAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTensors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTensors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputTensors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputTensors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTensors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputTensors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Internal/NeuralNetworkInferenceQAAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeuralNetworkInferenceQAOperatorTestAsset>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_InputTensors_Inner = { "InputTensors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNeuralTensor, METADATA_PARAMS(nullptr, 0) }; // 658829057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_InputTensors_MetaData[] = {
		{ "Category", "Neural Network Inference QA" },
		{ "ModuleRelativePath", "Internal/NeuralNetworkInferenceQAAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_InputTensors = { "InputTensors", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralNetworkInferenceQAOperatorTestAsset, InputTensors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_InputTensors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_InputTensors_MetaData)) }; // 658829057
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_OutputTensors_Inner = { "OutputTensors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNeuralTensor, METADATA_PARAMS(nullptr, 0) }; // 658829057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_OutputTensors_MetaData[] = {
		{ "Category", "Neural Network Inference QA" },
		{ "ModuleRelativePath", "Internal/NeuralNetworkInferenceQAAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_OutputTensors = { "OutputTensors", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralNetworkInferenceQAOperatorTestAsset, OutputTensors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_OutputTensors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_OutputTensors_MetaData)) }; // 658829057
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_InputTensors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_InputTensors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_OutputTensors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewProp_OutputTensors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralNetworkInferenceQA,
		nullptr,
		&NewStructOps,
		"NeuralNetworkInferenceQAOperatorTestAsset",
		sizeof(FNeuralNetworkInferenceQAOperatorTestAsset),
		alignof(FNeuralNetworkInferenceQAOperatorTestAsset),
		Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorTestAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorTestAsset.InnerSingleton, Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorTestAsset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorAsset;
class UScriptStruct* FNeuralNetworkInferenceQAOperatorAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset, (UObject*)Z_Construct_UPackage__Script_NeuralNetworkInferenceQA(), TEXT("NeuralNetworkInferenceQAOperatorAsset"));
	}
	return Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorAsset.OuterSingleton;
}
template<> NEURALNETWORKINFERENCEQA_API UScriptStruct* StaticStruct<FNeuralNetworkInferenceQAOperatorAsset>()
{
	return FNeuralNetworkInferenceQAOperatorAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousTests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousTests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTestsString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreviousTestsString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Internal/NeuralNetworkInferenceQAAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeuralNetworkInferenceQAOperatorAsset>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewProp_PreviousTests_Inner = { "PreviousTests", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset, METADATA_PARAMS(nullptr, 0) }; // 3680073835
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewProp_PreviousTests_MetaData[] = {
		{ "Category", "Neural Network Inference QA" },
		{ "ModuleRelativePath", "Internal/NeuralNetworkInferenceQAAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewProp_PreviousTests = { "PreviousTests", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralNetworkInferenceQAOperatorAsset, PreviousTests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewProp_PreviousTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewProp_PreviousTests_MetaData)) }; // 3680073835
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewProp_PreviousTestsString_MetaData[] = {
		{ "ModuleRelativePath", "Internal/NeuralNetworkInferenceQAAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewProp_PreviousTestsString = { "PreviousTestsString", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralNetworkInferenceQAOperatorAsset, PreviousTestsString), METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewProp_PreviousTestsString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewProp_PreviousTestsString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewProp_PreviousTests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewProp_PreviousTests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewProp_PreviousTestsString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralNetworkInferenceQA,
		nullptr,
		&NewStructOps,
		"NeuralNetworkInferenceQAOperatorAsset",
		sizeof(FNeuralNetworkInferenceQAOperatorAsset),
		alignof(FNeuralNetworkInferenceQAOperatorAsset),
		Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorAsset.InnerSingleton, Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorAsset.InnerSingleton;
	}
	void UNeuralNetworkInferenceQAAsset::StaticRegisterNativesUNeuralNetworkInferenceQAAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralNetworkInferenceQAAsset);
	UClass* Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_NoRegister()
	{
		return UNeuralNetworkInferenceQAAsset::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Operators_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Operators_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operators_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Operators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralNetworkInferenceQA,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This is an auxiliary class. See UNeuralNetwork for a high-level wrapper of the whole NeuralNetworkInference plugin. The UNeuralNetwork header\n * documentation also includes some code examples.\n */" },
		{ "IncludePath", "NeuralNetworkInferenceQAAsset.h" },
		{ "ModuleRelativePath", "Internal/NeuralNetworkInferenceQAAsset.h" },
		{ "ToolTip", "This is an auxiliary class. See UNeuralNetwork for a high-level wrapper of the whole NeuralNetworkInference plugin. The UNeuralNetwork header\ndocumentation also includes some code examples." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::NewProp_Operators_ValueProp = { "Operators", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset, METADATA_PARAMS(nullptr, 0) }; // 3363362760
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::NewProp_Operators_Key_KeyProp = { "Operators_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::NewProp_Operators_MetaData[] = {
		{ "Category", "Neural Network Inference QA" },
		{ "ModuleRelativePath", "Internal/NeuralNetworkInferenceQAAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::NewProp_Operators = { "Operators", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralNetworkInferenceQAAsset, Operators), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::NewProp_Operators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::NewProp_Operators_MetaData)) }; // 3363362760
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::NewProp_Operators_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::NewProp_Operators_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::NewProp_Operators,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralNetworkInferenceQAAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::ClassParams = {
		&UNeuralNetworkInferenceQAAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralNetworkInferenceQAAsset()
	{
		if (!Z_Registration_Info_UClass_UNeuralNetworkInferenceQAAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralNetworkInferenceQAAsset.OuterSingleton, Z_Construct_UClass_UNeuralNetworkInferenceQAAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralNetworkInferenceQAAsset.OuterSingleton;
	}
	template<> NEURALNETWORKINFERENCEQA_API UClass* StaticClass<UNeuralNetworkInferenceQAAsset>()
	{
		return UNeuralNetworkInferenceQAAsset::StaticClass();
	}
	UNeuralNetworkInferenceQAAsset::UNeuralNetworkInferenceQAAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralNetworkInferenceQAAsset);
	UNeuralNetworkInferenceQAAsset::~UNeuralNetworkInferenceQAAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_NeuralNetworkInferenceQA_Internal_NeuralNetworkInferenceQAAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_NeuralNetworkInferenceQA_Internal_NeuralNetworkInferenceQAAsset_h_Statics::ScriptStructInfo[] = {
		{ FNeuralNetworkInferenceQAOperatorTestAsset::StaticStruct, Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorTestAsset_Statics::NewStructOps, TEXT("NeuralNetworkInferenceQAOperatorTestAsset"), &Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorTestAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeuralNetworkInferenceQAOperatorTestAsset), 3680073835U) },
		{ FNeuralNetworkInferenceQAOperatorAsset::StaticStruct, Z_Construct_UScriptStruct_FNeuralNetworkInferenceQAOperatorAsset_Statics::NewStructOps, TEXT("NeuralNetworkInferenceQAOperatorAsset"), &Z_Registration_Info_UScriptStruct_NeuralNetworkInferenceQAOperatorAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeuralNetworkInferenceQAOperatorAsset), 3363362760U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_NeuralNetworkInferenceQA_Internal_NeuralNetworkInferenceQAAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralNetworkInferenceQAAsset, UNeuralNetworkInferenceQAAsset::StaticClass, TEXT("UNeuralNetworkInferenceQAAsset"), &Z_Registration_Info_UClass_UNeuralNetworkInferenceQAAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralNetworkInferenceQAAsset), 706080016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_NeuralNetworkInferenceQA_Internal_NeuralNetworkInferenceQAAsset_h_3829703064(TEXT("/Script/NeuralNetworkInferenceQA"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_NeuralNetworkInferenceQA_Internal_NeuralNetworkInferenceQAAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_NeuralNetworkInferenceQA_Internal_NeuralNetworkInferenceQAAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_NeuralNetworkInferenceQA_Internal_NeuralNetworkInferenceQAAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_NeuralNetworkInferenceQA_Internal_NeuralNetworkInferenceQAAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
