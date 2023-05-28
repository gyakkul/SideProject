// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Simulation/RigVMFunction_Kalman.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_Kalman() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBase();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_KalmanFloat>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_KalmanFloat cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanFloat;
class UScriptStruct* FRigVMFunction_KalmanFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_KalmanFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_KalmanFloat_Execute;
		Arguments_FRigVMFunction_KalmanFloat_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigVMFunction_KalmanFloat_Execute.Emplace(TEXT("BufferSize"), TEXT("int32"));
		Arguments_FRigVMFunction_KalmanFloat_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigVMFunction_KalmanFloat_Execute.Emplace(TEXT("Buffer"), TEXT("TArray<float>"));
		Arguments_FRigVMFunction_KalmanFloat_Execute.Emplace(TEXT("LastInsertIndex"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_KalmanFloat::Execute"), &FRigVMFunction_KalmanFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanFloat.OuterSingleton, Arguments_FRigVMFunction_KalmanFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanFloat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_KalmanFloat>()
{
	return FRigVMFunction_KalmanFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInsertIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Averages a value over time.\n * This uses a Kalman Filter internally.\n */" },
		{ "DisplayName", "Average Over Time (Float)" },
		{ "Keywords", "Average,Smooth,KalmanFilter" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
		{ "TemplateName", "KalmanFilter" },
		{ "ToolTip", "Averages a value over time.\nThis uses a Kalman Filter internally." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_KalmanFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanFloat, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanFloat, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Buffer_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 1, 512)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanFloat, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Buffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_LastInsertIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_LastInsertIndex = { "LastInsertIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanFloat, LastInsertIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_LastInsertIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_LastInsertIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewProp_LastInsertIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_KalmanFloat",
		sizeof(FRigVMFunction_KalmanFloat),
		alignof(FRigVMFunction_KalmanFloat),
		Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanFloat.InnerSingleton;
	}

void FRigVMFunction_KalmanFloat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_KalmanFloat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		BufferSize,
		Result,
		Buffer,
		LastInsertIndex
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_KalmanVector>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_KalmanVector cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanVector;
class UScriptStruct* FRigVMFunction_KalmanVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_KalmanVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_KalmanVector_Execute;
		Arguments_FRigVMFunction_KalmanVector_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigVMFunction_KalmanVector_Execute.Emplace(TEXT("BufferSize"), TEXT("int32"));
		Arguments_FRigVMFunction_KalmanVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigVMFunction_KalmanVector_Execute.Emplace(TEXT("Buffer"), TEXT("TArray<FVector>"));
		Arguments_FRigVMFunction_KalmanVector_Execute.Emplace(TEXT("LastInsertIndex"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_KalmanVector::Execute"), &FRigVMFunction_KalmanVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanVector.OuterSingleton, Arguments_FRigVMFunction_KalmanVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_KalmanVector>()
{
	return FRigVMFunction_KalmanVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInsertIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Averages a value over time.\n * This uses a Kalman Filter internally.\n */" },
		{ "DisplayName", "Average Over Time (Vector)" },
		{ "Keywords", "Average,Smooth,KalmanFilter" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
		{ "TemplateName", "KalmanFilter" },
		{ "ToolTip", "Averages a value over time.\nThis uses a Kalman Filter internally." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_KalmanVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanVector, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Buffer_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 1, 512)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanVector, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Buffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_LastInsertIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_LastInsertIndex = { "LastInsertIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanVector, LastInsertIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_LastInsertIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_LastInsertIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewProp_LastInsertIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_KalmanVector",
		sizeof(FRigVMFunction_KalmanVector),
		alignof(FRigVMFunction_KalmanVector),
		Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanVector.InnerSingleton;
	}

void FRigVMFunction_KalmanVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_KalmanVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		BufferSize,
		Result,
		Buffer,
		LastInsertIndex
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_KalmanTransform>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_KalmanTransform cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanTransform;
class UScriptStruct* FRigVMFunction_KalmanTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_KalmanTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_KalmanTransform_Execute;
		Arguments_FRigVMFunction_KalmanTransform_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigVMFunction_KalmanTransform_Execute.Emplace(TEXT("BufferSize"), TEXT("int32"));
		Arguments_FRigVMFunction_KalmanTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigVMFunction_KalmanTransform_Execute.Emplace(TEXT("Buffer"), TEXT("TArray<FTransform>"));
		Arguments_FRigVMFunction_KalmanTransform_Execute.Emplace(TEXT("LastInsertIndex"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_KalmanTransform::Execute"), &FRigVMFunction_KalmanTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanTransform.OuterSingleton, Arguments_FRigVMFunction_KalmanTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_KalmanTransform>()
{
	return FRigVMFunction_KalmanTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInsertIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Averages a transform over time.\n * This uses a Kalman Filter internally.\n */" },
		{ "DisplayName", "Average Over Time (Transform)" },
		{ "Keywords", "Average,Smooth,KalmanFilter" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
		{ "TemplateName", "KalmanFilter" },
		{ "ToolTip", "Averages a transform over time.\nThis uses a Kalman Filter internally." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_KalmanTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanTransform, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Buffer_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 1, 512)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanTransform, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Buffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_LastInsertIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_LastInsertIndex = { "LastInsertIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_KalmanTransform, LastInsertIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_LastInsertIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_LastInsertIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewProp_LastInsertIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_KalmanTransform",
		sizeof(FRigVMFunction_KalmanTransform),
		alignof(FRigVMFunction_KalmanTransform),
		Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanTransform.InnerSingleton;
	}

void FRigVMFunction_KalmanTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_KalmanTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		BufferSize,
		Result,
		Buffer,
		LastInsertIndex
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Kalman_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Kalman_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_KalmanFloat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics::NewStructOps, TEXT("RigVMFunction_KalmanFloat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_KalmanFloat), 4201006170U) },
		{ FRigVMFunction_KalmanVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics::NewStructOps, TEXT("RigVMFunction_KalmanVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_KalmanVector), 1912910784U) },
		{ FRigVMFunction_KalmanTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics::NewStructOps, TEXT("RigVMFunction_KalmanTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_KalmanTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_KalmanTransform), 970609586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Kalman_h_3832963737(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Kalman_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Kalman_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
