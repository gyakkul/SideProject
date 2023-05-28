// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Math/RigVMFunction_MathInt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_MathInt() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_MathIntBase>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_MathIntBase cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBase;
class UScriptStruct* FRigVMFunction_MathIntBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntBase>()
{
	return FRigVMFunction_MathIntBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Int" },
		{ "MenuDescSuffix", "(Int)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
		&NewStructOps,
		"RigVMFunction_MathIntBase",
		sizeof(FRigVMFunction_MathIntBase),
		alignof(FRigVMFunction_MathIntBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathIntUnaryOp>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntUnaryOp cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntUnaryOp;
class UScriptStruct* FRigVMFunction_MathIntUnaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntUnaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntUnaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntUnaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntUnaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntUnaryOp>()
{
	return FRigVMFunction_MathIntUnaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntUnaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntUnaryOp, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntUnaryOp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntUnaryOp",
		sizeof(FRigVMFunction_MathIntUnaryOp),
		alignof(FRigVMFunction_MathIntUnaryOp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntUnaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntUnaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntUnaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathIntBinaryOp>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntBinaryOp cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryOp;
class UScriptStruct* FRigVMFunction_MathIntBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntBinaryOp>()
{
	return FRigVMFunction_MathIntBinaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntBinaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntBinaryOp, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntBinaryOp, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntBinaryOp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntBinaryOp",
		sizeof(FRigVMFunction_MathIntBinaryOp),
		alignof(FRigVMFunction_MathIntBinaryOp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathIntBinaryAggregateOp>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntBinaryAggregateOp cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryAggregateOp;
class UScriptStruct* FRigVMFunction_MathIntBinaryAggregateOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryAggregateOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryAggregateOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntBinaryAggregateOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryAggregateOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntBinaryAggregateOp>()
{
	return FRigVMFunction_MathIntBinaryAggregateOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntBinaryAggregateOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntBinaryAggregateOp, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntBinaryAggregateOp, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_Result_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntBinaryAggregateOp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntBinaryAggregateOp",
		sizeof(FRigVMFunction_MathIntBinaryAggregateOp),
		alignof(FRigVMFunction_MathIntBinaryAggregateOp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryAggregateOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryAggregateOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryAggregateOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathIntMake>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntMake cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMake;
class UScriptStruct* FRigVMFunction_MathIntMake::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMake.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMake.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntMake"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntMake_Execute;
		Arguments_FRigVMFunction_MathIntMake_Execute.Emplace(TEXT("Value"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntMake::Execute"), &FRigVMFunction_MathIntMake::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMake.OuterSingleton, Arguments_FRigVMFunction_MathIntMake_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMake.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntMake>()
{
	return FRigVMFunction_MathIntMake::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A integer constant\n */" },
		{ "DisplayName", "Integer" },
		{ "Keywords", "Make,Construct,Constant" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "ToolTip", "A integer constant" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntMake>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntMake, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntMake",
		sizeof(FRigVMFunction_MathIntMake),
		alignof(FRigVMFunction_MathIntMake),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMake.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMake.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMake.InnerSingleton;
	}

void FRigVMFunction_MathIntMake::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntMake::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntAdd>() == std::is_polymorphic<FRigVMFunction_MathIntBinaryAggregateOp>(), "USTRUCT FRigVMFunction_MathIntAdd cannot be polymorphic unless super FRigVMFunction_MathIntBinaryAggregateOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAdd;
class UScriptStruct* FRigVMFunction_MathIntAdd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAdd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAdd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntAdd"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntAdd_Execute;
		Arguments_FRigVMFunction_MathIntAdd_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntAdd_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntAdd_Execute.Emplace(TEXT("Result"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntAdd::Execute"), &FRigVMFunction_MathIntAdd::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAdd.OuterSingleton, Arguments_FRigVMFunction_MathIntAdd_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAdd.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntAdd>()
{
	return FRigVMFunction_MathIntAdd::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the sum of the two values\n */" },
		{ "DisplayName", "Add" },
		{ "Keywords", "Sum,+" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Add" },
		{ "ToolTip", "Returns the sum of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntAdd>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp,
		&NewStructOps,
		"RigVMFunction_MathIntAdd",
		sizeof(FRigVMFunction_MathIntAdd),
		alignof(FRigVMFunction_MathIntAdd),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAdd.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAdd.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAdd.InnerSingleton;
	}

void FRigVMFunction_MathIntAdd::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntAdd::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntSub>() == std::is_polymorphic<FRigVMFunction_MathIntBinaryOp>(), "USTRUCT FRigVMFunction_MathIntSub cannot be polymorphic unless super FRigVMFunction_MathIntBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSub;
class UScriptStruct* FRigVMFunction_MathIntSub::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSub.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSub.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntSub"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntSub_Execute;
		Arguments_FRigVMFunction_MathIntSub_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntSub_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntSub_Execute.Emplace(TEXT("Result"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntSub::Execute"), &FRigVMFunction_MathIntSub::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSub.OuterSingleton, Arguments_FRigVMFunction_MathIntSub_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSub.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntSub>()
{
	return FRigVMFunction_MathIntSub::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the difference of the two values\n */" },
		{ "DisplayName", "Subtract" },
		{ "Keywords", "-" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Subtract" },
		{ "ToolTip", "Returns the difference of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntSub>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp,
		&NewStructOps,
		"RigVMFunction_MathIntSub",
		sizeof(FRigVMFunction_MathIntSub),
		alignof(FRigVMFunction_MathIntSub),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSub.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSub.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSub.InnerSingleton;
	}

void FRigVMFunction_MathIntSub::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntSub::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntMul>() == std::is_polymorphic<FRigVMFunction_MathIntBinaryAggregateOp>(), "USTRUCT FRigVMFunction_MathIntMul cannot be polymorphic unless super FRigVMFunction_MathIntBinaryAggregateOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMul;
class UScriptStruct* FRigVMFunction_MathIntMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntMul"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntMul_Execute;
		Arguments_FRigVMFunction_MathIntMul_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntMul_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntMul_Execute.Emplace(TEXT("Result"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntMul::Execute"), &FRigVMFunction_MathIntMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMul.OuterSingleton, Arguments_FRigVMFunction_MathIntMul_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMul.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntMul>()
{
	return FRigVMFunction_MathIntMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the product of the two values\n */" },
		{ "DisplayName", "Multiply" },
		{ "Keywords", "Product,*" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Multiply" },
		{ "ToolTip", "Returns the product of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntMul>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp,
		&NewStructOps,
		"RigVMFunction_MathIntMul",
		sizeof(FRigVMFunction_MathIntMul),
		alignof(FRigVMFunction_MathIntMul),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMul.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMul.InnerSingleton;
	}

void FRigVMFunction_MathIntMul::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntMul::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntDiv>() == std::is_polymorphic<FRigVMFunction_MathIntBinaryOp>(), "USTRUCT FRigVMFunction_MathIntDiv cannot be polymorphic unless super FRigVMFunction_MathIntBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntDiv;
class UScriptStruct* FRigVMFunction_MathIntDiv::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntDiv.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntDiv.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntDiv"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntDiv_Execute;
		Arguments_FRigVMFunction_MathIntDiv_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntDiv_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntDiv_Execute.Emplace(TEXT("Result"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntDiv::Execute"), &FRigVMFunction_MathIntDiv::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntDiv.OuterSingleton, Arguments_FRigVMFunction_MathIntDiv_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntDiv.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntDiv>()
{
	return FRigVMFunction_MathIntDiv::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the division of the two values\n */" },
		{ "DisplayName", "Divide" },
		{ "Keywords", "Division,Divisor,/" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Divide" },
		{ "ToolTip", "Returns the division of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntDiv>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp,
		&NewStructOps,
		"RigVMFunction_MathIntDiv",
		sizeof(FRigVMFunction_MathIntDiv),
		alignof(FRigVMFunction_MathIntDiv),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntDiv.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntDiv.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntDiv.InnerSingleton;
	}

void FRigVMFunction_MathIntDiv::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntDiv::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntMod>() == std::is_polymorphic<FRigVMFunction_MathIntBinaryOp>(), "USTRUCT FRigVMFunction_MathIntMod cannot be polymorphic unless super FRigVMFunction_MathIntBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMod;
class UScriptStruct* FRigVMFunction_MathIntMod::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMod.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMod.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntMod"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntMod_Execute;
		Arguments_FRigVMFunction_MathIntMod_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntMod_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntMod_Execute.Emplace(TEXT("Result"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntMod::Execute"), &FRigVMFunction_MathIntMod::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMod.OuterSingleton, Arguments_FRigVMFunction_MathIntMod_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMod.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntMod>()
{
	return FRigVMFunction_MathIntMod::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the modulo of the two values\n */" },
		{ "DisplayName", "Modulo" },
		{ "Keywords", "%,fmod" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Modulo" },
		{ "ToolTip", "Returns the modulo of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntMod>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp,
		&NewStructOps,
		"RigVMFunction_MathIntMod",
		sizeof(FRigVMFunction_MathIntMod),
		alignof(FRigVMFunction_MathIntMod),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMod.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMod.InnerSingleton;
	}

void FRigVMFunction_MathIntMod::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntMod::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntMin>() == std::is_polymorphic<FRigVMFunction_MathIntBinaryAggregateOp>(), "USTRUCT FRigVMFunction_MathIntMin cannot be polymorphic unless super FRigVMFunction_MathIntBinaryAggregateOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMin;
class UScriptStruct* FRigVMFunction_MathIntMin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntMin"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntMin_Execute;
		Arguments_FRigVMFunction_MathIntMin_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntMin_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntMin_Execute.Emplace(TEXT("Result"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntMin::Execute"), &FRigVMFunction_MathIntMin::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMin.OuterSingleton, Arguments_FRigVMFunction_MathIntMin_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMin.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntMin>()
{
	return FRigVMFunction_MathIntMin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the smaller of the two values\n */" },
		{ "DisplayName", "Minimum" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Minimum" },
		{ "ToolTip", "Returns the smaller of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntMin>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp,
		&NewStructOps,
		"RigVMFunction_MathIntMin",
		sizeof(FRigVMFunction_MathIntMin),
		alignof(FRigVMFunction_MathIntMin),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMin.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMin.InnerSingleton;
	}

void FRigVMFunction_MathIntMin::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntMin::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntMax>() == std::is_polymorphic<FRigVMFunction_MathIntBinaryAggregateOp>(), "USTRUCT FRigVMFunction_MathIntMax cannot be polymorphic unless super FRigVMFunction_MathIntBinaryAggregateOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMax;
class UScriptStruct* FRigVMFunction_MathIntMax::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMax.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMax.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntMax"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntMax_Execute;
		Arguments_FRigVMFunction_MathIntMax_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntMax_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntMax_Execute.Emplace(TEXT("Result"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntMax::Execute"), &FRigVMFunction_MathIntMax::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMax.OuterSingleton, Arguments_FRigVMFunction_MathIntMax_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMax.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntMax>()
{
	return FRigVMFunction_MathIntMax::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the larger of the two values\n */" },
		{ "DisplayName", "Maximum" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Maximum" },
		{ "ToolTip", "Returns the larger of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntMax>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp,
		&NewStructOps,
		"RigVMFunction_MathIntMax",
		sizeof(FRigVMFunction_MathIntMax),
		alignof(FRigVMFunction_MathIntMax),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMax.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMax.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMax.InnerSingleton;
	}

void FRigVMFunction_MathIntMax::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntMax::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntPow>() == std::is_polymorphic<FRigVMFunction_MathIntBinaryOp>(), "USTRUCT FRigVMFunction_MathIntPow cannot be polymorphic unless super FRigVMFunction_MathIntBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntPow;
class UScriptStruct* FRigVMFunction_MathIntPow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntPow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntPow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntPow"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntPow_Execute;
		Arguments_FRigVMFunction_MathIntPow_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntPow_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntPow_Execute.Emplace(TEXT("Result"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntPow::Execute"), &FRigVMFunction_MathIntPow::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntPow.OuterSingleton, Arguments_FRigVMFunction_MathIntPow_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntPow.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntPow>()
{
	return FRigVMFunction_MathIntPow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the value of A raised to the power of B.\n */" },
		{ "DisplayName", "Power" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Power" },
		{ "ToolTip", "Returns the value of A raised to the power of B." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntPow>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp,
		&NewStructOps,
		"RigVMFunction_MathIntPow",
		sizeof(FRigVMFunction_MathIntPow),
		alignof(FRigVMFunction_MathIntPow),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntPow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntPow.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntPow.InnerSingleton;
	}

void FRigVMFunction_MathIntPow::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntPow::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntNegate>() == std::is_polymorphic<FRigVMFunction_MathIntUnaryOp>(), "USTRUCT FRigVMFunction_MathIntNegate cannot be polymorphic unless super FRigVMFunction_MathIntUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNegate;
class UScriptStruct* FRigVMFunction_MathIntNegate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNegate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNegate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntNegate"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntNegate_Execute;
		Arguments_FRigVMFunction_MathIntNegate_Execute.Emplace(TEXT("Value"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntNegate_Execute.Emplace(TEXT("Result"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntNegate::Execute"), &FRigVMFunction_MathIntNegate::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNegate.OuterSingleton, Arguments_FRigVMFunction_MathIntNegate_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNegate.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntNegate>()
{
	return FRigVMFunction_MathIntNegate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the negative value\n */" },
		{ "DisplayName", "Negate" },
		{ "Keywords", "-,Abs" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Negate" },
		{ "ToolTip", "Returns the negative value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntNegate>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp,
		&NewStructOps,
		"RigVMFunction_MathIntNegate",
		sizeof(FRigVMFunction_MathIntNegate),
		alignof(FRigVMFunction_MathIntNegate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNegate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNegate.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNegate.InnerSingleton;
	}

void FRigVMFunction_MathIntNegate::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntNegate::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntAbs>() == std::is_polymorphic<FRigVMFunction_MathIntUnaryOp>(), "USTRUCT FRigVMFunction_MathIntAbs cannot be polymorphic unless super FRigVMFunction_MathIntUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAbs;
class UScriptStruct* FRigVMFunction_MathIntAbs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAbs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAbs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntAbs"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntAbs_Execute;
		Arguments_FRigVMFunction_MathIntAbs_Execute.Emplace(TEXT("Value"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntAbs_Execute.Emplace(TEXT("Result"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntAbs::Execute"), &FRigVMFunction_MathIntAbs::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAbs.OuterSingleton, Arguments_FRigVMFunction_MathIntAbs_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAbs.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntAbs>()
{
	return FRigVMFunction_MathIntAbs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the absolute (positive) value\n */" },
		{ "DisplayName", "Absolute" },
		{ "Keywords", "Abs,Neg" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Absolute" },
		{ "ToolTip", "Returns the absolute (positive) value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntAbs>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp,
		&NewStructOps,
		"RigVMFunction_MathIntAbs",
		sizeof(FRigVMFunction_MathIntAbs),
		alignof(FRigVMFunction_MathIntAbs),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAbs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAbs.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAbs.InnerSingleton;
	}

void FRigVMFunction_MathIntAbs::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntAbs::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntToFloat>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntToFloat cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToFloat;
class UScriptStruct* FRigVMFunction_MathIntToFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntToFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntToFloat_Execute;
		Arguments_FRigVMFunction_MathIntToFloat_Execute.Emplace(TEXT("Value"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntToFloat_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntToFloat::Execute"), &FRigVMFunction_MathIntToFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToFloat.OuterSingleton, Arguments_FRigVMFunction_MathIntToFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToFloat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntToFloat>()
{
	return FRigVMFunction_MathIntToFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the int cast to a float\n */" },
		{ "DisplayName", "To Float" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Returns the int cast to a float" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntToFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntToFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntToFloat, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntToFloat",
		sizeof(FRigVMFunction_MathIntToFloat),
		alignof(FRigVMFunction_MathIntToFloat),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToFloat.InnerSingleton;
	}

void FRigVMFunction_MathIntToFloat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntToFloat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntToDouble>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntToDouble cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToDouble;
class UScriptStruct* FRigVMFunction_MathIntToDouble::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToDouble.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToDouble.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntToDouble"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntToDouble_Execute;
		Arguments_FRigVMFunction_MathIntToDouble_Execute.Emplace(TEXT("Value"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntToDouble_Execute.Emplace(TEXT("Result"), TEXT("double"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntToDouble::Execute"), &FRigVMFunction_MathIntToDouble::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToDouble.OuterSingleton, Arguments_FRigVMFunction_MathIntToDouble_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToDouble.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntToDouble>()
{
	return FRigVMFunction_MathIntToDouble::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the int cast to a float\n */" },
		{ "DisplayName", "To Double" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Returns the int cast to a float" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntToDouble>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntToDouble, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntToDouble, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntToDouble",
		sizeof(FRigVMFunction_MathIntToDouble),
		alignof(FRigVMFunction_MathIntToDouble),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToDouble.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToDouble.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToDouble.InnerSingleton;
	}

void FRigVMFunction_MathIntToDouble::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntToDouble::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntSign>() == std::is_polymorphic<FRigVMFunction_MathIntUnaryOp>(), "USTRUCT FRigVMFunction_MathIntSign cannot be polymorphic unless super FRigVMFunction_MathIntUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSign;
class UScriptStruct* FRigVMFunction_MathIntSign::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSign.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSign.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntSign"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntSign_Execute;
		Arguments_FRigVMFunction_MathIntSign_Execute.Emplace(TEXT("Value"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntSign_Execute.Emplace(TEXT("Result"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntSign::Execute"), &FRigVMFunction_MathIntSign::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSign.OuterSingleton, Arguments_FRigVMFunction_MathIntSign_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSign.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntSign>()
{
	return FRigVMFunction_MathIntSign::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the sign of the value (+1 for >= 0, -1 for < 0)\n */" },
		{ "DisplayName", "Sign" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Sign" },
		{ "ToolTip", "Returns the sign of the value (+1 for >= 0, -1 for < 0)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntSign>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp,
		&NewStructOps,
		"RigVMFunction_MathIntSign",
		sizeof(FRigVMFunction_MathIntSign),
		alignof(FRigVMFunction_MathIntSign),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSign.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSign.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSign.InnerSingleton;
	}

void FRigVMFunction_MathIntSign::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntSign::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntClamp>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntClamp cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntClamp;
class UScriptStruct* FRigVMFunction_MathIntClamp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntClamp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntClamp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntClamp"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntClamp_Execute;
		Arguments_FRigVMFunction_MathIntClamp_Execute.Emplace(TEXT("Value"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntClamp_Execute.Emplace(TEXT("Minimum"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntClamp_Execute.Emplace(TEXT("Maximum"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntClamp_Execute.Emplace(TEXT("Result"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntClamp::Execute"), &FRigVMFunction_MathIntClamp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntClamp.OuterSingleton, Arguments_FRigVMFunction_MathIntClamp_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntClamp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntClamp>()
{
	return FRigVMFunction_MathIntClamp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Clamps the given value within the range provided by minimum and maximum\n */" },
		{ "DisplayName", "Clamp" },
		{ "Keywords", "Range,Remap" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Clamp" },
		{ "ToolTip", "Clamps the given value within the range provided by minimum and maximum" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntClamp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntClamp, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntClamp, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntClamp, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntClamp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntClamp",
		sizeof(FRigVMFunction_MathIntClamp),
		alignof(FRigVMFunction_MathIntClamp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntClamp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntClamp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntClamp.InnerSingleton;
	}

void FRigVMFunction_MathIntClamp::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntClamp::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Minimum,
		Maximum,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntEquals>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntEquals cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntEquals;
class UScriptStruct* FRigVMFunction_MathIntEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntEquals_Execute;
		Arguments_FRigVMFunction_MathIntEquals_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntEquals_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntEquals::Execute"), &FRigVMFunction_MathIntEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntEquals.OuterSingleton, Arguments_FRigVMFunction_MathIntEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntEquals.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntEquals>()
{
	return FRigVMFunction_MathIntEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if the value A equals B\n */" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "Equals" },
		{ "Keywords", "Same,==" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Equals" },
		{ "ToolTip", "Returns true if the value A equals B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntEquals, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntEquals, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathIntEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathIntEquals), &Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntEquals",
		sizeof(FRigVMFunction_MathIntEquals),
		alignof(FRigVMFunction_MathIntEquals),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntEquals.InnerSingleton;
	}

void FRigVMFunction_MathIntEquals::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntEquals::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntNotEquals>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntNotEquals cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNotEquals;
class UScriptStruct* FRigVMFunction_MathIntNotEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNotEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNotEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntNotEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntNotEquals_Execute;
		Arguments_FRigVMFunction_MathIntNotEquals_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntNotEquals_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntNotEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntNotEquals::Execute"), &FRigVMFunction_MathIntNotEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNotEquals.OuterSingleton, Arguments_FRigVMFunction_MathIntNotEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNotEquals.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntNotEquals>()
{
	return FRigVMFunction_MathIntNotEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if the value A does not equal B\n */" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "Not Equals" },
		{ "Keywords", "Different,!=" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "NotEquals" },
		{ "ToolTip", "Returns true if the value A does not equal B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntNotEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntNotEquals, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntNotEquals, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathIntNotEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathIntNotEquals), &Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntNotEquals",
		sizeof(FRigVMFunction_MathIntNotEquals),
		alignof(FRigVMFunction_MathIntNotEquals),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNotEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNotEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNotEquals.InnerSingleton;
	}

void FRigVMFunction_MathIntNotEquals::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntNotEquals::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntGreater>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntGreater cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreater;
class UScriptStruct* FRigVMFunction_MathIntGreater::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreater.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreater.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntGreater"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntGreater_Execute;
		Arguments_FRigVMFunction_MathIntGreater_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntGreater_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntGreater_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntGreater::Execute"), &FRigVMFunction_MathIntGreater::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreater.OuterSingleton, Arguments_FRigVMFunction_MathIntGreater_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreater.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntGreater>()
{
	return FRigVMFunction_MathIntGreater::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if the value A is greater than B\n */" },
		{ "DisplayName", "Greater" },
		{ "Keywords", "Larger,Bigger,>" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Greater" },
		{ "ToolTip", "Returns true if the value A is greater than B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntGreater>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntGreater, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntGreater, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathIntGreater*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathIntGreater), &Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntGreater",
		sizeof(FRigVMFunction_MathIntGreater),
		alignof(FRigVMFunction_MathIntGreater),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreater.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreater.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreater.InnerSingleton;
	}

void FRigVMFunction_MathIntGreater::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntGreater::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntLess>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntLess cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLess;
class UScriptStruct* FRigVMFunction_MathIntLess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntLess"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntLess_Execute;
		Arguments_FRigVMFunction_MathIntLess_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntLess_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntLess_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntLess::Execute"), &FRigVMFunction_MathIntLess::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLess.OuterSingleton, Arguments_FRigVMFunction_MathIntLess_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLess.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntLess>()
{
	return FRigVMFunction_MathIntLess::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if the value A is less than B\n */" },
		{ "DisplayName", "Less" },
		{ "Keywords", "Smaller,<" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "Less" },
		{ "ToolTip", "Returns true if the value A is less than B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntLess>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntLess, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntLess, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathIntLess*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathIntLess), &Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntLess",
		sizeof(FRigVMFunction_MathIntLess),
		alignof(FRigVMFunction_MathIntLess),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLess.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLess.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLess.InnerSingleton;
	}

void FRigVMFunction_MathIntLess::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntLess::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntGreaterEqual>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntGreaterEqual cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreaterEqual;
class UScriptStruct* FRigVMFunction_MathIntGreaterEqual::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreaterEqual.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreaterEqual.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntGreaterEqual"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntGreaterEqual_Execute;
		Arguments_FRigVMFunction_MathIntGreaterEqual_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntGreaterEqual_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntGreaterEqual_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntGreaterEqual::Execute"), &FRigVMFunction_MathIntGreaterEqual::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreaterEqual.OuterSingleton, Arguments_FRigVMFunction_MathIntGreaterEqual_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreaterEqual.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntGreaterEqual>()
{
	return FRigVMFunction_MathIntGreaterEqual::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if the value A is greater than or equal to B\n */" },
		{ "DisplayName", "Greater Equal" },
		{ "Keywords", "Larger,Bigger,>=" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "GreaterEqual" },
		{ "ToolTip", "Returns true if the value A is greater than or equal to B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntGreaterEqual>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntGreaterEqual, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntGreaterEqual, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathIntGreaterEqual*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathIntGreaterEqual), &Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntGreaterEqual",
		sizeof(FRigVMFunction_MathIntGreaterEqual),
		alignof(FRigVMFunction_MathIntGreaterEqual),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreaterEqual.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreaterEqual.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreaterEqual.InnerSingleton;
	}

void FRigVMFunction_MathIntGreaterEqual::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntGreaterEqual::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntLessEqual>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntLessEqual cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLessEqual;
class UScriptStruct* FRigVMFunction_MathIntLessEqual::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLessEqual.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLessEqual.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntLessEqual"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntLessEqual_Execute;
		Arguments_FRigVMFunction_MathIntLessEqual_Execute.Emplace(TEXT("A"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntLessEqual_Execute.Emplace(TEXT("B"), TEXT("int32"));
		Arguments_FRigVMFunction_MathIntLessEqual_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntLessEqual::Execute"), &FRigVMFunction_MathIntLessEqual::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLessEqual.OuterSingleton, Arguments_FRigVMFunction_MathIntLessEqual_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLessEqual.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntLessEqual>()
{
	return FRigVMFunction_MathIntLessEqual::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if the value A is less than or equal to B\n */" },
		{ "DisplayName", "Less Equal" },
		{ "Keywords", "Smaller,<=" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "LessEqual" },
		{ "ToolTip", "Returns true if the value A is less than or equal to B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntLessEqual>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntLessEqual, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntLessEqual, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathIntLessEqual*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathIntLessEqual), &Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntLessEqual",
		sizeof(FRigVMFunction_MathIntLessEqual),
		alignof(FRigVMFunction_MathIntLessEqual),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLessEqual.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLessEqual.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLessEqual.InnerSingleton;
	}

void FRigVMFunction_MathIntLessEqual::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntLessEqual::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntArraySum>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntArraySum cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArraySum;
class UScriptStruct* FRigVMFunction_MathIntArraySum::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArraySum.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArraySum.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntArraySum"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntArraySum_Execute;
		Arguments_FRigVMFunction_MathIntArraySum_Execute.Emplace(TEXT("Array"), TEXT("TArray<int32>"));
		Arguments_FRigVMFunction_MathIntArraySum_Execute.Emplace(TEXT("Sum"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntArraySum::Execute"), &FRigVMFunction_MathIntArraySum::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArraySum.OuterSingleton, Arguments_FRigVMFunction_MathIntArraySum_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArraySum.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntArraySum>()
{
	return FRigVMFunction_MathIntArraySum::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Sum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the sum of the given array\n */" },
		{ "DisplayName", "Array Sum" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "ArraySum" },
		{ "ToolTip", "Returns the sum of the given array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntArraySum>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewProp_Array_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntArraySum, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewProp_Sum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewProp_Sum = { "Sum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntArraySum, Sum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewProp_Sum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewProp_Sum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewProp_Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewProp_Sum,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntArraySum",
		sizeof(FRigVMFunction_MathIntArraySum),
		alignof(FRigVMFunction_MathIntArraySum),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArraySum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArraySum.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArraySum.InnerSingleton;
	}

void FRigVMFunction_MathIntArraySum::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntArraySum::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const int32> Array_0_Array(Array);
	
	StaticExecute(
		InExecuteContext,
		Array_0_Array,
		Sum
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathIntArrayAverage>() == std::is_polymorphic<FRigVMFunction_MathIntBase>(), "USTRUCT FRigVMFunction_MathIntArrayAverage cannot be polymorphic unless super FRigVMFunction_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArrayAverage;
class UScriptStruct* FRigVMFunction_MathIntArrayAverage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArrayAverage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArrayAverage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathIntArrayAverage"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathIntArrayAverage_Execute;
		Arguments_FRigVMFunction_MathIntArrayAverage_Execute.Emplace(TEXT("Array"), TEXT("TArray<int32>"));
		Arguments_FRigVMFunction_MathIntArrayAverage_Execute.Emplace(TEXT("Average"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathIntArrayAverage::Execute"), &FRigVMFunction_MathIntArrayAverage::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArrayAverage.OuterSingleton, Arguments_FRigVMFunction_MathIntArrayAverage_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArrayAverage.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathIntArrayAverage>()
{
	return FRigVMFunction_MathIntArrayAverage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Average_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Average;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the average of the given array\n */" },
		{ "DisplayName", "Array Average" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "TemplateName", "ArrayAverage" },
		{ "ToolTip", "Returns the average of the given array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathIntArrayAverage>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewProp_Array_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntArrayAverage, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewProp_Array_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewProp_Average_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathInt.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewProp_Average = { "Average", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathIntArrayAverage, Average), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewProp_Average_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewProp_Average_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewProp_Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewProp_Average,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase,
		&NewStructOps,
		"RigVMFunction_MathIntArrayAverage",
		sizeof(FRigVMFunction_MathIntArrayAverage),
		alignof(FRigVMFunction_MathIntArrayAverage),
		Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArrayAverage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArrayAverage.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArrayAverage.InnerSingleton;
	}

void FRigVMFunction_MathIntArrayAverage::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathIntArrayAverage::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const int32> Array_0_Array(Array);
	
	StaticExecute(
		InExecuteContext,
		Array_0_Array,
		Average
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_MathIntBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase_Statics::NewStructOps, TEXT("RigVMFunction_MathIntBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntBase), 3590204901U) },
		{ FRigVMFunction_MathIntUnaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics::NewStructOps, TEXT("RigVMFunction_MathIntUnaryOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntUnaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntUnaryOp), 218360287U) },
		{ FRigVMFunction_MathIntBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics::NewStructOps, TEXT("RigVMFunction_MathIntBinaryOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntBinaryOp), 2989187600U) },
		{ FRigVMFunction_MathIntBinaryAggregateOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics::NewStructOps, TEXT("RigVMFunction_MathIntBinaryAggregateOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntBinaryAggregateOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntBinaryAggregateOp), 456733566U) },
		{ FRigVMFunction_MathIntMake::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics::NewStructOps, TEXT("RigVMFunction_MathIntMake"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMake, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntMake), 3666184562U) },
		{ FRigVMFunction_MathIntAdd::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd_Statics::NewStructOps, TEXT("RigVMFunction_MathIntAdd"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAdd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntAdd), 2135225675U) },
		{ FRigVMFunction_MathIntSub::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub_Statics::NewStructOps, TEXT("RigVMFunction_MathIntSub"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSub, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntSub), 261010538U) },
		{ FRigVMFunction_MathIntMul::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul_Statics::NewStructOps, TEXT("RigVMFunction_MathIntMul"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntMul), 2812052182U) },
		{ FRigVMFunction_MathIntDiv::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv_Statics::NewStructOps, TEXT("RigVMFunction_MathIntDiv"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntDiv, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntDiv), 4260350214U) },
		{ FRigVMFunction_MathIntMod::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod_Statics::NewStructOps, TEXT("RigVMFunction_MathIntMod"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntMod), 2147716847U) },
		{ FRigVMFunction_MathIntMin::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin_Statics::NewStructOps, TEXT("RigVMFunction_MathIntMin"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntMin), 2412885545U) },
		{ FRigVMFunction_MathIntMax::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax_Statics::NewStructOps, TEXT("RigVMFunction_MathIntMax"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntMax, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntMax), 4030389453U) },
		{ FRigVMFunction_MathIntPow::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow_Statics::NewStructOps, TEXT("RigVMFunction_MathIntPow"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntPow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntPow), 3372307579U) },
		{ FRigVMFunction_MathIntNegate::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate_Statics::NewStructOps, TEXT("RigVMFunction_MathIntNegate"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNegate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntNegate), 2960129157U) },
		{ FRigVMFunction_MathIntAbs::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs_Statics::NewStructOps, TEXT("RigVMFunction_MathIntAbs"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntAbs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntAbs), 901526352U) },
		{ FRigVMFunction_MathIntToFloat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics::NewStructOps, TEXT("RigVMFunction_MathIntToFloat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntToFloat), 3643177825U) },
		{ FRigVMFunction_MathIntToDouble::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics::NewStructOps, TEXT("RigVMFunction_MathIntToDouble"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntToDouble, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntToDouble), 418715380U) },
		{ FRigVMFunction_MathIntSign::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign_Statics::NewStructOps, TEXT("RigVMFunction_MathIntSign"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntSign, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntSign), 3791366547U) },
		{ FRigVMFunction_MathIntClamp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::NewStructOps, TEXT("RigVMFunction_MathIntClamp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntClamp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntClamp), 2022572084U) },
		{ FRigVMFunction_MathIntEquals::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics::NewStructOps, TEXT("RigVMFunction_MathIntEquals"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntEquals), 3120292049U) },
		{ FRigVMFunction_MathIntNotEquals::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics::NewStructOps, TEXT("RigVMFunction_MathIntNotEquals"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntNotEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntNotEquals), 1917546103U) },
		{ FRigVMFunction_MathIntGreater::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics::NewStructOps, TEXT("RigVMFunction_MathIntGreater"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreater, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntGreater), 4257943034U) },
		{ FRigVMFunction_MathIntLess::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics::NewStructOps, TEXT("RigVMFunction_MathIntLess"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntLess), 3157410359U) },
		{ FRigVMFunction_MathIntGreaterEqual::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics::NewStructOps, TEXT("RigVMFunction_MathIntGreaterEqual"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntGreaterEqual, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntGreaterEqual), 2174004197U) },
		{ FRigVMFunction_MathIntLessEqual::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics::NewStructOps, TEXT("RigVMFunction_MathIntLessEqual"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntLessEqual, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntLessEqual), 3172200594U) },
		{ FRigVMFunction_MathIntArraySum::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics::NewStructOps, TEXT("RigVMFunction_MathIntArraySum"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArraySum, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntArraySum), 4130531479U) },
		{ FRigVMFunction_MathIntArrayAverage::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics::NewStructOps, TEXT("RigVMFunction_MathIntArrayAverage"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathIntArrayAverage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathIntArrayAverage), 795577015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_2957065738(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
