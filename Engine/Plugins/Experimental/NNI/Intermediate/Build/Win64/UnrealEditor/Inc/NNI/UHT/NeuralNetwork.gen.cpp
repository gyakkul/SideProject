// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralNetworkInference/Public/NeuralNetwork.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralNetwork() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	NEURALNETWORKINFERENCE_API UClass* Z_Construct_UClass_UNeuralNetwork();
	NEURALNETWORKINFERENCE_API UClass* Z_Construct_UClass_UNeuralNetwork_NoRegister();
	NEURALNETWORKINFERENCE_API UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType();
	NEURALNETWORKINFERENCE_API UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode();
	NEURALNETWORKINFERENCE_API UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode();
	UPackage* Z_Construct_UPackage__Script_NeuralNetworkInference();
// End Cross Module References
	void UNeuralNetwork::StaticRegisterNativesUNeuralNetwork()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralNetwork);
	UClass* Z_Construct_UClass_UNeuralNetwork_NoRegister()
	{
		return UNeuralNetwork::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralNetwork_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputDeviceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDeviceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputDeviceType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputDeviceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDeviceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputDeviceType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SynchronousMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynchronousMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SynchronousMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThreadModeDelegateForAsyncRunCompleted_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThreadModeDelegateForAsyncRunCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThreadModeDelegateForAsyncRunCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelFullFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModelFullFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoaded_MetaData[];
#endif
		static void NewProp_bIsLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoaded;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModelReadFromFileInBytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelReadFromFileInBytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModelReadFromFileInBytes;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AreInputTensorSizesVariable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreInputTensorSizesVariable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AreInputTensorSizesVariable;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralNetwork_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralNetworkInference,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetwork_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * NeuralNetworkInference (NNI) is Unreal Engine's framework for running deep learning and neural network inference. It is focused on:\n * - Efficiency: Underlying state-of-the-art accelerators (DirectML, AVX, CoreML, etc).\n * - Ease-of-use: Simple but powerful API.\n * - Completeness: All the functionality of any state-of-the-art deep learning framework.\n *\n * UNeuralNetwork is the key class of NNI, and the main one users should interact with. It represents the deep neural model itself. It is capable of\n * loading and running inference (i.e., a forward pass) on any ONNX (Open Neural Network eXchange) model. ONNX is the industry standard for ML\n * interoperability, and all major frameworks (PyTorch, TensorFlow, MXNet, Caffe2, etc.) provide converters to ONNX.\n *\n * The following code snippets show the UNeuralNetwork basics (reading a ONNX model and running inference on it). For more detailed examples, see\n * {UE5}/Samples/MachineLearning/NNI.\n *\n * 1a Creating a new UNeuralNetwork and loading a network from an ONNX file\n *\x09\x09// Create the UNeuralNetwork object\n *\x09\x09UNeuralNetwork* Network = NewObject<UNeuralNetwork>((UObject*)GetTransientPackage(), UNeuralNetwork::StaticClass());\n *\x09\x09// Load the ONNX model and set the device (CPU/GPU)\n *\x09\x09""const FString ONNXModelFilePath = TEXT(\"SOME_PARENT_FOLDER/SOME_ONNX_FILE_NAME.onnx\");\n *\x09\x09if (Network->Load(ONNXModelFilePath))\n *\x09\x09{\n *\x09\x09\x09// Pick between option a or b\n *\x09\x09\x09// Option a) Set to GPU\n *\x09\x09\x09if (Network->IsGPUSupported())\n *\x09\x09\x09\x09Network->SetDeviceType(ENeuralDeviceType::GPU);\n *\x09\x09\x09// Option b) Set to CPU\n *\x09\x09\x09Network->SetDeviceType(ENeuralDeviceType::CPU);\n *\x09\x09}\n *\x09\x09// Check that the network was successfully loaded\n *\x09\x09""else\n *\x09\x09{\n *\x09\x09\x09UE_LOG(LogTemp, Warning, TEXT(\"UNeuralNetwork could not loaded from %s.\"), *ONNXModelFilePath);\n *\x09\x09}\n *\n * 1b Loading an existing UNeuralNetwork from its UAsset\n *\x09\x09// Load the UNeuralNetwork object from a UNeuralNetwork UAsset\n *\x09\x09""const FString NetworkUAssetFilePath = TEXT(\"'/Game/Models/ExampleNetwork/ExampleNetwork.ExampleNetwork'\");\n *\x09\x09UNeuralNetwork* Network = LoadObject<UNeuralNetwork>((UObject*)GetTransientPackage(), *NetworkUAssetFilePath);\n *\x09\x09// Check that the network was successfully loaded\n *\x09\x09""ensureMsgf(Network->IsLoaded(), TEXT(\"UNeuralNetwork could not loaded from %s.\"), *NetworkUAssetFilePath);\n *\x09\x09// Optionally set to CPU/GPU mode. This step is optional, if not called, it will use the device type that was saved on the loaded UAsset\n *\x09\x09// Network->SetDeviceType(ENeuralDeviceType::CPU);\n *\n * 2a Running inference\n *\x09\x09// Fill input neural tensor\n *\x09\x09TArray<float> InArray; // Assumed initialized with data and that InArray.Num() == Network->Num()\n *\x09\x09Network->SetInputFromArrayCopy(InArray); // Equivalent: Network->SetInputFromVoidPointerCopy(InArray.GetData());\n *\x09\x09UE_LOG(LogTemp, Display, TEXT(\"Input tensor: %s.\"), *Network->GetInputTensor().ToString());\n *\x09\x09// Run UNeuralNetwork\n *\x09\x09Network->Run();\n *\x09\x09// Read and print OutputTensor\n *\x09\x09""const FNeuralTensor& OutputTensor = Network->GetOutputTensor();\n *\x09\x09UE_LOG(LogTemp, Display, TEXT(\"Output tensor: %s.\"), *OutputTensor.ToString());\n *\n * 2b Running inference more efficiently - Filling the input tensor without a TArray-to-FNeuralTensor copy\n *\x09\x09// Obtain input tensor pointer\n *\x09\x09""float* InputDataPointer = (float*)Network->GetInputDataPointerMutable();\n *\x09\x09// Fill InputDataPointer\n *\x09\x09""for (int64 Index = 0; Index < Network->GetInputTensor().Num(); ++Index)\n *\x09\x09\x09InputDataPointer[Index] = ...; // Assumed some preprocessing or otherwise simply use Memcpy\n *\n * 3 Networks with multiple input/output tensors\n *\x09\x09- Multiple inputs: Add InTensorIndex to SetInputFromArrayCopy, SetInputFromVoidPointerCopy, GetInputTensor or GetInputDataPointerMutable\n *\x09\x09  in the examples above:\n *\x09\x09\x09Network->SetInputFromArrayCopy(InputArray0, 0); // Equivalent: Network->SetInputFromVoidPointerCopy(InputArray0.GetData(), 0);\n *\x09\x09\x09Network->SetInputFromArrayCopy(InputArray1, 1); // Equivalent: Network->SetInputFromVoidPointerCopy(InputArray1.GetData(), 1);\n *\x09\x09- Multiple outputs: Add InTensorIndex to GetOutputTensor(InTensorIndex) in the examples above or use GetOutputTensors() instead.\n *\x09\x09\x09""const FNeuralTensor& OutputTensor0 = Network->GetOutputTensor(0);\n *\x09\x09\x09""const FNeuralTensor& OutputTensor1 = Network->GetOutputTensor(1);\n */" },
		{ "IncludePath", "NeuralNetwork.h" },
		{ "ModuleRelativePath", "Public/NeuralNetwork.h" },
		{ "ToolTip", "NeuralNetworkInference (NNI) is Unreal Engine's framework for running deep learning and neural network inference. It is focused on:\n- Efficiency: Underlying state-of-the-art accelerators (DirectML, AVX, CoreML, etc).\n- Ease-of-use: Simple but powerful API.\n- Completeness: All the functionality of any state-of-the-art deep learning framework.\n\nUNeuralNetwork is the key class of NNI, and the main one users should interact with. It represents the deep neural model itself. It is capable of\nloading and running inference (i.e., a forward pass) on any ONNX (Open Neural Network eXchange) model. ONNX is the industry standard for ML\ninteroperability, and all major frameworks (PyTorch, TensorFlow, MXNet, Caffe2, etc.) provide converters to ONNX.\n\nThe following code snippets show the UNeuralNetwork basics (reading a ONNX model and running inference on it). For more detailed examples, see\n{UE5}/Samples/MachineLearning/NNI.\n\n1a Creating a new UNeuralNetwork and loading a network from an ONNX file\n            // Create the UNeuralNetwork object\n            UNeuralNetwork* Network = NewObject<UNeuralNetwork>((UObject*)GetTransientPackage(), UNeuralNetwork::StaticClass());\n            // Load the ONNX model and set the device (CPU/GPU)\n            const FString ONNXModelFilePath = TEXT(\"SOME_PARENT_FOLDER/SOME_ONNX_FILE_NAME.onnx\");\n            if (Network->Load(ONNXModelFilePath))\n            {\n                    // Pick between option a or b\n                    // Option a) Set to GPU\n                    if (Network->IsGPUSupported())\n                            Network->SetDeviceType(ENeuralDeviceType::GPU);\n                    // Option b) Set to CPU\n                    Network->SetDeviceType(ENeuralDeviceType::CPU);\n            }\n            // Check that the network was successfully loaded\n            else\n            {\n                    UE_LOG(LogTemp, Warning, TEXT(\"UNeuralNetwork could not loaded from %s.\"), *ONNXModelFilePath);\n            }\n\n1b Loading an existing UNeuralNetwork from its UAsset\n            // Load the UNeuralNetwork object from a UNeuralNetwork UAsset\n            const FString NetworkUAssetFilePath = TEXT(\"'/Game/Models/ExampleNetwork/ExampleNetwork.ExampleNetwork'\");\n            UNeuralNetwork* Network = LoadObject<UNeuralNetwork>((UObject*)GetTransientPackage(), *NetworkUAssetFilePath);\n            // Check that the network was successfully loaded\n            ensureMsgf(Network->IsLoaded(), TEXT(\"UNeuralNetwork could not loaded from %s.\"), *NetworkUAssetFilePath);\n            // Optionally set to CPU/GPU mode. This step is optional, if not called, it will use the device type that was saved on the loaded UAsset\n            // Network->SetDeviceType(ENeuralDeviceType::CPU);\n\n2a Running inference\n            // Fill input neural tensor\n            TArray<float> InArray; // Assumed initialized with data and that InArray.Num() == Network->Num()\n            Network->SetInputFromArrayCopy(InArray); // Equivalent: Network->SetInputFromVoidPointerCopy(InArray.GetData());\n            UE_LOG(LogTemp, Display, TEXT(\"Input tensor: %s.\"), *Network->GetInputTensor().ToString());\n            // Run UNeuralNetwork\n            Network->Run();\n            // Read and print OutputTensor\n            const FNeuralTensor& OutputTensor = Network->GetOutputTensor();\n            UE_LOG(LogTemp, Display, TEXT(\"Output tensor: %s.\"), *OutputTensor.ToString());\n\n2b Running inference more efficiently - Filling the input tensor without a TArray-to-FNeuralTensor copy\n            // Obtain input tensor pointer\n            float* InputDataPointer = (float*)Network->GetInputDataPointerMutable();\n            // Fill InputDataPointer\n            for (int64 Index = 0; Index < Network->GetInputTensor().Num(); ++Index)\n                    InputDataPointer[Index] = ...; // Assumed some preprocessing or otherwise simply use Memcpy\n\n3 Networks with multiple input/output tensors\n            - Multiple inputs: Add InTensorIndex to SetInputFromArrayCopy, SetInputFromVoidPointerCopy, GetInputTensor or GetInputDataPointerMutable\n              in the examples above:\n                    Network->SetInputFromArrayCopy(InputArray0, 0); // Equivalent: Network->SetInputFromVoidPointerCopy(InputArray0.GetData(), 0);\n                    Network->SetInputFromArrayCopy(InputArray1, 1); // Equivalent: Network->SetInputFromVoidPointerCopy(InputArray1.GetData(), 1);\n            - Multiple outputs: Add InTensorIndex to GetOutputTensor(InTensorIndex) in the examples above or use GetOutputTensors() instead.\n                    const FNeuralTensor& OutputTensor0 = Network->GetOutputTensor(0);\n                    const FNeuralTensor& OutputTensor1 = Network->GetOutputTensor(1);" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_DeviceType_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The neural device type of the network. It defines whether the network will use CPU or GPU acceleration hardware during inference (on Run).\n\x09 * If SetDeviceType() is never called, the default device (EDeviceType::GPU) will be used.\n\x09 * @see ENeuralDeviceType, InputDeviceType, OutputDeviceType for more details.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralNetwork.h" },
		{ "ToolTip", "The neural device type of the network. It defines whether the network will use CPU or GPU acceleration hardware during inference (on Run).\nIf SetDeviceType() is never called, the default device (EDeviceType::GPU) will be used.\n@see ENeuralDeviceType, InputDeviceType, OutputDeviceType for more details." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralNetwork, DeviceType), Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType, METADATA_PARAMS(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_DeviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_DeviceType_MetaData)) }; // 604231063
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_InputDeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_InputDeviceType_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * It defines whether Run() will expect the input data in CPU memory (Run will upload the memory to the GPU) or GPU memory (no upload needed).\n\x09 * If DeviceType == CPU, InputDeviceType and OutputDeviceType values are ignored and assumed to be set to CPU.\n\x09 * @see ENeuralDeviceType, DeviceType, OutputDeviceType for more details.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralNetwork.h" },
		{ "ToolTip", "It defines whether Run() will expect the input data in CPU memory (Run will upload the memory to the GPU) or GPU memory (no upload needed).\nIf DeviceType == CPU, InputDeviceType and OutputDeviceType values are ignored and assumed to be set to CPU.\n@see ENeuralDeviceType, DeviceType, OutputDeviceType for more details." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_InputDeviceType = { "InputDeviceType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralNetwork, InputDeviceType), Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType, METADATA_PARAMS(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_InputDeviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_InputDeviceType_MetaData)) }; // 604231063
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_OutputDeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_OutputDeviceType_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * It defines whether Run() will return the output data in CPU memory (Run will download the memory to the CPU) or GPU (no download needed).\n\x09 * If DeviceType == CPU, InputDeviceType and OutputDeviceType values are ignored and assumed to be set to CPU.\n\x09 * @see ENeuralDeviceType, DeviceType, InputDeviceType for more details.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralNetwork.h" },
		{ "ToolTip", "It defines whether Run() will return the output data in CPU memory (Run will download the memory to the CPU) or GPU (no download needed).\nIf DeviceType == CPU, InputDeviceType and OutputDeviceType values are ignored and assumed to be set to CPU.\n@see ENeuralDeviceType, DeviceType, InputDeviceType for more details." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_OutputDeviceType = { "OutputDeviceType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralNetwork, OutputDeviceType), Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType, METADATA_PARAMS(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_OutputDeviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_OutputDeviceType_MetaData)) }; // 604231063
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_SynchronousMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_SynchronousMode_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * It defines whether UNeuralNetwork::Run() will block the thread until completed (Synchronous), or whether it will run on a background thread,\n\x09 * not blocking the calling thread (Asynchronous).\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralNetwork.h" },
		{ "ToolTip", "It defines whether UNeuralNetwork::Run() will block the thread until completed (Synchronous), or whether it will run on a background thread,\nnot blocking the calling thread (Asynchronous)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_SynchronousMode = { "SynchronousMode", nullptr, (EPropertyFlags)0x0020080000002001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralNetwork, SynchronousMode), Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode, METADATA_PARAMS(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_SynchronousMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_SynchronousMode_MetaData)) }; // 3048383411
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ThreadModeDelegateForAsyncRunCompleted_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ThreadModeDelegateForAsyncRunCompleted_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * If SynchronousMode is Asynchronous, this variable will define whether the callback delegate is called from the game thread (highly\n\x09 * recommended) or from any available thread (not fully thread safe).\n\x09 * - If this variable is set to ENeuralThreadMode::GameThread, the FOnAsyncRunCompleted delegate will be triggered from the main thread only.\n\x09 * - If this variable is set to ENeuralThreadMode::AnyThread, the FOnAsyncRunCompleted delegate could be triggered from any thread.\n\x09 * @see SynchronousMode for more details.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralNetwork.h" },
		{ "ToolTip", "If SynchronousMode is Asynchronous, this variable will define whether the callback delegate is called from the game thread (highly\nrecommended) or from any available thread (not fully thread safe).\n- If this variable is set to ENeuralThreadMode::GameThread, the FOnAsyncRunCompleted delegate will be triggered from the main thread only.\n- If this variable is set to ENeuralThreadMode::AnyThread, the FOnAsyncRunCompleted delegate could be triggered from any thread.\n@see SynchronousMode for more details." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ThreadModeDelegateForAsyncRunCompleted = { "ThreadModeDelegateForAsyncRunCompleted", nullptr, (EPropertyFlags)0x0020080000002001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralNetwork, ThreadModeDelegateForAsyncRunCompleted), Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode, METADATA_PARAMS(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ThreadModeDelegateForAsyncRunCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ThreadModeDelegateForAsyncRunCompleted_MetaData)) }; // 4214282789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ModelFullFilePath_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * Original model file path from which this UNeuralNetwork was loaded from.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralNetwork.h" },
		{ "ToolTip", "Original model file path from which this UNeuralNetwork was loaded from." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ModelFullFilePath = { "ModelFullFilePath", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralNetwork, ModelFullFilePath), METADATA_PARAMS(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ModelFullFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ModelFullFilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_bIsLoaded_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * Whether this UNeuralNetwork instance has loaded a valid network model already, i.e., whether Load() was called and returned true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralNetwork.h" },
		{ "ToolTip", "Whether this UNeuralNetwork instance has loaded a valid network model already, i.e., whether Load() was called and returned true." },
	};
#endif
	void Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_bIsLoaded_SetBit(void* Obj)
	{
		((UNeuralNetwork*)Obj)->bIsLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_bIsLoaded = { "bIsLoaded", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNeuralNetwork), &Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_bIsLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_bIsLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_bIsLoaded_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ModelReadFromFileInBytes_Inner = { "ModelReadFromFileInBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ModelReadFromFileInBytes_MetaData[] = {
		{ "Comment", "/**\n\x09 * A buffer of memory representing the ONNX model. It is equivalent to the serialization of the ONNX file.\n\x09 * During Load(InModelFilePath), the ONNX file is read and stored as this buffer of raw bytes (TArray<uint8>).\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralNetwork.h" },
		{ "ToolTip", "A buffer of memory representing the ONNX model. It is equivalent to the serialization of the ONNX file.\nDuring Load(InModelFilePath), the ONNX file is read and stored as this buffer of raw bytes (TArray<uint8>)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ModelReadFromFileInBytes = { "ModelReadFromFileInBytes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralNetwork, ModelReadFromFileInBytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ModelReadFromFileInBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ModelReadFromFileInBytes_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_AreInputTensorSizesVariable_Inner = { "AreInputTensorSizesVariable", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_AreInputTensorSizesVariable_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * Whether some of the FNeuralTensor of InputTensor have flexible/variable dimensions. E.g., this is useful for variable batch size.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuralNetwork.h" },
		{ "ToolTip", "Whether some of the FNeuralTensor of InputTensor have flexible/variable dimensions. E.g., this is useful for variable batch size." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_AreInputTensorSizesVariable = { "AreInputTensorSizesVariable", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralNetwork, AreInputTensorSizesVariable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_AreInputTensorSizesVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_AreInputTensorSizesVariable_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Comment", "/** Importing data and options used for loading the network. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NeuralNetwork.h" },
		{ "ToolTip", "Importing data and options used for loading the network." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0046000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralNetwork, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeuralNetwork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_DeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_DeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_InputDeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_InputDeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_OutputDeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_OutputDeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_SynchronousMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_SynchronousMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ThreadModeDelegateForAsyncRunCompleted_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ThreadModeDelegateForAsyncRunCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ModelFullFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_bIsLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ModelReadFromFileInBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_ModelReadFromFileInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_AreInputTensorSizesVariable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_AreInputTensorSizesVariable,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralNetwork_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralNetwork_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralNetwork>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralNetwork_Statics::ClassParams = {
		&UNeuralNetwork::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNeuralNetwork_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetwork_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeuralNetwork_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetwork_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralNetwork()
	{
		if (!Z_Registration_Info_UClass_UNeuralNetwork.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralNetwork.OuterSingleton, Z_Construct_UClass_UNeuralNetwork_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralNetwork.OuterSingleton;
	}
	template<> NEURALNETWORKINFERENCE_API UClass* StaticClass<UNeuralNetwork>()
	{
		return UNeuralNetwork::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralNetwork);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNeuralNetwork)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralNetwork_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralNetwork_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralNetwork, UNeuralNetwork::StaticClass, TEXT("UNeuralNetwork"), &Z_Registration_Info_UClass_UNeuralNetwork, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralNetwork), 4125599578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralNetwork_h_1515882327(TEXT("/Script/NeuralNetworkInference"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralNetwork_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralNetwork_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
