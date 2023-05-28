// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Math/RigVMFunction_MathBool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_MathBool() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_MathBoolBase>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_MathBoolBase cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBase;
class UScriptStruct* FRigVMFunction_MathBoolBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolBase>()
{
	return FRigVMFunction_MathBoolBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Boolean" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
		&NewStructOps,
		"RigVMFunction_MathBoolBase",
		sizeof(FRigVMFunction_MathBoolBase),
		alignof(FRigVMFunction_MathBoolBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathBoolConstant>() == std::is_polymorphic<FRigVMFunction_MathBoolBase>(), "USTRUCT FRigVMFunction_MathBoolConstant cannot be polymorphic unless super FRigVMFunction_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstant;
class UScriptStruct* FRigVMFunction_MathBoolConstant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolConstant"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstant.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolConstant>()
{
	return FRigVMFunction_MathBoolConstant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolConstant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolConstant*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolConstant), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase,
		&NewStructOps,
		"RigVMFunction_MathBoolConstant",
		sizeof(FRigVMFunction_MathBoolConstant),
		alignof(FRigVMFunction_MathBoolConstant),
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstant.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstant.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathBoolUnaryOp>() == std::is_polymorphic<FRigVMFunction_MathBoolBase>(), "USTRUCT FRigVMFunction_MathBoolUnaryOp cannot be polymorphic unless super FRigVMFunction_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolUnaryOp;
class UScriptStruct* FRigVMFunction_MathBoolUnaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolUnaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolUnaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolUnaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolUnaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolUnaryOp>()
{
	return FRigVMFunction_MathBoolUnaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolUnaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolUnaryOp*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolUnaryOp), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolUnaryOp*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolUnaryOp), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase,
		&NewStructOps,
		"RigVMFunction_MathBoolUnaryOp",
		sizeof(FRigVMFunction_MathBoolUnaryOp),
		alignof(FRigVMFunction_MathBoolUnaryOp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolUnaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolUnaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolUnaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathBoolBinaryOp>() == std::is_polymorphic<FRigVMFunction_MathBoolBase>(), "USTRUCT FRigVMFunction_MathBoolBinaryOp cannot be polymorphic unless super FRigVMFunction_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryOp;
class UScriptStruct* FRigVMFunction_MathBoolBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolBinaryOp>()
{
	return FRigVMFunction_MathBoolBinaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolBinaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolBinaryOp*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolBinaryOp), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolBinaryOp*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolBinaryOp), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolBinaryOp*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolBinaryOp), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase,
		&NewStructOps,
		"RigVMFunction_MathBoolBinaryOp",
		sizeof(FRigVMFunction_MathBoolBinaryOp),
		alignof(FRigVMFunction_MathBoolBinaryOp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathBoolBinaryAggregateOp>() == std::is_polymorphic<FRigVMFunction_MathBoolBase>(), "USTRUCT FRigVMFunction_MathBoolBinaryAggregateOp cannot be polymorphic unless super FRigVMFunction_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryAggregateOp;
class UScriptStruct* FRigVMFunction_MathBoolBinaryAggregateOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryAggregateOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryAggregateOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolBinaryAggregateOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryAggregateOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolBinaryAggregateOp>()
{
	return FRigVMFunction_MathBoolBinaryAggregateOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolBinaryAggregateOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolBinaryAggregateOp*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolBinaryAggregateOp), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolBinaryAggregateOp*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolBinaryAggregateOp), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_Result_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolBinaryAggregateOp*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolBinaryAggregateOp), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase,
		&NewStructOps,
		"RigVMFunction_MathBoolBinaryAggregateOp",
		sizeof(FRigVMFunction_MathBoolBinaryAggregateOp),
		alignof(FRigVMFunction_MathBoolBinaryAggregateOp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryAggregateOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryAggregateOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryAggregateOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathBoolMake>() == std::is_polymorphic<FRigVMFunction_MathBoolBase>(), "USTRUCT FRigVMFunction_MathBoolMake cannot be polymorphic unless super FRigVMFunction_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolMake;
class UScriptStruct* FRigVMFunction_MathBoolMake::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolMake.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolMake.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolMake"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolMake_Execute;
		Arguments_FRigVMFunction_MathBoolMake_Execute.Emplace(TEXT("Value"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolMake::Execute"), &FRigVMFunction_MathBoolMake::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolMake.OuterSingleton, Arguments_FRigVMFunction_MathBoolMake_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolMake.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolMake>()
{
	return FRigVMFunction_MathBoolMake::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A boolean constant\n */" },
		{ "DisplayName", "Bool" },
		{ "Keywords", "Make,Construct,Constant" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "ToolTip", "A boolean constant" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolMake>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolMake*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolMake), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase,
		&NewStructOps,
		"RigVMFunction_MathBoolMake",
		sizeof(FRigVMFunction_MathBoolMake),
		alignof(FRigVMFunction_MathBoolMake),
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolMake.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolMake.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolMake.InnerSingleton;
	}

void FRigVMFunction_MathBoolMake::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolMake::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolConstTrue>() == std::is_polymorphic<FRigVMFunction_MathBoolConstant>(), "USTRUCT FRigVMFunction_MathBoolConstTrue cannot be polymorphic unless super FRigVMFunction_MathBoolConstant is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstTrue;
class UScriptStruct* FRigVMFunction_MathBoolConstTrue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstTrue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstTrue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolConstTrue"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolConstTrue_Execute;
		Arguments_FRigVMFunction_MathBoolConstTrue_Execute.Emplace(TEXT("Value"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolConstTrue::Execute"), &FRigVMFunction_MathBoolConstTrue::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstTrue.OuterSingleton, Arguments_FRigVMFunction_MathBoolConstTrue_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstTrue.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolConstTrue>()
{
	return FRigVMFunction_MathBoolConstTrue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true\n */" },
		{ "DisplayName", "True" },
		{ "Keywords", "Yes" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "ToolTip", "Returns true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolConstTrue>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant,
		&NewStructOps,
		"RigVMFunction_MathBoolConstTrue",
		sizeof(FRigVMFunction_MathBoolConstTrue),
		alignof(FRigVMFunction_MathBoolConstTrue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstTrue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstTrue.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstTrue.InnerSingleton;
	}

void FRigVMFunction_MathBoolConstTrue::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolConstTrue::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolConstFalse>() == std::is_polymorphic<FRigVMFunction_MathBoolConstant>(), "USTRUCT FRigVMFunction_MathBoolConstFalse cannot be polymorphic unless super FRigVMFunction_MathBoolConstant is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstFalse;
class UScriptStruct* FRigVMFunction_MathBoolConstFalse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstFalse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstFalse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolConstFalse"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolConstFalse_Execute;
		Arguments_FRigVMFunction_MathBoolConstFalse_Execute.Emplace(TEXT("Value"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolConstFalse::Execute"), &FRigVMFunction_MathBoolConstFalse::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstFalse.OuterSingleton, Arguments_FRigVMFunction_MathBoolConstFalse_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstFalse.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolConstFalse>()
{
	return FRigVMFunction_MathBoolConstFalse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns false\n */" },
		{ "DisplayName", "False" },
		{ "Keywords", "No" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "ToolTip", "Returns false" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolConstFalse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant,
		&NewStructOps,
		"RigVMFunction_MathBoolConstFalse",
		sizeof(FRigVMFunction_MathBoolConstFalse),
		alignof(FRigVMFunction_MathBoolConstFalse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstFalse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstFalse.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstFalse.InnerSingleton;
	}

void FRigVMFunction_MathBoolConstFalse::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolConstFalse::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolNot>() == std::is_polymorphic<FRigVMFunction_MathBoolUnaryOp>(), "USTRUCT FRigVMFunction_MathBoolNot cannot be polymorphic unless super FRigVMFunction_MathBoolUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNot;
class UScriptStruct* FRigVMFunction_MathBoolNot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolNot"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolNot_Execute;
		Arguments_FRigVMFunction_MathBoolNot_Execute.Emplace(TEXT("Value"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolNot_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolNot::Execute"), &FRigVMFunction_MathBoolNot::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNot.OuterSingleton, Arguments_FRigVMFunction_MathBoolNot_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNot.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolNot>()
{
	return FRigVMFunction_MathBoolNot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if the condition is false\n */" },
		{ "DisplayName", "Not" },
		{ "Keywords", "!" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "TemplateName", "Not" },
		{ "ToolTip", "Returns true if the condition is false" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolNot>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp,
		&NewStructOps,
		"RigVMFunction_MathBoolNot",
		sizeof(FRigVMFunction_MathBoolNot),
		alignof(FRigVMFunction_MathBoolNot),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNot.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNot.InnerSingleton;
	}

void FRigVMFunction_MathBoolNot::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolNot::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolAnd>() == std::is_polymorphic<FRigVMFunction_MathBoolBinaryAggregateOp>(), "USTRUCT FRigVMFunction_MathBoolAnd cannot be polymorphic unless super FRigVMFunction_MathBoolBinaryAggregateOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolAnd;
class UScriptStruct* FRigVMFunction_MathBoolAnd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolAnd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolAnd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolAnd"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolAnd_Execute;
		Arguments_FRigVMFunction_MathBoolAnd_Execute.Emplace(TEXT("A"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolAnd_Execute.Emplace(TEXT("B"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolAnd_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolAnd::Execute"), &FRigVMFunction_MathBoolAnd::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolAnd.OuterSingleton, Arguments_FRigVMFunction_MathBoolAnd_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolAnd.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolAnd>()
{
	return FRigVMFunction_MathBoolAnd::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if both conditions are true\n */" },
		{ "DisplayName", "And" },
		{ "Keywords", "&&" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "TemplateName", "And" },
		{ "ToolTip", "Returns true if both conditions are true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolAnd>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp,
		&NewStructOps,
		"RigVMFunction_MathBoolAnd",
		sizeof(FRigVMFunction_MathBoolAnd),
		alignof(FRigVMFunction_MathBoolAnd),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolAnd.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolAnd.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolAnd.InnerSingleton;
	}

void FRigVMFunction_MathBoolAnd::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolAnd::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolNand>() == std::is_polymorphic<FRigVMFunction_MathBoolBinaryOp>(), "USTRUCT FRigVMFunction_MathBoolNand cannot be polymorphic unless super FRigVMFunction_MathBoolBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand;
class UScriptStruct* FRigVMFunction_MathBoolNand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolNand"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolNand_Execute;
		Arguments_FRigVMFunction_MathBoolNand_Execute.Emplace(TEXT("A"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolNand_Execute.Emplace(TEXT("B"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolNand_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolNand::Execute"), &FRigVMFunction_MathBoolNand::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand.OuterSingleton, Arguments_FRigVMFunction_MathBoolNand_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolNand>()
{
	return FRigVMFunction_MathBoolNand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if both conditions are false\n */" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "Nand" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "ToolTip", "Returns true if both conditions are false" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolNand>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp,
		&NewStructOps,
		"RigVMFunction_MathBoolNand",
		sizeof(FRigVMFunction_MathBoolNand),
		alignof(FRigVMFunction_MathBoolNand),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand.InnerSingleton;
	}

void FRigVMFunction_MathBoolNand::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolNand::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolNand2>() == std::is_polymorphic<FRigVMFunction_MathBoolBinaryOp>(), "USTRUCT FRigVMFunction_MathBoolNand2 cannot be polymorphic unless super FRigVMFunction_MathBoolBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand2;
class UScriptStruct* FRigVMFunction_MathBoolNand2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolNand2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolNand2_Execute;
		Arguments_FRigVMFunction_MathBoolNand2_Execute.Emplace(TEXT("A"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolNand2_Execute.Emplace(TEXT("B"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolNand2_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolNand2::Execute"), &FRigVMFunction_MathBoolNand2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand2.OuterSingleton, Arguments_FRigVMFunction_MathBoolNand2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand2.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolNand2>()
{
	return FRigVMFunction_MathBoolNand2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns false if both conditions are true\n */" },
		{ "DisplayName", "Nand" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "TemplateName", "Nand" },
		{ "ToolTip", "Returns false if both conditions are true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolNand2>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp,
		&NewStructOps,
		"RigVMFunction_MathBoolNand2",
		sizeof(FRigVMFunction_MathBoolNand2),
		alignof(FRigVMFunction_MathBoolNand2),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand2.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand2.InnerSingleton;
	}

void FRigVMFunction_MathBoolNand2::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolNand2::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolOr>() == std::is_polymorphic<FRigVMFunction_MathBoolBinaryAggregateOp>(), "USTRUCT FRigVMFunction_MathBoolOr cannot be polymorphic unless super FRigVMFunction_MathBoolBinaryAggregateOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOr;
class UScriptStruct* FRigVMFunction_MathBoolOr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolOr"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolOr_Execute;
		Arguments_FRigVMFunction_MathBoolOr_Execute.Emplace(TEXT("A"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolOr_Execute.Emplace(TEXT("B"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolOr_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolOr::Execute"), &FRigVMFunction_MathBoolOr::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOr.OuterSingleton, Arguments_FRigVMFunction_MathBoolOr_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOr.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolOr>()
{
	return FRigVMFunction_MathBoolOr::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if one of the conditions is true\n */" },
		{ "DisplayName", "Or" },
		{ "Keywords", "||" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "TemplateName", "Or" },
		{ "ToolTip", "Returns true if one of the conditions is true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolOr>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp,
		&NewStructOps,
		"RigVMFunction_MathBoolOr",
		sizeof(FRigVMFunction_MathBoolOr),
		alignof(FRigVMFunction_MathBoolOr),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOr.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOr.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOr.InnerSingleton;
	}

void FRigVMFunction_MathBoolOr::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolOr::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolEquals>() == std::is_polymorphic<FRigVMFunction_MathBoolBase>(), "USTRUCT FRigVMFunction_MathBoolEquals cannot be polymorphic unless super FRigVMFunction_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolEquals;
class UScriptStruct* FRigVMFunction_MathBoolEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolEquals_Execute;
		Arguments_FRigVMFunction_MathBoolEquals_Execute.Emplace(TEXT("A"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolEquals_Execute.Emplace(TEXT("B"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolEquals::Execute"), &FRigVMFunction_MathBoolEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolEquals.OuterSingleton, Arguments_FRigVMFunction_MathBoolEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolEquals.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolEquals>()
{
	return FRigVMFunction_MathBoolEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if the value A equals B\n */" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "Equals" },
		{ "Keywords", "Same,==" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "TemplateName", "Equals" },
		{ "ToolTip", "Returns true if the value A equals B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolEquals*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolEquals), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolEquals*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolEquals), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolEquals), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase,
		&NewStructOps,
		"RigVMFunction_MathBoolEquals",
		sizeof(FRigVMFunction_MathBoolEquals),
		alignof(FRigVMFunction_MathBoolEquals),
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolEquals.InnerSingleton;
	}

void FRigVMFunction_MathBoolEquals::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolEquals::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolNotEquals>() == std::is_polymorphic<FRigVMFunction_MathBoolBase>(), "USTRUCT FRigVMFunction_MathBoolNotEquals cannot be polymorphic unless super FRigVMFunction_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNotEquals;
class UScriptStruct* FRigVMFunction_MathBoolNotEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNotEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNotEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolNotEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolNotEquals_Execute;
		Arguments_FRigVMFunction_MathBoolNotEquals_Execute.Emplace(TEXT("A"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolNotEquals_Execute.Emplace(TEXT("B"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolNotEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolNotEquals::Execute"), &FRigVMFunction_MathBoolNotEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNotEquals.OuterSingleton, Arguments_FRigVMFunction_MathBoolNotEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNotEquals.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolNotEquals>()
{
	return FRigVMFunction_MathBoolNotEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if the value A does not equal B\n */" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "Not Equals" },
		{ "Keywords", "Different,!=,Xor" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "TemplateName", "NotEquals" },
		{ "ToolTip", "Returns true if the value A does not equal B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolNotEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolNotEquals*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolNotEquals), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolNotEquals*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolNotEquals), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolNotEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolNotEquals), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase,
		&NewStructOps,
		"RigVMFunction_MathBoolNotEquals",
		sizeof(FRigVMFunction_MathBoolNotEquals),
		alignof(FRigVMFunction_MathBoolNotEquals),
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNotEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNotEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNotEquals.InnerSingleton;
	}

void FRigVMFunction_MathBoolNotEquals::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolNotEquals::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolToggled>() == std::is_polymorphic<FRigVMFunction_MathBoolBase>(), "USTRUCT FRigVMFunction_MathBoolToggled cannot be polymorphic unless super FRigVMFunction_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToggled;
class UScriptStruct* FRigVMFunction_MathBoolToggled::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToggled.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToggled.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolToggled"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolToggled_Execute;
		Arguments_FRigVMFunction_MathBoolToggled_Execute.Emplace(TEXT("Value"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolToggled_Execute.Emplace(TEXT("Toggled"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolToggled_Execute.Emplace(TEXT("Initialized"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolToggled_Execute.Emplace(TEXT("LastValue"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolToggled::Execute"), &FRigVMFunction_MathBoolToggled::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToggled.OuterSingleton, Arguments_FRigVMFunction_MathBoolToggled_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToggled.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolToggled>()
{
	return FRigVMFunction_MathBoolToggled::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Toggled_MetaData[];
#endif
		static void NewProp_Toggled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Toggled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Initialized_MetaData[];
#endif
		static void NewProp_Initialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Initialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastValue_MetaData[];
#endif
		static void NewProp_LastValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LastValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Returns true if the value has changed from the last run\n*/" },
		{ "DisplayName", "Toggled" },
		{ "Keywords", "Changed,Different" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "TemplateName", "Toggled" },
		{ "ToolTip", "Returns true if the value has changed from the last run" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolToggled>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolToggled*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolToggled), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Toggled_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Toggled_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolToggled*)Obj)->Toggled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Toggled = { "Toggled", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolToggled), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Toggled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Toggled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Toggled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Initialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Initialized_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolToggled*)Obj)->Initialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Initialized = { "Initialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolToggled), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Initialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Initialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Initialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_LastValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_LastValue_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolToggled*)Obj)->LastValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_LastValue = { "LastValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolToggled), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_LastValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_LastValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_LastValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Toggled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_Initialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewProp_LastValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase,
		&NewStructOps,
		"RigVMFunction_MathBoolToggled",
		sizeof(FRigVMFunction_MathBoolToggled),
		alignof(FRigVMFunction_MathBoolToggled),
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToggled.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToggled.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToggled.InnerSingleton;
	}

void FRigVMFunction_MathBoolToggled::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolToggled::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Toggled,
		Initialized,
		LastValue
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolFlipFlop>() == std::is_polymorphic<FRigVMFunction_MathBoolBase>(), "USTRUCT FRigVMFunction_MathBoolFlipFlop cannot be polymorphic unless super FRigVMFunction_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolFlipFlop;
class UScriptStruct* FRigVMFunction_MathBoolFlipFlop::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolFlipFlop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolFlipFlop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolFlipFlop"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolFlipFlop_Execute;
		Arguments_FRigVMFunction_MathBoolFlipFlop_Execute.Emplace(TEXT("StartValue"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolFlipFlop_Execute.Emplace(TEXT("Duration"), TEXT("float"));
		Arguments_FRigVMFunction_MathBoolFlipFlop_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolFlipFlop_Execute.Emplace(TEXT("LastValue"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolFlipFlop_Execute.Emplace(TEXT("TimeLeft"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolFlipFlop::Execute"), &FRigVMFunction_MathBoolFlipFlop::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolFlipFlop.OuterSingleton, Arguments_FRigVMFunction_MathBoolFlipFlop_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolFlipFlop.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolFlipFlop>()
{
	return FRigVMFunction_MathBoolFlipFlop::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartValue_MetaData[];
#endif
		static void NewProp_StartValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StartValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastValue_MetaData[];
#endif
		static void NewProp_LastValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LastValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true and false as a sequence.\n */" },
		{ "DisplayName", "FlipFlop" },
		{ "Keywords", "Toggle,Changed,Different" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "ToolTip", "Returns true and false as a sequence." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolFlipFlop>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_StartValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The initial value to use for the flag\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "ToolTip", "The initial value to use for the flag" },
		{ "Visible", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_StartValue_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolFlipFlop*)Obj)->StartValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_StartValue = { "StartValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolFlipFlop), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_StartValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_StartValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_StartValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The duration in seconds at which the result won't change.\n     * Use 0 for a different result every time.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "ToolTip", "The duration in seconds at which the result won't change.\nUse 0 for a different result every time." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathBoolFlipFlop, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolFlipFlop*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolFlipFlop), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_LastValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_LastValue_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolFlipFlop*)Obj)->LastValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_LastValue = { "LastValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolFlipFlop), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_LastValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_LastValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_LastValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_TimeLeft_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathBoolFlipFlop, TimeLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_TimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_TimeLeft_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_StartValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_LastValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewProp_TimeLeft,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase,
		&NewStructOps,
		"RigVMFunction_MathBoolFlipFlop",
		sizeof(FRigVMFunction_MathBoolFlipFlop),
		alignof(FRigVMFunction_MathBoolFlipFlop),
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolFlipFlop.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolFlipFlop.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolFlipFlop.InnerSingleton;
	}

void FRigVMFunction_MathBoolFlipFlop::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolFlipFlop::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		StartValue,
		Duration,
		Result,
		LastValue,
		TimeLeft
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolOnce>() == std::is_polymorphic<FRigVMFunction_MathBoolBase>(), "USTRUCT FRigVMFunction_MathBoolOnce cannot be polymorphic unless super FRigVMFunction_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOnce;
class UScriptStruct* FRigVMFunction_MathBoolOnce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOnce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOnce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolOnce"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolOnce_Execute;
		Arguments_FRigVMFunction_MathBoolOnce_Execute.Emplace(TEXT("Duration"), TEXT("float"));
		Arguments_FRigVMFunction_MathBoolOnce_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolOnce_Execute.Emplace(TEXT("LastValue"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolOnce_Execute.Emplace(TEXT("TimeLeft"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolOnce::Execute"), &FRigVMFunction_MathBoolOnce::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOnce.OuterSingleton, Arguments_FRigVMFunction_MathBoolOnce_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOnce.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolOnce>()
{
	return FRigVMFunction_MathBoolOnce::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastValue_MetaData[];
#endif
		static void NewProp_LastValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LastValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true once the first time this node is hit\n */" },
		{ "DisplayName", "Once" },
		{ "Keywords", "FlipFlop,Toggle,Changed,Different" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "ToolTip", "Returns true once the first time this node is hit" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolOnce>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The duration in seconds at which the result is true\n\x09 * Use 0 for a different result every time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "ToolTip", "The duration in seconds at which the result is true\nUse 0 for a different result every time." },
		{ "Visible", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathBoolOnce, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolOnce*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolOnce), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_LastValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_LastValue_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolOnce*)Obj)->LastValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_LastValue = { "LastValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolOnce), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_LastValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_LastValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_LastValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_TimeLeft_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathBoolOnce, TimeLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_TimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_TimeLeft_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_LastValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewProp_TimeLeft,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase,
		&NewStructOps,
		"RigVMFunction_MathBoolOnce",
		sizeof(FRigVMFunction_MathBoolOnce),
		alignof(FRigVMFunction_MathBoolOnce),
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOnce.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOnce.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOnce.InnerSingleton;
	}

void FRigVMFunction_MathBoolOnce::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolOnce::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Duration,
		Result,
		LastValue,
		TimeLeft
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolToFloat>() == std::is_polymorphic<FRigVMFunction_MathBoolBase>(), "USTRUCT FRigVMFunction_MathBoolToFloat cannot be polymorphic unless super FRigVMFunction_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToFloat;
class UScriptStruct* FRigVMFunction_MathBoolToFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolToFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolToFloat_Execute;
		Arguments_FRigVMFunction_MathBoolToFloat_Execute.Emplace(TEXT("Value"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolToFloat_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolToFloat::Execute"), &FRigVMFunction_MathBoolToFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToFloat.OuterSingleton, Arguments_FRigVMFunction_MathBoolToFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToFloat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolToFloat>()
{
	return FRigVMFunction_MathBoolToFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Turns the given bool into a float value\n */" },
		{ "DisplayName", "To Float" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Turns the given bool into a float value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolToFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolToFloat*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolToFloat), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathBoolToFloat, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase,
		&NewStructOps,
		"RigVMFunction_MathBoolToFloat",
		sizeof(FRigVMFunction_MathBoolToFloat),
		alignof(FRigVMFunction_MathBoolToFloat),
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToFloat.InnerSingleton;
	}

void FRigVMFunction_MathBoolToFloat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolToFloat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathBoolToInteger>() == std::is_polymorphic<FRigVMFunction_MathBoolBase>(), "USTRUCT FRigVMFunction_MathBoolToInteger cannot be polymorphic unless super FRigVMFunction_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToInteger;
class UScriptStruct* FRigVMFunction_MathBoolToInteger::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToInteger.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToInteger.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathBoolToInteger"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathBoolToInteger_Execute;
		Arguments_FRigVMFunction_MathBoolToInteger_Execute.Emplace(TEXT("Value"), TEXT("bool"));
		Arguments_FRigVMFunction_MathBoolToInteger_Execute.Emplace(TEXT("Result"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathBoolToInteger::Execute"), &FRigVMFunction_MathBoolToInteger::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToInteger.OuterSingleton, Arguments_FRigVMFunction_MathBoolToInteger_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToInteger.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathBoolToInteger>()
{
	return FRigVMFunction_MathBoolToInteger::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Turns the given bool into an integer value\n */" },
		{ "DisplayName", "To Integer" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Turns the given bool into an integer value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathBoolToInteger>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FRigVMFunction_MathBoolToInteger*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathBoolToInteger), &Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathBool.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathBoolToInteger, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase,
		&NewStructOps,
		"RigVMFunction_MathBoolToInteger",
		sizeof(FRigVMFunction_MathBoolToInteger),
		alignof(FRigVMFunction_MathBoolToInteger),
		Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToInteger.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToInteger.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToInteger.InnerSingleton;
	}

void FRigVMFunction_MathBoolToInteger::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathBoolToInteger::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_MathBoolBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolBase), 4250629429U) },
		{ FRigVMFunction_MathBoolConstant::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolConstant"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolConstant), 1109608521U) },
		{ FRigVMFunction_MathBoolUnaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolUnaryOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolUnaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolUnaryOp), 4202344809U) },
		{ FRigVMFunction_MathBoolBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolBinaryOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolBinaryOp), 984735864U) },
		{ FRigVMFunction_MathBoolBinaryAggregateOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolBinaryAggregateOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolBinaryAggregateOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolBinaryAggregateOp), 3616781867U) },
		{ FRigVMFunction_MathBoolMake::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolMake"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolMake, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolMake), 2391751715U) },
		{ FRigVMFunction_MathBoolConstTrue::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolConstTrue"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstTrue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolConstTrue), 69695129U) },
		{ FRigVMFunction_MathBoolConstFalse::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolConstFalse"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolConstFalse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolConstFalse), 4220393883U) },
		{ FRigVMFunction_MathBoolNot::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolNot"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolNot), 4022685637U) },
		{ FRigVMFunction_MathBoolAnd::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolAnd"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolAnd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolAnd), 3709566136U) },
		{ FRigVMFunction_MathBoolNand::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolNand"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolNand), 3569667937U) },
		{ FRigVMFunction_MathBoolNand2::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolNand2"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNand2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolNand2), 4202579968U) },
		{ FRigVMFunction_MathBoolOr::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolOr"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolOr), 620122705U) },
		{ FRigVMFunction_MathBoolEquals::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolEquals"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolEquals), 3080198810U) },
		{ FRigVMFunction_MathBoolNotEquals::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolNotEquals"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolNotEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolNotEquals), 2079989029U) },
		{ FRigVMFunction_MathBoolToggled::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolToggled"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToggled, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolToggled), 2996568038U) },
		{ FRigVMFunction_MathBoolFlipFlop::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolFlipFlop"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolFlipFlop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolFlipFlop), 3019045418U) },
		{ FRigVMFunction_MathBoolOnce::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolOnce"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolOnce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolOnce), 3977374003U) },
		{ FRigVMFunction_MathBoolToFloat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolToFloat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolToFloat), 3453529246U) },
		{ FRigVMFunction_MathBoolToInteger::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics::NewStructOps, TEXT("RigVMFunction_MathBoolToInteger"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathBoolToInteger, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathBoolToInteger), 2210730123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_3044332520(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
