// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_DeltaFromPrevious() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBase();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_DeltaFromPreviousFloat>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_DeltaFromPreviousFloat cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousFloat;
class UScriptStruct* FRigVMFunction_DeltaFromPreviousFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DeltaFromPreviousFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DeltaFromPreviousFloat_Execute;
		Arguments_FRigVMFunction_DeltaFromPreviousFloat_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigVMFunction_DeltaFromPreviousFloat_Execute.Emplace(TEXT("Delta"), TEXT("float"));
		Arguments_FRigVMFunction_DeltaFromPreviousFloat_Execute.Emplace(TEXT("PreviousValue"), TEXT("float"));
		Arguments_FRigVMFunction_DeltaFromPreviousFloat_Execute.Emplace(TEXT("Cache"), TEXT("float"));
		Arguments_FRigVMFunction_DeltaFromPreviousFloat_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DeltaFromPreviousFloat::Execute"), &FRigVMFunction_DeltaFromPreviousFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousFloat.OuterSingleton, Arguments_FRigVMFunction_DeltaFromPreviousFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousFloat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DeltaFromPreviousFloat>()
{
	return FRigVMFunction_DeltaFromPreviousFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Computes the difference from the previous value going through the node\n */" },
		{ "DisplayName", "DeltaFromPrevious (Float)" },
		{ "Keywords", "Difference,Velocity,Acceleration" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
		{ "TemplateName", "DeltaFromPrevious" },
		{ "ToolTip", "Computes the difference from the previous value going through the node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DeltaFromPreviousFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Delta_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousFloat, Delta), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_PreviousValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousFloat, PreviousValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_PreviousValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_PreviousValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Cache_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousFloat, Cache), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Cache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_DeltaFromPreviousFloat*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DeltaFromPreviousFloat), &Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_PreviousValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_Cache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_DeltaFromPreviousFloat",
		sizeof(FRigVMFunction_DeltaFromPreviousFloat),
		alignof(FRigVMFunction_DeltaFromPreviousFloat),
		Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousFloat.InnerSingleton;
	}

void FRigVMFunction_DeltaFromPreviousFloat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DeltaFromPreviousFloat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Delta,
		PreviousValue,
		Cache,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_DeltaFromPreviousVector>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_DeltaFromPreviousVector cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousVector;
class UScriptStruct* FRigVMFunction_DeltaFromPreviousVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DeltaFromPreviousVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DeltaFromPreviousVector_Execute;
		Arguments_FRigVMFunction_DeltaFromPreviousVector_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigVMFunction_DeltaFromPreviousVector_Execute.Emplace(TEXT("Delta"), TEXT("FVector"));
		Arguments_FRigVMFunction_DeltaFromPreviousVector_Execute.Emplace(TEXT("PreviousValue"), TEXT("FVector"));
		Arguments_FRigVMFunction_DeltaFromPreviousVector_Execute.Emplace(TEXT("Cache"), TEXT("FVector"));
		Arguments_FRigVMFunction_DeltaFromPreviousVector_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DeltaFromPreviousVector::Execute"), &FRigVMFunction_DeltaFromPreviousVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousVector.OuterSingleton, Arguments_FRigVMFunction_DeltaFromPreviousVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DeltaFromPreviousVector>()
{
	return FRigVMFunction_DeltaFromPreviousVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Computes the difference from the previous value going through the node\n */" },
		{ "DisplayName", "DeltaFromPrevious (Vector)" },
		{ "Keywords", "Difference,Velocity,Acceleration" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
		{ "TemplateName", "DeltaFromPrevious" },
		{ "ToolTip", "Computes the difference from the previous value going through the node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DeltaFromPreviousVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Delta_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousVector, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_PreviousValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousVector, PreviousValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_PreviousValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_PreviousValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Cache_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousVector, Cache), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Cache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_DeltaFromPreviousVector*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DeltaFromPreviousVector), &Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_PreviousValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_Cache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_DeltaFromPreviousVector",
		sizeof(FRigVMFunction_DeltaFromPreviousVector),
		alignof(FRigVMFunction_DeltaFromPreviousVector),
		Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousVector.InnerSingleton;
	}

void FRigVMFunction_DeltaFromPreviousVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DeltaFromPreviousVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Delta,
		PreviousValue,
		Cache,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_DeltaFromPreviousQuat>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_DeltaFromPreviousQuat cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousQuat;
class UScriptStruct* FRigVMFunction_DeltaFromPreviousQuat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousQuat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousQuat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DeltaFromPreviousQuat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DeltaFromPreviousQuat_Execute;
		Arguments_FRigVMFunction_DeltaFromPreviousQuat_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_DeltaFromPreviousQuat_Execute.Emplace(TEXT("Delta"), TEXT("FQuat"));
		Arguments_FRigVMFunction_DeltaFromPreviousQuat_Execute.Emplace(TEXT("PreviousValue"), TEXT("FQuat"));
		Arguments_FRigVMFunction_DeltaFromPreviousQuat_Execute.Emplace(TEXT("Cache"), TEXT("FQuat"));
		Arguments_FRigVMFunction_DeltaFromPreviousQuat_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DeltaFromPreviousQuat::Execute"), &FRigVMFunction_DeltaFromPreviousQuat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousQuat.OuterSingleton, Arguments_FRigVMFunction_DeltaFromPreviousQuat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousQuat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DeltaFromPreviousQuat>()
{
	return FRigVMFunction_DeltaFromPreviousQuat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Computes the difference from the previous value going through the node\n */" },
		{ "DisplayName", "DeltaFromPrevious (Quaternion)" },
		{ "Keywords", "Difference,Velocity,Acceleration" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
		{ "TemplateName", "DeltaFromPrevious" },
		{ "ToolTip", "Computes the difference from the previous value going through the node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DeltaFromPreviousQuat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousQuat, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Delta_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousQuat, Delta), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_PreviousValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousQuat, PreviousValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_PreviousValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_PreviousValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Cache_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousQuat, Cache), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Cache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_DeltaFromPreviousQuat*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DeltaFromPreviousQuat), &Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_PreviousValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_Cache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_DeltaFromPreviousQuat",
		sizeof(FRigVMFunction_DeltaFromPreviousQuat),
		alignof(FRigVMFunction_DeltaFromPreviousQuat),
		Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousQuat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousQuat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousQuat.InnerSingleton;
	}

void FRigVMFunction_DeltaFromPreviousQuat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DeltaFromPreviousQuat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Delta,
		PreviousValue,
		Cache,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_DeltaFromPreviousTransform>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_DeltaFromPreviousTransform cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousTransform;
class UScriptStruct* FRigVMFunction_DeltaFromPreviousTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DeltaFromPreviousTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_DeltaFromPreviousTransform_Execute;
		Arguments_FRigVMFunction_DeltaFromPreviousTransform_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DeltaFromPreviousTransform_Execute.Emplace(TEXT("Delta"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DeltaFromPreviousTransform_Execute.Emplace(TEXT("PreviousValue"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DeltaFromPreviousTransform_Execute.Emplace(TEXT("Cache"), TEXT("FTransform"));
		Arguments_FRigVMFunction_DeltaFromPreviousTransform_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_DeltaFromPreviousTransform::Execute"), &FRigVMFunction_DeltaFromPreviousTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousTransform.OuterSingleton, Arguments_FRigVMFunction_DeltaFromPreviousTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DeltaFromPreviousTransform>()
{
	return FRigVMFunction_DeltaFromPreviousTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Computes the difference from the previous value going through the node\n */" },
		{ "DisplayName", "DeltaFromPrevious (Transform)" },
		{ "Keywords", "Difference,Velocity,Acceleration" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
		{ "TemplateName", "DeltaFromPrevious" },
		{ "ToolTip", "Computes the difference from the previous value going through the node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DeltaFromPreviousTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Delta_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousTransform, Delta), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_PreviousValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousTransform, PreviousValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_PreviousValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_PreviousValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Cache_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_DeltaFromPreviousTransform, Cache), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Cache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_DeltaFromPreviousTransform*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_DeltaFromPreviousTransform), &Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_PreviousValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_Cache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_DeltaFromPreviousTransform",
		sizeof(FRigVMFunction_DeltaFromPreviousTransform),
		alignof(FRigVMFunction_DeltaFromPreviousTransform),
		Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousTransform.InnerSingleton;
	}

void FRigVMFunction_DeltaFromPreviousTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_DeltaFromPreviousTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Delta,
		PreviousValue,
		Cache,
		bIsInitialized
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_DeltaFromPreviousFloat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics::NewStructOps, TEXT("RigVMFunction_DeltaFromPreviousFloat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DeltaFromPreviousFloat), 950772266U) },
		{ FRigVMFunction_DeltaFromPreviousVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics::NewStructOps, TEXT("RigVMFunction_DeltaFromPreviousVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DeltaFromPreviousVector), 3917563623U) },
		{ FRigVMFunction_DeltaFromPreviousQuat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics::NewStructOps, TEXT("RigVMFunction_DeltaFromPreviousQuat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousQuat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DeltaFromPreviousQuat), 2927935096U) },
		{ FRigVMFunction_DeltaFromPreviousTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics::NewStructOps, TEXT("RigVMFunction_DeltaFromPreviousTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DeltaFromPreviousTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DeltaFromPreviousTransform), 3652841395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h_1405086204(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
