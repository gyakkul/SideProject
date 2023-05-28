// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/NNECoreRuntimeFormat.h"
#include "../Internal/NNECoreAttributeValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNECoreRuntimeFormat() {}
// Cross Module References
	NNECORE_API UEnum* Z_Construct_UEnum_NNECore_ENNEFormatTensorType();
	NNECORE_API UEnum* Z_Construct_UEnum_NNECore_ENNEInferenceFormat();
	NNECORE_API UEnum* Z_Construct_UEnum_NNECore_ENNETensorDataType();
	NNECORE_API UScriptStruct* Z_Construct_UScriptStruct_FNNEAttributeValue();
	NNECORE_API UScriptStruct* Z_Construct_UScriptStruct_FNNEFormatAttributeDesc();
	NNECORE_API UScriptStruct* Z_Construct_UScriptStruct_FNNEFormatOperatorDesc();
	NNECORE_API UScriptStruct* Z_Construct_UScriptStruct_FNNEFormatTensorDesc();
	NNECORE_API UScriptStruct* Z_Construct_UScriptStruct_FNNEModelRaw();
	NNECORE_API UScriptStruct* Z_Construct_UScriptStruct_FNNERuntimeFormat();
	UPackage* Z_Construct_UPackage__Script_NNECore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENNEFormatTensorType;
	static UEnum* ENNEFormatTensorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENNEFormatTensorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENNEFormatTensorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NNECore_ENNEFormatTensorType, (UObject*)Z_Construct_UPackage__Script_NNECore(), TEXT("ENNEFormatTensorType"));
		}
		return Z_Registration_Info_UEnum_ENNEFormatTensorType.OuterSingleton;
	}
	template<> NNECORE_API UEnum* StaticEnum<ENNEFormatTensorType>()
	{
		return ENNEFormatTensorType_StaticEnum();
	}
	struct Z_Construct_UEnum_NNECore_ENNEFormatTensorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NNECore_ENNEFormatTensorType_Statics::Enumerators[] = {
		{ "ENNEFormatTensorType::None", (int64)ENNEFormatTensorType::None },
		{ "ENNEFormatTensorType::Input", (int64)ENNEFormatTensorType::Input },
		{ "ENNEFormatTensorType::Output", (int64)ENNEFormatTensorType::Output },
		{ "ENNEFormatTensorType::Intermediate", (int64)ENNEFormatTensorType::Intermediate },
		{ "ENNEFormatTensorType::Initializer", (int64)ENNEFormatTensorType::Initializer },
		{ "ENNEFormatTensorType::NUM", (int64)ENNEFormatTensorType::NUM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NNECore_ENNEFormatTensorType_Statics::Enum_MetaDataParams[] = {
		{ "Initializer.Name", "ENNEFormatTensorType::Initializer" },
		{ "Input.Name", "ENNEFormatTensorType::Input" },
		{ "Intermediate.Name", "ENNEFormatTensorType::Intermediate" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
		{ "None.Name", "ENNEFormatTensorType::None" },
		{ "NUM.Name", "ENNEFormatTensorType::NUM" },
		{ "Output.Name", "ENNEFormatTensorType::Output" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NNECore_ENNEFormatTensorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NNECore,
		nullptr,
		"ENNEFormatTensorType",
		"ENNEFormatTensorType",
		Z_Construct_UEnum_NNECore_ENNEFormatTensorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NNECore_ENNEFormatTensorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NNECore_ENNEFormatTensorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NNECore_ENNEFormatTensorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NNECore_ENNEFormatTensorType()
	{
		if (!Z_Registration_Info_UEnum_ENNEFormatTensorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENNEFormatTensorType.InnerSingleton, Z_Construct_UEnum_NNECore_ENNEFormatTensorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENNEFormatTensorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENNEInferenceFormat;
	static UEnum* ENNEInferenceFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENNEInferenceFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENNEInferenceFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NNECore_ENNEInferenceFormat, (UObject*)Z_Construct_UPackage__Script_NNECore(), TEXT("ENNEInferenceFormat"));
		}
		return Z_Registration_Info_UEnum_ENNEInferenceFormat.OuterSingleton;
	}
	template<> NNECORE_API UEnum* StaticEnum<ENNEInferenceFormat>()
	{
		return ENNEInferenceFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_NNECore_ENNEInferenceFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NNECore_ENNEInferenceFormat_Statics::Enumerators[] = {
		{ "ENNEInferenceFormat::Invalid", (int64)ENNEInferenceFormat::Invalid },
		{ "ENNEInferenceFormat::ONNX", (int64)ENNEInferenceFormat::ONNX },
		{ "ENNEInferenceFormat::ORT", (int64)ENNEInferenceFormat::ORT },
		{ "ENNEInferenceFormat::NNERT", (int64)ENNEInferenceFormat::NNERT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NNECore_ENNEInferenceFormat_Statics::Enum_MetaDataParams[] = {
		{ "Invalid.Name", "ENNEInferenceFormat::Invalid" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
		{ "NNERT.Comment", "//!< ONNX Runtime (only for CPU)\n" },
		{ "NNERT.Name", "ENNEInferenceFormat::NNERT" },
		{ "NNERT.ToolTip", "!< ONNX Runtime (only for CPU)" },
		{ "ONNX.Name", "ENNEInferenceFormat::ONNX" },
		{ "ORT.Comment", "//!< ONNX Open Neural Network Exchange\n" },
		{ "ORT.Name", "ENNEInferenceFormat::ORT" },
		{ "ORT.ToolTip", "!< ONNX Open Neural Network Exchange" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NNECore_ENNEInferenceFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NNECore,
		nullptr,
		"ENNEInferenceFormat",
		"ENNEInferenceFormat",
		Z_Construct_UEnum_NNECore_ENNEInferenceFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NNECore_ENNEInferenceFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NNECore_ENNEInferenceFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NNECore_ENNEInferenceFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NNECore_ENNEInferenceFormat()
	{
		if (!Z_Registration_Info_UEnum_ENNEInferenceFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENNEInferenceFormat.InnerSingleton, Z_Construct_UEnum_NNECore_ENNEInferenceFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENNEInferenceFormat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NNEModelRaw;
class UScriptStruct* FNNEModelRaw::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NNEModelRaw.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NNEModelRaw.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNNEModelRaw, (UObject*)Z_Construct_UPackage__Script_NNECore(), TEXT("NNEModelRaw"));
	}
	return Z_Registration_Info_UScriptStruct_NNEModelRaw.OuterSingleton;
}
template<> NNECORE_API UScriptStruct* StaticStruct<FNNEModelRaw>()
{
	return FNNEModelRaw::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNNEModelRaw_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEModelRaw_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNNEModelRaw>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEModelRaw, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEModelRaw, Format), Z_Construct_UEnum_NNECore_ENNEInferenceFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Format_MetaData)) }; // 1158348885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNNEModelRaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Format_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewProp_Format,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNNEModelRaw_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NNECore,
		nullptr,
		&NewStructOps,
		"NNEModelRaw",
		sizeof(FNNEModelRaw),
		alignof(FNNEModelRaw),
		Z_Construct_UScriptStruct_FNNEModelRaw_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEModelRaw_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEModelRaw_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEModelRaw_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNNEModelRaw()
	{
		if (!Z_Registration_Info_UScriptStruct_NNEModelRaw.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NNEModelRaw.InnerSingleton, Z_Construct_UScriptStruct_FNNEModelRaw_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NNEModelRaw.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NNEFormatAttributeDesc;
class UScriptStruct* FNNEFormatAttributeDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NNEFormatAttributeDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NNEFormatAttributeDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNNEFormatAttributeDesc, (UObject*)Z_Construct_UPackage__Script_NNECore(), TEXT("NNEFormatAttributeDesc"));
	}
	return Z_Registration_Info_UScriptStruct_NNEFormatAttributeDesc.OuterSingleton;
}
template<> NNECORE_API UScriptStruct* StaticStruct<FNNEFormatAttributeDesc>()
{
	return FNNEFormatAttributeDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Required by LoadModel() when loading operators in HLSL and DirectML runtime\n" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
		{ "ToolTip", "Required by LoadModel() when loading operators in HLSL and DirectML runtime" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNNEFormatAttributeDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEFormatAttributeDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEFormatAttributeDesc, Value), Z_Construct_UScriptStruct_FNNEAttributeValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::NewProp_Value_MetaData)) }; // 3751955679
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NNECore,
		nullptr,
		&NewStructOps,
		"NNEFormatAttributeDesc",
		sizeof(FNNEFormatAttributeDesc),
		alignof(FNNEFormatAttributeDesc),
		Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNNEFormatAttributeDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_NNEFormatAttributeDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NNEFormatAttributeDesc.InnerSingleton, Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NNEFormatAttributeDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NNEFormatOperatorDesc;
class UScriptStruct* FNNEFormatOperatorDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NNEFormatOperatorDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NNEFormatOperatorDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNNEFormatOperatorDesc, (UObject*)Z_Construct_UPackage__Script_NNECore(), TEXT("NNEFormatOperatorDesc"));
	}
	return Z_Registration_Info_UScriptStruct_NNEFormatOperatorDesc.OuterSingleton;
}
template<> NNECORE_API UScriptStruct* StaticStruct<FNNEFormatOperatorDesc>()
{
	return FNNEFormatOperatorDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypeName;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_InTensors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTensors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InTensors;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutTensors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutTensors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTensors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNNEFormatOperatorDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_TypeName_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEFormatOperatorDesc, TypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_TypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_TypeName_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_InTensors_Inner = { "InTensors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_InTensors_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "//!< For example \"Relu\"\n" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
		{ "ToolTip", "!< For example \"Relu\"" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_InTensors = { "InTensors", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEFormatOperatorDesc, InTensors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_InTensors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_InTensors_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_OutTensors_Inner = { "OutTensors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_OutTensors_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_OutTensors = { "OutTensors", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEFormatOperatorDesc, OutTensors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_OutTensors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_OutTensors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNNEFormatAttributeDesc, METADATA_PARAMS(nullptr, 0) }; // 785179406
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEFormatOperatorDesc, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_Attributes_MetaData)) }; // 785179406
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_TypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_InTensors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_InTensors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_OutTensors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_OutTensors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewProp_Attributes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NNECore,
		nullptr,
		&NewStructOps,
		"NNEFormatOperatorDesc",
		sizeof(FNNEFormatOperatorDesc),
		alignof(FNNEFormatOperatorDesc),
		Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNNEFormatOperatorDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_NNEFormatOperatorDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NNEFormatOperatorDesc.InnerSingleton, Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NNEFormatOperatorDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NNEFormatTensorDesc;
class UScriptStruct* FNNEFormatTensorDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NNEFormatTensorDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NNEFormatTensorDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNNEFormatTensorDesc, (UObject*)Z_Construct_UPackage__Script_NNECore(), TEXT("NNEFormatTensorDesc"));
	}
	return Z_Registration_Info_UScriptStruct_NNEFormatTensorDesc.OuterSingleton;
}
template<> NNECORE_API UScriptStruct* StaticStruct<FNNEFormatTensorDesc>()
{
	return FNNEFormatTensorDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Shape_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSize_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_DataSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_DataOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNNEFormatTensorDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEFormatTensorDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEFormatTensorDesc, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Shape_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEFormatTensorDesc, Type), Z_Construct_UEnum_NNECore_ENNEFormatTensorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Type_MetaData)) }; // 2562544629
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEFormatTensorDesc, DataType), Z_Construct_UEnum_NNECore_ENNETensorDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataType_MetaData)) }; // 2261105347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataSize_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataSize = { "DataSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEFormatTensorDesc, DataSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataOffset_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataOffset = { "DataOffset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNEFormatTensorDesc, DataOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Shape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewProp_DataOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NNECore,
		nullptr,
		&NewStructOps,
		"NNEFormatTensorDesc",
		sizeof(FNNEFormatTensorDesc),
		alignof(FNNEFormatTensorDesc),
		Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNNEFormatTensorDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_NNEFormatTensorDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NNEFormatTensorDesc.InnerSingleton, Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NNEFormatTensorDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NNERuntimeFormat;
class UScriptStruct* FNNERuntimeFormat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NNERuntimeFormat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NNERuntimeFormat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNNERuntimeFormat, (UObject*)Z_Construct_UPackage__Script_NNECore(), TEXT("NNERuntimeFormat"));
	}
	return Z_Registration_Info_UScriptStruct_NNERuntimeFormat.OuterSingleton;
}
template<> NNECORE_API UScriptStruct* StaticStruct<FNNERuntimeFormat>()
{
	return FNNERuntimeFormat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tensors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tensors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tensors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Operators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Operators;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TensorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TensorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TensorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/// NNE Runtime format\n" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
		{ "ToolTip", "NNE Runtime format" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNNERuntimeFormat>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Tensors_Inner = { "Tensors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNNEFormatTensorDesc, METADATA_PARAMS(nullptr, 0) }; // 695170358
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Tensors_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Tensors = { "Tensors", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNERuntimeFormat, Tensors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Tensors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Tensors_MetaData)) }; // 695170358
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Operators_Inner = { "Operators", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNNEFormatOperatorDesc, METADATA_PARAMS(nullptr, 0) }; // 4074593772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Operators_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Operators = { "Operators", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNERuntimeFormat, Operators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Operators_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Operators_MetaData)) }; // 4074593772
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_TensorData_Inner = { "TensorData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_TensorData_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/NNECoreRuntimeFormat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_TensorData = { "TensorData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNNERuntimeFormat, TensorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_TensorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_TensorData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Tensors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Tensors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Operators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_Operators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_TensorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewProp_TensorData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NNECore,
		nullptr,
		&NewStructOps,
		"NNERuntimeFormat",
		sizeof(FNNERuntimeFormat),
		alignof(FNNERuntimeFormat),
		Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNNERuntimeFormat()
	{
		if (!Z_Registration_Info_UScriptStruct_NNERuntimeFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NNERuntimeFormat.InnerSingleton, Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NNERuntimeFormat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h_Statics::EnumInfo[] = {
		{ ENNEFormatTensorType_StaticEnum, TEXT("ENNEFormatTensorType"), &Z_Registration_Info_UEnum_ENNEFormatTensorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2562544629U) },
		{ ENNEInferenceFormat_StaticEnum, TEXT("ENNEInferenceFormat"), &Z_Registration_Info_UEnum_ENNEInferenceFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1158348885U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h_Statics::ScriptStructInfo[] = {
		{ FNNEModelRaw::StaticStruct, Z_Construct_UScriptStruct_FNNEModelRaw_Statics::NewStructOps, TEXT("NNEModelRaw"), &Z_Registration_Info_UScriptStruct_NNEModelRaw, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNNEModelRaw), 3591237677U) },
		{ FNNEFormatAttributeDesc::StaticStruct, Z_Construct_UScriptStruct_FNNEFormatAttributeDesc_Statics::NewStructOps, TEXT("NNEFormatAttributeDesc"), &Z_Registration_Info_UScriptStruct_NNEFormatAttributeDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNNEFormatAttributeDesc), 785179406U) },
		{ FNNEFormatOperatorDesc::StaticStruct, Z_Construct_UScriptStruct_FNNEFormatOperatorDesc_Statics::NewStructOps, TEXT("NNEFormatOperatorDesc"), &Z_Registration_Info_UScriptStruct_NNEFormatOperatorDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNNEFormatOperatorDesc), 4074593772U) },
		{ FNNEFormatTensorDesc::StaticStruct, Z_Construct_UScriptStruct_FNNEFormatTensorDesc_Statics::NewStructOps, TEXT("NNEFormatTensorDesc"), &Z_Registration_Info_UScriptStruct_NNEFormatTensorDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNNEFormatTensorDesc), 695170358U) },
		{ FNNERuntimeFormat::StaticStruct, Z_Construct_UScriptStruct_FNNERuntimeFormat_Statics::NewStructOps, TEXT("NNERuntimeFormat"), &Z_Registration_Info_UScriptStruct_NNERuntimeFormat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNNERuntimeFormat), 2958080101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h_551793567(TEXT("/Script/NNECore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreRuntimeFormat_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
