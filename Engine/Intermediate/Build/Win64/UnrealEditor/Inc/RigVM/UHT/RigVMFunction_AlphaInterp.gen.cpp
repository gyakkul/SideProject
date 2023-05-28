// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h"
#include "../../Source/Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_AlphaInterp() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputRange();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBase();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_AlphaInterp>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_AlphaInterp cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterp;
class UScriptStruct* FRigVMFunction_AlphaInterp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AlphaInterp"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AlphaInterp_Execute;
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("Bias"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("bMapRange"), TEXT("bool"));
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("InRange"), TEXT("FInputRange"));
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("OutRange"), TEXT("FInputRange"));
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("bClampResult"), TEXT("bool"));
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("ClampMin"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("ClampMax"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("bInterpResult"), TEXT("bool"));
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("InterpSpeedIncreasing"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("InterpSpeedDecreasing"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterp_Execute.Emplace(TEXT("ScaleBiasClamp"), TEXT("FInputScaleBiasClamp"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AlphaInterp::Execute"), &FRigVMFunction_AlphaInterp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterp.OuterSingleton, Arguments_FRigVMFunction_AlphaInterp_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AlphaInterp>()
{
	return FRigVMFunction_AlphaInterp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMapRange_MetaData[];
#endif
		static void NewProp_bMapRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMapRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[];
#endif
		static void NewProp_bClampResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpResult_MetaData[];
#endif
		static void NewProp_bInterpResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedIncreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIncreasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedDecreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedDecreasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleBiasClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleBiasClamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Takes in a float value and outputs an accumulated value with a customized scale and clamp\n */" },
		{ "DisplayName", "Alpha Interpolate" },
		{ "Keywords", "Alpha,Lerp,LinearInterpolate" },
		{ "MenuDescSuffix", "(Float)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
		{ "TemplateName", "AlphaInterp" },
		{ "ToolTip", "Takes in a float value and outputs an accumulated value with a customized scale and clamp" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AlphaInterp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterp, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterp, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterp, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bMapRange_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bMapRange_SetBit(void* Obj)
	{
		((FRigVMFunction_AlphaInterp*)Obj)->bMapRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bMapRange = { "bMapRange", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AlphaInterp), &Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bMapRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bMapRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bMapRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InRange_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bMapRange" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterp, InRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InRange_MetaData)) }; // 1771925650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_OutRange_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bMapRange" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_OutRange = { "OutRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterp, OutRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_OutRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_OutRange_MetaData)) }; // 1771925650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bClampResult_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bClampResult_SetBit(void* Obj)
	{
		((FRigVMFunction_AlphaInterp*)Obj)->bClampResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AlphaInterp), &Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bClampResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bClampResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ClampMin_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bClampResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterp, ClampMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ClampMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ClampMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ClampMax_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bClampResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterp, ClampMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ClampMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ClampMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bInterpResult_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bInterpResult_SetBit(void* Obj)
	{
		((FRigVMFunction_AlphaInterp*)Obj)->bInterpResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bInterpResult = { "bInterpResult", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AlphaInterp), &Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bInterpResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bInterpResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bInterpResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InterpSpeedIncreasing_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bInterpResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InterpSpeedIncreasing = { "InterpSpeedIncreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterp, InterpSpeedIncreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InterpSpeedIncreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InterpSpeedIncreasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InterpSpeedDecreasing_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bInterpResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InterpSpeedDecreasing = { "InterpSpeedDecreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterp, InterpSpeedDecreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InterpSpeedDecreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InterpSpeedDecreasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ScaleBiasClamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ScaleBiasClamp = { "ScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterp, ScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ScaleBiasClamp_MetaData)) }; // 1479025939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Bias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bMapRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_OutRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bClampResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ClampMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ClampMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_bInterpResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InterpSpeedIncreasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_InterpSpeedDecreasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewProp_ScaleBiasClamp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_AlphaInterp",
		sizeof(FRigVMFunction_AlphaInterp),
		alignof(FRigVMFunction_AlphaInterp),
		Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterp.InnerSingleton;
	}

void FRigVMFunction_AlphaInterp::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AlphaInterp::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Scale,
		Bias,
		bMapRange,
		InRange,
		OutRange,
		bClampResult,
		ClampMin,
		ClampMax,
		bInterpResult,
		InterpSpeedIncreasing,
		InterpSpeedDecreasing,
		Result,
		ScaleBiasClamp
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_AlphaInterpVector>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_AlphaInterpVector cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpVector;
class UScriptStruct* FRigVMFunction_AlphaInterpVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AlphaInterpVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AlphaInterpVector_Execute;
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("Bias"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("bMapRange"), TEXT("bool"));
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("InRange"), TEXT("FInputRange"));
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("OutRange"), TEXT("FInputRange"));
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("bClampResult"), TEXT("bool"));
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("ClampMin"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("ClampMax"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("bInterpResult"), TEXT("bool"));
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("InterpSpeedIncreasing"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("InterpSpeedDecreasing"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigVMFunction_AlphaInterpVector_Execute.Emplace(TEXT("ScaleBiasClamp"), TEXT("FInputScaleBiasClamp"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AlphaInterpVector::Execute"), &FRigVMFunction_AlphaInterpVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpVector.OuterSingleton, Arguments_FRigVMFunction_AlphaInterpVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AlphaInterpVector>()
{
	return FRigVMFunction_AlphaInterpVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMapRange_MetaData[];
#endif
		static void NewProp_bMapRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMapRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[];
#endif
		static void NewProp_bClampResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpResult_MetaData[];
#endif
		static void NewProp_bInterpResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedIncreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIncreasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedDecreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedDecreasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleBiasClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleBiasClamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Takes in a vector value and outputs an accumulated value with a customized scale and clamp\n */" },
		{ "DisplayName", "Alpha Interpolate" },
		{ "Keywords", "Alpha,Lerp,LinearInterpolate" },
		{ "MenuDescSuffix", "(Vector)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
		{ "TemplateName", "AlphaInterp" },
		{ "ToolTip", "Takes in a vector value and outputs an accumulated value with a customized scale and clamp" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AlphaInterpVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpVector, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpVector, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bMapRange_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bMapRange_SetBit(void* Obj)
	{
		((FRigVMFunction_AlphaInterpVector*)Obj)->bMapRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bMapRange = { "bMapRange", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AlphaInterpVector), &Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bMapRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bMapRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bMapRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InRange_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bMapRange" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpVector, InRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InRange_MetaData)) }; // 1771925650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_OutRange_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bMapRange" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_OutRange = { "OutRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpVector, OutRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_OutRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_OutRange_MetaData)) }; // 1771925650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bClampResult_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bClampResult_SetBit(void* Obj)
	{
		((FRigVMFunction_AlphaInterpVector*)Obj)->bClampResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AlphaInterpVector), &Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bClampResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bClampResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ClampMin_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bClampResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpVector, ClampMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ClampMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ClampMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ClampMax_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bClampResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpVector, ClampMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ClampMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ClampMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bInterpResult_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bInterpResult_SetBit(void* Obj)
	{
		((FRigVMFunction_AlphaInterpVector*)Obj)->bInterpResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bInterpResult = { "bInterpResult", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AlphaInterpVector), &Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bInterpResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bInterpResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bInterpResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InterpSpeedIncreasing_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bInterpResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InterpSpeedIncreasing = { "InterpSpeedIncreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpVector, InterpSpeedIncreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InterpSpeedIncreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InterpSpeedIncreasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InterpSpeedDecreasing_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bInterpResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InterpSpeedDecreasing = { "InterpSpeedDecreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpVector, InterpSpeedDecreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InterpSpeedDecreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InterpSpeedDecreasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ScaleBiasClamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ScaleBiasClamp = { "ScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpVector, ScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ScaleBiasClamp_MetaData)) }; // 1479025939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Bias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bMapRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_OutRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bClampResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ClampMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ClampMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_bInterpResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InterpSpeedIncreasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_InterpSpeedDecreasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewProp_ScaleBiasClamp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_AlphaInterpVector",
		sizeof(FRigVMFunction_AlphaInterpVector),
		alignof(FRigVMFunction_AlphaInterpVector),
		Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpVector.InnerSingleton;
	}

void FRigVMFunction_AlphaInterpVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AlphaInterpVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Scale,
		Bias,
		bMapRange,
		InRange,
		OutRange,
		bClampResult,
		ClampMin,
		ClampMax,
		bInterpResult,
		InterpSpeedIncreasing,
		InterpSpeedDecreasing,
		Result,
		ScaleBiasClamp
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_AlphaInterpQuat>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_AlphaInterpQuat cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpQuat;
class UScriptStruct* FRigVMFunction_AlphaInterpQuat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpQuat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpQuat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AlphaInterpQuat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AlphaInterpQuat_Execute;
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("Bias"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("bMapRange"), TEXT("bool"));
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("InRange"), TEXT("FInputRange"));
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("OutRange"), TEXT("FInputRange"));
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("bClampResult"), TEXT("bool"));
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("ClampMin"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("ClampMax"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("bInterpResult"), TEXT("bool"));
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("InterpSpeedIncreasing"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("InterpSpeedDecreasing"), TEXT("float"));
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		Arguments_FRigVMFunction_AlphaInterpQuat_Execute.Emplace(TEXT("ScaleBiasClamp"), TEXT("FInputScaleBiasClamp"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AlphaInterpQuat::Execute"), &FRigVMFunction_AlphaInterpQuat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpQuat.OuterSingleton, Arguments_FRigVMFunction_AlphaInterpQuat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpQuat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AlphaInterpQuat>()
{
	return FRigVMFunction_AlphaInterpQuat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMapRange_MetaData[];
#endif
		static void NewProp_bMapRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMapRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[];
#endif
		static void NewProp_bClampResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpResult_MetaData[];
#endif
		static void NewProp_bInterpResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedIncreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIncreasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedDecreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedDecreasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleBiasClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleBiasClamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Takes in a vector value and outputs an accumulated value with a customized scale and clamp\n */" },
		{ "DisplayName", "Alpha Interpolate" },
		{ "Keywords", "Alpha,Lerp,LinearInterpolate" },
		{ "MenuDescSuffix", "(Quat)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
		{ "TemplateName", "AlphaInterp" },
		{ "ToolTip", "Takes in a vector value and outputs an accumulated value with a customized scale and clamp" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AlphaInterpQuat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpQuat, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpQuat, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpQuat, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bMapRange_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bMapRange_SetBit(void* Obj)
	{
		((FRigVMFunction_AlphaInterpQuat*)Obj)->bMapRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bMapRange = { "bMapRange", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AlphaInterpQuat), &Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bMapRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bMapRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bMapRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InRange_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bMapRange" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpQuat, InRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InRange_MetaData)) }; // 1771925650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_OutRange_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bMapRange" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_OutRange = { "OutRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpQuat, OutRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_OutRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_OutRange_MetaData)) }; // 1771925650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bClampResult_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bClampResult_SetBit(void* Obj)
	{
		((FRigVMFunction_AlphaInterpQuat*)Obj)->bClampResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AlphaInterpQuat), &Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bClampResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bClampResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ClampMin_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bClampResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpQuat, ClampMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ClampMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ClampMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ClampMax_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bClampResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpQuat, ClampMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ClampMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ClampMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bInterpResult_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bInterpResult_SetBit(void* Obj)
	{
		((FRigVMFunction_AlphaInterpQuat*)Obj)->bInterpResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bInterpResult = { "bInterpResult", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AlphaInterpQuat), &Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bInterpResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bInterpResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bInterpResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InterpSpeedIncreasing_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bInterpResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InterpSpeedIncreasing = { "InterpSpeedIncreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpQuat, InterpSpeedIncreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InterpSpeedIncreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InterpSpeedIncreasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InterpSpeedDecreasing_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bInterpResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InterpSpeedDecreasing = { "InterpSpeedDecreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpQuat, InterpSpeedDecreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InterpSpeedDecreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InterpSpeedDecreasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpQuat, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ScaleBiasClamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ScaleBiasClamp = { "ScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AlphaInterpQuat, ScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ScaleBiasClamp_MetaData)) }; // 1479025939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Bias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bMapRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_OutRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bClampResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ClampMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ClampMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_bInterpResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InterpSpeedIncreasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_InterpSpeedDecreasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewProp_ScaleBiasClamp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_AlphaInterpQuat",
		sizeof(FRigVMFunction_AlphaInterpQuat),
		alignof(FRigVMFunction_AlphaInterpQuat),
		Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpQuat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpQuat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpQuat.InnerSingleton;
	}

void FRigVMFunction_AlphaInterpQuat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AlphaInterpQuat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Scale,
		Bias,
		bMapRange,
		InRange,
		OutRange,
		bClampResult,
		ClampMin,
		ClampMax,
		bInterpResult,
		InterpSpeedIncreasing,
		InterpSpeedDecreasing,
		Result,
		ScaleBiasClamp
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_AlphaInterp_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_AlphaInterp_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_AlphaInterp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics::NewStructOps, TEXT("RigVMFunction_AlphaInterp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AlphaInterp), 724043635U) },
		{ FRigVMFunction_AlphaInterpVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics::NewStructOps, TEXT("RigVMFunction_AlphaInterpVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AlphaInterpVector), 3092953638U) },
		{ FRigVMFunction_AlphaInterpQuat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics::NewStructOps, TEXT("RigVMFunction_AlphaInterpQuat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AlphaInterpQuat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AlphaInterpQuat), 3505557508U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_AlphaInterp_h_4177853170(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_AlphaInterp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_AlphaInterp_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
