// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Simulation/RigUnit_SpringInterp.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SpringInterp() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringInterp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatSpringState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuaternionSpringState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorSpringState();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_SpringInterp>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigUnit_SpringInterp cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SpringInterp;
class UScriptStruct* FRigUnit_SpringInterp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringInterp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SpringInterp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringInterp, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SpringInterp"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SpringInterp_Execute;
		Arguments_FRigUnit_SpringInterp_Execute.Emplace(TEXT("Current"), TEXT("float"));
		Arguments_FRigUnit_SpringInterp_Execute.Emplace(TEXT("Target"), TEXT("float"));
		Arguments_FRigUnit_SpringInterp_Execute.Emplace(TEXT("Stiffness"), TEXT("float"));
		Arguments_FRigUnit_SpringInterp_Execute.Emplace(TEXT("CriticalDamping"), TEXT("float"));
		Arguments_FRigUnit_SpringInterp_Execute.Emplace(TEXT("Mass"), TEXT("float"));
		Arguments_FRigUnit_SpringInterp_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigUnit_SpringInterp_Execute.Emplace(TEXT("SpringState"), TEXT("FFloatSpringState"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SpringInterp::Execute"), &FRigUnit_SpringInterp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SpringInterp.OuterSingleton, Arguments_FRigUnit_SpringInterp_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SpringInterp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SpringInterp>()
{
	return FRigUnit_SpringInterp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Uses a simple spring model to interpolate a float from Current to Target.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Spring Interpolate" },
		{ "Keywords", "Alpha,SpringInterpolate" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "TemplateName", "SpringInterp" },
		{ "ToolTip", "Uses a simple spring model to interpolate a float from Current to Target." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SpringInterp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Current_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterp, Current), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterp, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterp, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_CriticalDamping_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_CriticalDamping = { "CriticalDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterp, CriticalDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_CriticalDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_CriticalDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterp, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_SpringState_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_SpringState = { "SpringState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterp, SpringState), Z_Construct_UScriptStruct_FFloatSpringState, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_SpringState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_SpringState_MetaData)) }; // 3578671256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_CriticalDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewProp_SpringState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigUnit_SpringInterp",
		sizeof(FRigUnit_SpringInterp),
		alignof(FRigUnit_SpringInterp),
		Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringInterp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringInterp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SpringInterp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SpringInterp.InnerSingleton;
	}

void FRigUnit_SpringInterp::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SpringInterp::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Current,
		Target,
		Stiffness,
		CriticalDamping,
		Mass,
		Result,
		SpringState
	);
}


static_assert(std::is_polymorphic<FRigUnit_SpringInterpVector>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigUnit_SpringInterpVector cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVector;
class UScriptStruct* FRigUnit_SpringInterpVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SpringInterpVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SpringInterpVector_Execute;
		Arguments_FRigUnit_SpringInterpVector_Execute.Emplace(TEXT("Current"), TEXT("FVector"));
		Arguments_FRigUnit_SpringInterpVector_Execute.Emplace(TEXT("Target"), TEXT("FVector"));
		Arguments_FRigUnit_SpringInterpVector_Execute.Emplace(TEXT("Stiffness"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpVector_Execute.Emplace(TEXT("CriticalDamping"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpVector_Execute.Emplace(TEXT("Mass"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigUnit_SpringInterpVector_Execute.Emplace(TEXT("SpringState"), TEXT("FVectorSpringState"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SpringInterpVector::Execute"), &FRigUnit_SpringInterpVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVector.OuterSingleton, Arguments_FRigUnit_SpringInterpVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SpringInterpVector>()
{
	return FRigUnit_SpringInterpVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Uses a simple spring model to interpolate a vector from Current to Target.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Spring Interpolate" },
		{ "Keywords", "Alpha,SpringInterpolate" },
		{ "MenuDescSuffix", "(Vector)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "TemplateName", "SpringInterp" },
		{ "ToolTip", "Uses a simple spring model to interpolate a vector from Current to Target." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SpringInterpVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Current_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVector, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVector, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVector, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_CriticalDamping_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_CriticalDamping = { "CriticalDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVector, CriticalDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_CriticalDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_CriticalDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVector, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_SpringState_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_SpringState = { "SpringState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVector, SpringState), Z_Construct_UScriptStruct_FVectorSpringState, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_SpringState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_SpringState_MetaData)) }; // 3382022296
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_CriticalDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewProp_SpringState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigUnit_SpringInterpVector",
		sizeof(FRigUnit_SpringInterpVector),
		alignof(FRigUnit_SpringInterpVector),
		Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVector.InnerSingleton;
	}

void FRigUnit_SpringInterpVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SpringInterpVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Current,
		Target,
		Stiffness,
		CriticalDamping,
		Mass,
		Result,
		SpringState
	);
}


static_assert(std::is_polymorphic<FRigUnit_SpringInterpV2>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigUnit_SpringInterpV2 cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpV2;
class UScriptStruct* FRigUnit_SpringInterpV2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpV2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpV2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SpringInterpV2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SpringInterpV2_Execute;
		Arguments_FRigUnit_SpringInterpV2_Execute.Emplace(TEXT("Target"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpV2_Execute.Emplace(TEXT("Strength"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpV2_Execute.Emplace(TEXT("CriticalDamping"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpV2_Execute.Emplace(TEXT("Force"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpV2_Execute.Emplace(TEXT("bUseCurrentInput"), TEXT("bool"));
		Arguments_FRigUnit_SpringInterpV2_Execute.Emplace(TEXT("Current"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpV2_Execute.Emplace(TEXT("TargetVelocityAmount"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpV2_Execute.Emplace(TEXT("bInitializeFromTarget"), TEXT("bool"));
		Arguments_FRigUnit_SpringInterpV2_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpV2_Execute.Emplace(TEXT("Velocity"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpV2_Execute.Emplace(TEXT("SimulatedResult"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpV2_Execute.Emplace(TEXT("SpringState"), TEXT("FFloatSpringState"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SpringInterpV2::Execute"), &FRigUnit_SpringInterpV2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpV2.OuterSingleton, Arguments_FRigUnit_SpringInterpV2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpV2.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SpringInterpV2>()
{
	return FRigUnit_SpringInterpV2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurrentInput_MetaData[];
#endif
		static void NewProp_bUseCurrentInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurrentInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVelocityAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetVelocityAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializeFromTarget_MetaData[];
#endif
		static void NewProp_bInitializeFromTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeFromTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedResult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulatedResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Springs" },
		{ "Comment", "/**\n * Uses a simple spring model to interpolate a float from Current to Target.\n */" },
		{ "DisplayName", "Spring Interpolate" },
		{ "Keywords", "Alpha,SpringInterpolate,Verlet" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "TemplateName", "SpringInterp" },
		{ "ToolTip", "Uses a simple spring model to interpolate a float from Current to Target." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SpringInterpV2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Rest/target position of the spring. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "Rest/target position of the spring." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpV2, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The spring strength determines how hard it will pull towards the target. The value is the frequency\n\x09 * at which it will oscillate when there is no damping.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "The spring strength determines how hard it will pull towards the target. The value is the frequency\nat which it will oscillate when there is no damping." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpV2, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_CriticalDamping_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09 * The amount of damping in the spring.\n\x09 * Set it smaller than 1 to make the spring oscillate before stabilizing on the target. \n\x09 * Set it equal to 1 to reach the target without overshooting. \n\x09 * Set it higher than one to make the spring take longer to reach the target.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "The amount of damping in the spring.\nSet it smaller than 1 to make the spring oscillate before stabilizing on the target.\nSet it equal to 1 to reach the target without overshooting.\nSet it higher than one to make the spring take longer to reach the target." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_CriticalDamping = { "CriticalDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpV2, CriticalDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_CriticalDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_CriticalDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Extra force to apply (since the mass is 1, this is also the acceleration).\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "Extra force to apply (since the mass is 1, this is also the acceleration)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpV2, Force), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Force_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bUseCurrentInput_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If true, then the Current input will be used to initialize the state, and is required to be a variable that \n\x09 * holds the current state. If false then the Target value will be used to initialize the state and the Current \n\x09 * input will be ignored/unnecessary as a state will be maintained by this node.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "If true, then the Current input will be used to initialize the state, and is required to be a variable that\nholds the current state. If false then the Target value will be used to initialize the state and the Current\ninput will be ignored/unnecessary as a state will be maintained by this node." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bUseCurrentInput_SetBit(void* Obj)
	{
		((FRigUnit_SpringInterpV2*)Obj)->bUseCurrentInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bUseCurrentInput = { "bUseCurrentInput", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SpringInterpV2), &Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bUseCurrentInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bUseCurrentInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bUseCurrentInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Current_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Current position of the spring. */" },
		{ "EditCondition", "bUseCurrentInput" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "Current position of the spring." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpV2, Current), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_TargetVelocityAmount_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The amount that the velocity should be passed through to the spring. A value of 1 will result in more\n\x09 * responsive output, but if the input is noisy or has step changes, these discontinuities will be passed \n\x09 * through to the output much more than if a smaller value such as 0 is used.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "The amount that the velocity should be passed through to the spring. A value of 1 will result in more\nresponsive output, but if the input is noisy or has step changes, these discontinuities will be passed\nthrough to the output much more than if a smaller value such as 0 is used." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_TargetVelocityAmount = { "TargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpV2, TargetVelocityAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_TargetVelocityAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_TargetVelocityAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bInitializeFromTarget_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If true, then the initial value will be taken from the target value, and not from the current value.\n\x09 */" },
		{ "Constant", "" },
		{ "EditCondition", "bUseCurrentInput" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "If true, then the initial value will be taken from the target value, and not from the current value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bInitializeFromTarget_SetBit(void* Obj)
	{
		((FRigUnit_SpringInterpV2*)Obj)->bInitializeFromTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bInitializeFromTarget = { "bInitializeFromTarget", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SpringInterpV2), &Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bInitializeFromTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bInitializeFromTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bInitializeFromTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** New position of the spring after delta time. */" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "Output", "" },
		{ "ToolTip", "New position of the spring after delta time." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpV2, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Velocity */" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "Output", "" },
		{ "ToolTip", "Velocity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpV2, Velocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_SimulatedResult_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_SimulatedResult = { "SimulatedResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpV2, SimulatedResult), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_SimulatedResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_SimulatedResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_SpringState_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_SpringState = { "SpringState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpV2, SpringState), Z_Construct_UScriptStruct_FFloatSpringState, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_SpringState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_SpringState_MetaData)) }; // 3578671256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_CriticalDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bUseCurrentInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_TargetVelocityAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_bInitializeFromTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_SimulatedResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewProp_SpringState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigUnit_SpringInterpV2",
		sizeof(FRigUnit_SpringInterpV2),
		alignof(FRigUnit_SpringInterpV2),
		Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpV2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpV2.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpV2.InnerSingleton;
	}

void FRigUnit_SpringInterpV2::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SpringInterpV2::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Target,
		Strength,
		CriticalDamping,
		Force,
		bUseCurrentInput,
		Current,
		TargetVelocityAmount,
		bInitializeFromTarget,
		Result,
		Velocity,
		SimulatedResult,
		SpringState
	);
}


static_assert(std::is_polymorphic<FRigUnit_SpringInterpVectorV2>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigUnit_SpringInterpVectorV2 cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVectorV2;
class UScriptStruct* FRigUnit_SpringInterpVectorV2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVectorV2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVectorV2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SpringInterpVectorV2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SpringInterpVectorV2_Execute;
		Arguments_FRigUnit_SpringInterpVectorV2_Execute.Emplace(TEXT("Target"), TEXT("FVector"));
		Arguments_FRigUnit_SpringInterpVectorV2_Execute.Emplace(TEXT("Strength"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpVectorV2_Execute.Emplace(TEXT("CriticalDamping"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpVectorV2_Execute.Emplace(TEXT("Force"), TEXT("FVector"));
		Arguments_FRigUnit_SpringInterpVectorV2_Execute.Emplace(TEXT("bUseCurrentInput"), TEXT("bool"));
		Arguments_FRigUnit_SpringInterpVectorV2_Execute.Emplace(TEXT("Current"), TEXT("FVector"));
		Arguments_FRigUnit_SpringInterpVectorV2_Execute.Emplace(TEXT("TargetVelocityAmount"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpVectorV2_Execute.Emplace(TEXT("bInitializeFromTarget"), TEXT("bool"));
		Arguments_FRigUnit_SpringInterpVectorV2_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigUnit_SpringInterpVectorV2_Execute.Emplace(TEXT("Velocity"), TEXT("FVector"));
		Arguments_FRigUnit_SpringInterpVectorV2_Execute.Emplace(TEXT("SimulatedResult"), TEXT("FVector"));
		Arguments_FRigUnit_SpringInterpVectorV2_Execute.Emplace(TEXT("SpringState"), TEXT("FVectorSpringState"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SpringInterpVectorV2::Execute"), &FRigUnit_SpringInterpVectorV2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVectorV2.OuterSingleton, Arguments_FRigUnit_SpringInterpVectorV2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVectorV2.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SpringInterpVectorV2>()
{
	return FRigUnit_SpringInterpVectorV2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurrentInput_MetaData[];
#endif
		static void NewProp_bUseCurrentInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurrentInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVelocityAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetVelocityAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializeFromTarget_MetaData[];
#endif
		static void NewProp_bInitializeFromTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeFromTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulatedResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Springs" },
		{ "Comment", "/**\n * Uses a simple spring model to interpolate a vector from Current to Target.\n */" },
		{ "DisplayName", "Spring Interpolate" },
		{ "Keywords", "Alpha,SpringInterpolate,Verlet" },
		{ "MenuDescSuffix", "(Vector)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "TemplateName", "SpringInterp" },
		{ "ToolTip", "Uses a simple spring model to interpolate a vector from Current to Target." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SpringInterpVectorV2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Rest/target position of the spring. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "Rest/target position of the spring." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVectorV2, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The spring strength determines how hard it will pull towards the target. The value is the frequency\n\x09 * at which it will oscillate when there is no damping.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "The spring strength determines how hard it will pull towards the target. The value is the frequency\nat which it will oscillate when there is no damping." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVectorV2, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_CriticalDamping_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09 * The amount of damping in the spring.\n\x09 * Set it smaller than 1 to make the spring oscillate before stabilizing on the target. \n\x09 * Set it equal to 1 to reach the target without overshooting. \n\x09 * Set it higher than one to make the spring take longer to reach the target.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "The amount of damping in the spring.\nSet it smaller than 1 to make the spring oscillate before stabilizing on the target.\nSet it equal to 1 to reach the target without overshooting.\nSet it higher than one to make the spring take longer to reach the target." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_CriticalDamping = { "CriticalDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVectorV2, CriticalDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_CriticalDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_CriticalDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Extra force to apply (since the mass is 1, this is also the acceleration).\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "Extra force to apply (since the mass is 1, this is also the acceleration)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVectorV2, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Force_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bUseCurrentInput_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If true, then the Current input will be used to initialize the state, and is required to be a variable that \n\x09 * holds the current state. If false then the Target value will be used to initialize the state and the Current \n\x09 * input will be ignored/unnecessary as a state will be maintained by this node.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "If true, then the Current input will be used to initialize the state, and is required to be a variable that\nholds the current state. If false then the Target value will be used to initialize the state and the Current\ninput will be ignored/unnecessary as a state will be maintained by this node." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bUseCurrentInput_SetBit(void* Obj)
	{
		((FRigUnit_SpringInterpVectorV2*)Obj)->bUseCurrentInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bUseCurrentInput = { "bUseCurrentInput", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SpringInterpVectorV2), &Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bUseCurrentInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bUseCurrentInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bUseCurrentInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Current_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Current position of the spring. */" },
		{ "EditCondition", "bUseCurrentInput" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "Current position of the spring." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVectorV2, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_TargetVelocityAmount_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The amount that the velocity should be passed through to the spring. A value of 1 will result in more\n\x09 * responsive output, but if the input is noisy or has step changes, these discontinuities will be passed \n\x09 * through to the output much more than if a smaller value such as 0 is used.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "The amount that the velocity should be passed through to the spring. A value of 1 will result in more\nresponsive output, but if the input is noisy or has step changes, these discontinuities will be passed\nthrough to the output much more than if a smaller value such as 0 is used." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_TargetVelocityAmount = { "TargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVectorV2, TargetVelocityAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_TargetVelocityAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_TargetVelocityAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bInitializeFromTarget_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If true, then the initial value will be taken from the target value, and not from the current value. \n\x09 */" },
		{ "Constant", "" },
		{ "EditCondition", "bUseCurrentInput" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "If true, then the initial value will be taken from the target value, and not from the current value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bInitializeFromTarget_SetBit(void* Obj)
	{
		((FRigUnit_SpringInterpVectorV2*)Obj)->bInitializeFromTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bInitializeFromTarget = { "bInitializeFromTarget", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SpringInterpVectorV2), &Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bInitializeFromTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bInitializeFromTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bInitializeFromTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** New position of the spring after delta time. */" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "Output", "" },
		{ "ToolTip", "New position of the spring after delta time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVectorV2, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Velocity */" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "Output", "" },
		{ "ToolTip", "Velocity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVectorV2, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_SimulatedResult_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_SimulatedResult = { "SimulatedResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVectorV2, SimulatedResult), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_SimulatedResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_SimulatedResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_SpringState_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_SpringState = { "SpringState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpVectorV2, SpringState), Z_Construct_UScriptStruct_FVectorSpringState, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_SpringState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_SpringState_MetaData)) }; // 3382022296
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_CriticalDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bUseCurrentInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_TargetVelocityAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_bInitializeFromTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_SimulatedResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewProp_SpringState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigUnit_SpringInterpVectorV2",
		sizeof(FRigUnit_SpringInterpVectorV2),
		alignof(FRigUnit_SpringInterpVectorV2),
		Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVectorV2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVectorV2.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVectorV2.InnerSingleton;
	}

void FRigUnit_SpringInterpVectorV2::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SpringInterpVectorV2::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Target,
		Strength,
		CriticalDamping,
		Force,
		bUseCurrentInput,
		Current,
		TargetVelocityAmount,
		bInitializeFromTarget,
		Result,
		Velocity,
		SimulatedResult,
		SpringState
	);
}


static_assert(std::is_polymorphic<FRigUnit_SpringInterpQuaternionV2>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigUnit_SpringInterpQuaternionV2 cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpQuaternionV2;
class UScriptStruct* FRigUnit_SpringInterpQuaternionV2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpQuaternionV2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpQuaternionV2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SpringInterpQuaternionV2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SpringInterpQuaternionV2_Execute;
		Arguments_FRigUnit_SpringInterpQuaternionV2_Execute.Emplace(TEXT("Target"), TEXT("FQuat"));
		Arguments_FRigUnit_SpringInterpQuaternionV2_Execute.Emplace(TEXT("Strength"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpQuaternionV2_Execute.Emplace(TEXT("CriticalDamping"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpQuaternionV2_Execute.Emplace(TEXT("Torque"), TEXT("FVector"));
		Arguments_FRigUnit_SpringInterpQuaternionV2_Execute.Emplace(TEXT("bUseCurrentInput"), TEXT("bool"));
		Arguments_FRigUnit_SpringInterpQuaternionV2_Execute.Emplace(TEXT("Current"), TEXT("FQuat"));
		Arguments_FRigUnit_SpringInterpQuaternionV2_Execute.Emplace(TEXT("TargetVelocityAmount"), TEXT("float"));
		Arguments_FRigUnit_SpringInterpQuaternionV2_Execute.Emplace(TEXT("bInitializeFromTarget"), TEXT("bool"));
		Arguments_FRigUnit_SpringInterpQuaternionV2_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		Arguments_FRigUnit_SpringInterpQuaternionV2_Execute.Emplace(TEXT("AngularVelocity"), TEXT("FVector"));
		Arguments_FRigUnit_SpringInterpQuaternionV2_Execute.Emplace(TEXT("SimulatedResult"), TEXT("FQuat"));
		Arguments_FRigUnit_SpringInterpQuaternionV2_Execute.Emplace(TEXT("SpringState"), TEXT("FQuaternionSpringState"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SpringInterpQuaternionV2::Execute"), &FRigUnit_SpringInterpQuaternionV2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpQuaternionV2.OuterSingleton, Arguments_FRigUnit_SpringInterpQuaternionV2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpQuaternionV2.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SpringInterpQuaternionV2>()
{
	return FRigUnit_SpringInterpQuaternionV2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Torque_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Torque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurrentInput_MetaData[];
#endif
		static void NewProp_bUseCurrentInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurrentInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVelocityAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetVelocityAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializeFromTarget_MetaData[];
#endif
		static void NewProp_bInitializeFromTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeFromTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulatedResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Springs" },
		{ "Comment", "/**\n * Uses a simple spring model to interpolate a quaternion from Current to Target.\n */" },
		{ "DisplayName", "Spring Interpolate" },
		{ "Keywords", "Alpha,SpringInterpolate,Verlet" },
		{ "MenuDescSuffix", "(Quaternion)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "TemplateName", "SpringInterp" },
		{ "ToolTip", "Uses a simple spring model to interpolate a quaternion from Current to Target." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SpringInterpQuaternionV2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Rest/target position of the spring. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "Rest/target position of the spring." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpQuaternionV2, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The spring strength determines how hard it will pull towards the target. The value is the frequency\n\x09 * at which it will oscillate when there is no damping.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "The spring strength determines how hard it will pull towards the target. The value is the frequency\nat which it will oscillate when there is no damping." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpQuaternionV2, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_CriticalDamping_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09 * The amount of damping in the spring.\n\x09 * Set it smaller than 1 to make the spring oscillate before stabilizing on the target. \n\x09 * Set it equal to 1 to reach the target without overshooting. \n\x09 * Set it higher than one to make the spring take longer to reach the target.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "The amount of damping in the spring.\nSet it smaller than 1 to make the spring oscillate before stabilizing on the target.\nSet it equal to 1 to reach the target without overshooting.\nSet it higher than one to make the spring take longer to reach the target." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_CriticalDamping = { "CriticalDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpQuaternionV2, CriticalDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_CriticalDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_CriticalDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Torque_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Extra torque to apply (since the moment of inertia is 1, this is also the angular acceleration).\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "Extra torque to apply (since the moment of inertia is 1, this is also the angular acceleration)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpQuaternionV2, Torque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Torque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Torque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bUseCurrentInput_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If true, then the Current input will be used to initialize the state, and is required to be a variable that \n\x09 * holds the current state. If false then the Target value will be used to initialize the state and the Current \n\x09 * input will be ignored/unnecessary as a state will be maintained by this node.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "If true, then the Current input will be used to initialize the state, and is required to be a variable that\nholds the current state. If false then the Target value will be used to initialize the state and the Current\ninput will be ignored/unnecessary as a state will be maintained by this node." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bUseCurrentInput_SetBit(void* Obj)
	{
		((FRigUnit_SpringInterpQuaternionV2*)Obj)->bUseCurrentInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bUseCurrentInput = { "bUseCurrentInput", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SpringInterpQuaternionV2), &Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bUseCurrentInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bUseCurrentInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bUseCurrentInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Current_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Current position of the spring. */" },
		{ "EditCondition", "bUseCurrentInput" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "Current position of the spring." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpQuaternionV2, Current), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_TargetVelocityAmount_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The amount that the velocity should be passed through to the spring. A value of 1 will result in more\n\x09 * responsive output, but if the input is noisy or has step changes, these discontinuities will be passed \n\x09 * through to the output much more than if a smaller value such as 0 is used.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "The amount that the velocity should be passed through to the spring. A value of 1 will result in more\nresponsive output, but if the input is noisy or has step changes, these discontinuities will be passed\nthrough to the output much more than if a smaller value such as 0 is used." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_TargetVelocityAmount = { "TargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpQuaternionV2, TargetVelocityAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_TargetVelocityAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_TargetVelocityAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bInitializeFromTarget_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If true, then the initial value will be taken from the target value, and not from the current value. \n\x09 */" },
		{ "Constant", "" },
		{ "EditCondition", "bUseCurrentInput" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "ToolTip", "If true, then the initial value will be taken from the target value, and not from the current value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bInitializeFromTarget_SetBit(void* Obj)
	{
		((FRigUnit_SpringInterpQuaternionV2*)Obj)->bInitializeFromTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bInitializeFromTarget = { "bInitializeFromTarget", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SpringInterpQuaternionV2), &Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bInitializeFromTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bInitializeFromTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bInitializeFromTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** New position of the spring after delta time. */" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "Output", "" },
		{ "ToolTip", "New position of the spring after delta time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpQuaternionV2, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Angular velocity */" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
		{ "Output", "" },
		{ "ToolTip", "Angular velocity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpQuaternionV2, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_SimulatedResult_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_SimulatedResult = { "SimulatedResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpQuaternionV2, SimulatedResult), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_SimulatedResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_SimulatedResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_SpringState_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SpringInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_SpringState = { "SpringState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringInterpQuaternionV2, SpringState), Z_Construct_UScriptStruct_FQuaternionSpringState, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_SpringState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_SpringState_MetaData)) }; // 1724833651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_CriticalDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Torque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bUseCurrentInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_TargetVelocityAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_bInitializeFromTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_SimulatedResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewProp_SpringState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigUnit_SpringInterpQuaternionV2",
		sizeof(FRigUnit_SpringInterpQuaternionV2),
		alignof(FRigUnit_SpringInterpQuaternionV2),
		Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpQuaternionV2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpQuaternionV2.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpQuaternionV2.InnerSingleton;
	}

void FRigUnit_SpringInterpQuaternionV2::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SpringInterpQuaternionV2::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Target,
		Strength,
		CriticalDamping,
		Torque,
		bUseCurrentInput,
		Current,
		TargetVelocityAmount,
		bInitializeFromTarget,
		Result,
		AngularVelocity,
		SimulatedResult,
		SpringState
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SpringInterp_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SpringInterp_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_SpringInterp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SpringInterp_Statics::NewStructOps, TEXT("RigUnit_SpringInterp"), &Z_Registration_Info_UScriptStruct_RigUnit_SpringInterp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SpringInterp), 3502260859U) },
		{ FRigUnit_SpringInterpVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SpringInterpVector_Statics::NewStructOps, TEXT("RigUnit_SpringInterpVector"), &Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SpringInterpVector), 1943556709U) },
		{ FRigUnit_SpringInterpV2::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SpringInterpV2_Statics::NewStructOps, TEXT("RigUnit_SpringInterpV2"), &Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpV2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SpringInterpV2), 4276830156U) },
		{ FRigUnit_SpringInterpVectorV2::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SpringInterpVectorV2_Statics::NewStructOps, TEXT("RigUnit_SpringInterpVectorV2"), &Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpVectorV2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SpringInterpVectorV2), 1531500052U) },
		{ FRigUnit_SpringInterpQuaternionV2::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SpringInterpQuaternionV2_Statics::NewStructOps, TEXT("RigUnit_SpringInterpQuaternionV2"), &Z_Registration_Info_UScriptStruct_RigUnit_SpringInterpQuaternionV2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SpringInterpQuaternionV2), 1536418878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SpringInterp_h_1393128788(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SpringInterp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SpringInterp_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
