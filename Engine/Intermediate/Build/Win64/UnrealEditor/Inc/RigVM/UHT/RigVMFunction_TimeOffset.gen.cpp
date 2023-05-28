// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_TimeOffset() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_TimeOffsetFloat>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_TimeOffsetFloat cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetFloat;
class UScriptStruct* FRigVMFunction_TimeOffsetFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_TimeOffsetFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_TimeOffsetFloat_Execute;
		Arguments_FRigVMFunction_TimeOffsetFloat_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigVMFunction_TimeOffsetFloat_Execute.Emplace(TEXT("SecondsAgo"), TEXT("float"));
		Arguments_FRigVMFunction_TimeOffsetFloat_Execute.Emplace(TEXT("BufferSize"), TEXT("int32"));
		Arguments_FRigVMFunction_TimeOffsetFloat_Execute.Emplace(TEXT("TimeRange"), TEXT("float"));
		Arguments_FRigVMFunction_TimeOffsetFloat_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigVMFunction_TimeOffsetFloat_Execute.Emplace(TEXT("Buffer"), TEXT("TArray<float>"));
		Arguments_FRigVMFunction_TimeOffsetFloat_Execute.Emplace(TEXT("DeltaTimes"), TEXT("TArray<float>"));
		Arguments_FRigVMFunction_TimeOffsetFloat_Execute.Emplace(TEXT("LastInsertIndex"), TEXT("int32"));
		Arguments_FRigVMFunction_TimeOffsetFloat_Execute.Emplace(TEXT("UpperBound"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_TimeOffsetFloat::Execute"), &FRigVMFunction_TimeOffsetFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetFloat.OuterSingleton, Arguments_FRigVMFunction_TimeOffsetFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetFloat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_TimeOffsetFloat>()
{
	return FRigVMFunction_TimeOffsetFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsAgo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsAgo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeltaTimes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInsertIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpperBound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Records a value over time and can access the value from the past\n */" },
		{ "DisplayName", "Value Over Time (Float)" },
		{ "Keywords", "Buffer,Delta,History,Previous,TimeOffset,Delay" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "TemplateName", "TimeOffset" },
		{ "ToolTip", "Records a value over time and can access the value from the past" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_TimeOffsetFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The value to record */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "ToolTip", "The value to record" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_SecondsAgo_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Seconds of time in the past you want to query the value for */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "ToolTip", "Seconds of time in the past you want to query the value for" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_SecondsAgo = { "SecondsAgo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetFloat, SecondsAgo), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_SecondsAgo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_SecondsAgo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The sampling precision of the buffer. The higher the more precise - the more memory usage. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "ToolTip", "The sampling precision of the buffer. The higher the more precise - the more memory usage." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetFloat, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_TimeRange_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The maximum time required for offsetting in seconds. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "ToolTip", "The maximum time required for offsetting in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_TimeRange = { "TimeRange", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetFloat, TimeRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_TimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_TimeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetFloat, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Buffer_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 2, 512)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetFloat, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Buffer_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_DeltaTimes_Inner = { "DeltaTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_DeltaTimes_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 2, 512)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_DeltaTimes = { "DeltaTimes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetFloat, DeltaTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_DeltaTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_DeltaTimes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_LastInsertIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_LastInsertIndex = { "LastInsertIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetFloat, LastInsertIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_LastInsertIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_LastInsertIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetFloat, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_UpperBound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_SecondsAgo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_TimeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_DeltaTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_DeltaTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_LastInsertIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewProp_UpperBound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_TimeOffsetFloat",
		sizeof(FRigVMFunction_TimeOffsetFloat),
		alignof(FRigVMFunction_TimeOffsetFloat),
		Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetFloat.InnerSingleton;
	}

void FRigVMFunction_TimeOffsetFloat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_TimeOffsetFloat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		SecondsAgo,
		BufferSize,
		TimeRange,
		Result,
		Buffer,
		DeltaTimes,
		LastInsertIndex,
		UpperBound
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_TimeOffsetVector>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_TimeOffsetVector cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetVector;
class UScriptStruct* FRigVMFunction_TimeOffsetVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_TimeOffsetVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_TimeOffsetVector_Execute;
		Arguments_FRigVMFunction_TimeOffsetVector_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigVMFunction_TimeOffsetVector_Execute.Emplace(TEXT("SecondsAgo"), TEXT("float"));
		Arguments_FRigVMFunction_TimeOffsetVector_Execute.Emplace(TEXT("BufferSize"), TEXT("int32"));
		Arguments_FRigVMFunction_TimeOffsetVector_Execute.Emplace(TEXT("TimeRange"), TEXT("float"));
		Arguments_FRigVMFunction_TimeOffsetVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigVMFunction_TimeOffsetVector_Execute.Emplace(TEXT("Buffer"), TEXT("TArray<FVector>"));
		Arguments_FRigVMFunction_TimeOffsetVector_Execute.Emplace(TEXT("DeltaTimes"), TEXT("TArray<float>"));
		Arguments_FRigVMFunction_TimeOffsetVector_Execute.Emplace(TEXT("LastInsertIndex"), TEXT("int32"));
		Arguments_FRigVMFunction_TimeOffsetVector_Execute.Emplace(TEXT("UpperBound"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_TimeOffsetVector::Execute"), &FRigVMFunction_TimeOffsetVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetVector.OuterSingleton, Arguments_FRigVMFunction_TimeOffsetVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_TimeOffsetVector>()
{
	return FRigVMFunction_TimeOffsetVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsAgo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsAgo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeltaTimes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInsertIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpperBound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Records a value over time and can access the value from the past\n */" },
		{ "DisplayName", "Value Over Time (Vector)" },
		{ "Keywords", "Buffer,Delta,History,Previous,TimeOffset,Delay" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "TemplateName", "TimeOffset" },
		{ "ToolTip", "Records a value over time and can access the value from the past" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_TimeOffsetVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The value to record */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "ToolTip", "The value to record" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_SecondsAgo_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Seconds of time in the past you want to query the value for */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "ToolTip", "Seconds of time in the past you want to query the value for" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_SecondsAgo = { "SecondsAgo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetVector, SecondsAgo), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_SecondsAgo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_SecondsAgo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The sampling precision of the buffer. The higher the more precise - the more memory usage. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "ToolTip", "The sampling precision of the buffer. The higher the more precise - the more memory usage." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetVector, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_TimeRange_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The maximum time required for offsetting in seconds. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "ToolTip", "The maximum time required for offsetting in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_TimeRange = { "TimeRange", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetVector, TimeRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_TimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_TimeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Buffer_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 2, 512)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetVector, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Buffer_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_DeltaTimes_Inner = { "DeltaTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_DeltaTimes_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 2, 512)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_DeltaTimes = { "DeltaTimes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetVector, DeltaTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_DeltaTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_DeltaTimes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_LastInsertIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_LastInsertIndex = { "LastInsertIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetVector, LastInsertIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_LastInsertIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_LastInsertIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetVector, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_UpperBound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_SecondsAgo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_TimeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_DeltaTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_DeltaTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_LastInsertIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewProp_UpperBound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_TimeOffsetVector",
		sizeof(FRigVMFunction_TimeOffsetVector),
		alignof(FRigVMFunction_TimeOffsetVector),
		Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetVector.InnerSingleton;
	}

void FRigVMFunction_TimeOffsetVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_TimeOffsetVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		SecondsAgo,
		BufferSize,
		TimeRange,
		Result,
		Buffer,
		DeltaTimes,
		LastInsertIndex,
		UpperBound
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_TimeOffsetTransform>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_TimeOffsetTransform cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetTransform;
class UScriptStruct* FRigVMFunction_TimeOffsetTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_TimeOffsetTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_TimeOffsetTransform_Execute;
		Arguments_FRigVMFunction_TimeOffsetTransform_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigVMFunction_TimeOffsetTransform_Execute.Emplace(TEXT("SecondsAgo"), TEXT("float"));
		Arguments_FRigVMFunction_TimeOffsetTransform_Execute.Emplace(TEXT("BufferSize"), TEXT("int32"));
		Arguments_FRigVMFunction_TimeOffsetTransform_Execute.Emplace(TEXT("TimeRange"), TEXT("float"));
		Arguments_FRigVMFunction_TimeOffsetTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigVMFunction_TimeOffsetTransform_Execute.Emplace(TEXT("Buffer"), TEXT("TArray<FTransform>"));
		Arguments_FRigVMFunction_TimeOffsetTransform_Execute.Emplace(TEXT("DeltaTimes"), TEXT("TArray<float>"));
		Arguments_FRigVMFunction_TimeOffsetTransform_Execute.Emplace(TEXT("LastInsertIndex"), TEXT("int32"));
		Arguments_FRigVMFunction_TimeOffsetTransform_Execute.Emplace(TEXT("UpperBound"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_TimeOffsetTransform::Execute"), &FRigVMFunction_TimeOffsetTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetTransform.OuterSingleton, Arguments_FRigVMFunction_TimeOffsetTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_TimeOffsetTransform>()
{
	return FRigVMFunction_TimeOffsetTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsAgo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsAgo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeltaTimes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInsertIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpperBound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Records a value over time and can access the value from the past\n */" },
		{ "DisplayName", "Value Over Time (Transform)" },
		{ "Keywords", "Buffer,Delta,History,Previous,TimeOffset,Delay" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "TemplateName", "TimeOffset" },
		{ "ToolTip", "Records a value over time and can access the value from the past" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_TimeOffsetTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The value to record */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "ToolTip", "The value to record" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_SecondsAgo_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Seconds of time in the past you want to query the value for */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "ToolTip", "Seconds of time in the past you want to query the value for" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_SecondsAgo = { "SecondsAgo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetTransform, SecondsAgo), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_SecondsAgo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_SecondsAgo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The sampling precision of the buffer. The higher the more precise - the more memory usage. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "ToolTip", "The sampling precision of the buffer. The higher the more precise - the more memory usage." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetTransform, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_TimeRange_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The maximum time required for offsetting in seconds. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "ToolTip", "The maximum time required for offsetting in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_TimeRange = { "TimeRange", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetTransform, TimeRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_TimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_TimeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Buffer_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 2, 512)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetTransform, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Buffer_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_DeltaTimes_Inner = { "DeltaTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_DeltaTimes_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 2, 512)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_DeltaTimes = { "DeltaTimes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetTransform, DeltaTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_DeltaTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_DeltaTimes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_LastInsertIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_LastInsertIndex = { "LastInsertIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetTransform, LastInsertIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_LastInsertIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_LastInsertIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_TimeOffsetTransform, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_UpperBound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_SecondsAgo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_TimeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_DeltaTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_DeltaTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_LastInsertIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewProp_UpperBound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_TimeOffsetTransform",
		sizeof(FRigVMFunction_TimeOffsetTransform),
		alignof(FRigVMFunction_TimeOffsetTransform),
		Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetTransform.InnerSingleton;
	}

void FRigVMFunction_TimeOffsetTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_TimeOffsetTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		SecondsAgo,
		BufferSize,
		TimeRange,
		Result,
		Buffer,
		DeltaTimes,
		LastInsertIndex,
		UpperBound
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_TimeOffset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_TimeOffset_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_TimeOffsetFloat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics::NewStructOps, TEXT("RigVMFunction_TimeOffsetFloat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_TimeOffsetFloat), 4062520303U) },
		{ FRigVMFunction_TimeOffsetVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics::NewStructOps, TEXT("RigVMFunction_TimeOffsetVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_TimeOffsetVector), 2104368251U) },
		{ FRigVMFunction_TimeOffsetTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics::NewStructOps, TEXT("RigVMFunction_TimeOffsetTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_TimeOffsetTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_TimeOffsetTransform), 2774025522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_TimeOffset_h_1404290369(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_TimeOffset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_TimeOffset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
