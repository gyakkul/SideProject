// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NearestNeighborOptimizedNetwork.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNearestNeighborOptimizedNetwork() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_NoRegister();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_NoRegister();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer_NoRegister();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetwork();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetwork_NoRegister();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_NoRegister();
	NEARESTNEIGHBORMODEL_API UEnum* Z_Construct_UEnum_NearestNeighborModel_ENearestNeighborNetworkLayerType();
	NEARESTNEIGHBORMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter();
	UPackage* Z_Construct_UPackage__Script_NearestNeighborModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NearestNeighborNetworkParameter;
class UScriptStruct* FNearestNeighborNetworkParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NearestNeighborNetworkParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NearestNeighborNetworkParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter, (UObject*)Z_Construct_UPackage__Script_NearestNeighborModel(), TEXT("NearestNeighborNetworkParameter"));
	}
	return Z_Registration_Info_UScriptStruct_NearestNeighborNetworkParameter.OuterSingleton;
}
template<> NEARESTNEIGHBORMODEL_API UScriptStruct* StaticStruct<FNearestNeighborNetworkParameter>()
{
	return FNearestNeighborNetworkParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Shape_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNearestNeighborNetworkParameter>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNearestNeighborNetworkParameter, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Shape_MetaData[] = {
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNearestNeighborNetworkParameter, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Shape_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Shape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewProp_Shape,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
		nullptr,
		&NewStructOps,
		"NearestNeighborNetworkParameter",
		sizeof(FNearestNeighborNetworkParameter),
		alignof(FNearestNeighborNetworkParameter),
		Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_NearestNeighborNetworkParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NearestNeighborNetworkParameter.InnerSingleton, Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NearestNeighborNetworkParameter.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENearestNeighborNetworkLayerType;
	static UEnum* ENearestNeighborNetworkLayerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENearestNeighborNetworkLayerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENearestNeighborNetworkLayerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NearestNeighborModel_ENearestNeighborNetworkLayerType, (UObject*)Z_Construct_UPackage__Script_NearestNeighborModel(), TEXT("ENearestNeighborNetworkLayerType"));
		}
		return Z_Registration_Info_UEnum_ENearestNeighborNetworkLayerType.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODEL_API UEnum* StaticEnum<ENearestNeighborNetworkLayerType>()
	{
		return ENearestNeighborNetworkLayerType_StaticEnum();
	}
	struct Z_Construct_UEnum_NearestNeighborModel_ENearestNeighborNetworkLayerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NearestNeighborModel_ENearestNeighborNetworkLayerType_Statics::Enumerators[] = {
		{ "ENearestNeighborNetworkLayerType::None", (int64)ENearestNeighborNetworkLayerType::None },
		{ "ENearestNeighborNetworkLayerType::Gemm_Prelu", (int64)ENearestNeighborNetworkLayerType::Gemm_Prelu },
		{ "ENearestNeighborNetworkLayerType::Gemm", (int64)ENearestNeighborNetworkLayerType::Gemm },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NearestNeighborModel_ENearestNeighborNetworkLayerType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Gemm.Name", "ENearestNeighborNetworkLayerType::Gemm" },
		{ "Gemm_Prelu.Name", "ENearestNeighborNetworkLayerType::Gemm_Prelu" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
		{ "None.Name", "ENearestNeighborNetworkLayerType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NearestNeighborModel_ENearestNeighborNetworkLayerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NearestNeighborModel,
		nullptr,
		"ENearestNeighborNetworkLayerType",
		"ENearestNeighborNetworkLayerType",
		Z_Construct_UEnum_NearestNeighborModel_ENearestNeighborNetworkLayerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NearestNeighborModel_ENearestNeighborNetworkLayerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NearestNeighborModel_ENearestNeighborNetworkLayerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NearestNeighborModel_ENearestNeighborNetworkLayerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NearestNeighborModel_ENearestNeighborNetworkLayerType()
	{
		if (!Z_Registration_Info_UEnum_ENearestNeighborNetworkLayerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENearestNeighborNetworkLayerType.InnerSingleton, Z_Construct_UEnum_NearestNeighborModel_ENearestNeighborNetworkLayerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENearestNeighborNetworkLayerType.InnerSingleton;
	}
	DEFINE_FUNCTION(UNearestNeighborNetworkLayer::execAddParameter)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Values);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Shape);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddParameter(Z_Param_Out_Values,Z_Param_Out_Shape);
		P_NATIVE_END;
	}
	void UNearestNeighborNetworkLayer::StaticRegisterNativesUNearestNeighborNetworkLayer()
	{
		UClass* Class = UNearestNeighborNetworkLayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddParameter", &UNearestNeighborNetworkLayer::execAddParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics
	{
		struct NearestNeighborNetworkLayer_eventAddParameter_Parms
		{
			TArray<float> Values;
			TArray<int32> Shape;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Shape_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborNetworkLayer_eventAddParameter_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Shape_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborNetworkLayer_eventAddParameter_Parms, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Shape_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Shape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NewProp_Shape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformer" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborNetworkLayer, nullptr, "AddParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::NearestNeighborNetworkLayer_eventAddParameter_Parms), Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNearestNeighborNetworkLayer);
	UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer_NoRegister()
	{
		return UNearestNeighborNetworkLayer::StaticClass();
	}
	struct Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNearestNeighborNetworkLayer_AddParameter, "AddParameter" }, // 2515805577
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A general network layer that contains a list of parameters. The Run() method should be implemented by child classes */" },
		{ "IncludePath", "NearestNeighborOptimizedNetwork.h" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
		{ "ToolTip", "A general network layer that contains a list of parameters. The Run() method should be implemented by child classes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_NumInputs_MetaData[] = {
		{ "Category", "MLDeformer" },
		{ "Comment", "/** The weight matrix number of inputs (rows). */" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
		{ "ToolTip", "The weight matrix number of inputs (rows)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_NumInputs = { "NumInputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborNetworkLayer, NumInputs), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_NumInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_NumInputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_NumOutputs_MetaData[] = {
		{ "Category", "MLDeformer" },
		{ "Comment", "/** The weight matrix number of outputs (columns). */" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
		{ "ToolTip", "The weight matrix number of outputs (columns)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_NumOutputs = { "NumOutputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborNetworkLayer, NumOutputs), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_NumOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_NumOutputs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter, METADATA_PARAMS(nullptr, 0) }; // 3303749669
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_Parameters_MetaData[] = {
		{ "Comment", "// /** The parameters of the layer */\n" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
		{ "ToolTip", "The parameters of the layer" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborNetworkLayer, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_Parameters_MetaData)) }; // 3303749669
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_NumInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_NumOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::NewProp_Parameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearestNeighborNetworkLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::ClassParams = {
		&UNearestNeighborNetworkLayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer()
	{
		if (!Z_Registration_Info_UClass_UNearestNeighborNetworkLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNearestNeighborNetworkLayer.OuterSingleton, Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNearestNeighborNetworkLayer.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<UNearestNeighborNetworkLayer>()
	{
		return UNearestNeighborNetworkLayer::StaticClass();
	}
	UNearestNeighborNetworkLayer::UNearestNeighborNetworkLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearestNeighborNetworkLayer);
	UNearestNeighborNetworkLayer::~UNearestNeighborNetworkLayer() {}
	void UNearestNeighborNetworkLayer_Gemm_Prelu::StaticRegisterNativesUNearestNeighborNetworkLayer_Gemm_Prelu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNearestNeighborNetworkLayer_Gemm_Prelu);
	UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_NoRegister()
	{
		return UNearestNeighborNetworkLayer_Gemm_Prelu::StaticClass();
	}
	struct Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNearestNeighborNetworkLayer,
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Gemm: GEneral Matrix Multiplication: Wx + b */" },
		{ "IncludePath", "NearestNeighborOptimizedNetwork.h" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
		{ "ToolTip", "Gemm: GEneral Matrix Multiplication: Wx + b" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearestNeighborNetworkLayer_Gemm_Prelu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_Statics::ClassParams = {
		&UNearestNeighborNetworkLayer_Gemm_Prelu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu()
	{
		if (!Z_Registration_Info_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu.OuterSingleton, Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<UNearestNeighborNetworkLayer_Gemm_Prelu>()
	{
		return UNearestNeighborNetworkLayer_Gemm_Prelu::StaticClass();
	}
	UNearestNeighborNetworkLayer_Gemm_Prelu::UNearestNeighborNetworkLayer_Gemm_Prelu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearestNeighborNetworkLayer_Gemm_Prelu);
	UNearestNeighborNetworkLayer_Gemm_Prelu::~UNearestNeighborNetworkLayer_Gemm_Prelu() {}
	void UNearestNeighborNetworkLayer_Gemm::StaticRegisterNativesUNearestNeighborNetworkLayer_Gemm()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNearestNeighborNetworkLayer_Gemm);
	UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_NoRegister()
	{
		return UNearestNeighborNetworkLayer_Gemm::StaticClass();
	}
	struct Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNearestNeighborNetworkLayer,
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NearestNeighborOptimizedNetwork.h" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearestNeighborNetworkLayer_Gemm>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Statics::ClassParams = {
		&UNearestNeighborNetworkLayer_Gemm::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm()
	{
		if (!Z_Registration_Info_UClass_UNearestNeighborNetworkLayer_Gemm.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNearestNeighborNetworkLayer_Gemm.OuterSingleton, Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNearestNeighborNetworkLayer_Gemm.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<UNearestNeighborNetworkLayer_Gemm>()
	{
		return UNearestNeighborNetworkLayer_Gemm::StaticClass();
	}
	UNearestNeighborNetworkLayer_Gemm::UNearestNeighborNetworkLayer_Gemm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearestNeighborNetworkLayer_Gemm);
	UNearestNeighborNetworkLayer_Gemm::~UNearestNeighborNetworkLayer_Gemm() {}
	DEFINE_FUNCTION(UNearestNeighborOptimizedNetwork::execAddLayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LayerType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNearestNeighborNetworkLayer**)Z_Param__Result=P_THIS->AddLayer(Z_Param_LayerType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborOptimizedNetwork::execEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Empty();
		P_NATIVE_END;
	}
	void UNearestNeighborOptimizedNetwork::StaticRegisterNativesUNearestNeighborOptimizedNetwork()
	{
		UClass* Class = UNearestNeighborOptimizedNetwork::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLayer", &UNearestNeighborOptimizedNetwork::execAddLayer },
			{ "Empty", &UNearestNeighborOptimizedNetwork::execEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics
	{
		struct NearestNeighborOptimizedNetwork_eventAddLayer_Parms
		{
			int32 LayerType;
			UNearestNeighborNetworkLayer* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::NewProp_LayerType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::NewProp_LayerType = { "LayerType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborOptimizedNetwork_eventAddLayer_Parms, LayerType), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::NewProp_LayerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::NewProp_LayerType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborOptimizedNetwork_eventAddLayer_Parms, ReturnValue), Z_Construct_UClass_UNearestNeighborNetworkLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::NewProp_LayerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformer" },
		{ "Comment", "/**\n\x09 * Add a network layer.\n\x09 * @return A pointer to the layer, which will contain the parameters.\n\x09 */" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
		{ "ToolTip", "Add a network layer.\n@return A pointer to the layer, which will contain the parameters." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborOptimizedNetwork, nullptr, "AddLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::NearestNeighborOptimizedNetwork_eventAddLayer_Parms), Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_Empty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_Empty_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformer" },
		{ "Comment", "/** Clear the network, getting rid of all layers. */" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
		{ "ToolTip", "Clear the network, getting rid of all layers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborOptimizedNetwork, nullptr, "Empty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_Empty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_Empty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_Empty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_Empty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNearestNeighborOptimizedNetwork);
	UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetwork_NoRegister()
	{
		return UNearestNeighborOptimizedNetwork::StaticClass();
	}
	struct Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_AddLayer, "AddLayer" }, // 3624634633
		{ &Z_Construct_UFunction_UNearestNeighborOptimizedNetwork_Empty, "Empty" }, // 2331988058
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The specialized neural network for the MLDeformerModel.\n * This class is used to do inference at runtime at a higher performance than using UNeuralNetwork.\n */" },
		{ "IncludePath", "NearestNeighborOptimizedNetwork.h" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
		{ "ToolTip", "The specialized neural network for the MLDeformerModel.\nThis class is used to do inference at runtime at a higher performance than using UNeuralNetwork." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNearestNeighborNetworkLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::NewProp_Layers_MetaData[] = {
		{ "Comment", "/** The network layers */" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
		{ "ToolTip", "The network layers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborOptimizedNetwork, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::NewProp_Layers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::NewProp_Layers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::NewProp_Layers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearestNeighborOptimizedNetwork>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::ClassParams = {
		&UNearestNeighborOptimizedNetwork::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetwork()
	{
		if (!Z_Registration_Info_UClass_UNearestNeighborOptimizedNetwork.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNearestNeighborOptimizedNetwork.OuterSingleton, Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNearestNeighborOptimizedNetwork.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<UNearestNeighborOptimizedNetwork>()
	{
		return UNearestNeighborOptimizedNetwork::StaticClass();
	}
	UNearestNeighborOptimizedNetwork::UNearestNeighborOptimizedNetwork(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearestNeighborOptimizedNetwork);
	UNearestNeighborOptimizedNetwork::~UNearestNeighborOptimizedNetwork() {}
	void UNearestNeighborOptimizedNetworkInstance::StaticRegisterNativesUNearestNeighborOptimizedNetworkInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNearestNeighborOptimizedNetworkInstance);
	UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_NoRegister()
	{
		return UNearestNeighborOptimizedNetworkInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics
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
	UObject* (*const Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * An instance of a UNearestNeighborOptimizedNetwork.\n * The instance holds its own input and output buffers and only reads from the network object it was instanced from.\n * This allows it to be multithreaded.\n */" },
		{ "IncludePath", "NearestNeighborOptimizedNetwork.h" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
		{ "ToolTip", "An instance of a UNearestNeighborOptimizedNetwork.\nThe instance holds its own input and output buffers and only reads from the network object it was instanced from.\nThis allows it to be multithreaded." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::NewProp_Network_MetaData[] = {
		{ "Comment", "/** The neural network this is an instance of. */" },
		{ "ModuleRelativePath", "Private/NearestNeighborOptimizedNetwork.h" },
		{ "ToolTip", "The neural network this is an instance of." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::NewProp_Network = { "Network", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborOptimizedNetworkInstance, Network), Z_Construct_UClass_UNearestNeighborOptimizedNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::NewProp_Network_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::NewProp_Network_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::NewProp_Network,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearestNeighborOptimizedNetworkInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::ClassParams = {
		&UNearestNeighborOptimizedNetworkInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance()
	{
		if (!Z_Registration_Info_UClass_UNearestNeighborOptimizedNetworkInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNearestNeighborOptimizedNetworkInstance.OuterSingleton, Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNearestNeighborOptimizedNetworkInstance.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<UNearestNeighborOptimizedNetworkInstance>()
	{
		return UNearestNeighborOptimizedNetworkInstance::StaticClass();
	}
	UNearestNeighborOptimizedNetworkInstance::UNearestNeighborOptimizedNetworkInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearestNeighborOptimizedNetworkInstance);
	UNearestNeighborOptimizedNetworkInstance::~UNearestNeighborOptimizedNetworkInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_Statics::EnumInfo[] = {
		{ ENearestNeighborNetworkLayerType_StaticEnum, TEXT("ENearestNeighborNetworkLayerType"), &Z_Registration_Info_UEnum_ENearestNeighborNetworkLayerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 868210300U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_Statics::ScriptStructInfo[] = {
		{ FNearestNeighborNetworkParameter::StaticStruct, Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics::NewStructOps, TEXT("NearestNeighborNetworkParameter"), &Z_Registration_Info_UScriptStruct_NearestNeighborNetworkParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNearestNeighborNetworkParameter), 3303749669U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNearestNeighborNetworkLayer, UNearestNeighborNetworkLayer::StaticClass, TEXT("UNearestNeighborNetworkLayer"), &Z_Registration_Info_UClass_UNearestNeighborNetworkLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNearestNeighborNetworkLayer), 650793646U) },
		{ Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu, UNearestNeighborNetworkLayer_Gemm_Prelu::StaticClass, TEXT("UNearestNeighborNetworkLayer_Gemm_Prelu"), &Z_Registration_Info_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNearestNeighborNetworkLayer_Gemm_Prelu), 2699311434U) },
		{ Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm, UNearestNeighborNetworkLayer_Gemm::StaticClass, TEXT("UNearestNeighborNetworkLayer_Gemm"), &Z_Registration_Info_UClass_UNearestNeighborNetworkLayer_Gemm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNearestNeighborNetworkLayer_Gemm), 3841895934U) },
		{ Z_Construct_UClass_UNearestNeighborOptimizedNetwork, UNearestNeighborOptimizedNetwork::StaticClass, TEXT("UNearestNeighborOptimizedNetwork"), &Z_Registration_Info_UClass_UNearestNeighborOptimizedNetwork, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNearestNeighborOptimizedNetwork), 3798335613U) },
		{ Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance, UNearestNeighborOptimizedNetworkInstance::StaticClass, TEXT("UNearestNeighborOptimizedNetworkInstance"), &Z_Registration_Info_UClass_UNearestNeighborOptimizedNetworkInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNearestNeighborOptimizedNetworkInstance), 4237243858U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_1079699039(TEXT("/Script/NearestNeighborModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
