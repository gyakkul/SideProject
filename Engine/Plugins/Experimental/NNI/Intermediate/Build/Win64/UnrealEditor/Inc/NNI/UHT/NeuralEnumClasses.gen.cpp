// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralNetworkInference/Public/NeuralEnumClasses.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralEnumClasses() {}
// Cross Module References
	NEURALNETWORKINFERENCE_API UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType();
	NEURALNETWORKINFERENCE_API UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType();
	NEURALNETWORKINFERENCE_API UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode();
	NEURALNETWORKINFERENCE_API UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType();
	NEURALNETWORKINFERENCE_API UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode();
	UPackage* Z_Construct_UPackage__Script_NeuralNetworkInference();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENeuralDataType;
	static UEnum* ENeuralDataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENeuralDataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENeuralDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType, (UObject*)Z_Construct_UPackage__Script_NeuralNetworkInference(), TEXT("ENeuralDataType"));
		}
		return Z_Registration_Info_UEnum_ENeuralDataType.OuterSingleton;
	}
	template<> NEURALNETWORKINFERENCE_API UEnum* StaticEnum<ENeuralDataType>()
	{
		return ENeuralDataType_StaticEnum();
	}
	struct Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType_Statics::Enumerators[] = {
		{ "ENeuralDataType::Float", (int64)ENeuralDataType::Float },
		{ "ENeuralDataType::Int32", (int64)ENeuralDataType::Int32 },
		{ "ENeuralDataType::Int64", (int64)ENeuralDataType::Int64 },
		{ "ENeuralDataType::UInt32", (int64)ENeuralDataType::UInt32 },
		{ "ENeuralDataType::UInt64", (int64)ENeuralDataType::UInt64 },
		{ "ENeuralDataType::None", (int64)ENeuralDataType::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * It defines the data type (e.g., float, double, int32).\n */" },
		{ "Float.Comment", "/** 32-bit floating number. */" },
		{ "Float.Name", "ENeuralDataType::Float" },
		{ "Float.ToolTip", "32-bit floating number." },
		{ "Int32.Comment", "/** 32-bit signed integer. */" },
		{ "Int32.Name", "ENeuralDataType::Int32" },
		{ "Int32.ToolTip", "32-bit signed integer." },
		{ "Int64.Comment", "/** 64-bit signed integer. */" },
		{ "Int64.Name", "ENeuralDataType::Int64" },
		{ "Int64.ToolTip", "64-bit signed integer." },
		{ "ModuleRelativePath", "Public/NeuralEnumClasses.h" },
		{ "None.Comment", "/** To be used in special cases, e.g., if the data type is unknown yet. */" },
		{ "None.Name", "ENeuralDataType::None" },
		{ "None.ToolTip", "To be used in special cases, e.g., if the data type is unknown yet." },
		{ "ToolTip", "It defines the data type (e.g., float, double, int32)." },
		{ "UInt32.Comment", "/** 32-bit unsigned integer. */" },
		{ "UInt32.Name", "ENeuralDataType::UInt32" },
		{ "UInt32.ToolTip", "32-bit unsigned integer." },
		{ "UInt64.Comment", "/** 64-bit unsigned integer. */" },
		{ "UInt64.Name", "ENeuralDataType::UInt64" },
		{ "UInt64.ToolTip", "64-bit unsigned integer." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NeuralNetworkInference,
		nullptr,
		"ENeuralDataType",
		"ENeuralDataType",
		Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType()
	{
		if (!Z_Registration_Info_UEnum_ENeuralDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENeuralDataType.InnerSingleton, Z_Construct_UEnum_NeuralNetworkInference_ENeuralDataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENeuralDataType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENeuralDeviceType;
	static UEnum* ENeuralDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENeuralDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENeuralDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType, (UObject*)Z_Construct_UPackage__Script_NeuralNetworkInference(), TEXT("ENeuralDeviceType"));
		}
		return Z_Registration_Info_UEnum_ENeuralDeviceType.OuterSingleton;
	}
	template<> NEURALNETWORKINFERENCE_API UEnum* StaticEnum<ENeuralDeviceType>()
	{
		return ENeuralDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType_Statics::Enumerators[] = {
		{ "ENeuralDeviceType::CPU", (int64)ENeuralDeviceType::CPU },
		{ "ENeuralDeviceType::GPU", (int64)ENeuralDeviceType::GPU },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * It defines in which device (CPU, GPU) the desired operation (e.g., the neural network inference) is run.\n */" },
		{ "CPU.Comment", "/** The operation will occur on the CPU. */" },
		{ "CPU.Name", "ENeuralDeviceType::CPU" },
		{ "CPU.ToolTip", "The operation will occur on the CPU." },
		{ "GPU.Comment", "/** The operation will occur on the GPU. */" },
		{ "GPU.Name", "ENeuralDeviceType::GPU" },
		{ "GPU.ToolTip", "The operation will occur on the GPU." },
		{ "ModuleRelativePath", "Public/NeuralEnumClasses.h" },
		{ "ToolTip", "It defines in which device (CPU, GPU) the desired operation (e.g., the neural network inference) is run." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NeuralNetworkInference,
		nullptr,
		"ENeuralDeviceType",
		"ENeuralDeviceType",
		Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType()
	{
		if (!Z_Registration_Info_UEnum_ENeuralDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENeuralDeviceType.InnerSingleton, Z_Construct_UEnum_NeuralNetworkInference_ENeuralDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENeuralDeviceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENeuralSynchronousMode;
	static UEnum* ENeuralSynchronousMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENeuralSynchronousMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENeuralSynchronousMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode, (UObject*)Z_Construct_UPackage__Script_NeuralNetworkInference(), TEXT("ENeuralSynchronousMode"));
		}
		return Z_Registration_Info_UEnum_ENeuralSynchronousMode.OuterSingleton;
	}
	template<> NEURALNETWORKINFERENCE_API UEnum* StaticEnum<ENeuralSynchronousMode>()
	{
		return ENeuralSynchronousMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode_Statics::Enumerators[] = {
		{ "ENeuralSynchronousMode::Synchronous", (int64)ENeuralSynchronousMode::Synchronous },
		{ "ENeuralSynchronousMode::Asynchronous", (int64)ENeuralSynchronousMode::Asynchronous },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode_Statics::Enum_MetaDataParams[] = {
		{ "Asynchronous.Comment", "/**\n\x09 * More complex but potentially more efficient.\n\x09 * The operation will initialize a compute request on a background thread and return before its completion, not blocking the calling thread that\n\x09 * called it.\n\x09 * The user should register to a delegate which will notify them when the operation has finished asynchronously\n\x09 * (e.g., UNeuralNetwork::GetOnAsyncRunCompletedDelegate() for asynchronous UNeuralNetwork::Run()).\n\x09 *\n\x09 * Very important: It takes ~1 millisecond to start the background thread. If your operation (e.g., your network inference time) runs\n\x09 * synchronously faster than 1-2 milliseconds, using asynchronous is not recommended because it'd slow down both the main and background threads.\n\x09 */" },
		{ "Asynchronous.Name", "ENeuralSynchronousMode::Asynchronous" },
		{ "Asynchronous.ToolTip", "More complex but potentially more efficient.\nThe operation will initialize a compute request on a background thread and return before its completion, not blocking the calling thread that\ncalled it.\nThe user should register to a delegate which will notify them when the operation has finished asynchronously\n(e.g., UNeuralNetwork::GetOnAsyncRunCompletedDelegate() for asynchronous UNeuralNetwork::Run()).\n\nVery important: It takes ~1 millisecond to start the background thread. If your operation (e.g., your network inference time) runs\nsynchronously faster than 1-2 milliseconds, using asynchronous is not recommended because it'd slow down both the main and background threads." },
		{ "Comment", "/**\n * Whether the operation (e.g., UNeuralNetwork::Run()) will run in the calling thread (Synchronous) or in a background thread (Asynchronous).\n */" },
		{ "ModuleRelativePath", "Public/NeuralEnumClasses.h" },
		{ "Synchronous.Comment", "/**\n\x09 * Safer and simpler to use.\n\x09 * The operation will run in the calling thread thus blocking that thread until completed.\n\x09 */" },
		{ "Synchronous.Name", "ENeuralSynchronousMode::Synchronous" },
		{ "Synchronous.ToolTip", "Safer and simpler to use.\nThe operation will run in the calling thread thus blocking that thread until completed." },
		{ "ToolTip", "Whether the operation (e.g., UNeuralNetwork::Run()) will run in the calling thread (Synchronous) or in a background thread (Asynchronous)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NeuralNetworkInference,
		nullptr,
		"ENeuralSynchronousMode",
		"ENeuralSynchronousMode",
		Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode()
	{
		if (!Z_Registration_Info_UEnum_ENeuralSynchronousMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENeuralSynchronousMode.InnerSingleton, Z_Construct_UEnum_NeuralNetworkInference_ENeuralSynchronousMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENeuralSynchronousMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENeuralTensorType;
	static UEnum* ENeuralTensorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENeuralTensorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENeuralTensorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType, (UObject*)Z_Construct_UPackage__Script_NeuralNetworkInference(), TEXT("ENeuralTensorType"));
		}
		return Z_Registration_Info_UEnum_ENeuralTensorType.OuterSingleton;
	}
	template<> NEURALNETWORKINFERENCE_API UEnum* StaticEnum<ENeuralTensorType>()
	{
		return ENeuralTensorType_StaticEnum();
	}
	struct Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType_Statics::Enumerators[] = {
		{ "ENeuralTensorType::Generic", (int64)ENeuralTensorType::Generic },
		{ "ENeuralTensorType::Input", (int64)ENeuralTensorType::Input },
		{ "ENeuralTensorType::IntermediateNotInitialized", (int64)ENeuralTensorType::IntermediateNotInitialized },
		{ "ENeuralTensorType::IntermediateInitialized", (int64)ENeuralTensorType::IntermediateInitialized },
		{ "ENeuralTensorType::Output", (int64)ENeuralTensorType::Output },
		{ "ENeuralTensorType::Weight", (int64)ENeuralTensorType::Weight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * The type of the neural tensor. E.g., a Weight tensor will be read-only and never modified, an Input tensor will be modified by the user, an\n * IntermediateNotInitialized tensor will change on each frame, etc.\n *\n * Although conceptually this could apply to both the CPU and GPU versions, in practice only the GPU performance is affected by this setting so far.\n */" },
		{ "Generic.Comment", "/**\n\x09 * Safe and generic tensor that works in every situation (e.g., ReadWrite, not volatile). However, it might not be the most efficient one for\n\x09 * most cases.\n\x09 */" },
		{ "Generic.Name", "ENeuralTensorType::Generic" },
		{ "Generic.ToolTip", "Safe and generic tensor that works in every situation (e.g., ReadWrite, not volatile). However, it might not be the most efficient one for\nmost cases." },
		{ "Input.Comment", "/**\n\x09 * Input tensor of a neural network, usually copied from the CPU and usually ReadOnly (but might be modified by in-place operators like ReLU).\n\x09 */" },
		{ "Input.Name", "ENeuralTensorType::Input" },
		{ "Input.ToolTip", "Input tensor of a neural network, usually copied from the CPU and usually ReadOnly (but might be modified by in-place operators like ReLU)." },
		{ "IntermediateInitialized.Comment", "/**\n\x09 * Intermediate tensor that is initialized with CPU data (e.g., XWithZeros in FConvTranpose). Copied from CPU.\n\x09 */" },
		{ "IntermediateInitialized.Name", "ENeuralTensorType::IntermediateInitialized" },
		{ "IntermediateInitialized.ToolTip", "Intermediate tensor that is initialized with CPU data (e.g., XWithZeros in FConvTranpose). Copied from CPU." },
		{ "IntermediateNotInitialized.Comment", "/**\n\x09 * Intermediate tensor of a neural network (output of at least a layer and input of at least some other layer). Not copied from CPU, ReadWrite,\n\x09 * and transient.\n\x09 */" },
		{ "IntermediateNotInitialized.Name", "ENeuralTensorType::IntermediateNotInitialized" },
		{ "IntermediateNotInitialized.ToolTip", "Intermediate tensor of a neural network (output of at least a layer and input of at least some other layer). Not copied from CPU, ReadWrite,\nand transient." },
		{ "ModuleRelativePath", "Public/NeuralEnumClasses.h" },
		{ "Output.Comment", "/**\n\x09 * Output tensor of a neural network. Not copied from CPU and ReadWrite.\n\x09 */" },
		{ "Output.Name", "ENeuralTensorType::Output" },
		{ "Output.ToolTip", "Output tensor of a neural network. Not copied from CPU and ReadWrite." },
		{ "ToolTip", "The type of the neural tensor. E.g., a Weight tensor will be read-only and never modified, an Input tensor will be modified by the user, an\nIntermediateNotInitialized tensor will change on each frame, etc.\n\nAlthough conceptually this could apply to both the CPU and GPU versions, in practice only the GPU performance is affected by this setting so far." },
		{ "Weight.Comment", "/**\n\x09 * Weights of a particular operator/layer. Copied from CPU, ReadOnly, and initialized from CPU memory.\n\x09 */" },
		{ "Weight.Name", "ENeuralTensorType::Weight" },
		{ "Weight.ToolTip", "Weights of a particular operator/layer. Copied from CPU, ReadOnly, and initialized from CPU memory." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NeuralNetworkInference,
		nullptr,
		"ENeuralTensorType",
		"ENeuralTensorType",
		Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType()
	{
		if (!Z_Registration_Info_UEnum_ENeuralTensorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENeuralTensorType.InnerSingleton, Z_Construct_UEnum_NeuralNetworkInference_ENeuralTensorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENeuralTensorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENeuralThreadMode;
	static UEnum* ENeuralThreadMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENeuralThreadMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENeuralThreadMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode, (UObject*)Z_Construct_UPackage__Script_NeuralNetworkInference(), TEXT("ENeuralThreadMode"));
		}
		return Z_Registration_Info_UEnum_ENeuralThreadMode.OuterSingleton;
	}
	template<> NEURALNETWORKINFERENCE_API UEnum* StaticEnum<ENeuralThreadMode>()
	{
		return ENeuralThreadMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode_Statics::Enumerators[] = {
		{ "ENeuralThreadMode::GameThread", (int64)ENeuralThreadMode::GameThread },
		{ "ENeuralThreadMode::AnyThread", (int64)ENeuralThreadMode::AnyThread },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode_Statics::Enum_MetaDataParams[] = {
		{ "AnyThread.Comment", "/**\n\x09 * Not recommended, use at your own risk (potentially more efficient than GameThread but not UE-safe in all cases).\n\x09 * The callback functions tied to the delegate will be called from the same thread at which the operation was asynchronously computed, thus this\n\x09 * could happen from any thread.\n\x09 *\n\x09 * Main issue: U-classes (e.g., UNeuralNetwork) should not be used from non-game threads because it is not safe and could lead to issues/crashes\n\x09 * if not properly handled by the user.\n\x09 * E.g., the GC does not work from non-game threads so it might crash if the editor/UE is closed while accessing UNeuralNetwork information from\n\x09 * the callback function.\n\x09 *\n\x09 * Thus \"AnyThread\" is only safe if you have guarantees that your case is fully U-class safe. E.g., the program will not be terminated while\n\x09 * calling the callback function.\n\x09 */" },
		{ "AnyThread.Name", "ENeuralThreadMode::AnyThread" },
		{ "AnyThread.ToolTip", "Not recommended, use at your own risk (potentially more efficient than GameThread but not UE-safe in all cases).\nThe callback functions tied to the delegate will be called from the same thread at which the operation was asynchronously computed, thus this\ncould happen from any thread.\n\nMain issue: U-classes (e.g., UNeuralNetwork) should not be used from non-game threads because it is not safe and could lead to issues/crashes\nif not properly handled by the user.\nE.g., the GC does not work from non-game threads so it might crash if the editor/UE is closed while accessing UNeuralNetwork information from\nthe callback function.\n\nThus \"AnyThread\" is only safe if you have guarantees that your case is fully U-class safe. E.g., the program will not be terminated while\ncalling the callback function." },
		{ "Comment", "/**\n * After an asynchronous operation has finished, whether the callback functions tied to the delegate will be called from the game/main thread (highly\n * recommended) or from any thread (not fully Unreal safe).\n * This enum class is only useful for the case of ENeuralSynchronousMode::Asynchronous.\n */" },
		{ "GameThread.Comment", "/**\n\x09 * Highly recommended and default value. The callback functions tied to the delegate will be called from the game/main thread.\n\x09 */" },
		{ "GameThread.Name", "ENeuralThreadMode::GameThread" },
		{ "GameThread.ToolTip", "Highly recommended and default value. The callback functions tied to the delegate will be called from the game/main thread." },
		{ "ModuleRelativePath", "Public/NeuralEnumClasses.h" },
		{ "ToolTip", "After an asynchronous operation has finished, whether the callback functions tied to the delegate will be called from the game/main thread (highly\nrecommended) or from any thread (not fully Unreal safe).\nThis enum class is only useful for the case of ENeuralSynchronousMode::Asynchronous." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NeuralNetworkInference,
		nullptr,
		"ENeuralThreadMode",
		"ENeuralThreadMode",
		Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode()
	{
		if (!Z_Registration_Info_UEnum_ENeuralThreadMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENeuralThreadMode.InnerSingleton, Z_Construct_UEnum_NeuralNetworkInference_ENeuralThreadMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENeuralThreadMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralEnumClasses_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralEnumClasses_h_Statics::EnumInfo[] = {
		{ ENeuralDataType_StaticEnum, TEXT("ENeuralDataType"), &Z_Registration_Info_UEnum_ENeuralDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2487208935U) },
		{ ENeuralDeviceType_StaticEnum, TEXT("ENeuralDeviceType"), &Z_Registration_Info_UEnum_ENeuralDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 604231063U) },
		{ ENeuralSynchronousMode_StaticEnum, TEXT("ENeuralSynchronousMode"), &Z_Registration_Info_UEnum_ENeuralSynchronousMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3048383411U) },
		{ ENeuralTensorType_StaticEnum, TEXT("ENeuralTensorType"), &Z_Registration_Info_UEnum_ENeuralTensorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2013422835U) },
		{ ENeuralThreadMode_StaticEnum, TEXT("ENeuralThreadMode"), &Z_Registration_Info_UEnum_ENeuralThreadMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4214282789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralEnumClasses_h_544889745(TEXT("/Script/NeuralNetworkInference"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralEnumClasses_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInference_Public_NeuralEnumClasses_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
