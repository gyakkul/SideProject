// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelProto/Internal/ModelProto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelProto() {}
// Cross Module References
	MODELPROTO_API UEnum* Z_Construct_UEnum_ModelProto_EAttributeProtoAttributeType();
	MODELPROTO_API UEnum* Z_Construct_UEnum_ModelProto_ETensorProtoDataLocation();
	MODELPROTO_API UEnum* Z_Construct_UEnum_ModelProto_ETensorProtoDataType();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeProto();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FGraphProto();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FModelProto();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FNodeProto();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FOperatorSetIdProto();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FSparseTensorProto();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FStringStringEntryProto();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FTensorAnnotation();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FTensorProto();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FTensorProtoSegment();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FTensorShapeProto();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FTensorShapeProtoDimension();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FTrainingInfoProto();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FTypeProto();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FTypeProtoMap();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FTypeProtoSequence();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FTypeProtoTensor();
	MODELPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FValueInfoProto();
	UPackage* Z_Construct_UPackage__Script_ModelProto();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttributeProtoAttributeType;
	static UEnum* EAttributeProtoAttributeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttributeProtoAttributeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttributeProtoAttributeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelProto_EAttributeProtoAttributeType, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("EAttributeProtoAttributeType"));
		}
		return Z_Registration_Info_UEnum_EAttributeProtoAttributeType.OuterSingleton;
	}
	template<> MODELPROTO_API UEnum* StaticEnum<EAttributeProtoAttributeType>()
	{
		return EAttributeProtoAttributeType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelProto_EAttributeProtoAttributeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelProto_EAttributeProtoAttributeType_Statics::Enumerators[] = {
		{ "EAttributeProtoAttributeType::UNDEFINED", (int64)EAttributeProtoAttributeType::UNDEFINED },
		{ "EAttributeProtoAttributeType::FLOAT", (int64)EAttributeProtoAttributeType::FLOAT },
		{ "EAttributeProtoAttributeType::INT", (int64)EAttributeProtoAttributeType::INT },
		{ "EAttributeProtoAttributeType::STRING", (int64)EAttributeProtoAttributeType::STRING },
		{ "EAttributeProtoAttributeType::TENSOR", (int64)EAttributeProtoAttributeType::TENSOR },
		{ "EAttributeProtoAttributeType::GRAPH", (int64)EAttributeProtoAttributeType::GRAPH },
		{ "EAttributeProtoAttributeType::SPARSE_TENSOR", (int64)EAttributeProtoAttributeType::SPARSE_TENSOR },
		{ "EAttributeProtoAttributeType::FLOATS", (int64)EAttributeProtoAttributeType::FLOATS },
		{ "EAttributeProtoAttributeType::INTS", (int64)EAttributeProtoAttributeType::INTS },
		{ "EAttributeProtoAttributeType::STRINGS", (int64)EAttributeProtoAttributeType::STRINGS },
		{ "EAttributeProtoAttributeType::TENSORS", (int64)EAttributeProtoAttributeType::TENSORS },
		{ "EAttributeProtoAttributeType::GRAPHS", (int64)EAttributeProtoAttributeType::GRAPHS },
		{ "EAttributeProtoAttributeType::SPARSE_TENSORS", (int64)EAttributeProtoAttributeType::SPARSE_TENSORS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelProto_EAttributeProtoAttributeType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/* Enum classes\n *****************************************************************************/" },
		{ "FLOAT.Name", "EAttributeProtoAttributeType::FLOAT" },
		{ "FLOATS.Name", "EAttributeProtoAttributeType::FLOATS" },
		{ "GRAPH.Name", "EAttributeProtoAttributeType::GRAPH" },
		{ "GRAPHS.Name", "EAttributeProtoAttributeType::GRAPHS" },
		{ "INT.Name", "EAttributeProtoAttributeType::INT" },
		{ "INTS.Name", "EAttributeProtoAttributeType::INTS" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "SPARSE_TENSOR.Name", "EAttributeProtoAttributeType::SPARSE_TENSOR" },
		{ "SPARSE_TENSORS.Name", "EAttributeProtoAttributeType::SPARSE_TENSORS" },
		{ "STRING.Name", "EAttributeProtoAttributeType::STRING" },
		{ "STRINGS.Name", "EAttributeProtoAttributeType::STRINGS" },
		{ "TENSOR.Name", "EAttributeProtoAttributeType::TENSOR" },
		{ "TENSORS.Name", "EAttributeProtoAttributeType::TENSORS" },
		{ "ToolTip", "Enum classes" },
		{ "UNDEFINED.Name", "EAttributeProtoAttributeType::UNDEFINED" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelProto_EAttributeProtoAttributeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		"EAttributeProtoAttributeType",
		"EAttributeProtoAttributeType",
		Z_Construct_UEnum_ModelProto_EAttributeProtoAttributeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelProto_EAttributeProtoAttributeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelProto_EAttributeProtoAttributeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelProto_EAttributeProtoAttributeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelProto_EAttributeProtoAttributeType()
	{
		if (!Z_Registration_Info_UEnum_EAttributeProtoAttributeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttributeProtoAttributeType.InnerSingleton, Z_Construct_UEnum_ModelProto_EAttributeProtoAttributeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttributeProtoAttributeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETensorProtoDataType;
	static UEnum* ETensorProtoDataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETensorProtoDataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETensorProtoDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelProto_ETensorProtoDataType, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("ETensorProtoDataType"));
		}
		return Z_Registration_Info_UEnum_ETensorProtoDataType.OuterSingleton;
	}
	template<> MODELPROTO_API UEnum* StaticEnum<ETensorProtoDataType>()
	{
		return ETensorProtoDataType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelProto_ETensorProtoDataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelProto_ETensorProtoDataType_Statics::Enumerators[] = {
		{ "ETensorProtoDataType::UNDEFINED", (int64)ETensorProtoDataType::UNDEFINED },
		{ "ETensorProtoDataType::FLOAT", (int64)ETensorProtoDataType::FLOAT },
		{ "ETensorProtoDataType::UINT8", (int64)ETensorProtoDataType::UINT8 },
		{ "ETensorProtoDataType::INT8", (int64)ETensorProtoDataType::INT8 },
		{ "ETensorProtoDataType::UINT16", (int64)ETensorProtoDataType::UINT16 },
		{ "ETensorProtoDataType::INT16", (int64)ETensorProtoDataType::INT16 },
		{ "ETensorProtoDataType::INT32", (int64)ETensorProtoDataType::INT32 },
		{ "ETensorProtoDataType::INT64", (int64)ETensorProtoDataType::INT64 },
		{ "ETensorProtoDataType::STRING", (int64)ETensorProtoDataType::STRING },
		{ "ETensorProtoDataType::BOOL", (int64)ETensorProtoDataType::BOOL },
		{ "ETensorProtoDataType::FLOAT16", (int64)ETensorProtoDataType::FLOAT16 },
		{ "ETensorProtoDataType::DOUBLE", (int64)ETensorProtoDataType::DOUBLE },
		{ "ETensorProtoDataType::UINT32", (int64)ETensorProtoDataType::UINT32 },
		{ "ETensorProtoDataType::UINT64", (int64)ETensorProtoDataType::UINT64 },
		{ "ETensorProtoDataType::COMPLEX64", (int64)ETensorProtoDataType::COMPLEX64 },
		{ "ETensorProtoDataType::COMPLEX128", (int64)ETensorProtoDataType::COMPLEX128 },
		{ "ETensorProtoDataType::BFLOAT16", (int64)ETensorProtoDataType::BFLOAT16 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelProto_ETensorProtoDataType_Statics::Enum_MetaDataParams[] = {
		{ "BFLOAT16.Comment", "// Non-IEEE floating-point format based on IEEE754 single-precision\n// floating-point number truncated to 16 bits.\n// This format has 1 sign bit, 8 exponent bits, and 7 mantissa bits.\n" },
		{ "BFLOAT16.Name", "ETensorProtoDataType::BFLOAT16" },
		{ "BFLOAT16.ToolTip", "Non-IEEE floating-point format based on IEEE754 single-precision\nfloating-point number truncated to 16 bits.\nThis format has 1 sign bit, 8 exponent bits, and 7 mantissa bits." },
		{ "BOOL.Comment", "// string\n" },
		{ "BOOL.Name", "ETensorProtoDataType::BOOL" },
		{ "BOOL.ToolTip", "string" },
		{ "COMPLEX128.Comment", "// complex with float32 real and imaginary components\n" },
		{ "COMPLEX128.Name", "ETensorProtoDataType::COMPLEX128" },
		{ "COMPLEX128.ToolTip", "complex with float32 real and imaginary components" },
		{ "COMPLEX64.Name", "ETensorProtoDataType::COMPLEX64" },
		{ "DOUBLE.Name", "ETensorProtoDataType::DOUBLE" },
		{ "FLOAT.Comment", "// Basic types.\n" },
		{ "FLOAT.Name", "ETensorProtoDataType::FLOAT" },
		{ "FLOAT.ToolTip", "Basic types." },
		{ "FLOAT16.Comment", "// IEEE754 half-precision floating-point format (16 bits wide).\n// This format has 1 sign bit, 5 exponent bits, and 10 mantissa bits.\n" },
		{ "FLOAT16.Name", "ETensorProtoDataType::FLOAT16" },
		{ "FLOAT16.ToolTip", "IEEE754 half-precision floating-point format (16 bits wide).\nThis format has 1 sign bit, 5 exponent bits, and 10 mantissa bits." },
		{ "INT16.Comment", "// uint16_t\n" },
		{ "INT16.Name", "ETensorProtoDataType::INT16" },
		{ "INT16.ToolTip", "uint16_t" },
		{ "INT32.Comment", "// int16_t\n" },
		{ "INT32.Name", "ETensorProtoDataType::INT32" },
		{ "INT32.ToolTip", "int16_t" },
		{ "INT64.Comment", "// int32_t\n" },
		{ "INT64.Name", "ETensorProtoDataType::INT64" },
		{ "INT64.ToolTip", "int32_t" },
		{ "INT8.Comment", "// uint8_t\n" },
		{ "INT8.Name", "ETensorProtoDataType::INT8" },
		{ "INT8.ToolTip", "uint8_t" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "STRING.Comment", "// int64_t\n" },
		{ "STRING.Name", "ETensorProtoDataType::STRING" },
		{ "STRING.ToolTip", "int64_t" },
		{ "UINT16.Comment", "// int8_t\n" },
		{ "UINT16.Name", "ETensorProtoDataType::UINT16" },
		{ "UINT16.ToolTip", "int8_t" },
		{ "UINT32.Name", "ETensorProtoDataType::UINT32" },
		{ "UINT64.Name", "ETensorProtoDataType::UINT64" },
		{ "UINT8.Comment", "// float\n" },
		{ "UINT8.Name", "ETensorProtoDataType::UINT8" },
		{ "UINT8.ToolTip", "float" },
		{ "UNDEFINED.Name", "ETensorProtoDataType::UNDEFINED" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelProto_ETensorProtoDataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		"ETensorProtoDataType",
		"ETensorProtoDataType",
		Z_Construct_UEnum_ModelProto_ETensorProtoDataType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelProto_ETensorProtoDataType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelProto_ETensorProtoDataType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelProto_ETensorProtoDataType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelProto_ETensorProtoDataType()
	{
		if (!Z_Registration_Info_UEnum_ETensorProtoDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETensorProtoDataType.InnerSingleton, Z_Construct_UEnum_ModelProto_ETensorProtoDataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETensorProtoDataType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETensorProtoDataLocation;
	static UEnum* ETensorProtoDataLocation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETensorProtoDataLocation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETensorProtoDataLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelProto_ETensorProtoDataLocation, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("ETensorProtoDataLocation"));
		}
		return Z_Registration_Info_UEnum_ETensorProtoDataLocation.OuterSingleton;
	}
	template<> MODELPROTO_API UEnum* StaticEnum<ETensorProtoDataLocation>()
	{
		return ETensorProtoDataLocation_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelProto_ETensorProtoDataLocation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelProto_ETensorProtoDataLocation_Statics::Enumerators[] = {
		{ "ETensorProtoDataLocation::DEFAULT", (int64)ETensorProtoDataLocation::DEFAULT },
		{ "ETensorProtoDataLocation::EXTERNAL", (int64)ETensorProtoDataLocation::EXTERNAL },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelProto_ETensorProtoDataLocation_Statics::Enum_MetaDataParams[] = {
		{ "DEFAULT.Name", "ETensorProtoDataLocation::DEFAULT" },
		{ "EXTERNAL.Name", "ETensorProtoDataLocation::EXTERNAL" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelProto_ETensorProtoDataLocation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		"ETensorProtoDataLocation",
		"ETensorProtoDataLocation",
		Z_Construct_UEnum_ModelProto_ETensorProtoDataLocation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelProto_ETensorProtoDataLocation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelProto_ETensorProtoDataLocation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelProto_ETensorProtoDataLocation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelProto_ETensorProtoDataLocation()
	{
		if (!Z_Registration_Info_UEnum_ETensorProtoDataLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETensorProtoDataLocation.InnerSingleton, Z_Construct_UEnum_ModelProto_ETensorProtoDataLocation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETensorProtoDataLocation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TensorProtoSegment;
class UScriptStruct* FTensorProtoSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TensorProtoSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TensorProtoSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTensorProtoSegment, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("TensorProtoSegment"));
	}
	return Z_Registration_Info_UScriptStruct_TensorProtoSegment.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FTensorProtoSegment>()
{
	return FTensorProtoSegment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTensorProtoSegment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Begin_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Begin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_End;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 7 - FTensorProtoSegment\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 7 - FTensorProtoSegment\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTensorProtoSegment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::NewProp_Begin_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::NewProp_Begin = { "Begin", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProtoSegment, Begin), METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::NewProp_Begin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::NewProp_Begin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::NewProp_End_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProtoSegment, End), METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::NewProp_Begin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::NewProp_End,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"TensorProtoSegment",
		sizeof(FTensorProtoSegment),
		alignof(FTensorProtoSegment),
		Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTensorProtoSegment()
	{
		if (!Z_Registration_Info_UScriptStruct_TensorProtoSegment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TensorProtoSegment.InnerSingleton, Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TensorProtoSegment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StringStringEntryProto;
class UScriptStruct* FStringStringEntryProto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StringStringEntryProto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StringStringEntryProto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringStringEntryProto, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("StringStringEntryProto"));
	}
	return Z_Registration_Info_UScriptStruct_StringStringEntryProto.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FStringStringEntryProto>()
{
	return FStringStringEntryProto::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStringStringEntryProto_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 7 - FStringStringEntryProto\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n *\n * StringStringEntryProto follows the pattern for cross-proto-version maps.\n * See https://developers.google.com/protocol-buffers/docs/proto3#maps\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 7 - FStringStringEntryProto\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n\nStringStringEntryProto follows the pattern for cross-proto-version maps.\nSee https://developers.google.com/protocol-buffers/docs/proto3#maps" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringStringEntryProto>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStringStringEntryProto, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStringStringEntryProto, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"StringStringEntryProto",
		sizeof(FStringStringEntryProto),
		alignof(FStringStringEntryProto),
		Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStringStringEntryProto()
	{
		if (!Z_Registration_Info_UScriptStruct_StringStringEntryProto.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StringStringEntryProto.InnerSingleton, Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StringStringEntryProto.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TensorShapeProtoDimension;
class UScriptStruct* FTensorShapeProtoDimension::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TensorShapeProtoDimension.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TensorShapeProtoDimension.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTensorShapeProtoDimension, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("TensorShapeProtoDimension"));
	}
	return Z_Registration_Info_UScriptStruct_TensorShapeProtoDimension.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FTensorShapeProtoDimension>()
{
	return FTensorShapeProtoDimension::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DimValue_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DimValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DimParam_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DimParam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Denotation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Denotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 7 - FTensorShapeProtoDimension\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 7 - FTensorShapeProtoDimension\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTensorShapeProtoDimension>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_DimValue_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_DimValue = { "DimValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorShapeProtoDimension, DimValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_DimValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_DimValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_DimParam_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_DimParam = { "DimParam", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorShapeProtoDimension, DimParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_DimParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_DimParam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_Denotation_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_Denotation = { "Denotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorShapeProtoDimension, Denotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_Denotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_Denotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_DimValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_DimParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewProp_Denotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"TensorShapeProtoDimension",
		sizeof(FTensorShapeProtoDimension),
		alignof(FTensorShapeProtoDimension),
		Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTensorShapeProtoDimension()
	{
		if (!Z_Registration_Info_UScriptStruct_TensorShapeProtoDimension.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TensorShapeProtoDimension.InnerSingleton, Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TensorShapeProtoDimension.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TensorShapeProto;
class UScriptStruct* FTensorShapeProto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TensorShapeProto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TensorShapeProto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTensorShapeProto, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("TensorShapeProto"));
	}
	return Z_Registration_Info_UScriptStruct_TensorShapeProto.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FTensorShapeProto>()
{
	return FTensorShapeProto::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTensorShapeProto_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dim_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dim_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Dim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorShapeProto_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 6 - FTensorShapeProto\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n *\n * Defines a tensor shape. A dimension can be either an integer value\n * or a symbolic variable. A symbolic variable represents an unknown\n * dimension.\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 6 - FTensorShapeProto\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n\nDefines a tensor shape. A dimension can be either an integer value\nor a symbolic variable. A symbolic variable represents an unknown\ndimension." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTensorShapeProto_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTensorShapeProto>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTensorShapeProto_Statics::NewProp_Dim_Inner = { "Dim", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTensorShapeProtoDimension, METADATA_PARAMS(nullptr, 0) }; // 2711723200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorShapeProto_Statics::NewProp_Dim_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * A dimension can be either an integer value or a symbolic\n\x09 * variable. A symbolic variable represents an unknown dimension.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "A dimension can be either an integer value or a symbolic\nvariable. A symbolic variable represents an unknown dimension." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTensorShapeProto_Statics::NewProp_Dim = { "Dim", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorShapeProto, Dim), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorShapeProto_Statics::NewProp_Dim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorShapeProto_Statics::NewProp_Dim_MetaData)) }; // 2711723200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTensorShapeProto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorShapeProto_Statics::NewProp_Dim_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorShapeProto_Statics::NewProp_Dim,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTensorShapeProto_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"TensorShapeProto",
		sizeof(FTensorShapeProto),
		alignof(FTensorShapeProto),
		Z_Construct_UScriptStruct_FTensorShapeProto_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorShapeProto_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorShapeProto_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorShapeProto_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTensorShapeProto()
	{
		if (!Z_Registration_Info_UScriptStruct_TensorShapeProto.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TensorShapeProto.InnerSingleton, Z_Construct_UScriptStruct_FTensorShapeProto_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TensorShapeProto.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TensorProto;
class UScriptStruct* FTensorProto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TensorProto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TensorProto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTensorProto, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("TensorProto"));
	}
	return Z_Registration_Info_UScriptStruct_TensorProto.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FTensorProto>()
{
	return FTensorProto::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTensorProto_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Dimensions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Dimensions;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Segment;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int32Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringData;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int64Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DocString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DocString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RawData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalData;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DataLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataLocation;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleData;
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_UInt64Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt64Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UInt64Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 6 - FTensorProto\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n *\n * Tensors\n * A serialized tensor value.\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 6 - FTensorProto\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n\nTensors\nA serialized tensor value." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTensorProto_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTensorProto>();
	}
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Dimensions_Inner = { "Dimensions", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Dimensions_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The shape of the tensor.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The shape of the tensor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, Dimensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Dimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Dimensions_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The data type of the tensor.\n\x09 * This field MUST have a valid TensorProto.DataType value\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The data type of the tensor.\nThis field MUST have a valid TensorProto.DataType value" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, DataType), Z_Construct_UEnum_ModelProto_ETensorProtoDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataType_MetaData)) }; // 3788657370
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Segment_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * For very large tensors, we may want to store them in chunks, in which\n\x09 * case the following fields will specify the segment that is stored in\n\x09 * the current TensorProto.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "For very large tensors, we may want to store them in chunks, in which\ncase the following fields will specify the segment that is stored in\nthe current TensorProto." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Segment = { "Segment", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, Segment), Z_Construct_UScriptStruct_FTensorProtoSegment, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Segment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Segment_MetaData)) }; // 4036270330
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_FloatData_Inner = { "FloatData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_FloatData_MetaData[] = {
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_FloatData = { "FloatData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, FloatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_FloatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_FloatData_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int32Data_Inner = { "Int32Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int32Data_MetaData[] = {
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int32Data = { "Int32Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, Int32Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int32Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int32Data_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_StringData_Inner = { "StringData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_StringData_MetaData[] = {
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_StringData = { "StringData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, StringData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_StringData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_StringData_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int64Data_Inner = { "Int64Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int64Data_MetaData[] = {
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int64Data = { "Int64Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, Int64Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int64Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int64Data_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * Optionally, a name for the tensor.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Optionally, a name for the tensor." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DocString_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * A human-readable documentation for this tensor. Markdown is allowed.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "A human-readable documentation for this tensor. Markdown is allowed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DocString = { "DocString", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, DocString), METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DocString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DocString_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_RawData_MetaData[] = {
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_RawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_RawData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_ExternalData_Inner = { "ExternalData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStringStringEntryProto, METADATA_PARAMS(nullptr, 0) }; // 2249752139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_ExternalData_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_ExternalData = { "ExternalData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, ExternalData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_ExternalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_ExternalData_MetaData)) }; // 2249752139
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataLocation_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * If value not set, data is stored in raw_data (if set) otherwise in type-specified field.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "If value not set, data is stored in raw_data (if set) otherwise in type-specified field." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataLocation = { "DataLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, DataLocation), Z_Construct_UEnum_ModelProto_ETensorProtoDataLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataLocation_MetaData)) }; // 1135937640
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DoubleData_Inner = { "DoubleData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DoubleData_MetaData[] = {
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DoubleData = { "DoubleData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, DoubleData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DoubleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DoubleData_MetaData)) };
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_UInt64Data_Inner = { "UInt64Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_UInt64Data_MetaData[] = {
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_UInt64Data = { "UInt64Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorProto, UInt64Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_UInt64Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_UInt64Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTensorProto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Dimensions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Dimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Segment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_FloatData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_FloatData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int32Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int32Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_StringData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_StringData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int64Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Int64Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DocString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_RawData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_RawData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_ExternalData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_ExternalData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DataLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DoubleData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_DoubleData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_UInt64Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorProto_Statics::NewProp_UInt64Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTensorProto_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"TensorProto",
		sizeof(FTensorProto),
		alignof(FTensorProto),
		Z_Construct_UScriptStruct_FTensorProto_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorProto_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorProto_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTensorProto()
	{
		if (!Z_Registration_Info_UScriptStruct_TensorProto.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TensorProto.InnerSingleton, Z_Construct_UScriptStruct_FTensorProto_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TensorProto.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypeProtoSequence;
class UScriptStruct* FTypeProtoSequence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypeProtoSequence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypeProtoSequence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypeProtoSequence, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("TypeProtoSequence"));
	}
	return Z_Registration_Info_UScriptStruct_TypeProtoSequence.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FTypeProtoSequence>()
{
	return FTypeProtoSequence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypeProtoSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeProtoSequence_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 5 - FTypeProtoSequence\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 5 - FTypeProtoSequence\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypeProtoSequence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypeProtoSequence>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypeProtoSequence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"TypeProtoSequence",
		sizeof(FTypeProtoSequence),
		alignof(FTypeProtoSequence),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeProtoSequence_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeProtoSequence_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypeProtoSequence()
	{
		if (!Z_Registration_Info_UScriptStruct_TypeProtoSequence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypeProtoSequence.InnerSingleton, Z_Construct_UScriptStruct_FTypeProtoSequence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypeProtoSequence.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypeProtoTensor;
class UScriptStruct* FTypeProtoTensor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypeProtoTensor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypeProtoTensor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypeProtoTensor, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("TypeProtoTensor"));
	}
	return Z_Registration_Info_UScriptStruct_TypeProtoTensor.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FTypeProtoTensor>()
{
	return FTypeProtoTensor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypeProtoTensor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElemType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 5 - FTypeProtoTensor\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 5 - FTypeProtoTensor\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypeProtoTensor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::NewProp_ElemType_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * This field MUST NOT have the value of UNDEFINED\n\x09 * This field MUST have a valid TensorProto.DataType value\n\x09 * This field MUST be present for this version of the IR.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "This field MUST NOT have the value of UNDEFINED\nThis field MUST have a valid TensorProto.DataType value\nThis field MUST be present for this version of the IR." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::NewProp_ElemType = { "ElemType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTypeProtoTensor, ElemType), METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::NewProp_ElemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::NewProp_ElemType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTypeProtoTensor, Shape), Z_Construct_UScriptStruct_FTensorShapeProto, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::NewProp_Shape_MetaData)) }; // 3648355108
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::NewProp_ElemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::NewProp_Shape,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"TypeProtoTensor",
		sizeof(FTypeProtoTensor),
		alignof(FTypeProtoTensor),
		Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypeProtoTensor()
	{
		if (!Z_Registration_Info_UScriptStruct_TypeProtoTensor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypeProtoTensor.InnerSingleton, Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypeProtoTensor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypeProtoMap;
class UScriptStruct* FTypeProtoMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypeProtoMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypeProtoMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypeProtoMap, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("TypeProtoMap"));
	}
	return Z_Registration_Info_UScriptStruct_TypeProtoMap.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FTypeProtoMap>()
{
	return FTypeProtoMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypeProtoMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeProtoMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 5 - FTypeProtoMap\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 5 - FTypeProtoMap\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypeProtoMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypeProtoMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeProtoMap_Statics::NewProp_KeyType_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * This field MUST have a valid TensorProto.DataType value \n\x09 * This field MUST be present for this version of the IR. \n\x09 * This field MUST refer to an integral type ([U]INT{8|16|32|64}) or STRING\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "This field MUST have a valid TensorProto.DataType value\nThis field MUST be present for this version of the IR.\nThis field MUST refer to an integral type ([U]INT{8|16|32|64}) or STRING" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTypeProtoMap_Statics::NewProp_KeyType = { "KeyType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTypeProtoMap, KeyType), METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeProtoMap_Statics::NewProp_KeyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeProtoMap_Statics::NewProp_KeyType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypeProtoMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeProtoMap_Statics::NewProp_KeyType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypeProtoMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"TypeProtoMap",
		sizeof(FTypeProtoMap),
		alignof(FTypeProtoMap),
		Z_Construct_UScriptStruct_FTypeProtoMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeProtoMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeProtoMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeProtoMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypeProtoMap()
	{
		if (!Z_Registration_Info_UScriptStruct_TypeProtoMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypeProtoMap.InnerSingleton, Z_Construct_UScriptStruct_FTypeProtoMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypeProtoMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SparseTensorProto;
class UScriptStruct* FSparseTensorProto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SparseTensorProto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SparseTensorProto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSparseTensorProto, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("SparseTensorProto"));
	}
	return Z_Registration_Info_UScriptStruct_SparseTensorProto.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FSparseTensorProto>()
{
	return FSparseTensorProto::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSparseTensorProto_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Indices;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Dimensions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Dimensions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSparseTensorProto_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 5 - FSparseTensorProto\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 5 - FSparseTensorProto\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSparseTensorProto>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The sequence of non-default values are encoded as a tensor of shape [NNZ].\n\x09 * The default-value is zero for numeric tensors, and empty-string for string tensors.\n\x09 * values must have a non-empty name present which serves as a name for SparseTensorProto\n\x09 * when used in sparse_initializer list.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The sequence of non-default values are encoded as a tensor of shape [NNZ].\nThe default-value is zero for numeric tensors, and empty-string for string tensors.\nvalues must have a non-empty name present which serves as a name for SparseTensorProto\nwhen used in sparse_initializer list." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSparseTensorProto, Values), Z_Construct_UScriptStruct_FTensorProto, METADATA_PARAMS(Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Values_MetaData)) }; // 812796809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Indices_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The indices of the non-default values, which may be stored in one of two formats.\n\x09 * (a) Indices can be a tensor of shape [NNZ, rank] with the [i,j]-th value\n\x09 * corresponding to the j-th index of the i-th value (in the values tensor).\n\x09 * (b) Indices can be a tensor of shape [NNZ], in which case the i-th value\n\x09 * must be the linearized-index of the i-th value (in the values tensor).\n\x09 * The linearized-index can be converted into an index tuple (k_1,...,k_rank)\n\x09 * using the shape provided below.\n\x09 * The indices must appear in ascending order without duplication.\n\x09 * In the first format, the ordering is lexicographic-ordering:\n\x09 * e.g., index-value [1,4] must appear before [2,1]\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The indices of the non-default values, which may be stored in one of two formats.\n(a) Indices can be a tensor of shape [NNZ, rank] with the [i,j]-th value\ncorresponding to the j-th index of the i-th value (in the values tensor).\n(b) Indices can be a tensor of shape [NNZ], in which case the i-th value\nmust be the linearized-index of the i-th value (in the values tensor).\nThe linearized-index can be converted into an index tuple (k_1,...,k_rank)\nusing the shape provided below.\nThe indices must appear in ascending order without duplication.\nIn the first format, the ordering is lexicographic-ordering:\ne.g., index-value [1,4] must appear before [2,1]" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSparseTensorProto, Indices), Z_Construct_UScriptStruct_FTensorProto, METADATA_PARAMS(Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Indices_MetaData)) }; // 812796809
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Dimensions_Inner = { "Dimensions", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Dimensions_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The shape of the underlying dense-tensor: [dim_1, dim_2, ... dim_rank]\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The shape of the underlying dense-tensor: [dim_1, dim_2, ... dim_rank]" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSparseTensorProto, Dimensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Dimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Dimensions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSparseTensorProto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Indices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Dimensions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewProp_Dimensions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSparseTensorProto_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"SparseTensorProto",
		sizeof(FSparseTensorProto),
		alignof(FSparseTensorProto),
		Z_Construct_UScriptStruct_FSparseTensorProto_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSparseTensorProto_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSparseTensorProto_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSparseTensorProto_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSparseTensorProto()
	{
		if (!Z_Registration_Info_UScriptStruct_SparseTensorProto.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SparseTensorProto.InnerSingleton, Z_Construct_UScriptStruct_FSparseTensorProto_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SparseTensorProto.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypeProto;
class UScriptStruct* FTypeProto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypeProto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypeProto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypeProto, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("TypeProto"));
	}
	return Z_Registration_Info_UScriptStruct_TypeProto.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FTypeProto>()
{
	return FTypeProto::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypeProto_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TensorType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TensorType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Denotation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Denotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeProto_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 4 - FTypeProto\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n *\n * Types\n * The standard ONNX data types.\n *\n * NOTE:  DNN-only implementations of ONNX MAY elect to not support non-tensor values\n * as input and output to graphs and nodes. These types are needed to naturally\n * support classical ML operators. DNN operators SHOULD restrict their input\n * and output types to tensors.\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 4 - FTypeProto\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n\nTypes\nThe standard ONNX data types.\n\nNOTE:  DNN-only implementations of ONNX MAY elect to not support non-tensor values\nas input and output to graphs and nodes. These types are needed to naturally\nsupport classical ML operators. DNN operators SHOULD restrict their input\nand output types to tensors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypeProto_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypeProto>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeProto_Statics::NewProp_TensorType_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The type of a tensor.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The type of a tensor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTypeProto_Statics::NewProp_TensorType = { "TensorType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTypeProto, TensorType), Z_Construct_UScriptStruct_FTypeProtoTensor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeProto_Statics::NewProp_TensorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeProto_Statics::NewProp_TensorType_MetaData)) }; // 3162808771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeProto_Statics::NewProp_Denotation_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * An optional denotation can be used to denote the whole\n\x09 * type with a standard semantic description as to what is\n\x09 * stored inside. Refer to https://github.com/onnx/onnx/blob/master/docs/TypeDenotation.md#type-denotation-definition\n\x09 * for pre-defined type denotations.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "An optional denotation can be used to denote the whole\ntype with a standard semantic description as to what is\nstored inside. Refer to https://github.com/onnx/onnx/blob/master/docs/TypeDenotation.md#type-denotation-definition\nfor pre-defined type denotations." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTypeProto_Statics::NewProp_Denotation = { "Denotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTypeProto, Denotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeProto_Statics::NewProp_Denotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeProto_Statics::NewProp_Denotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypeProto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeProto_Statics::NewProp_TensorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeProto_Statics::NewProp_Denotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypeProto_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"TypeProto",
		sizeof(FTypeProto),
		alignof(FTypeProto),
		Z_Construct_UScriptStruct_FTypeProto_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeProto_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeProto_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeProto_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypeProto()
	{
		if (!Z_Registration_Info_UScriptStruct_TypeProto.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypeProto.InnerSingleton, Z_Construct_UScriptStruct_FTypeProto_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypeProto.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeProto;
class UScriptStruct* FAttributeProto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeProto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeProto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeProto, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("AttributeProto"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeProto.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FAttributeProto>()
{
	return FAttributeProto::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributeProto_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DocString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DocString;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_F_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_F;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_I_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_I;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_S_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_S;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_T;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SparseTensor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SparseTensor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Floats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Floats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Floats;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Integers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Integers;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Strings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Strings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tensors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tensors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tensors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SparseTensors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SparseTensors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SparseTensors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 4 - FAttributeProto\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 4 - FAttributeProto\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeProto_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeProto>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The name field MUST be present for this version of the IR.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The name field MUST be present for this version of the IR." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProto, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_DocString_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * A human-readable documentation for this attribute. Markdown is allowed.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "A human-readable documentation for this attribute. Markdown is allowed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_DocString = { "DocString", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProto, DocString), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_DocString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_DocString_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The type field MUST be present for this version of the IR.\n\x09 * For 0.0.1 versions of the IR, this field was not defined, and\n\x09 * implementations needed to use has_field heuristics to determine\n\x09 * which value field was in use.  For IR_VERSION 0.0.2 or later, this\n\x09 * field MUST be set and match the f|i|s|t|... field in use.  This\n\x09 * change was made to accommodate proto3 implementations.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The type field MUST be present for this version of the IR.\nFor 0.0.1 versions of the IR, this field was not defined, and\nimplementations needed to use has_field heuristics to determine\nwhich value field was in use.  For IR_VERSION 0.0.2 or later, this\nfield MUST be set and match the f|i|s|t|... field in use.  This\nchange was made to accommodate proto3 implementations." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProto, Type), Z_Construct_UEnum_ModelProto_EAttributeProtoAttributeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Type_MetaData)) }; // 1411313423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_F_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * Exactly ONE of the following fields must be present for this version of the IR\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Exactly ONE of the following fields must be present for this version of the IR" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProto, F), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_F_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_F_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_I_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_I = { "I", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProto, I), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_I_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_I_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_S_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProto, S), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_S_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_S_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_T_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProto, T), Z_Construct_UScriptStruct_FTensorProto, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_T_MetaData)) }; // 812796809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_SparseTensor_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "// \x09UPROPERTY(VisibleAnywhere, Category = \"Neural Network Inference\")\n// \x09TSharedPtr<FGraphProto> G; /** Used TSharedPtr<> to break the circular dependency */\n" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, Category = \"Neural Network Inference\")\nTSharedPtr<FGraphProto> G;  Used TSharedPtr<> to break the circular dependency" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_SparseTensor = { "SparseTensor", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProto, SparseTensor), Z_Construct_UScriptStruct_FSparseTensorProto, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_SparseTensor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_SparseTensor_MetaData)) }; // 2847513189
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Floats_Inner = { "Floats", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Floats_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Floats = { "Floats", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProto, Floats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Floats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Floats_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Integers_Inner = { "Integers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Integers_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Integers = { "Integers", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProto, Integers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Integers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Integers_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Strings_Inner = { "Strings", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Strings_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Strings = { "Strings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProto, Strings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Strings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Strings_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Tensors_Inner = { "Tensors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTensorProto, METADATA_PARAMS(nullptr, 0) }; // 812796809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Tensors_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Tensors = { "Tensors", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProto, Tensors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Tensors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Tensors_MetaData)) }; // 812796809
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_SparseTensors_Inner = { "SparseTensors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSparseTensorProto, METADATA_PARAMS(nullptr, 0) }; // 2847513189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_SparseTensors_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_SparseTensors = { "SparseTensors", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProto, SparseTensors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_SparseTensors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_SparseTensors_MetaData)) }; // 2847513189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeProto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_DocString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_F,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_I,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_S,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_T,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_SparseTensor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Floats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Floats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Integers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Integers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Strings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Strings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Tensors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_Tensors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_SparseTensors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProto_Statics::NewProp_SparseTensors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeProto_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"AttributeProto",
		sizeof(FAttributeProto),
		alignof(FAttributeProto),
		Z_Construct_UScriptStruct_FAttributeProto_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProto_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProto_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeProto()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributeProto.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeProto.InnerSingleton, Z_Construct_UScriptStruct_FAttributeProto_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributeProto.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValueInfoProto;
class UScriptStruct* FValueInfoProto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueInfoProto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValueInfoProto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValueInfoProto, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("ValueInfoProto"));
	}
	return Z_Registration_Info_UScriptStruct_ValueInfoProto.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FValueInfoProto>()
{
	return FValueInfoProto::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FValueInfoProto_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DocString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DocString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValueInfoProto_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 3 - FValueInfoProto\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n *\n * Defines information on value, including the name, the type, and\n * the shape of the value.\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 3 - FValueInfoProto\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n\nDefines information on value, including the name, the type, and\nthe shape of the value." },
	};
#endif
	void* Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValueInfoProto>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 *This field MUST be present in this version of the IR.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "This field MUST be present in this version of the IR." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FValueInfoProto, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * This field MUST be present in this version of the IR for\n\x09 * inputs and outputs of the top-level graph.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "This field MUST be present in this version of the IR for\ninputs and outputs of the top-level graph." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FValueInfoProto, Type), Z_Construct_UScriptStruct_FTypeProto, METADATA_PARAMS(Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_Type_MetaData)) }; // 1180569076
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_DocString_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * A human-readable documentation for this value. Markdown is allowed.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "A human-readable documentation for this value. Markdown is allowed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_DocString = { "DocString", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FValueInfoProto, DocString), METADATA_PARAMS(Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_DocString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_DocString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValueInfoProto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewProp_DocString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValueInfoProto_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"ValueInfoProto",
		sizeof(FValueInfoProto),
		alignof(FValueInfoProto),
		Z_Construct_UScriptStruct_FValueInfoProto_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueInfoProto_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FValueInfoProto_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueInfoProto_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FValueInfoProto()
	{
		if (!Z_Registration_Info_UScriptStruct_ValueInfoProto.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValueInfoProto.InnerSingleton, Z_Construct_UScriptStruct_FValueInfoProto_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ValueInfoProto.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TensorAnnotation;
class UScriptStruct* FTensorAnnotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TensorAnnotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TensorAnnotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTensorAnnotation, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("TensorAnnotation"));
	}
	return Z_Registration_Info_UScriptStruct_TensorAnnotation.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FTensorAnnotation>()
{
	return FTensorAnnotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTensorAnnotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TensorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TensorName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuantParameterTensorNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantParameterTensorNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuantParameterTensorNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorAnnotation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 3 - FTensorAnnotation\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 3 - FTensorAnnotation\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTensorAnnotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewProp_TensorName_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewProp_TensorName = { "TensorName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorAnnotation, TensorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewProp_TensorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewProp_TensorName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewProp_QuantParameterTensorNames_Inner = { "QuantParameterTensorNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStringStringEntryProto, METADATA_PARAMS(nullptr, 0) }; // 2249752139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewProp_QuantParameterTensorNames_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09* <key, value> pairs to annotate tensor specified by <tensor_name> above.\n\x09* The keys used in the mapping below must be pre-defined in ONNX spec.\n\x09* For example, for 8-bit linear quantization case, 'SCALE_TENSOR',\n\x09* 'ZERO_POINT_TENSOR' will be pre-defined as quantization parameter keys.\n\x09*/" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "<key, value> pairs to annotate tensor specified by <tensor_name> above.\nThe keys used in the mapping below must be pre-defined in ONNX spec.\nFor example, for 8-bit linear quantization case, 'SCALE_TENSOR',\n'ZERO_POINT_TENSOR' will be pre-defined as quantization parameter keys." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewProp_QuantParameterTensorNames = { "QuantParameterTensorNames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTensorAnnotation, QuantParameterTensorNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewProp_QuantParameterTensorNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewProp_QuantParameterTensorNames_MetaData)) }; // 2249752139
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTensorAnnotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewProp_TensorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewProp_QuantParameterTensorNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewProp_QuantParameterTensorNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTensorAnnotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"TensorAnnotation",
		sizeof(FTensorAnnotation),
		alignof(FTensorAnnotation),
		Z_Construct_UScriptStruct_FTensorAnnotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorAnnotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTensorAnnotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTensorAnnotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTensorAnnotation()
	{
		if (!Z_Registration_Info_UScriptStruct_TensorAnnotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TensorAnnotation.InnerSingleton, Z_Construct_UScriptStruct_FTensorAnnotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TensorAnnotation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeProto;
class UScriptStruct* FNodeProto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeProto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeProto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeProto, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("NodeProto"));
	}
	return Z_Registration_Info_UScriptStruct_NodeProto.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FNodeProto>()
{
	return FNodeProto::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeProto_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Input_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Output_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Output;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperatorType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperatorType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Domain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DocString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DocString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeProto_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 3 - FNodeProto\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n *\n * Nodes\n *\n * Computation graphs are made up of a DAG of nodes, which represent what is\n * commonly called a \"layer\" or \"pipeline stage\" in machine learning frameworks.\n *\n * For example, it can be a node of type \"Conv\" that takes in an image, a filter\n * tensor and a bias tensor, and produces the convolved output.\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 3 - FNodeProto\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n\nNodes\n\nComputation graphs are made up of a DAG of nodes, which represent what is\ncommonly called a \"layer\" or \"pipeline stage\" in machine learning frameworks.\n\nFor example, it can be a node of type \"Conv\" that takes in an image, a filter\ntensor and a bias tensor, and produces the convolved output." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeProto_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeProto>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Input_Inner = { "Input", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeProto, Input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Output_Inner = { "Output", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeProto, Output), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Output_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * An optional identifier for this node in a graph.\n\x09 * This field MAY be absent in this version of the IR.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "An optional identifier for this node in a graph.\nThis field MAY be absent in this version of the IR." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeProto, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_OperatorType_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The symbolic identifier of the Operator to execute.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The symbolic identifier of the Operator to execute." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_OperatorType = { "OperatorType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeProto, OperatorType), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_OperatorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_OperatorType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Domain_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The domain of the OperatorSet that specifies the operator named by op_type.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The domain of the OperatorSet that specifies the operator named by op_type." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeProto, Domain), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Domain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Domain_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Attribute_Inner = { "Attribute", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAttributeProto, METADATA_PARAMS(nullptr, 0) }; // 2599788549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * Additional named attributes.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Additional named attributes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeProto, Attribute), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Attribute_MetaData)) }; // 2599788549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_DocString_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * A human-readable documentation for this node. Markdown is allowed.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "A human-readable documentation for this node. Markdown is allowed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_DocString = { "DocString", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeProto, DocString), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_DocString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_DocString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeProto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Input_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Output_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Output,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_OperatorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Domain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Attribute_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeProto_Statics::NewProp_DocString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeProto_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"NodeProto",
		sizeof(FNodeProto),
		alignof(FNodeProto),
		Z_Construct_UScriptStruct_FNodeProto_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeProto_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeProto_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeProto_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeProto()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeProto.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeProto.InnerSingleton, Z_Construct_UScriptStruct_FNodeProto_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeProto.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphProto;
class UScriptStruct* FGraphProto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphProto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphProto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphProto, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("GraphProto"));
	}
	return Z_Registration_Info_UScriptStruct_GraphProto.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FGraphProto>()
{
	return FGraphProto::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGraphProto_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoaded_MetaData[];
#endif
		static void NewProp_bIsLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoaded;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Initializer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Initializer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Initializer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SparseInitializer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SparseInitializer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SparseInitializer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DocString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DocString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Output;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValueInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValueInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphProto_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 2 - FGraphProto\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n *\n * Graphs\n *\n * A graph defines the computational logic of a model and is comprised of a parameterized\n * list of nodes that form a directed acyclic graph based on their inputs and outputs.\n * This is the equivalent of the \"network\" or \"graph\" in many deep learning / neural network\n * frameworks.\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 2 - FGraphProto\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n\nGraphs\n\nA graph defines the computational logic of a model and is comprised of a parameterized\nlist of nodes that form a directed acyclic graph based on their inputs and outputs.\nThis is the equivalent of the \"network\" or \"graph\" in many deep learning / neural network\nframeworks." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphProto_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphProto>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_bIsLoaded_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_bIsLoaded_SetBit(void* Obj)
	{
		((FGraphProto*)Obj)->bIsLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_bIsLoaded = { "bIsLoaded", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGraphProto), &Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_bIsLoaded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_bIsLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_bIsLoaded_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Node_Inner = { "Node", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNodeProto, METADATA_PARAMS(nullptr, 0) }; // 582385195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The nodes in the graph, sorted topologically.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The nodes in the graph, sorted topologically." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphProto, Node), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Node_MetaData)) }; // 582385195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The name of the graph.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The name of the graph." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphProto, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Initializer_Inner = { "Initializer", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTensorProto, METADATA_PARAMS(nullptr, 0) }; // 812796809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Initializer_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * A list of named tensor values, used to specify constant inputs of the graph.\n\x09 * Each TensorProto entry must have a distinct name (within the list) that\n\x09 * MAY also appear in the input list.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "A list of named tensor values, used to specify constant inputs of the graph.\nEach TensorProto entry must have a distinct name (within the list) that\nMAY also appear in the input list." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Initializer = { "Initializer", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphProto, Initializer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Initializer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Initializer_MetaData)) }; // 812796809
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_SparseInitializer_Inner = { "SparseInitializer", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSparseTensorProto, METADATA_PARAMS(nullptr, 0) }; // 2847513189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_SparseInitializer_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * Initializers (see above) stored in sparse format.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Initializers (see above) stored in sparse format." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_SparseInitializer = { "SparseInitializer", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphProto, SparseInitializer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_SparseInitializer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_SparseInitializer_MetaData)) }; // 2847513189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_DocString_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * A human-readable documentation for this graph. Markdown is allowed.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "A human-readable documentation for this graph. Markdown is allowed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_DocString = { "DocString", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphProto, DocString), METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_DocString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_DocString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Input_Inner = { "Input", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FValueInfoProto, METADATA_PARAMS(nullptr, 0) }; // 1023104842
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The inputs and outputs of the graph.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The inputs and outputs of the graph." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphProto, Input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Input_MetaData)) }; // 1023104842
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Output_Inner = { "Output", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FValueInfoProto, METADATA_PARAMS(nullptr, 0) }; // 1023104842
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphProto, Output), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Output_MetaData)) }; // 1023104842
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_ValueInfo_Inner = { "ValueInfo", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FValueInfoProto, METADATA_PARAMS(nullptr, 0) }; // 1023104842
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_ValueInfo_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * Information for the values in the graph. The ValueInfoProto.name's\n\x09 * must be distinct. It is optional for a value to appear in value_info list.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Information for the values in the graph. The ValueInfoProto.name's\nmust be distinct. It is optional for a value to appear in value_info list." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_ValueInfo = { "ValueInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphProto, ValueInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_ValueInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_ValueInfo_MetaData)) }; // 1023104842
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphProto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_bIsLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Node_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Initializer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Initializer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_SparseInitializer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_SparseInitializer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_DocString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Input_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Output_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_Output,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_ValueInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProto_Statics::NewProp_ValueInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphProto_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"GraphProto",
		sizeof(FGraphProto),
		alignof(FGraphProto),
		Z_Construct_UScriptStruct_FGraphProto_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProto_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphProto_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProto_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGraphProto()
	{
		if (!Z_Registration_Info_UScriptStruct_GraphProto.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphProto.InnerSingleton, Z_Construct_UScriptStruct_FGraphProto_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GraphProto.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrainingInfoProto;
class UScriptStruct* FTrainingInfoProto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrainingInfoProto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrainingInfoProto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrainingInfoProto, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("TrainingInfoProto"));
	}
	return Z_Registration_Info_UScriptStruct_TrainingInfoProto.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FTrainingInfoProto>()
{
	return FTrainingInfoProto::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrainingInfoProto_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoaded_MetaData[];
#endif
		static void NewProp_bIsLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Initialization_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Initialization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Algorithm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Algorithm;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitializationBinding_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializationBinding_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitializationBinding;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateBinding_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateBinding_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdateBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 1 - FTrainingInfoProto\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 1 - FTrainingInfoProto\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrainingInfoProto>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_bIsLoaded_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_bIsLoaded_SetBit(void* Obj)
	{
		((FTrainingInfoProto*)Obj)->bIsLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_bIsLoaded = { "bIsLoaded", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTrainingInfoProto), &Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_bIsLoaded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_bIsLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_bIsLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_Initialization_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * This field describes a graph to compute the initial tensors\n\x09 * upon starting the training process. Initialization graph has no input\n\x09 * and can have multiple outputs. Usually, trainable tensors in neural \n\x09 * networks are randomly initialized. To achieve that, for each tensor,\n     * the user can put a random number operator such as RandomNormal or\n\x09 * RandomUniform in TrainingInfoProto.initialization.node and assign its\n\x09 * random output to the specific tensor using \"initialization_binding\".\n\x09 * This graph can also set the initializers in \"algorithm\" in the same\n\x09 * TrainingInfoProto; a use case is resetting the number of training\n\x09 * iteration to zero.\n\x09 * \n\x09 * By default, this field is an empty graph and its evaluation does not \n\x09 * produce any output. Thus, no initializer would be changed by default.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "This field describes a graph to compute the initial tensors\nupon starting the training process. Initialization graph has no input\nand can have multiple outputs. Usually, trainable tensors in neural\nnetworks are randomly initialized. To achieve that, for each tensor,\nthe user can put a random number operator such as RandomNormal or\nRandomUniform in TrainingInfoProto.initialization.node and assign its\nrandom output to the specific tensor using \"initialization_binding\".\nThis graph can also set the initializers in \"algorithm\" in the same\nTrainingInfoProto; a use case is resetting the number of training\niteration to zero.\n\nBy default, this field is an empty graph and its evaluation does not\nproduce any output. Thus, no initializer would be changed by default." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_Initialization = { "Initialization", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrainingInfoProto, Initialization), Z_Construct_UScriptStruct_FGraphProto, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_Initialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_Initialization_MetaData)) }; // 2830292306
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_Algorithm_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * This field represents a training algorithm step. Given required inputs,\n\x09 * it computes outputs to update initializers in its own or inference graph's \n\x09 * initializer lists. In general, this field contains loss node, gradient node,\n\x09 * optimizer node, increment of iteration count.\n\x09 * \n\x09 * An execution of the training algorithm step is performed by executing the\n\x09 * graph obtained by combining the inference graph (namely \"ModelProto.graph\")\n\x09 * and the \"algorithm\" graph. That is, the actual the actual\n\x09 * input/initializer/output/node/value_info/sparse_initializer list of\n\x09 * the training graph is the concatenation of\n\x09 * \"ModelProto.graph.input/initializer/output/node/value_info/sparse_initializer\"\n\x09 * and \"algorithm.input/initializer/output/node/value_info/sparse_initializer\"\n\x09 * in that order. This combined graph must satisfy the normal ONNX conditions.\n\x09 * Now, let's provide a visualization of graph combination for clarity.\n\x09 * Let the inference graph (i.e., \"ModelProto.graph\") be\n\x09 *    tensor_a, tensor_b -> MatMul -> tensor_c -> Sigmoid -> tensor_d\n\x09 * and the \"algorithm\" graph be\n\x09 *    tensor_d -> Add -> tensor_e\n\x09 * The combination process results \n\x09 *    tensor_a, tensor_b -> MatMul -> tensor_c -> Sigmoid -> tensor_d -> Add -> tensor_e\n\x09 * \n\x09 * Notice that an input of a node in the \"algorithm\" graph may reference the\n\x09 * output of a node in the inference graph (but not the other way round). Also, inference\n\x09 * node cannot reference inputs of \"algorithm\". With these restrictions, inference graph\n\x09 * can always be run independently without training information.\n\x09 * \n\x09 * By default, this field is an empty graph and its evaluation does not\n\x09 * produce any output. Evaluating the default training step never\n\x09 * update any initializers.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "This field represents a training algorithm step. Given required inputs,\nit computes outputs to update initializers in its own or inference graph's\ninitializer lists. In general, this field contains loss node, gradient node,\noptimizer node, increment of iteration count.\n\nAn execution of the training algorithm step is performed by executing the\ngraph obtained by combining the inference graph (namely \"ModelProto.graph\")\nand the \"algorithm\" graph. That is, the actual the actual\ninput/initializer/output/node/value_info/sparse_initializer list of\nthe training graph is the concatenation of\n\"ModelProto.graph.input/initializer/output/node/value_info/sparse_initializer\"\nand \"algorithm.input/initializer/output/node/value_info/sparse_initializer\"\nin that order. This combined graph must satisfy the normal ONNX conditions.\nNow, let's provide a visualization of graph combination for clarity.\nLet the inference graph (i.e., \"ModelProto.graph\") be\n   tensor_a, tensor_b -> MatMul -> tensor_c -> Sigmoid -> tensor_d\nand the \"algorithm\" graph be\n   tensor_d -> Add -> tensor_e\nThe combination process results\n   tensor_a, tensor_b -> MatMul -> tensor_c -> Sigmoid -> tensor_d -> Add -> tensor_e\n\nNotice that an input of a node in the \"algorithm\" graph may reference the\noutput of a node in the inference graph (but not the other way round). Also, inference\nnode cannot reference inputs of \"algorithm\". With these restrictions, inference graph\ncan always be run independently without training information.\n\nBy default, this field is an empty graph and its evaluation does not\nproduce any output. Evaluating the default training step never\nupdate any initializers." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_Algorithm = { "Algorithm", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrainingInfoProto, Algorithm), Z_Construct_UScriptStruct_FGraphProto, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_Algorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_Algorithm_MetaData)) }; // 2830292306
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_InitializationBinding_Inner = { "InitializationBinding", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStringStringEntryProto, METADATA_PARAMS(nullptr, 0) }; // 2249752139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_InitializationBinding_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * This field specifies the bindings from the outputs of \"initialization\" to\n\x09 * some initializers in \"ModelProto.graph.initializer\" and\n\x09 * some initializers in \"ModelProto.graph.initializer\" and\n\x09 * the \"algorithm.initializer\" in the same TrainingInfoProto.\n\x09 * See \"update_binding\" below for details.\n\x09 * \n\x09 * By default, this field is empty and no initializer would be changed\n\x09 * by the execution of \"initialization\".\n\x09*/" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "This field specifies the bindings from the outputs of \"initialization\" to\nsome initializers in \"ModelProto.graph.initializer\" and\nsome initializers in \"ModelProto.graph.initializer\" and\nthe \"algorithm.initializer\" in the same TrainingInfoProto.\nSee \"update_binding\" below for details.\n\nBy default, this field is empty and no initializer would be changed\nby the execution of \"initialization\"." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_InitializationBinding = { "InitializationBinding", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrainingInfoProto, InitializationBinding), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_InitializationBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_InitializationBinding_MetaData)) }; // 2249752139
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_UpdateBinding_Inner = { "UpdateBinding", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStringStringEntryProto, METADATA_PARAMS(nullptr, 0) }; // 2249752139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_UpdateBinding_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * Gradient-based training is usually an iterative procedure. In one gradient\n\x09 * descent iteration, we apply\n\x09 * \n\x09 * x = x - r * g\n\x09 * \n\x09 * where \"x\" is the optimized tensor, \"r\" stands for learning rate, and \"g\" is\n\x09 * gradient of \"x\" with respect to a chosen loss. To avoid adding assignments\n\x09 * into the training graph, we split the update equation into\n\x09 * \n\x09 * y = x - r * g\n\x09 * x = y\n\x09 * \n\x09 * The user needs to save \"y = x - r * g\" into TrainingInfoProto.algorithm. To\n\x09 * tell that \"y\" should be assigned to \"x\", the field \"update_binding\" may\n\x09 * contain a key-value pair of strings, \"x\" (key of StringStringEntryProto)\n\x09 * and \"y\" (value of StringStringEntryProto).\n\x09 * For a neural network with multiple trainable (mutable) tensors, there can\n\x09 * be multiple key-value pairs in \"update_binding\".\n\x09 * \n\x09 * The initializers appears as keys in \"update_binding\" are considered\n\x09 * mutable variables. This implies some behaviors\n\x09 * as described below.\n\x09 * \n\x09 * 1. We have only unique keys in all \"update_binding\"s so that two\n\x09 *\x09  variables may not have the same name. This ensures that one\n\x09 *\x09  variable is assigned up to once.\n\x09 * 2. The keys must appear in names of \"ModelProto.graph.initializer\" or\n\x09 *    \"TrainingInfoProto.algorithm.initializer\".\n\x09 * 3. The values must be output names of \"algorithm\" or \"ModelProto.graph.output\".\n\x09 * 4. Mutable variables are initialized to the value specified by the\n\x09 *    corresponding initializer, and then potentially updated by\n\x09 *    \"initializer_binding\"s and \"update_binding\"s in \"TrainingInfoProto\"s.\n\x09 * \n\x09 * This field usually contains names of trainable tensors\n\x09 * (in ModelProto.graph), optimizer states such as momentums in advanced\n\x09 * stochastic gradient methods (in TrainingInfoProto.graph),\n\x09 * and number of training iterations (in TrainingInfoProto.graph).\n\x09 * \n\x09 * By default, this field is empty and no initializer would be changed\n\x09 * by the execution of \"algorithm\".\n\x09*/" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Gradient-based training is usually an iterative procedure. In one gradient\ndescent iteration, we apply\n\nx = x - r * g\n\nwhere \"x\" is the optimized tensor, \"r\" stands for learning rate, and \"g\" is\ngradient of \"x\" with respect to a chosen loss. To avoid adding assignments\ninto the training graph, we split the update equation into\n\ny = x - r * g\nx = y\n\nThe user needs to save \"y = x - r * g\" into TrainingInfoProto.algorithm. To\ntell that \"y\" should be assigned to \"x\", the field \"update_binding\" may\ncontain a key-value pair of strings, \"x\" (key of StringStringEntryProto)\nand \"y\" (value of StringStringEntryProto).\nFor a neural network with multiple trainable (mutable) tensors, there can\nbe multiple key-value pairs in \"update_binding\".\n\nThe initializers appears as keys in \"update_binding\" are considered\nmutable variables. This implies some behaviors\nas described below.\n\n1. We have only unique keys in all \"update_binding\"s so that two\n       variables may not have the same name. This ensures that one\n       variable is assigned up to once.\n2. The keys must appear in names of \"ModelProto.graph.initializer\" or\n   \"TrainingInfoProto.algorithm.initializer\".\n3. The values must be output names of \"algorithm\" or \"ModelProto.graph.output\".\n4. Mutable variables are initialized to the value specified by the\n   corresponding initializer, and then potentially updated by\n   \"initializer_binding\"s and \"update_binding\"s in \"TrainingInfoProto\"s.\n\nThis field usually contains names of trainable tensors\n(in ModelProto.graph), optimizer states such as momentums in advanced\nstochastic gradient methods (in TrainingInfoProto.graph),\nand number of training iterations (in TrainingInfoProto.graph).\n\nBy default, this field is empty and no initializer would be changed\nby the execution of \"algorithm\"." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_UpdateBinding = { "UpdateBinding", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrainingInfoProto, UpdateBinding), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_UpdateBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_UpdateBinding_MetaData)) }; // 2249752139
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_bIsLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_Initialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_Algorithm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_InitializationBinding_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_InitializationBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_UpdateBinding_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewProp_UpdateBinding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"TrainingInfoProto",
		sizeof(FTrainingInfoProto),
		alignof(FTrainingInfoProto),
		Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrainingInfoProto()
	{
		if (!Z_Registration_Info_UScriptStruct_TrainingInfoProto.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrainingInfoProto.InnerSingleton, Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrainingInfoProto.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OperatorSetIdProto;
class UScriptStruct* FOperatorSetIdProto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OperatorSetIdProto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OperatorSetIdProto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperatorSetIdProto, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("OperatorSetIdProto"));
	}
	return Z_Registration_Info_UScriptStruct_OperatorSetIdProto.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FOperatorSetIdProto>()
{
	return FOperatorSetIdProto::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Domain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 1 - FOperatorSetIdProto\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n *\n * Operator Sets\n * OperatorSets are uniquely identified by a (domain, opset_version) pair.\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 1 - FOperatorSetIdProto\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n\nOperator Sets\nOperatorSets are uniquely identified by a (domain, opset_version) pair." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperatorSetIdProto>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::NewProp_Domain_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The domain of the operator set being identified.\n\x09 * The empty string (\"\") or absence of this field implies the operator\n\x09 * set that is defined as part of the ONNX specification.\n\x09 * This field MUST be present in this version of the IR when referring to any other operator set.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The domain of the operator set being identified.\nThe empty string (\"\") or absence of this field implies the operator\nset that is defined as part of the ONNX specification.\nThis field MUST be present in this version of the IR when referring to any other operator set." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOperatorSetIdProto, Domain), METADATA_PARAMS(Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::NewProp_Domain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::NewProp_Domain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The version of the operator set being identified.\n\x09 * This field MUST be present in this version of the IR.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The version of the operator set being identified.\nThis field MUST be present in this version of the IR." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOperatorSetIdProto, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::NewProp_Version_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::NewProp_Domain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::NewProp_Version,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"OperatorSetIdProto",
		sizeof(FOperatorSetIdProto),
		alignof(FOperatorSetIdProto),
		Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOperatorSetIdProto()
	{
		if (!Z_Registration_Info_UScriptStruct_OperatorSetIdProto.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OperatorSetIdProto.InnerSingleton, Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OperatorSetIdProto.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModelProto;
class UScriptStruct* FModelProto::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModelProto.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModelProto.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModelProto, (UObject*)Z_Construct_UPackage__Script_ModelProto(), TEXT("ModelProto"));
	}
	return Z_Registration_Info_UScriptStruct_ModelProto.OuterSingleton;
}
template<> MODELPROTO_API UScriptStruct* StaticStruct<FModelProto>()
{
	return FModelProto::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModelProto_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoaded_MetaData[];
#endif
		static void NewProp_bIsLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IRVersion_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_IRVersion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OpsetImport_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpsetImport_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OpsetImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProducerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProducerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProducerVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProducerVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Domain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelVersion_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ModelVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DocString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DocString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Graph;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetadataProps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataProps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MetadataProps;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrainingInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainingInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrainingInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelProto_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Level 0 - FModelProto\n * It follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n *\n * Models\n *\n * ModelProto is a top-level file/container format for bundling a ML model and\n * associating its computation graph with metadata.\n *\n * The semantics of the model are described by the associated GraphProto's.\n */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Level 0 - FModelProto\nIt follows the ONNX standard: https://github.com/onnx/onnx/blob/master/onnx/onnx.proto3\n\nModels\n\nModelProto is a top-level file/container format for bundling a ML model and\nassociating its computation graph with metadata.\n\nThe semantics of the model are described by the associated GraphProto's." },
	};
#endif
	void* Z_Construct_UScriptStruct_FModelProto_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModelProto>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_bIsLoaded_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_bIsLoaded_SetBit(void* Obj)
	{
		((FModelProto*)Obj)->bIsLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_bIsLoaded = { "bIsLoaded", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FModelProto), &Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_bIsLoaded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_bIsLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_bIsLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_IRVersion_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The version of the IR this model targets. See Version enum above.\n\x09 * This field MUST be present.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The version of the IR this model targets. See Version enum above.\nThis field MUST be present." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_IRVersion = { "IRVersion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelProto, IRVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_IRVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_IRVersion_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_OpsetImport_Inner = { "OpsetImport", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOperatorSetIdProto, METADATA_PARAMS(nullptr, 0) }; // 3401378973
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_OpsetImport_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The OperatorSets this model relies on.\n\x09 * All ModelProtos MUST have at least one entry that\n\x09 * specifies which version of the ONNX OperatorSet is\n\x09 * being imported.\n\x09 *\n\x09 * All nodes in the ModelProto's graph will bind against the operator\n\x09 * with the same-domain/same-op_type operator with the HIGHEST version\n\x09 * in the referenced operator sets.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The OperatorSets this model relies on.\nAll ModelProtos MUST have at least one entry that\nspecifies which version of the ONNX OperatorSet is\nbeing imported.\n\nAll nodes in the ModelProto's graph will bind against the operator\nwith the same-domain/same-op_type operator with the HIGHEST version\nin the referenced operator sets." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_OpsetImport = { "OpsetImport", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelProto, OpsetImport), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_OpsetImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_OpsetImport_MetaData)) }; // 3401378973
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ProducerName_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The name of the framework or tool used to generate this model.\n\x09 * This field SHOULD be present to indicate which implementation/tool/framework\n\x09 * emitted the model.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The name of the framework or tool used to generate this model.\nThis field SHOULD be present to indicate which implementation/tool/framework\nemitted the model." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ProducerName = { "ProducerName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelProto, ProducerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ProducerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ProducerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ProducerVersion_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The version of the framework or tool used to generate this model.\n\x09 * This field SHOULD be present to indicate which implementation/tool/framework\n\x09 * emitted the model.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The version of the framework or tool used to generate this model.\nThis field SHOULD be present to indicate which implementation/tool/framework\nemitted the model." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ProducerVersion = { "ProducerVersion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelProto, ProducerVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ProducerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ProducerVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_Domain_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * Domain name of the model.\n     * We use reverse domain names as name space indicators. For example:\n     * `com.facebook.fair` or `com.microsoft.cognitiveservices`\n     *\n     * Together with `model_version` and GraphProto.name, this forms the unique identity of\n     * the graph.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Domain name of the model.\nWe use reverse domain names as name space indicators. For example:\n`com.facebook.fair` or `com.microsoft.cognitiveservices`\n\nTogether with `model_version` and GraphProto.name, this forms the unique identity of\nthe graph." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelProto, Domain), METADATA_PARAMS(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_Domain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_Domain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ModelVersion_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The version of the graph encoded. See Version enum below.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The version of the graph encoded. See Version enum below." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ModelVersion = { "ModelVersion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelProto, ModelVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ModelVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ModelVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_DocString_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * A human-readable documentation for this model. Markdown is allowed.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "A human-readable documentation for this model. Markdown is allowed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_DocString = { "DocString", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelProto, DocString), METADATA_PARAMS(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_DocString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_DocString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_Graph_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * The parameterized graph that is evaluated to execute the model.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "The parameterized graph that is evaluated to execute the model." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelProto, Graph), Z_Construct_UScriptStruct_FGraphProto, METADATA_PARAMS(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_Graph_MetaData)) }; // 2830292306
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_MetadataProps_Inner = { "MetadataProps", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStringStringEntryProto, METADATA_PARAMS(nullptr, 0) }; // 2249752139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_MetadataProps_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09 * Named metadata values; keys should be distinct.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Named metadata values; keys should be distinct." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_MetadataProps = { "MetadataProps", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelProto, MetadataProps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_MetadataProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_MetadataProps_MetaData)) }; // 2249752139
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_TrainingInfo_Inner = { "TrainingInfo", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTrainingInfoProto, METADATA_PARAMS(nullptr, 0) }; // 425298834
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_TrainingInfo_MetaData[] = {
		{ "Category", "Neural Network Inference" },
		{ "Comment", "/**\n\x09* Training-specific information. Sequentially executing all stored\n\x09 * `TrainingInfoProto.algorithm`s and assigning their outputs following\n\x09 * the corresponding `TrainingInfoProto.update_binding`s is one training\n\x09 * iteration. Similarly, to initialize the model (as if training hasn't\n\x09 * happened), the user should sequentially execute all stored\n\x09 * `TrainingInfoProto.initialization`s and assigns their outputs using\n\x09 * `TrainingInfoProto.initialization_binding`s.\n\x09 * If this field is empty, the training behavior of the model is undefined.\n\x09 */" },
		{ "ModuleRelativePath", "Internal/ModelProto.h" },
		{ "ToolTip", "Training-specific information. Sequentially executing all stored\n`TrainingInfoProto.algorithm`s and assigning their outputs following\nthe corresponding `TrainingInfoProto.update_binding`s is one training\niteration. Similarly, to initialize the model (as if training hasn't\nhappened), the user should sequentially execute all stored\n`TrainingInfoProto.initialization`s and assigns their outputs using\n`TrainingInfoProto.initialization_binding`s.\nIf this field is empty, the training behavior of the model is undefined." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_TrainingInfo = { "TrainingInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelProto, TrainingInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_TrainingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_TrainingInfo_MetaData)) }; // 425298834
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModelProto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_bIsLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_IRVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_OpsetImport_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_OpsetImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ProducerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ProducerVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_Domain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_ModelVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_DocString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_MetadataProps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_MetadataProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_TrainingInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelProto_Statics::NewProp_TrainingInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModelProto_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelProto,
		nullptr,
		&NewStructOps,
		"ModelProto",
		sizeof(FModelProto),
		alignof(FModelProto),
		Z_Construct_UScriptStruct_FModelProto_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelProto_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModelProto_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelProto_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModelProto()
	{
		if (!Z_Registration_Info_UScriptStruct_ModelProto.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModelProto.InnerSingleton, Z_Construct_UScriptStruct_FModelProto_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModelProto.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_ModelProto_Internal_ModelProto_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_ModelProto_Internal_ModelProto_h_Statics::EnumInfo[] = {
		{ EAttributeProtoAttributeType_StaticEnum, TEXT("EAttributeProtoAttributeType"), &Z_Registration_Info_UEnum_EAttributeProtoAttributeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1411313423U) },
		{ ETensorProtoDataType_StaticEnum, TEXT("ETensorProtoDataType"), &Z_Registration_Info_UEnum_ETensorProtoDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3788657370U) },
		{ ETensorProtoDataLocation_StaticEnum, TEXT("ETensorProtoDataLocation"), &Z_Registration_Info_UEnum_ETensorProtoDataLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1135937640U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_ModelProto_Internal_ModelProto_h_Statics::ScriptStructInfo[] = {
		{ FTensorProtoSegment::StaticStruct, Z_Construct_UScriptStruct_FTensorProtoSegment_Statics::NewStructOps, TEXT("TensorProtoSegment"), &Z_Registration_Info_UScriptStruct_TensorProtoSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTensorProtoSegment), 4036270330U) },
		{ FStringStringEntryProto::StaticStruct, Z_Construct_UScriptStruct_FStringStringEntryProto_Statics::NewStructOps, TEXT("StringStringEntryProto"), &Z_Registration_Info_UScriptStruct_StringStringEntryProto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStringStringEntryProto), 2249752139U) },
		{ FTensorShapeProtoDimension::StaticStruct, Z_Construct_UScriptStruct_FTensorShapeProtoDimension_Statics::NewStructOps, TEXT("TensorShapeProtoDimension"), &Z_Registration_Info_UScriptStruct_TensorShapeProtoDimension, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTensorShapeProtoDimension), 2711723200U) },
		{ FTensorShapeProto::StaticStruct, Z_Construct_UScriptStruct_FTensorShapeProto_Statics::NewStructOps, TEXT("TensorShapeProto"), &Z_Registration_Info_UScriptStruct_TensorShapeProto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTensorShapeProto), 3648355108U) },
		{ FTensorProto::StaticStruct, Z_Construct_UScriptStruct_FTensorProto_Statics::NewStructOps, TEXT("TensorProto"), &Z_Registration_Info_UScriptStruct_TensorProto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTensorProto), 812796809U) },
		{ FTypeProtoSequence::StaticStruct, Z_Construct_UScriptStruct_FTypeProtoSequence_Statics::NewStructOps, TEXT("TypeProtoSequence"), &Z_Registration_Info_UScriptStruct_TypeProtoSequence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypeProtoSequence), 265739954U) },
		{ FTypeProtoTensor::StaticStruct, Z_Construct_UScriptStruct_FTypeProtoTensor_Statics::NewStructOps, TEXT("TypeProtoTensor"), &Z_Registration_Info_UScriptStruct_TypeProtoTensor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypeProtoTensor), 3162808771U) },
		{ FTypeProtoMap::StaticStruct, Z_Construct_UScriptStruct_FTypeProtoMap_Statics::NewStructOps, TEXT("TypeProtoMap"), &Z_Registration_Info_UScriptStruct_TypeProtoMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypeProtoMap), 1379366140U) },
		{ FSparseTensorProto::StaticStruct, Z_Construct_UScriptStruct_FSparseTensorProto_Statics::NewStructOps, TEXT("SparseTensorProto"), &Z_Registration_Info_UScriptStruct_SparseTensorProto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSparseTensorProto), 2847513189U) },
		{ FTypeProto::StaticStruct, Z_Construct_UScriptStruct_FTypeProto_Statics::NewStructOps, TEXT("TypeProto"), &Z_Registration_Info_UScriptStruct_TypeProto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypeProto), 1180569076U) },
		{ FAttributeProto::StaticStruct, Z_Construct_UScriptStruct_FAttributeProto_Statics::NewStructOps, TEXT("AttributeProto"), &Z_Registration_Info_UScriptStruct_AttributeProto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeProto), 2599788549U) },
		{ FValueInfoProto::StaticStruct, Z_Construct_UScriptStruct_FValueInfoProto_Statics::NewStructOps, TEXT("ValueInfoProto"), &Z_Registration_Info_UScriptStruct_ValueInfoProto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValueInfoProto), 1023104842U) },
		{ FTensorAnnotation::StaticStruct, Z_Construct_UScriptStruct_FTensorAnnotation_Statics::NewStructOps, TEXT("TensorAnnotation"), &Z_Registration_Info_UScriptStruct_TensorAnnotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTensorAnnotation), 462738684U) },
		{ FNodeProto::StaticStruct, Z_Construct_UScriptStruct_FNodeProto_Statics::NewStructOps, TEXT("NodeProto"), &Z_Registration_Info_UScriptStruct_NodeProto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeProto), 582385195U) },
		{ FGraphProto::StaticStruct, Z_Construct_UScriptStruct_FGraphProto_Statics::NewStructOps, TEXT("GraphProto"), &Z_Registration_Info_UScriptStruct_GraphProto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphProto), 2830292306U) },
		{ FTrainingInfoProto::StaticStruct, Z_Construct_UScriptStruct_FTrainingInfoProto_Statics::NewStructOps, TEXT("TrainingInfoProto"), &Z_Registration_Info_UScriptStruct_TrainingInfoProto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrainingInfoProto), 425298834U) },
		{ FOperatorSetIdProto::StaticStruct, Z_Construct_UScriptStruct_FOperatorSetIdProto_Statics::NewStructOps, TEXT("OperatorSetIdProto"), &Z_Registration_Info_UScriptStruct_OperatorSetIdProto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOperatorSetIdProto), 3401378973U) },
		{ FModelProto::StaticStruct, Z_Construct_UScriptStruct_FModelProto_Statics::NewStructOps, TEXT("ModelProto"), &Z_Registration_Info_UScriptStruct_ModelProto, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModelProto), 3693583966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_ModelProto_Internal_ModelProto_h_337541749(TEXT("/Script/ModelProto"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_ModelProto_Internal_ModelProto_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_ModelProto_Internal_ModelProto_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_ModelProto_Internal_ModelProto_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_ModelProto_Internal_ModelProto_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
