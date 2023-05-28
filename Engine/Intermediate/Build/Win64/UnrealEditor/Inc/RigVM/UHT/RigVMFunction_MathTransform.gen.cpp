// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Math/RigVMFunction_MathTransform.h"
#include "EulerTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_MathTransform() {}
// Cross Module References
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEulerTransform();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_MathTransformBase>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_MathTransformBase cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBase;
class UScriptStruct* FRigVMFunction_MathTransformBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformBase>()
{
	return FRigVMFunction_MathTransformBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Transform" },
		{ "MenuDescSuffix", "(Transform)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
		&NewStructOps,
		"RigVMFunction_MathTransformBase",
		sizeof(FRigVMFunction_MathTransformBase),
		alignof(FRigVMFunction_MathTransformBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathTransformMutableBase>() == std::is_polymorphic<FRigVMFunction_MathMutableBase>(), "USTRUCT FRigVMFunction_MathTransformMutableBase cannot be polymorphic unless super FRigVMFunction_MathMutableBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMutableBase;
class UScriptStruct* FRigVMFunction_MathTransformMutableBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMutableBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMutableBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformMutableBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMutableBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformMutableBase>()
{
	return FRigVMFunction_MathTransformMutableBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Transform" },
		{ "MenuDescSuffix", "(Transform)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformMutableBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathMutableBase,
		&NewStructOps,
		"RigVMFunction_MathTransformMutableBase",
		sizeof(FRigVMFunction_MathTransformMutableBase),
		alignof(FRigVMFunction_MathTransformMutableBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMutableBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMutableBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMutableBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathTransformUnaryOp>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformUnaryOp cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformUnaryOp;
class UScriptStruct* FRigVMFunction_MathTransformUnaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformUnaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformUnaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformUnaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformUnaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformUnaryOp>()
{
	return FRigVMFunction_MathTransformUnaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformUnaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformUnaryOp, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformUnaryOp, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformUnaryOp",
		sizeof(FRigVMFunction_MathTransformUnaryOp),
		alignof(FRigVMFunction_MathTransformUnaryOp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformUnaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformUnaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformUnaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathTransformBinaryOp>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformBinaryOp cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryOp;
class UScriptStruct* FRigVMFunction_MathTransformBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformBinaryOp>()
{
	return FRigVMFunction_MathTransformBinaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformBinaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformBinaryOp, A), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformBinaryOp, B), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformBinaryOp, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformBinaryOp",
		sizeof(FRigVMFunction_MathTransformBinaryOp),
		alignof(FRigVMFunction_MathTransformBinaryOp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathTransformBinaryAggregateOp>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformBinaryAggregateOp cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryAggregateOp;
class UScriptStruct* FRigVMFunction_MathTransformBinaryAggregateOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryAggregateOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryAggregateOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformBinaryAggregateOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryAggregateOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformBinaryAggregateOp>()
{
	return FRigVMFunction_MathTransformBinaryAggregateOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformBinaryAggregateOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformBinaryAggregateOp, A), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformBinaryAggregateOp, B), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_Result_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformBinaryAggregateOp, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformBinaryAggregateOp",
		sizeof(FRigVMFunction_MathTransformBinaryAggregateOp),
		alignof(FRigVMFunction_MathTransformBinaryAggregateOp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryAggregateOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryAggregateOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryAggregateOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathTransformMake>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformMake cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMake;
class UScriptStruct* FRigVMFunction_MathTransformMake::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMake.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMake.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformMake"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformMake_Execute;
		Arguments_FRigVMFunction_MathTransformMake_Execute.Emplace(TEXT("Translation"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathTransformMake_Execute.Emplace(TEXT("Rotation"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathTransformMake_Execute.Emplace(TEXT("Scale"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathTransformMake_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformMake::Execute"), &FRigVMFunction_MathTransformMake::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMake.OuterSingleton, Arguments_FRigVMFunction_MathTransformMake_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMake.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformMake>()
{
	return FRigVMFunction_MathTransformMake::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a transform from its components\n */" },
		{ "DisplayName", "Make Transform" },
		{ "Keywords", "Make,Construct,Constant" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "ToolTip", "Makes a transform from its components" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformMake>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMake, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMake, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMake, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMake, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformMake",
		sizeof(FRigVMFunction_MathTransformMake),
		alignof(FRigVMFunction_MathTransformMake),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMake.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMake.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMake.InnerSingleton;
	}

void FRigVMFunction_MathTransformMake::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformMake::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Translation,
		Rotation,
		Scale,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformFromEulerTransform>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformFromEulerTransform cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransform;
class UScriptStruct* FRigVMFunction_MathTransformFromEulerTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformFromEulerTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformFromEulerTransform_Execute;
		Arguments_FRigVMFunction_MathTransformFromEulerTransform_Execute.Emplace(TEXT("EulerTransform"), TEXT("FEulerTransform"));
		Arguments_FRigVMFunction_MathTransformFromEulerTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformFromEulerTransform::Execute"), &FRigVMFunction_MathTransformFromEulerTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransform.OuterSingleton, Arguments_FRigVMFunction_MathTransformFromEulerTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformFromEulerTransform>()
{
	return FRigVMFunction_MathTransformFromEulerTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EulerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EulerTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion based transform from a euler based transform\n */" },
		{ "Deprecated", "5.0.1" },
		{ "DisplayName", "From Euler Transform" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "TemplateName", "FromEulerTransform" },
		{ "ToolTip", "Makes a quaternion based transform from a euler based transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformFromEulerTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::NewProp_EulerTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::NewProp_EulerTransform = { "EulerTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformFromEulerTransform, EulerTransform), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::NewProp_EulerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::NewProp_EulerTransform_MetaData)) }; // 3672886731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformFromEulerTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::NewProp_EulerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformFromEulerTransform",
		sizeof(FRigVMFunction_MathTransformFromEulerTransform),
		alignof(FRigVMFunction_MathTransformFromEulerTransform),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransform.InnerSingleton;
	}

void FRigVMFunction_MathTransformFromEulerTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformFromEulerTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		EulerTransform,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformFromEulerTransformV2>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformFromEulerTransformV2 cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransformV2;
class UScriptStruct* FRigVMFunction_MathTransformFromEulerTransformV2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransformV2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransformV2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformFromEulerTransformV2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformFromEulerTransformV2_Execute;
		Arguments_FRigVMFunction_MathTransformFromEulerTransformV2_Execute.Emplace(TEXT("Value"), TEXT("FEulerTransform"));
		Arguments_FRigVMFunction_MathTransformFromEulerTransformV2_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformFromEulerTransformV2::Execute"), &FRigVMFunction_MathTransformFromEulerTransformV2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransformV2.OuterSingleton, Arguments_FRigVMFunction_MathTransformFromEulerTransformV2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransformV2.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformFromEulerTransformV2>()
{
	return FRigVMFunction_MathTransformFromEulerTransformV2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion based transform from a euler based transform\n */" },
		{ "DisplayName", "To Transform" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Makes a quaternion based transform from a euler based transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformFromEulerTransformV2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformFromEulerTransformV2, Value), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::NewProp_Value_MetaData)) }; // 3672886731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformFromEulerTransformV2, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformFromEulerTransformV2",
		sizeof(FRigVMFunction_MathTransformFromEulerTransformV2),
		alignof(FRigVMFunction_MathTransformFromEulerTransformV2),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransformV2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransformV2.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransformV2.InnerSingleton;
	}

void FRigVMFunction_MathTransformFromEulerTransformV2::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformFromEulerTransformV2::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformToEulerTransform>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformToEulerTransform cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformToEulerTransform;
class UScriptStruct* FRigVMFunction_MathTransformToEulerTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformToEulerTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformToEulerTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformToEulerTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformToEulerTransform_Execute;
		Arguments_FRigVMFunction_MathTransformToEulerTransform_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformToEulerTransform_Execute.Emplace(TEXT("Result"), TEXT("FEulerTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformToEulerTransform::Execute"), &FRigVMFunction_MathTransformToEulerTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformToEulerTransform.OuterSingleton, Arguments_FRigVMFunction_MathTransformToEulerTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformToEulerTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformToEulerTransform>()
{
	return FRigVMFunction_MathTransformToEulerTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Retrieves a euler based transform from a quaternion based transform\n */" },
		{ "DisplayName", "To Euler Transform" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Retrieves a euler based transform from a quaternion based transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformToEulerTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformToEulerTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformToEulerTransform, Result), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::NewProp_Result_MetaData)) }; // 3672886731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformToEulerTransform",
		sizeof(FRigVMFunction_MathTransformToEulerTransform),
		alignof(FRigVMFunction_MathTransformToEulerTransform),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformToEulerTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformToEulerTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformToEulerTransform.InnerSingleton;
	}

void FRigVMFunction_MathTransformToEulerTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformToEulerTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformMul>() == std::is_polymorphic<FRigVMFunction_MathTransformBinaryAggregateOp>(), "USTRUCT FRigVMFunction_MathTransformMul cannot be polymorphic unless super FRigVMFunction_MathTransformBinaryAggregateOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMul;
class UScriptStruct* FRigVMFunction_MathTransformMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformMul"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformMul_Execute;
		Arguments_FRigVMFunction_MathTransformMul_Execute.Emplace(TEXT("A"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformMul_Execute.Emplace(TEXT("B"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformMul_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformMul::Execute"), &FRigVMFunction_MathTransformMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMul.OuterSingleton, Arguments_FRigVMFunction_MathTransformMul_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMul.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformMul>()
{
	return FRigVMFunction_MathTransformMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the product of the two values\n */" },
		{ "DisplayName", "Multiply" },
		{ "Keywords", "Product,*,Global" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "TemplateName", "Multiply" },
		{ "ToolTip", "Returns the product of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformMul>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp,
		&NewStructOps,
		"RigVMFunction_MathTransformMul",
		sizeof(FRigVMFunction_MathTransformMul),
		alignof(FRigVMFunction_MathTransformMul),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMul.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMul.InnerSingleton;
	}

void FRigVMFunction_MathTransformMul::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformMul::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformMakeRelative>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformMakeRelative cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeRelative;
class UScriptStruct* FRigVMFunction_MathTransformMakeRelative::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeRelative.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeRelative.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformMakeRelative"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformMakeRelative_Execute;
		Arguments_FRigVMFunction_MathTransformMakeRelative_Execute.Emplace(TEXT("Global"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformMakeRelative_Execute.Emplace(TEXT("Parent"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformMakeRelative_Execute.Emplace(TEXT("Local"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformMakeRelative::Execute"), &FRigVMFunction_MathTransformMakeRelative::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeRelative.OuterSingleton, Arguments_FRigVMFunction_MathTransformMakeRelative_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeRelative.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformMakeRelative>()
{
	return FRigVMFunction_MathTransformMakeRelative::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Local_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Local;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the relative local transform within a parent's transform\n */" },
		{ "DisplayName", "Make Relative" },
		{ "Keywords", "Local,Global,Absolute" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "TemplateName", "Make Relative" },
		{ "ToolTip", "Returns the relative local transform within a parent's transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformMakeRelative>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMakeRelative, Global), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Global_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Global_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMakeRelative, Parent), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Local_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMakeRelative, Local), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Local_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Local_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Global,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewProp_Local,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformMakeRelative",
		sizeof(FRigVMFunction_MathTransformMakeRelative),
		alignof(FRigVMFunction_MathTransformMakeRelative),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeRelative.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeRelative.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeRelative.InnerSingleton;
	}

void FRigVMFunction_MathTransformMakeRelative::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformMakeRelative::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Global,
		Parent,
		Local
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformMakeAbsolute>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformMakeAbsolute cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeAbsolute;
class UScriptStruct* FRigVMFunction_MathTransformMakeAbsolute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeAbsolute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeAbsolute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformMakeAbsolute"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformMakeAbsolute_Execute;
		Arguments_FRigVMFunction_MathTransformMakeAbsolute_Execute.Emplace(TEXT("Local"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformMakeAbsolute_Execute.Emplace(TEXT("Parent"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformMakeAbsolute_Execute.Emplace(TEXT("Global"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformMakeAbsolute::Execute"), &FRigVMFunction_MathTransformMakeAbsolute::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeAbsolute.OuterSingleton, Arguments_FRigVMFunction_MathTransformMakeAbsolute_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeAbsolute.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformMakeAbsolute>()
{
	return FRigVMFunction_MathTransformMakeAbsolute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Local_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Local;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the absolute global transform within a parent's transform\n */" },
		{ "DisplayName", "Make Absolute" },
		{ "Keywords", "Local,Global,Relative" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "TemplateName", "Make Absolute" },
		{ "ToolTip", "Returns the absolute global transform within a parent's transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformMakeAbsolute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Local_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMakeAbsolute, Local), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Local_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Local_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMakeAbsolute, Parent), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMakeAbsolute, Global), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Global_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Global_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Local,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewProp_Global,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformMakeAbsolute",
		sizeof(FRigVMFunction_MathTransformMakeAbsolute),
		alignof(FRigVMFunction_MathTransformMakeAbsolute),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeAbsolute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeAbsolute.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeAbsolute.InnerSingleton;
	}

void FRigVMFunction_MathTransformMakeAbsolute::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformMakeAbsolute::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Local,
		Parent,
		Global
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformAccumulateArray>() == std::is_polymorphic<FRigVMFunction_MathTransformMutableBase>(), "USTRUCT FRigVMFunction_MathTransformAccumulateArray cannot be polymorphic unless super FRigVMFunction_MathTransformMutableBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformAccumulateArray;
class UScriptStruct* FRigVMFunction_MathTransformAccumulateArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformAccumulateArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformAccumulateArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformAccumulateArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformAccumulateArray_Execute;
		Arguments_FRigVMFunction_MathTransformAccumulateArray_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		Arguments_FRigVMFunction_MathTransformAccumulateArray_Execute.Emplace(TEXT("TargetSpace"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigVMFunction_MathTransformAccumulateArray_Execute.Emplace(TEXT("Root"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformAccumulateArray_Execute.Emplace(TEXT("ParentIndices"), TEXT("TArray<int32>"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformAccumulateArray::Execute"), &FRigVMFunction_MathTransformAccumulateArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformAccumulateArray.OuterSingleton, Arguments_FRigVMFunction_MathTransformAccumulateArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformAccumulateArray.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformAccumulateArray>()
{
	return FRigVMFunction_MathTransformAccumulateArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Root;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Treats the provided transforms as a chain with global / local transforms, and\n* projects each transform into the target space. Optionally you can provide\n* a custom parent indices array, with which you can represent more than just chains.\n*/" },
		{ "DisplayName", "Make Transform Array Relative" },
		{ "Keywords", "Local,Global,Absolute,Array,Accumulate" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "ToolTip", "Treats the provided transforms as a chain with global / local transforms, and\nprojects each transform into the target space. Optionally you can provide\na custom parent indices array, with which you can represent more than just chains." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformAccumulateArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformAccumulateArray, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_TargetSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_TargetSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* Defines the space to project to\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "ToolTip", "Defines the space to project to" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_TargetSpace = { "TargetSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformAccumulateArray, TargetSpace), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_TargetSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_TargetSpace_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Provides the parent transform for the root\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "ToolTip", "Provides the parent transform for the root" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformAccumulateArray, Root), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_Root_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_ParentIndices_Inner = { "ParentIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_ParentIndices_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If this array is the same size as the transforms array the indices will be used\n\x09 * to look up each transform's parent. They are expected to be in order.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "ToolTip", "If this array is the same size as the transforms array the indices will be used\nto look up each transform's parent. They are expected to be in order." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_ParentIndices = { "ParentIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformAccumulateArray, ParentIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_ParentIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_ParentIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_TargetSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_TargetSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_ParentIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewProp_ParentIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase,
		&NewStructOps,
		"RigVMFunction_MathTransformAccumulateArray",
		sizeof(FRigVMFunction_MathTransformAccumulateArray),
		alignof(FRigVMFunction_MathTransformAccumulateArray),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformAccumulateArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformAccumulateArray.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformAccumulateArray.InnerSingleton;
	}

void FRigVMFunction_MathTransformAccumulateArray::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformAccumulateArray::Execute(FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const int32> ParentIndices_3_Array(ParentIndices);
	
	StaticExecute(
		InExecuteContext,
		Transforms,
		TargetSpace,
		Root,
		ParentIndices_3_Array
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformInverse>() == std::is_polymorphic<FRigVMFunction_MathTransformUnaryOp>(), "USTRUCT FRigVMFunction_MathTransformInverse cannot be polymorphic unless super FRigVMFunction_MathTransformUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformInverse;
class UScriptStruct* FRigVMFunction_MathTransformInverse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformInverse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformInverse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformInverse"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformInverse_Execute;
		Arguments_FRigVMFunction_MathTransformInverse_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformInverse_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformInverse::Execute"), &FRigVMFunction_MathTransformInverse::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformInverse.OuterSingleton, Arguments_FRigVMFunction_MathTransformInverse_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformInverse.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformInverse>()
{
	return FRigVMFunction_MathTransformInverse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the negative value\n */" },
		{ "DisplayName", "Inverse" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "TemplateName", "Inverse" },
		{ "ToolTip", "Returns the negative value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformInverse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp,
		&NewStructOps,
		"RigVMFunction_MathTransformInverse",
		sizeof(FRigVMFunction_MathTransformInverse),
		alignof(FRigVMFunction_MathTransformInverse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformInverse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformInverse.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformInverse.InnerSingleton;
	}

void FRigVMFunction_MathTransformInverse::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformInverse::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformLerp>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformLerp cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformLerp;
class UScriptStruct* FRigVMFunction_MathTransformLerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformLerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformLerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformLerp"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformLerp_Execute;
		Arguments_FRigVMFunction_MathTransformLerp_Execute.Emplace(TEXT("A"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformLerp_Execute.Emplace(TEXT("B"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformLerp_Execute.Emplace(TEXT("T"), TEXT("float"));
		Arguments_FRigVMFunction_MathTransformLerp_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformLerp::Execute"), &FRigVMFunction_MathTransformLerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformLerp.OuterSingleton, Arguments_FRigVMFunction_MathTransformLerp_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformLerp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformLerp>()
{
	return FRigVMFunction_MathTransformLerp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_T;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Linearly interpolates between A and B using the ratio T\n */" },
		{ "DisplayName", "Interpolate" },
		{ "Keywords", "Lerp,Mix,Blend" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "TemplateName", "Interpolate" },
		{ "ToolTip", "Linearly interpolates between A and B using the ratio T" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformLerp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformLerp, A), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformLerp, B), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_T_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformLerp, T), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_T_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformLerp, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_T,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformLerp",
		sizeof(FRigVMFunction_MathTransformLerp),
		alignof(FRigVMFunction_MathTransformLerp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformLerp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformLerp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformLerp.InnerSingleton;
	}

void FRigVMFunction_MathTransformLerp::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformLerp::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		T,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformSelectBool>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformSelectBool cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformSelectBool;
class UScriptStruct* FRigVMFunction_MathTransformSelectBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformSelectBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformSelectBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformSelectBool"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformSelectBool_Execute;
		Arguments_FRigVMFunction_MathTransformSelectBool_Execute.Emplace(TEXT("Condition"), TEXT("bool"));
		Arguments_FRigVMFunction_MathTransformSelectBool_Execute.Emplace(TEXT("IfTrue"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformSelectBool_Execute.Emplace(TEXT("IfFalse"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformSelectBool_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformSelectBool::Execute"), &FRigVMFunction_MathTransformSelectBool::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformSelectBool.OuterSingleton, Arguments_FRigVMFunction_MathTransformSelectBool_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformSelectBool.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformSelectBool>()
{
	return FRigVMFunction_MathTransformSelectBool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static void NewProp_Condition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IfTrue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IfTrue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IfFalse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IfFalse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Return one of the two values based on the condition\n */" },
		{ "Deprecated", "4.26.0" },
		{ "DisplayName", "Select" },
		{ "Keywords", "Pick,If" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "TemplateName", "Select" },
		{ "ToolTip", "Return one of the two values based on the condition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformSelectBool>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_Condition_SetBit(void* Obj)
	{
		((FRigVMFunction_MathTransformSelectBool*)Obj)->Condition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathTransformSelectBool), &Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_Condition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_IfTrue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_IfTrue = { "IfTrue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformSelectBool, IfTrue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_IfTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_IfTrue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_IfFalse_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_IfFalse = { "IfFalse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformSelectBool, IfFalse), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_IfFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_IfFalse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformSelectBool, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_Condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_IfTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_IfFalse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformSelectBool",
		sizeof(FRigVMFunction_MathTransformSelectBool),
		alignof(FRigVMFunction_MathTransformSelectBool),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformSelectBool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformSelectBool.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformSelectBool.InnerSingleton;
	}

void FRigVMFunction_MathTransformSelectBool::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformSelectBool::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Condition,
		IfTrue,
		IfFalse,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformRotateVector>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformRotateVector cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformRotateVector;
class UScriptStruct* FRigVMFunction_MathTransformRotateVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformRotateVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformRotateVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformRotateVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformRotateVector_Execute;
		Arguments_FRigVMFunction_MathTransformRotateVector_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformRotateVector_Execute.Emplace(TEXT("Vector"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathTransformRotateVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformRotateVector::Execute"), &FRigVMFunction_MathTransformRotateVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformRotateVector.OuterSingleton, Arguments_FRigVMFunction_MathTransformRotateVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformRotateVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformRotateVector>()
{
	return FRigVMFunction_MathTransformRotateVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Rotates a given vector (direction) by the transform\n */" },
		{ "DisplayName", "Rotate Vector" },
		{ "Keywords", "Transform,Direction,TransformDirection" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "TemplateName", "Rotate Vector" },
		{ "ToolTip", "Rotates a given vector (direction) by the transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformRotateVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformRotateVector, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Vector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformRotateVector, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformRotateVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformRotateVector",
		sizeof(FRigVMFunction_MathTransformRotateVector),
		alignof(FRigVMFunction_MathTransformRotateVector),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformRotateVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformRotateVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformRotateVector.InnerSingleton;
	}

void FRigVMFunction_MathTransformRotateVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformRotateVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Vector,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformTransformVector>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformTransformVector cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformTransformVector;
class UScriptStruct* FRigVMFunction_MathTransformTransformVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformTransformVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformTransformVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformTransformVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformTransformVector_Execute;
		Arguments_FRigVMFunction_MathTransformTransformVector_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformTransformVector_Execute.Emplace(TEXT("Location"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathTransformTransformVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformTransformVector::Execute"), &FRigVMFunction_MathTransformTransformVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformTransformVector.OuterSingleton, Arguments_FRigVMFunction_MathTransformTransformVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformTransformVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformTransformVector>()
{
	return FRigVMFunction_MathTransformTransformVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Multiplies a given vector (location) by the transform\n */" },
		{ "DisplayName", "Transform Location" },
		{ "Keywords", "Multiply" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "ToolTip", "Multiplies a given vector (location) by the transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformTransformVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformTransformVector, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformTransformVector, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformTransformVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformTransformVector",
		sizeof(FRigVMFunction_MathTransformTransformVector),
		alignof(FRigVMFunction_MathTransformTransformVector),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformTransformVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformTransformVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformTransformVector.InnerSingleton;
	}

void FRigVMFunction_MathTransformTransformVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformTransformVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Location,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformFromSRT>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformFromSRT cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromSRT;
class UScriptStruct* FRigVMFunction_MathTransformFromSRT::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromSRT.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromSRT.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformFromSRT"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformFromSRT_Execute;
		Arguments_FRigVMFunction_MathTransformFromSRT_Execute.Emplace(TEXT("Location"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathTransformFromSRT_Execute.Emplace(TEXT("Rotation"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathTransformFromSRT_Execute.Emplace(TEXT("RotationOrder"), TEXT("EEulerRotationOrder"));
		Arguments_FRigVMFunction_MathTransformFromSRT_Execute.Emplace(TEXT("Scale"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathTransformFromSRT_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformFromSRT_Execute.Emplace(TEXT("EulerTransform"), TEXT("FEulerTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformFromSRT::Execute"), &FRigVMFunction_MathTransformFromSRT::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromSRT.OuterSingleton, Arguments_FRigVMFunction_MathTransformFromSRT_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromSRT.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformFromSRT>()
{
	return FRigVMFunction_MathTransformFromSRT::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EulerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EulerTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Composes a Transform (and Euler Transform) from its components.\n */" },
		{ "DisplayName", "Transform from SRT" },
		{ "Keywords", "EulerTransform,Scale,Rotation,Orientation,Translation,Location" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "ToolTip", "Composes a Transform (and Euler Transform) from its components." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformFromSRT>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformFromSRT, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformFromSRT, Rotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_RotationOrder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformFromSRT, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_RotationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_RotationOrder_MetaData)) }; // 2684869264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformFromSRT, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformFromSRT, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_EulerTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_EulerTransform = { "EulerTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformFromSRT, EulerTransform), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_EulerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_EulerTransform_MetaData)) }; // 3672886731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_RotationOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_RotationOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewProp_EulerTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformFromSRT",
		sizeof(FRigVMFunction_MathTransformFromSRT),
		alignof(FRigVMFunction_MathTransformFromSRT),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromSRT.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromSRT.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromSRT.InnerSingleton;
	}

void FRigVMFunction_MathTransformFromSRT::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformFromSRT::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Location,
		Rotation,
		RotationOrder,
		Scale,
		Transform,
		EulerTransform
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformArrayToSRT>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformArrayToSRT cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformArrayToSRT;
class UScriptStruct* FRigVMFunction_MathTransformArrayToSRT::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformArrayToSRT.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformArrayToSRT.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformArrayToSRT"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformArrayToSRT_Execute;
		Arguments_FRigVMFunction_MathTransformArrayToSRT_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		Arguments_FRigVMFunction_MathTransformArrayToSRT_Execute.Emplace(TEXT("Translations"), TEXT("TArray<FVector>"));
		Arguments_FRigVMFunction_MathTransformArrayToSRT_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FQuat>"));
		Arguments_FRigVMFunction_MathTransformArrayToSRT_Execute.Emplace(TEXT("Scales"), TEXT("TArray<FVector>"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformArrayToSRT::Execute"), &FRigVMFunction_MathTransformArrayToSRT::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformArrayToSRT.OuterSingleton, Arguments_FRigVMFunction_MathTransformArrayToSRT_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformArrayToSRT.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformArrayToSRT>()
{
	return FRigVMFunction_MathTransformArrayToSRT::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Translations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scales_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scales_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Scales;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Decomposes a Transform Array to its components.\n */" },
		{ "DisplayName", "Transform Array to SRT" },
		{ "Keywords", "EulerTransform,Scale,Rotation,Orientation,Translation,Location" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "ToolTip", "Decomposes a Transform Array to its components." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformArrayToSRT>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformArrayToSRT, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Translations_Inner = { "Translations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Translations_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Translations = { "Translations", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformArrayToSRT, Translations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Translations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Translations_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformArrayToSRT, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Rotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Rotations_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Scales_Inner = { "Scales", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Scales_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Scales = { "Scales", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformArrayToSRT, Scales), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Scales_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Scales_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Translations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Translations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Rotations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Rotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Scales_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewProp_Scales,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformArrayToSRT",
		sizeof(FRigVMFunction_MathTransformArrayToSRT),
		alignof(FRigVMFunction_MathTransformArrayToSRT),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformArrayToSRT.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformArrayToSRT.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformArrayToSRT.InnerSingleton;
	}

void FRigVMFunction_MathTransformArrayToSRT::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformArrayToSRT::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FTransform> Transforms_0_Array(Transforms);
	
	StaticExecute(
		InExecuteContext,
		Transforms_0_Array,
		Translations,
		Rotations,
		Scales
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformClampSpatially>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformClampSpatially cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformClampSpatially;
class UScriptStruct* FRigVMFunction_MathTransformClampSpatially::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformClampSpatially.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformClampSpatially.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformClampSpatially"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformClampSpatially_Execute;
		Arguments_FRigVMFunction_MathTransformClampSpatially_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformClampSpatially_Execute.Emplace(TEXT("Axis"), TEXT("EAxis::Type"));
		Arguments_FRigVMFunction_MathTransformClampSpatially_Execute.Emplace(TEXT("Type"), TEXT("ERigVMClampSpatialMode::Type"));
		Arguments_FRigVMFunction_MathTransformClampSpatially_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigVMFunction_MathTransformClampSpatially_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigVMFunction_MathTransformClampSpatially_Execute.Emplace(TEXT("Space"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformClampSpatially_Execute.Emplace(TEXT("bDrawDebug"), TEXT("bool"));
		Arguments_FRigVMFunction_MathTransformClampSpatially_Execute.Emplace(TEXT("DebugColor"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_MathTransformClampSpatially_Execute.Emplace(TEXT("DebugThickness"), TEXT("float"));
		Arguments_FRigVMFunction_MathTransformClampSpatially_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformClampSpatially::Execute"), &FRigVMFunction_MathTransformClampSpatially::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformClampSpatially.OuterSingleton, Arguments_FRigVMFunction_MathTransformClampSpatially_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformClampSpatially.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformClampSpatially>()
{
	return FRigVMFunction_MathTransformClampSpatially::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Clamps a position using a plane collision, cylindric collision or spherical collision.\n */" },
		{ "DisplayName", "Clamp Spatially" },
		{ "Keywords", "Collide,Collision" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "TemplateName", "ClampSpatially" },
		{ "ToolTip", "Clamps a position using a plane collision, cylindric collision or spherical collision." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformClampSpatially>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformClampSpatially, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformClampSpatially, Axis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Axis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformClampSpatially, Type), Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Type_MetaData)) }; // 1269617596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformClampSpatially, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformClampSpatially, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The space this spatial clamp happens within.\n// The input position will be projected into this space.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "ToolTip", "The space this spatial clamp happens within.\nThe input position will be projected into this space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformClampSpatially, Space), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FRigVMFunction_MathTransformClampSpatially*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathTransformClampSpatially), &Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformClampSpatially, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_DebugThickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_DebugThickness = { "DebugThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformClampSpatially, DebugThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_DebugThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_DebugThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformClampSpatially, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_DebugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_DebugThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformClampSpatially",
		sizeof(FRigVMFunction_MathTransformClampSpatially),
		alignof(FRigVMFunction_MathTransformClampSpatially),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformClampSpatially.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformClampSpatially.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformClampSpatially.InnerSingleton;
	}

void FRigVMFunction_MathTransformClampSpatially::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformClampSpatially::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Axis,
		Type,
		Minimum,
		Maximum,
		Space,
		bDrawDebug,
		DebugColor,
		DebugThickness,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathTransformMirrorTransform>() == std::is_polymorphic<FRigVMFunction_MathTransformBase>(), "USTRUCT FRigVMFunction_MathTransformMirrorTransform cannot be polymorphic unless super FRigVMFunction_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMirrorTransform;
class UScriptStruct* FRigVMFunction_MathTransformMirrorTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMirrorTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMirrorTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathTransformMirrorTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathTransformMirrorTransform_Execute;
		Arguments_FRigVMFunction_MathTransformMirrorTransform_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformMirrorTransform_Execute.Emplace(TEXT("MirrorAxis"), TEXT("EAxis::Type"));
		Arguments_FRigVMFunction_MathTransformMirrorTransform_Execute.Emplace(TEXT("AxisToFlip"), TEXT("EAxis::Type"));
		Arguments_FRigVMFunction_MathTransformMirrorTransform_Execute.Emplace(TEXT("CentralTransform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathTransformMirrorTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathTransformMirrorTransform::Execute"), &FRigVMFunction_MathTransformMirrorTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMirrorTransform.OuterSingleton, Arguments_FRigVMFunction_MathTransformMirrorTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMirrorTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathTransformMirrorTransform>()
{
	return FRigVMFunction_MathTransformMirrorTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisToFlip_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToFlip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CentralTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CentralTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Mirror a transform about a central transform.\n */" },
		{ "DisplayName", "Mirror" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "TemplateName", "Mirror" },
		{ "ToolTip", "Mirror a transform about a central transform." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathTransformMirrorTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMirrorTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the axis to mirror against\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "ToolTip", "the axis to mirror against" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMirrorTransform, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_MirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_MirrorAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_AxisToFlip_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the axis to flip for rotations\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "ToolTip", "the axis to flip for rotations" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_AxisToFlip = { "AxisToFlip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMirrorTransform, AxisToFlip), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_AxisToFlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_AxisToFlip_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_CentralTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The transform about which to mirror\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "ToolTip", "The transform about which to mirror" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_CentralTransform = { "CentralTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMirrorTransform, CentralTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_CentralTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_CentralTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathTransformMirrorTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_MirrorAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_AxisToFlip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_CentralTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase,
		&NewStructOps,
		"RigVMFunction_MathTransformMirrorTransform",
		sizeof(FRigVMFunction_MathTransformMirrorTransform),
		alignof(FRigVMFunction_MathTransformMirrorTransform),
		Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMirrorTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMirrorTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMirrorTransform.InnerSingleton;
	}

void FRigVMFunction_MathTransformMirrorTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathTransformMirrorTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		MirrorAxis,
		AxisToFlip,
		CentralTransform,
		Result
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_MathTransformBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformBase), 3765378913U) },
		{ FRigVMFunction_MathTransformMutableBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformMutableBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMutableBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformMutableBase), 3559899090U) },
		{ FRigVMFunction_MathTransformUnaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformUnaryOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformUnaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformUnaryOp), 1299204176U) },
		{ FRigVMFunction_MathTransformBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformBinaryOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformBinaryOp), 3522352625U) },
		{ FRigVMFunction_MathTransformBinaryAggregateOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformBinaryAggregateOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformBinaryAggregateOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformBinaryAggregateOp), 714146073U) },
		{ FRigVMFunction_MathTransformMake::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformMake"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMake, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformMake), 2879268163U) },
		{ FRigVMFunction_MathTransformFromEulerTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformFromEulerTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformFromEulerTransform), 407891295U) },
		{ FRigVMFunction_MathTransformFromEulerTransformV2::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformFromEulerTransformV2"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromEulerTransformV2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformFromEulerTransformV2), 699066655U) },
		{ FRigVMFunction_MathTransformToEulerTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformToEulerTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformToEulerTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformToEulerTransform), 2467335757U) },
		{ FRigVMFunction_MathTransformMul::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformMul"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformMul), 3499579669U) },
		{ FRigVMFunction_MathTransformMakeRelative::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformMakeRelative"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeRelative, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformMakeRelative), 1784400199U) },
		{ FRigVMFunction_MathTransformMakeAbsolute::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformMakeAbsolute"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMakeAbsolute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformMakeAbsolute), 3025870861U) },
		{ FRigVMFunction_MathTransformAccumulateArray::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformAccumulateArray"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformAccumulateArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformAccumulateArray), 2885145595U) },
		{ FRigVMFunction_MathTransformInverse::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformInverse"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformInverse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformInverse), 3940972079U) },
		{ FRigVMFunction_MathTransformLerp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformLerp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformLerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformLerp), 1319454077U) },
		{ FRigVMFunction_MathTransformSelectBool::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformSelectBool"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformSelectBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformSelectBool), 4026749698U) },
		{ FRigVMFunction_MathTransformRotateVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformRotateVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformRotateVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformRotateVector), 225998504U) },
		{ FRigVMFunction_MathTransformTransformVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformTransformVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformTransformVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformTransformVector), 2953014805U) },
		{ FRigVMFunction_MathTransformFromSRT::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformFromSRT"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformFromSRT, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformFromSRT), 2315866634U) },
		{ FRigVMFunction_MathTransformArrayToSRT::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformArrayToSRT"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformArrayToSRT, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformArrayToSRT), 2284966199U) },
		{ FRigVMFunction_MathTransformClampSpatially::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformClampSpatially"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformClampSpatially, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformClampSpatially), 2668063623U) },
		{ FRigVMFunction_MathTransformMirrorTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics::NewStructOps, TEXT("RigVMFunction_MathTransformMirrorTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathTransformMirrorTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathTransformMirrorTransform), 764743092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_1126013839(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
