// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Deprecated/Math/RigUnit_Float.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Float() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Clamp_Float();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MapRange_Float();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_BinaryFloatOp>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_BinaryFloatOp cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BinaryFloatOp;
class UScriptStruct* FRigUnit_BinaryFloatOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryFloatOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BinaryFloatOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BinaryFloatOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BinaryFloatOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BinaryFloatOp>()
{
	return FRigUnit_BinaryFloatOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument0_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Argument0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Argument1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Comment", "/** Two args and a result of float type */" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
		{ "ToolTip", "Two args and a result of float type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BinaryFloatOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Argument0_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Argument0 = { "Argument0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BinaryFloatOp, Argument0), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Argument0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Argument0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Argument1_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Argument1 = { "Argument1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BinaryFloatOp, Argument1), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Argument1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Argument1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BinaryFloatOp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Argument0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Argument1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_BinaryFloatOp",
		sizeof(FRigUnit_BinaryFloatOp),
		alignof(FRigUnit_BinaryFloatOp),
		Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryFloatOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BinaryFloatOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_BinaryFloatOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_Multiply_FloatFloat>() == std::is_polymorphic<FRigUnit_BinaryFloatOp>(), "USTRUCT FRigUnit_Multiply_FloatFloat cannot be polymorphic unless super FRigUnit_BinaryFloatOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Multiply_FloatFloat;
class UScriptStruct* FRigUnit_Multiply_FloatFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Multiply_FloatFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Multiply_FloatFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Multiply_FloatFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Multiply_FloatFloat_Execute;
		Arguments_FRigUnit_Multiply_FloatFloat_Execute.Emplace(TEXT("Argument0"), TEXT("float"));
		Arguments_FRigUnit_Multiply_FloatFloat_Execute.Emplace(TEXT("Argument1"), TEXT("float"));
		Arguments_FRigUnit_Multiply_FloatFloat_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Multiply_FloatFloat::Execute"), &FRigUnit_Multiply_FloatFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Multiply_FloatFloat.OuterSingleton, Arguments_FRigUnit_Multiply_FloatFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Multiply_FloatFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Multiply_FloatFloat>()
{
	return FRigUnit_Multiply_FloatFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Float" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Multiply" },
		{ "Keywords", "*" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Multiply_FloatFloat>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp,
		&NewStructOps,
		"RigUnit_Multiply_FloatFloat",
		sizeof(FRigUnit_Multiply_FloatFloat),
		alignof(FRigUnit_Multiply_FloatFloat),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Multiply_FloatFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Multiply_FloatFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Multiply_FloatFloat.InnerSingleton;
	}

void FRigUnit_Multiply_FloatFloat::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Multiply_FloatFloat::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_Add_FloatFloat>() == std::is_polymorphic<FRigUnit_BinaryFloatOp>(), "USTRUCT FRigUnit_Add_FloatFloat cannot be polymorphic unless super FRigUnit_BinaryFloatOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Add_FloatFloat;
class UScriptStruct* FRigUnit_Add_FloatFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Add_FloatFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Add_FloatFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Add_FloatFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Add_FloatFloat_Execute;
		Arguments_FRigUnit_Add_FloatFloat_Execute.Emplace(TEXT("Argument0"), TEXT("float"));
		Arguments_FRigUnit_Add_FloatFloat_Execute.Emplace(TEXT("Argument1"), TEXT("float"));
		Arguments_FRigUnit_Add_FloatFloat_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Add_FloatFloat::Execute"), &FRigUnit_Add_FloatFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Add_FloatFloat.OuterSingleton, Arguments_FRigUnit_Add_FloatFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Add_FloatFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Add_FloatFloat>()
{
	return FRigUnit_Add_FloatFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Float" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Add" },
		{ "Keywords", "+,Sum" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Add_FloatFloat>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp,
		&NewStructOps,
		"RigUnit_Add_FloatFloat",
		sizeof(FRigUnit_Add_FloatFloat),
		alignof(FRigUnit_Add_FloatFloat),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Add_FloatFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Add_FloatFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Add_FloatFloat.InnerSingleton;
	}

void FRigUnit_Add_FloatFloat::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Add_FloatFloat::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_Subtract_FloatFloat>() == std::is_polymorphic<FRigUnit_BinaryFloatOp>(), "USTRUCT FRigUnit_Subtract_FloatFloat cannot be polymorphic unless super FRigUnit_BinaryFloatOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Subtract_FloatFloat;
class UScriptStruct* FRigUnit_Subtract_FloatFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Subtract_FloatFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Subtract_FloatFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Subtract_FloatFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Subtract_FloatFloat_Execute;
		Arguments_FRigUnit_Subtract_FloatFloat_Execute.Emplace(TEXT("Argument0"), TEXT("float"));
		Arguments_FRigUnit_Subtract_FloatFloat_Execute.Emplace(TEXT("Argument1"), TEXT("float"));
		Arguments_FRigUnit_Subtract_FloatFloat_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Subtract_FloatFloat::Execute"), &FRigUnit_Subtract_FloatFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Subtract_FloatFloat.OuterSingleton, Arguments_FRigUnit_Subtract_FloatFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Subtract_FloatFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Subtract_FloatFloat>()
{
	return FRigUnit_Subtract_FloatFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Float" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Subtract" },
		{ "Keywords", "-" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Subtract_FloatFloat>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp,
		&NewStructOps,
		"RigUnit_Subtract_FloatFloat",
		sizeof(FRigUnit_Subtract_FloatFloat),
		alignof(FRigUnit_Subtract_FloatFloat),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Subtract_FloatFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Subtract_FloatFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Subtract_FloatFloat.InnerSingleton;
	}

void FRigUnit_Subtract_FloatFloat::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Subtract_FloatFloat::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_Divide_FloatFloat>() == std::is_polymorphic<FRigUnit_BinaryFloatOp>(), "USTRUCT FRigUnit_Divide_FloatFloat cannot be polymorphic unless super FRigUnit_BinaryFloatOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Divide_FloatFloat;
class UScriptStruct* FRigUnit_Divide_FloatFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Divide_FloatFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Divide_FloatFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Divide_FloatFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Divide_FloatFloat_Execute;
		Arguments_FRigUnit_Divide_FloatFloat_Execute.Emplace(TEXT("Argument0"), TEXT("float"));
		Arguments_FRigUnit_Divide_FloatFloat_Execute.Emplace(TEXT("Argument1"), TEXT("float"));
		Arguments_FRigUnit_Divide_FloatFloat_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Divide_FloatFloat::Execute"), &FRigUnit_Divide_FloatFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Divide_FloatFloat.OuterSingleton, Arguments_FRigUnit_Divide_FloatFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Divide_FloatFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Divide_FloatFloat>()
{
	return FRigUnit_Divide_FloatFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Float" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Divide" },
		{ "Keywords", "/" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Divide_FloatFloat>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp,
		&NewStructOps,
		"RigUnit_Divide_FloatFloat",
		sizeof(FRigUnit_Divide_FloatFloat),
		alignof(FRigUnit_Divide_FloatFloat),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Divide_FloatFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Divide_FloatFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Divide_FloatFloat.InnerSingleton;
	}

void FRigUnit_Divide_FloatFloat::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Divide_FloatFloat::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_Clamp_Float>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_Clamp_Float cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Clamp_Float;
class UScriptStruct* FRigUnit_Clamp_Float::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Clamp_Float.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Clamp_Float.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Clamp_Float, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Clamp_Float"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Clamp_Float_Execute;
		Arguments_FRigUnit_Clamp_Float_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigUnit_Clamp_Float_Execute.Emplace(TEXT("Min"), TEXT("float"));
		Arguments_FRigUnit_Clamp_Float_Execute.Emplace(TEXT("Max"), TEXT("float"));
		Arguments_FRigUnit_Clamp_Float_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Clamp_Float::Execute"), &FRigUnit_Clamp_Float::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Clamp_Float.OuterSingleton, Arguments_FRigUnit_Clamp_Float_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Clamp_Float.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Clamp_Float>()
{
	return FRigUnit_Clamp_Float::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Float" },
		{ "Comment", "/** Two args and a result of float type */" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Clamp" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
		{ "ToolTip", "Two args and a result of float type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Clamp_Float>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Clamp_Float, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Clamp_Float, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Clamp_Float, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Clamp_Float, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_Clamp_Float",
		sizeof(FRigUnit_Clamp_Float),
		alignof(FRigUnit_Clamp_Float),
		Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Clamp_Float()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Clamp_Float.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Clamp_Float.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Clamp_Float.InnerSingleton;
	}

void FRigUnit_Clamp_Float::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Clamp_Float::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Min,
		Max,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_MapRange_Float>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_MapRange_Float cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MapRange_Float;
class UScriptStruct* FRigUnit_MapRange_Float::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MapRange_Float.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MapRange_Float.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MapRange_Float"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MapRange_Float_Execute;
		Arguments_FRigUnit_MapRange_Float_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigUnit_MapRange_Float_Execute.Emplace(TEXT("MinIn"), TEXT("float"));
		Arguments_FRigUnit_MapRange_Float_Execute.Emplace(TEXT("MaxIn"), TEXT("float"));
		Arguments_FRigUnit_MapRange_Float_Execute.Emplace(TEXT("MinOut"), TEXT("float"));
		Arguments_FRigUnit_MapRange_Float_Execute.Emplace(TEXT("MaxOut"), TEXT("float"));
		Arguments_FRigUnit_MapRange_Float_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MapRange_Float::Execute"), &FRigUnit_MapRange_Float::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MapRange_Float.OuterSingleton, Arguments_FRigUnit_MapRange_Float_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MapRange_Float.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MapRange_Float>()
{
	return FRigUnit_MapRange_Float::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinIn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinOut_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOut_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Float" },
		{ "Comment", "/** Two args and a result of float type */" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "MapRange" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
		{ "ToolTip", "Two args and a result of float type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MapRange_Float>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MapRange_Float, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MinIn_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MinIn = { "MinIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MapRange_Float, MinIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MinIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MinIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MaxIn_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MaxIn = { "MaxIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MapRange_Float, MaxIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MaxIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MaxIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MinOut_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MinOut = { "MinOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MapRange_Float, MinOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MinOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MinOut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MaxOut_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MaxOut = { "MaxOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MapRange_Float, MaxOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MaxOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MaxOut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Float.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MapRange_Float, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MinIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MaxIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MinOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_MaxOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_MapRange_Float",
		sizeof(FRigUnit_MapRange_Float),
		alignof(FRigUnit_MapRange_Float),
		Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MapRange_Float()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MapRange_Float.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MapRange_Float.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MapRange_Float.InnerSingleton;
	}

void FRigUnit_MapRange_Float::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_MapRange_Float::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		MinIn,
		MaxIn,
		MinOut,
		MaxOut,
		Result
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Float_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Float_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_BinaryFloatOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics::NewStructOps, TEXT("RigUnit_BinaryFloatOp"), &Z_Registration_Info_UScriptStruct_RigUnit_BinaryFloatOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BinaryFloatOp), 2429932779U) },
		{ FRigUnit_Multiply_FloatFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat_Statics::NewStructOps, TEXT("RigUnit_Multiply_FloatFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_Multiply_FloatFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Multiply_FloatFloat), 3370804755U) },
		{ FRigUnit_Add_FloatFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat_Statics::NewStructOps, TEXT("RigUnit_Add_FloatFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_Add_FloatFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Add_FloatFloat), 4286620664U) },
		{ FRigUnit_Subtract_FloatFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat_Statics::NewStructOps, TEXT("RigUnit_Subtract_FloatFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_Subtract_FloatFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Subtract_FloatFloat), 1782012624U) },
		{ FRigUnit_Divide_FloatFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat_Statics::NewStructOps, TEXT("RigUnit_Divide_FloatFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_Divide_FloatFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Divide_FloatFloat), 3405061560U) },
		{ FRigUnit_Clamp_Float::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics::NewStructOps, TEXT("RigUnit_Clamp_Float"), &Z_Registration_Info_UScriptStruct_RigUnit_Clamp_Float, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Clamp_Float), 2461462724U) },
		{ FRigUnit_MapRange_Float::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::NewStructOps, TEXT("RigUnit_MapRange_Float"), &Z_Registration_Info_UScriptStruct_RigUnit_MapRange_Float, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MapRange_Float), 1600089626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Float_h_391154829(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Float_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Float_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
