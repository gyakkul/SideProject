// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Math/RigVMFunction_Noise.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_Noise() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_NoiseFloat>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_NoiseFloat cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseFloat;
class UScriptStruct* FRigVMFunction_NoiseFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_NoiseFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_NoiseFloat_Execute;
		Arguments_FRigVMFunction_NoiseFloat_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigVMFunction_NoiseFloat_Execute.Emplace(TEXT("Speed"), TEXT("float"));
		Arguments_FRigVMFunction_NoiseFloat_Execute.Emplace(TEXT("Frequency"), TEXT("float"));
		Arguments_FRigVMFunction_NoiseFloat_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigVMFunction_NoiseFloat_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigVMFunction_NoiseFloat_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigVMFunction_NoiseFloat_Execute.Emplace(TEXT("Time"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_NoiseFloat::Execute"), &FRigVMFunction_NoiseFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseFloat.OuterSingleton, Arguments_FRigVMFunction_NoiseFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseFloat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_NoiseFloat>()
{
	return FRigVMFunction_NoiseFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Math|Noise" },
		{ "Comment", "/**\n * Generates a float through a noise fluctuation process between a min and a max through speed\n */" },
		{ "DisplayName", "Noise (Float)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
		{ "TemplateName", "Noise" },
		{ "ToolTip", "Generates a float through a noise fluctuation process between a min and a max through speed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_NoiseFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseFloat, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseFloat, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseFloat, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseFloat, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseFloat, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseFloat, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
		&NewStructOps,
		"RigVMFunction_NoiseFloat",
		sizeof(FRigVMFunction_NoiseFloat),
		alignof(FRigVMFunction_NoiseFloat),
		Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseFloat.InnerSingleton;
	}

void FRigVMFunction_NoiseFloat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_NoiseFloat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Speed,
		Frequency,
		Minimum,
		Maximum,
		Result,
		Time
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_NoiseDouble>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_NoiseDouble cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseDouble;
class UScriptStruct* FRigVMFunction_NoiseDouble::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseDouble.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseDouble.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_NoiseDouble"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_NoiseDouble_Execute;
		Arguments_FRigVMFunction_NoiseDouble_Execute.Emplace(TEXT("Value"), TEXT("double"));
		Arguments_FRigVMFunction_NoiseDouble_Execute.Emplace(TEXT("Speed"), TEXT("double"));
		Arguments_FRigVMFunction_NoiseDouble_Execute.Emplace(TEXT("Frequency"), TEXT("double"));
		Arguments_FRigVMFunction_NoiseDouble_Execute.Emplace(TEXT("Minimum"), TEXT("double"));
		Arguments_FRigVMFunction_NoiseDouble_Execute.Emplace(TEXT("Maximum"), TEXT("double"));
		Arguments_FRigVMFunction_NoiseDouble_Execute.Emplace(TEXT("Result"), TEXT("double"));
		Arguments_FRigVMFunction_NoiseDouble_Execute.Emplace(TEXT("Time"), TEXT("double"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_NoiseDouble::Execute"), &FRigVMFunction_NoiseDouble::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseDouble.OuterSingleton, Arguments_FRigVMFunction_NoiseDouble_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseDouble.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_NoiseDouble>()
{
	return FRigVMFunction_NoiseDouble::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Math|Noise" },
		{ "Comment", "/**\n * Generates a float through a noise fluctuation process between a min and a max through speed\n */" },
		{ "DisplayName", "Noise (Double)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
		{ "TemplateName", "Noise" },
		{ "ToolTip", "Generates a float through a noise fluctuation process between a min and a max through speed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_NoiseDouble>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseDouble, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseDouble, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseDouble, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseDouble, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseDouble, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseDouble, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseDouble, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
		&NewStructOps,
		"RigVMFunction_NoiseDouble",
		sizeof(FRigVMFunction_NoiseDouble),
		alignof(FRigVMFunction_NoiseDouble),
		Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseDouble.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseDouble.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseDouble.InnerSingleton;
	}

void FRigVMFunction_NoiseDouble::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_NoiseDouble::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Speed,
		Frequency,
		Minimum,
		Maximum,
		Result,
		Time
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_NoiseVector>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_NoiseVector cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector;
class UScriptStruct* FRigVMFunction_NoiseVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_NoiseVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_NoiseVector_Execute;
		Arguments_FRigVMFunction_NoiseVector_Execute.Emplace(TEXT("Position"), TEXT("FVector"));
		Arguments_FRigVMFunction_NoiseVector_Execute.Emplace(TEXT("Speed"), TEXT("FVector"));
		Arguments_FRigVMFunction_NoiseVector_Execute.Emplace(TEXT("Frequency"), TEXT("FVector"));
		Arguments_FRigVMFunction_NoiseVector_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigVMFunction_NoiseVector_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigVMFunction_NoiseVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigVMFunction_NoiseVector_Execute.Emplace(TEXT("Time"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_NoiseVector::Execute"), &FRigVMFunction_NoiseVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector.OuterSingleton, Arguments_FRigVMFunction_NoiseVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_NoiseVector>()
{
	return FRigVMFunction_NoiseVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Math|Noise" },
		{ "Comment", "/**\n * Generates a vector through a noise fluctuation process between a min and a max through speed\n */" },
		{ "Deprecated", "5.0.0" },
		{ "DisplayName", "Noise (Vector)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
		{ "TemplateName", "Noise" },
		{ "ToolTip", "Generates a vector through a noise fluctuation process between a min and a max through speed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_NoiseVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector, Speed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector, Frequency), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector, Time), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
		&NewStructOps,
		"RigVMFunction_NoiseVector",
		sizeof(FRigVMFunction_NoiseVector),
		alignof(FRigVMFunction_NoiseVector),
		Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector.InnerSingleton;
	}

void FRigVMFunction_NoiseVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_NoiseVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Position,
		Speed,
		Frequency,
		Minimum,
		Maximum,
		Result,
		Time
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_NoiseVector2>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_NoiseVector2 cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector2;
class UScriptStruct* FRigVMFunction_NoiseVector2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_NoiseVector2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_NoiseVector2_Execute;
		Arguments_FRigVMFunction_NoiseVector2_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigVMFunction_NoiseVector2_Execute.Emplace(TEXT("Speed"), TEXT("FVector"));
		Arguments_FRigVMFunction_NoiseVector2_Execute.Emplace(TEXT("Frequency"), TEXT("FVector"));
		Arguments_FRigVMFunction_NoiseVector2_Execute.Emplace(TEXT("Minimum"), TEXT("double"));
		Arguments_FRigVMFunction_NoiseVector2_Execute.Emplace(TEXT("Maximum"), TEXT("double"));
		Arguments_FRigVMFunction_NoiseVector2_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigVMFunction_NoiseVector2_Execute.Emplace(TEXT("Time"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_NoiseVector2::Execute"), &FRigVMFunction_NoiseVector2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector2.OuterSingleton, Arguments_FRigVMFunction_NoiseVector2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector2.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_NoiseVector2>()
{
	return FRigVMFunction_NoiseVector2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Math|Noise" },
		{ "Comment", "/**\n * Generates a vector through a noise fluctuation process between a min and a max through speed\n */" },
		{ "DisplayName", "Noise (Vector)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
		{ "TemplateName", "Noise" },
		{ "ToolTip", "Generates a vector through a noise fluctuation process between a min and a max through speed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_NoiseVector2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector2, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector2, Speed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector2, Frequency), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector2, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector2, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector2, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_NoiseVector2, Time), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
		&NewStructOps,
		"RigVMFunction_NoiseVector2",
		sizeof(FRigVMFunction_NoiseVector2),
		alignof(FRigVMFunction_NoiseVector2),
		Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector2.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector2.InnerSingleton;
	}

void FRigVMFunction_NoiseVector2::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_NoiseVector2::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Speed,
		Frequency,
		Minimum,
		Maximum,
		Result,
		Time
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_NoiseFloat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics::NewStructOps, TEXT("RigVMFunction_NoiseFloat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_NoiseFloat), 3135422646U) },
		{ FRigVMFunction_NoiseDouble::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics::NewStructOps, TEXT("RigVMFunction_NoiseDouble"), &Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseDouble, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_NoiseDouble), 1764127994U) },
		{ FRigVMFunction_NoiseVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics::NewStructOps, TEXT("RigVMFunction_NoiseVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_NoiseVector), 37267310U) },
		{ FRigVMFunction_NoiseVector2::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics::NewStructOps, TEXT("RigVMFunction_NoiseVector2"), &Z_Registration_Info_UScriptStruct_RigVMFunction_NoiseVector2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_NoiseVector2), 2833478213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h_2594384744(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
