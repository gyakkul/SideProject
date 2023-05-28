// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Simulation/RigVMFunction_Verlet.h"
#include "RigVMFunctions/Math/RigVMMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_Verlet() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMSimPoint();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_VerletIntegrateVector>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_VerletIntegrateVector cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_VerletIntegrateVector;
class UScriptStruct* FRigVMFunction_VerletIntegrateVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VerletIntegrateVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_VerletIntegrateVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_VerletIntegrateVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_VerletIntegrateVector_Execute;
		Arguments_FRigVMFunction_VerletIntegrateVector_Execute.Emplace(TEXT("Target"), TEXT("FVector"));
		Arguments_FRigVMFunction_VerletIntegrateVector_Execute.Emplace(TEXT("Strength"), TEXT("float"));
		Arguments_FRigVMFunction_VerletIntegrateVector_Execute.Emplace(TEXT("Damp"), TEXT("float"));
		Arguments_FRigVMFunction_VerletIntegrateVector_Execute.Emplace(TEXT("Blend"), TEXT("float"));
		Arguments_FRigVMFunction_VerletIntegrateVector_Execute.Emplace(TEXT("Force"), TEXT("FVector"));
		Arguments_FRigVMFunction_VerletIntegrateVector_Execute.Emplace(TEXT("Position"), TEXT("FVector"));
		Arguments_FRigVMFunction_VerletIntegrateVector_Execute.Emplace(TEXT("Velocity"), TEXT("FVector"));
		Arguments_FRigVMFunction_VerletIntegrateVector_Execute.Emplace(TEXT("Acceleration"), TEXT("FVector"));
		Arguments_FRigVMFunction_VerletIntegrateVector_Execute.Emplace(TEXT("Point"), TEXT("FRigVMSimPoint"));
		Arguments_FRigVMFunction_VerletIntegrateVector_Execute.Emplace(TEXT("bInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_VerletIntegrateVector::Execute"), &FRigVMFunction_VerletIntegrateVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_VerletIntegrateVector.OuterSingleton, Arguments_FRigVMFunction_VerletIntegrateVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VerletIntegrateVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_VerletIntegrateVector>()
{
	return FRigVMFunction_VerletIntegrateVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Blend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Springs" },
		{ "Comment", "/**\n * Simulates a single position over time using Verlet integration. It is recommended to use SpringInterp instead as it\n * is more accurate and stable, and has more meaningful parameters.\n */" },
		{ "DisplayName", "Verlet (Vector)" },
		{ "Keywords", "Simulate,Integrate" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Verlet.h" },
		{ "TemplateName", "Verlet" },
		{ "ToolTip", "Simulates a single position over time using Verlet integration. It is recommended to use SpringInterp instead as it\nis more accurate and stable, and has more meaningful parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_VerletIntegrateVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Verlet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VerletIntegrateVector, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The strength of the verlet spring */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Verlet.h" },
		{ "ToolTip", "The strength of the verlet spring" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VerletIntegrateVector, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Damp_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The amount of damping to apply ( 0.0 to 1.0, but usually really low like 0.005 )*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Verlet.h" },
		{ "ToolTip", "The amount of damping to apply ( 0.0 to 1.0, but usually really low like 0.005 )" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Damp = { "Damp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VerletIntegrateVector, Damp), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Damp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Damp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Blend_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The amount of blending to apply per second */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Verlet.h" },
		{ "ToolTip", "The amount of blending to apply per second" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VerletIntegrateVector, Blend), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Blend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Blend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The force feeding into the solver. Can be used for gravity. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Verlet.h" },
		{ "ToolTip", "The force feeding into the solver. Can be used for gravity." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VerletIntegrateVector, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Force_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Verlet.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VerletIntegrateVector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Verlet.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VerletIntegrateVector, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Verlet.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VerletIntegrateVector, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Point_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Verlet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_VerletIntegrateVector, Point), Z_Construct_UScriptStruct_FRigVMSimPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Point_MetaData)) }; // 4039935554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Verlet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_VerletIntegrateVector*)Obj)->bInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_VerletIntegrateVector), &Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_bInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_bInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Damp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Blend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewProp_bInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_VerletIntegrateVector",
		sizeof(FRigVMFunction_VerletIntegrateVector),
		alignof(FRigVMFunction_VerletIntegrateVector),
		Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VerletIntegrateVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_VerletIntegrateVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_VerletIntegrateVector.InnerSingleton;
	}

void FRigVMFunction_VerletIntegrateVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_VerletIntegrateVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Target,
		Strength,
		Damp,
		Blend,
		Force,
		Position,
		Velocity,
		Acceleration,
		Point,
		bInitialized
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Verlet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Verlet_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_VerletIntegrateVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_VerletIntegrateVector_Statics::NewStructOps, TEXT("RigVMFunction_VerletIntegrateVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_VerletIntegrateVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_VerletIntegrateVector), 4167176104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Verlet_h_607524292(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Verlet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Verlet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
