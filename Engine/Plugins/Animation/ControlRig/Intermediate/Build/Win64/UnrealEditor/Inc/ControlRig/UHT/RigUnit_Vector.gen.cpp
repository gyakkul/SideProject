// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Deprecated/Math/RigUnit_Vector.h"
#include "RigVMFunctions/Math/RigVMMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Vector() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFourPointBezier();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_BinaryVectorOp>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_BinaryVectorOp cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp;
class UScriptStruct* FRigUnit_BinaryVectorOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BinaryVectorOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BinaryVectorOp>()
{
	return FRigUnit_BinaryVectorOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Argument0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Argument1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Comment", "/** Two args and a result of Vector type */" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
		{ "ToolTip", "Two args and a result of Vector type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BinaryVectorOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument0_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument0 = { "Argument0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BinaryVectorOp, Argument0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument1_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument1 = { "Argument1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BinaryVectorOp, Argument1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BinaryVectorOp, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_BinaryVectorOp",
		sizeof(FRigUnit_BinaryVectorOp),
		alignof(FRigUnit_BinaryVectorOp),
		Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_Multiply_VectorVector>() == std::is_polymorphic<FRigUnit_BinaryVectorOp>(), "USTRUCT FRigUnit_Multiply_VectorVector cannot be polymorphic unless super FRigUnit_BinaryVectorOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector;
class UScriptStruct* FRigUnit_Multiply_VectorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Multiply_VectorVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Multiply_VectorVector_Execute;
		Arguments_FRigUnit_Multiply_VectorVector_Execute.Emplace(TEXT("Argument0"), TEXT("FVector"));
		Arguments_FRigUnit_Multiply_VectorVector_Execute.Emplace(TEXT("Argument1"), TEXT("FVector"));
		Arguments_FRigUnit_Multiply_VectorVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Multiply_VectorVector::Execute"), &FRigUnit_Multiply_VectorVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.OuterSingleton, Arguments_FRigUnit_Multiply_VectorVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Multiply_VectorVector>()
{
	return FRigUnit_Multiply_VectorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Multiply(Vector)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Multiply_VectorVector>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp,
		&NewStructOps,
		"RigUnit_Multiply_VectorVector",
		sizeof(FRigUnit_Multiply_VectorVector),
		alignof(FRigUnit_Multiply_VectorVector),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.InnerSingleton;
	}

void FRigUnit_Multiply_VectorVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Multiply_VectorVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_Add_VectorVector>() == std::is_polymorphic<FRigUnit_BinaryVectorOp>(), "USTRUCT FRigUnit_Add_VectorVector cannot be polymorphic unless super FRigUnit_BinaryVectorOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector;
class UScriptStruct* FRigUnit_Add_VectorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Add_VectorVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Add_VectorVector_Execute;
		Arguments_FRigUnit_Add_VectorVector_Execute.Emplace(TEXT("Argument0"), TEXT("FVector"));
		Arguments_FRigUnit_Add_VectorVector_Execute.Emplace(TEXT("Argument1"), TEXT("FVector"));
		Arguments_FRigUnit_Add_VectorVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Add_VectorVector::Execute"), &FRigUnit_Add_VectorVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.OuterSingleton, Arguments_FRigUnit_Add_VectorVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Add_VectorVector>()
{
	return FRigUnit_Add_VectorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Add(Vector)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Add_VectorVector>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp,
		&NewStructOps,
		"RigUnit_Add_VectorVector",
		sizeof(FRigUnit_Add_VectorVector),
		alignof(FRigUnit_Add_VectorVector),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.InnerSingleton;
	}

void FRigUnit_Add_VectorVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Add_VectorVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_Subtract_VectorVector>() == std::is_polymorphic<FRigUnit_BinaryVectorOp>(), "USTRUCT FRigUnit_Subtract_VectorVector cannot be polymorphic unless super FRigUnit_BinaryVectorOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector;
class UScriptStruct* FRigUnit_Subtract_VectorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Subtract_VectorVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Subtract_VectorVector_Execute;
		Arguments_FRigUnit_Subtract_VectorVector_Execute.Emplace(TEXT("Argument0"), TEXT("FVector"));
		Arguments_FRigUnit_Subtract_VectorVector_Execute.Emplace(TEXT("Argument1"), TEXT("FVector"));
		Arguments_FRigUnit_Subtract_VectorVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Subtract_VectorVector::Execute"), &FRigUnit_Subtract_VectorVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.OuterSingleton, Arguments_FRigUnit_Subtract_VectorVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Subtract_VectorVector>()
{
	return FRigUnit_Subtract_VectorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Subtract(Vector)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Subtract_VectorVector>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp,
		&NewStructOps,
		"RigUnit_Subtract_VectorVector",
		sizeof(FRigUnit_Subtract_VectorVector),
		alignof(FRigUnit_Subtract_VectorVector),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.InnerSingleton;
	}

void FRigUnit_Subtract_VectorVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Subtract_VectorVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_Divide_VectorVector>() == std::is_polymorphic<FRigUnit_BinaryVectorOp>(), "USTRUCT FRigUnit_Divide_VectorVector cannot be polymorphic unless super FRigUnit_BinaryVectorOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector;
class UScriptStruct* FRigUnit_Divide_VectorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Divide_VectorVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Divide_VectorVector_Execute;
		Arguments_FRigUnit_Divide_VectorVector_Execute.Emplace(TEXT("Argument0"), TEXT("FVector"));
		Arguments_FRigUnit_Divide_VectorVector_Execute.Emplace(TEXT("Argument1"), TEXT("FVector"));
		Arguments_FRigUnit_Divide_VectorVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Divide_VectorVector::Execute"), &FRigUnit_Divide_VectorVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.OuterSingleton, Arguments_FRigUnit_Divide_VectorVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Divide_VectorVector>()
{
	return FRigUnit_Divide_VectorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Divide(Vector)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Divide_VectorVector>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp,
		&NewStructOps,
		"RigUnit_Divide_VectorVector",
		sizeof(FRigUnit_Divide_VectorVector),
		alignof(FRigUnit_Divide_VectorVector),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.InnerSingleton;
	}

void FRigUnit_Divide_VectorVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Divide_VectorVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_Distance_VectorVector>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_Distance_VectorVector cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector;
class UScriptStruct* FRigUnit_Distance_VectorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Distance_VectorVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Distance_VectorVector_Execute;
		Arguments_FRigUnit_Distance_VectorVector_Execute.Emplace(TEXT("Argument0"), TEXT("FVector"));
		Arguments_FRigUnit_Distance_VectorVector_Execute.Emplace(TEXT("Argument1"), TEXT("FVector"));
		Arguments_FRigUnit_Distance_VectorVector_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Distance_VectorVector::Execute"), &FRigUnit_Distance_VectorVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.OuterSingleton, Arguments_FRigUnit_Distance_VectorVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Distance_VectorVector>()
{
	return FRigUnit_Distance_VectorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Argument0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Argument1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Distance" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Distance_VectorVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument0_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument0 = { "Argument0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Distance_VectorVector, Argument0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument1_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument1 = { "Argument1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Distance_VectorVector, Argument1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Distance_VectorVector, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_Distance_VectorVector",
		sizeof(FRigUnit_Distance_VectorVector),
		alignof(FRigUnit_Distance_VectorVector),
		Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.InnerSingleton;
	}

void FRigUnit_Distance_VectorVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Distance_VectorVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathVectorBezierFourPoint>() == std::is_polymorphic<FRigVMFunction_MathVectorBase>(), "USTRUCT FRigUnit_MathVectorBezierFourPoint cannot be polymorphic unless super FRigVMFunction_MathVectorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathVectorBezierFourPoint;
class UScriptStruct* FRigUnit_MathVectorBezierFourPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathVectorBezierFourPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathVectorBezierFourPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathVectorBezierFourPoint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathVectorBezierFourPoint_Execute;
		Arguments_FRigUnit_MathVectorBezierFourPoint_Execute.Emplace(TEXT("Bezier"), TEXT("FRigVMFourPointBezier"));
		Arguments_FRigUnit_MathVectorBezierFourPoint_Execute.Emplace(TEXT("T"), TEXT("float"));
		Arguments_FRigUnit_MathVectorBezierFourPoint_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigUnit_MathVectorBezierFourPoint_Execute.Emplace(TEXT("Tangent"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathVectorBezierFourPoint::Execute"), &FRigUnit_MathVectorBezierFourPoint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathVectorBezierFourPoint.OuterSingleton, Arguments_FRigUnit_MathVectorBezierFourPoint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathVectorBezierFourPoint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathVectorBezierFourPoint>()
{
	return FRigUnit_MathVectorBezierFourPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bezier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bezier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_T;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the 4 point bezier interpolation\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Bezier Four Point" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
		{ "ToolTip", "Returns the 4 point bezier interpolation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathVectorBezierFourPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Bezier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Bezier = { "Bezier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathVectorBezierFourPoint, Bezier), Z_Construct_UScriptStruct_FRigVMFourPointBezier, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Bezier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Bezier_MetaData)) }; // 2203843897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_T_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathVectorBezierFourPoint, T), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_T_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathVectorBezierFourPoint, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Tangent_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathVectorBezierFourPoint, Tangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Tangent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Bezier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_T,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewProp_Tangent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBase,
		&NewStructOps,
		"RigUnit_MathVectorBezierFourPoint",
		sizeof(FRigUnit_MathVectorBezierFourPoint),
		alignof(FRigUnit_MathVectorBezierFourPoint),
		Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathVectorBezierFourPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathVectorBezierFourPoint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathVectorBezierFourPoint.InnerSingleton;
	}

void FRigUnit_MathVectorBezierFourPoint::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_MathVectorBezierFourPoint::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Bezier,
		T,
		Result,
		Tangent
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathVectorMakeBezierFourPoint>() == std::is_polymorphic<FRigVMFunction_MathVectorBase>(), "USTRUCT FRigUnit_MathVectorMakeBezierFourPoint cannot be polymorphic unless super FRigVMFunction_MathVectorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathVectorMakeBezierFourPoint;
class UScriptStruct* FRigUnit_MathVectorMakeBezierFourPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathVectorMakeBezierFourPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathVectorMakeBezierFourPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathVectorMakeBezierFourPoint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathVectorMakeBezierFourPoint_Execute;
		Arguments_FRigUnit_MathVectorMakeBezierFourPoint_Execute.Emplace(TEXT("Bezier"), TEXT("FRigVMFourPointBezier"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathVectorMakeBezierFourPoint::Execute"), &FRigUnit_MathVectorMakeBezierFourPoint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathVectorMakeBezierFourPoint.OuterSingleton, Arguments_FRigUnit_MathVectorMakeBezierFourPoint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathVectorMakeBezierFourPoint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathVectorMakeBezierFourPoint>()
{
	return FRigUnit_MathVectorMakeBezierFourPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bezier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bezier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Creates a bezier four point\n */" },
		{ "Constant", "" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Make Bezier Four Point" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
		{ "ToolTip", "Creates a bezier four point" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathVectorMakeBezierFourPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::NewProp_Bezier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::NewProp_Bezier = { "Bezier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathVectorMakeBezierFourPoint, Bezier), Z_Construct_UScriptStruct_FRigVMFourPointBezier, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::NewProp_Bezier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::NewProp_Bezier_MetaData)) }; // 2203843897
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::NewProp_Bezier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigVMFunction_MathVectorBase,
		&NewStructOps,
		"RigUnit_MathVectorMakeBezierFourPoint",
		sizeof(FRigUnit_MathVectorMakeBezierFourPoint),
		alignof(FRigUnit_MathVectorMakeBezierFourPoint),
		Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathVectorMakeBezierFourPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathVectorMakeBezierFourPoint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathVectorMakeBezierFourPoint.InnerSingleton;
	}

void FRigUnit_MathVectorMakeBezierFourPoint::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_MathVectorMakeBezierFourPoint::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Bezier
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_BinaryVectorOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewStructOps, TEXT("RigUnit_BinaryVectorOp"), &Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BinaryVectorOp), 2174210939U) },
		{ FRigUnit_Multiply_VectorVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::NewStructOps, TEXT("RigUnit_Multiply_VectorVector"), &Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Multiply_VectorVector), 4141915581U) },
		{ FRigUnit_Add_VectorVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::NewStructOps, TEXT("RigUnit_Add_VectorVector"), &Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Add_VectorVector), 147429551U) },
		{ FRigUnit_Subtract_VectorVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::NewStructOps, TEXT("RigUnit_Subtract_VectorVector"), &Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Subtract_VectorVector), 890517830U) },
		{ FRigUnit_Divide_VectorVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::NewStructOps, TEXT("RigUnit_Divide_VectorVector"), &Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Divide_VectorVector), 1387532652U) },
		{ FRigUnit_Distance_VectorVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewStructOps, TEXT("RigUnit_Distance_VectorVector"), &Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Distance_VectorVector), 2788473648U) },
		{ FRigUnit_MathVectorBezierFourPoint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathVectorBezierFourPoint_Statics::NewStructOps, TEXT("RigUnit_MathVectorBezierFourPoint"), &Z_Registration_Info_UScriptStruct_RigUnit_MathVectorBezierFourPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathVectorBezierFourPoint), 1005251929U) },
		{ FRigUnit_MathVectorMakeBezierFourPoint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathVectorMakeBezierFourPoint_Statics::NewStructOps, TEXT("RigUnit_MathVectorMakeBezierFourPoint"), &Z_Registration_Info_UScriptStruct_RigUnit_MathVectorMakeBezierFourPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathVectorMakeBezierFourPoint), 3449914350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_1146563514(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
