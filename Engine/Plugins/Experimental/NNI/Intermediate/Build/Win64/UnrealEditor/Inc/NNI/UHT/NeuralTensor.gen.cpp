// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralNetworkInference/Public/NeuralTensor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralTensor() {}
// Cross Module References
	NEURALNETWORKINFERENCE_API UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType();
	NEURALNETWORKINFERENCE_API UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType();
	NEURALNETWORKINFERENCE_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralTensor();
	UPackage* Z_Construct_UPackage__Script_NeuralNetworkInference();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NeuralTensor;
class UScriptStruct* FNeuralTensor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NeuralTensor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NeuralTensor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeuralTensor, (UObject*)Z_Construct_UPackage__Script_NeuralNetworkInference(), TEXT("NeuralTensor"));
	}
	return Z_Registration_Info_UScriptStruct_NeuralTensor.OuterSingleton;
}
template<> NEURALNETWORKINFERENCE_API UScriptStruct* StaticStruct<FNeuralTensor>()
{
	return FNeuralTensor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNeuralTensor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Sizes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sizes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sizes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TensorType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TensorType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TensorType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UnderlyingUInt8ArrayData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderlyingUInt8ArrayData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnderlyingUInt8ArrayData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGPU_MetaData[];
#endif
		static void NewProp_bEnableGPU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGPU;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralTensor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * For a general overview of NeuralNetworkInference (NNI), including documentation and code samples, @see UNeuralNetwork, the main class of NNI.\n *\n * NNI's users should not directly create or modify instances of FNeuralTensor. Instead, they should only interact with FNeuralNetwork and its input\n * and output functions. E.g., @see FNeuralNetwork::GetInputTensor, FNeuralNetwork::SetInputFromArrayCopy, FNeuralNetwork::GetOutputTensor, etc.\n *\n * FNeuralTensor is an auxiliary class of UNeuralNetwork which represents a tensor of the UNeuralNetwork model. It is Unreal Engine's equivalent of\n * torch.Tensor (PyTorch) or caffe::Blob (Caffe).\n *\n * Most of FNeuralTensor's functions run on the CPU, so `CPUToRDGBuilder_RenderThread()` must be called before running on GPU and after running any\n * FNeuralTensor function that modifies the CPU memory. In addition, FNeuralTensor's CPU functions are very similar to those of TArray<T>.\n */" },
		{ "ModuleRelativePath", "Public/NeuralTensor.h" },
		{ "ToolTip", "For a general overview of NeuralNetworkInference (NNI), including documentation and code samples, @see UNeuralNetwork, the main class of NNI.\n\nNNI's users should not directly create or modify instances of FNeuralTensor. Instead, they should only interact with FNeuralNetwork and its input\nand output functions. E.g., @see FNeuralNetwork::GetInputTensor, FNeuralNetwork::SetInputFromArrayCopy, FNeuralNetwork::GetOutputTensor, etc.\n\nFNeuralTensor is an auxiliary class of UNeuralNetwork which represents a tensor of the UNeuralNetwork model. It is Unreal Engine's equivalent of\ntorch.Tensor (PyTorch) or caffe::Blob (Caffe).\n\nMost of FNeuralTensor's functions run on the CPU, so `CPUToRDGBuilder_RenderThread()` must be called before running on GPU and after running any\nFNeuralTensor function that modifies the CPU memory. In addition, FNeuralTensor's CPU functions are very similar to those of TArray<T>." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeuralTensor>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * General variables and properties set by the FNeuralTensor constructor (or their setting functions) and saved on the FNeuralTensor UAsset.\n\x09 * - DataType defines the underlying uint8 data type of the network (float, double, int32, etc).\n\x09 * - Sizes defines the dimensions of the tensor.\n\x09 * - Volume defines the total number of elements of the tensor. I.e., it is the product of the size of each dimension, or mathematically\n\x09 *   Prod(Sizes[Index]) for all Indexes.\n\x09 * - Name is used for GPU debugging and the ToString() function.\n\x09 * - TensorType defines the type of the tensor on a network (Generic, Input, Intermediate(Not)Initialized, Output, Weight, etc.). It is currently\n\x09 *   only used when moving memory to the GPU.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralTensor.h" },
		{ "ToolTip", "General variables and properties set by the FNeuralTensor constructor (or their setting functions) and saved on the FNeuralTensor UAsset.\n- DataType defines the underlying uint8 data type of the network (float, double, int32, etc).\n- Sizes defines the dimensions of the tensor.\n- Volume defines the total number of elements of the tensor. I.e., it is the product of the size of each dimension, or mathematically\n  Prod(Sizes[Index]) for all Indexes.\n- Name is used for GPU debugging and the ToString() function.\n- TensorType defines the type of the tensor on a network (Generic, Input, Intermediate(Not)Initialized, Output, Weight, etc.). It is currently\n  only used when moving memory to the GPU." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralTensor, DataType), Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_DataType_MetaData)) }; // 2487208935
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Sizes_Inner = { "Sizes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Sizes_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Public/NeuralTensor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Sizes = { "Sizes", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralTensor, Sizes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Sizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Sizes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Public/NeuralTensor.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralTensor, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Public/NeuralTensor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralTensor, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_TensorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_TensorType_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Public/NeuralTensor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_TensorType = { "TensorType", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralTensor, TensorType), Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_TensorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_TensorType_MetaData)) }; // 2013422835
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_UnderlyingUInt8ArrayData_Inner = { "UnderlyingUInt8ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_UnderlyingUInt8ArrayData_MetaData[] = {
		{ "Comment", "/**\n\x09 * The array containing the underlying CPU data. It is preallocated based on the combination of DataType and Sizes/Volume (if Sizes/Volume are\n\x09 * not empty/zero): UnderlyingUInt8ArrayData.Num() == sizeof(data type) x Volume.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralTensor.h" },
		{ "ToolTip", "The array containing the underlying CPU data. It is preallocated based on the combination of DataType and Sizes/Volume (if Sizes/Volume are\nnot empty/zero): UnderlyingUInt8ArrayData.Num() == sizeof(data type) x Volume." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_UnderlyingUInt8ArrayData = { "UnderlyingUInt8ArrayData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralTensor, UnderlyingUInt8ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_UnderlyingUInt8ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_UnderlyingUInt8ArrayData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_bEnableGPU_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * GPU-related variables that are transient. They are not serialized and are re-configured every time a tensor is loaded.\n\x09 * - bEnableGPU: By default false, meaning all GPU memory allocation will be disabled and GPU functions will do nothing. Enable to allow using\n\x09 *   the GPU capabilities of the tensor.\n\x09 * - PooledBuffer: FRDGPooledBuffer containing the GPU memory of this tensor.\n\x09 * - BufferSRVRef: Casting of the PooledBuffer into a read-only SRV.\n\x09 * - BufferUAVRef: Casting of the PooledBuffer into a read-write UAV.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralTensor.h" },
		{ "ToolTip", "GPU-related variables that are transient. They are not serialized and are re-configured every time a tensor is loaded.\n- bEnableGPU: By default false, meaning all GPU memory allocation will be disabled and GPU functions will do nothing. Enable to allow using\n  the GPU capabilities of the tensor.\n- PooledBuffer: FRDGPooledBuffer containing the GPU memory of this tensor.\n- BufferSRVRef: Casting of the PooledBuffer into a read-only SRV.\n- BufferUAVRef: Casting of the PooledBuffer into a read-write UAV." },
	};
#endif
	void Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_bEnableGPU_SetBit(void* Obj)
	{
		((FNeuralTensor*)Obj)->bEnableGPU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_bEnableGPU = { "bEnableGPU", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNeuralTensor), &Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_bEnableGPU_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_bEnableGPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_bEnableGPU_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeuralTensor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Sizes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Sizes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_TensorType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_TensorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_UnderlyingUInt8ArrayData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_UnderlyingUInt8ArrayData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewProp_bEnableGPU,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeuralTensor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralNetworkInference,
		nullptr,
		&NewStructOps,
		"NeuralTensor",
		sizeof(FNeuralTensor),
		alignof(FNeuralTensor),
		Z_Construct_UScriptStruct_FNeuralTensor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralTensor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralTensor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralTensor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNeuralTensor()
	{
		if (!Z_Registration_Info_UScriptStruct_NeuralTensor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NeuralTensor.InnerSingleton, Z_Construct_UScriptStruct_FNeuralTensor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NeuralTensor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralTensor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralTensor_h_Statics::ScriptStructInfo[] = {
		{ FNeuralTensor::StaticStruct, Z_Construct_UScriptStruct_FNeuralTensor_Statics::NewStructOps, TEXT("NeuralTensor"), &Z_Registration_Info_UScriptStruct_NeuralTensor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeuralTensor), 658829057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralTensor_h_1099530432(TEXT("/Script/NeuralNetworkInference"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralTensor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralTensor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
