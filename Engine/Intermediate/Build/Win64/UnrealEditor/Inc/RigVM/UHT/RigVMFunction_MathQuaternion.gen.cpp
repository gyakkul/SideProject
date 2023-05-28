// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Math/RigVMFunction_MathQuaternion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_MathQuaternion() {}
// Cross Module References
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionBase>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_MathQuaternionBase cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase;
class UScriptStruct* FRigVMFunction_MathQuaternionBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionBase>()
{
	return FRigVMFunction_MathQuaternionBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Quaternion" },
		{ "MenuDescSuffix", "(Quaternion)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionBase",
		sizeof(FRigVMFunction_MathQuaternionBase),
		alignof(FRigVMFunction_MathQuaternionBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionUnaryOp>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionUnaryOp cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp;
class UScriptStruct* FRigVMFunction_MathQuaternionUnaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionUnaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionUnaryOp>()
{
	return FRigVMFunction_MathQuaternionUnaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionUnaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionUnaryOp, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionUnaryOp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionUnaryOp",
		sizeof(FRigVMFunction_MathQuaternionUnaryOp),
		alignof(FRigVMFunction_MathQuaternionUnaryOp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionBinaryOp>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionBinaryOp cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp;
class UScriptStruct* FRigVMFunction_MathQuaternionBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionBinaryOp>()
{
	return FRigVMFunction_MathQuaternionBinaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionBinaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionBinaryOp, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionBinaryOp, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionBinaryOp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionBinaryOp",
		sizeof(FRigVMFunction_MathQuaternionBinaryOp),
		alignof(FRigVMFunction_MathQuaternionBinaryOp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionBinaryAggregateOp>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionBinaryAggregateOp cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp;
class UScriptStruct* FRigVMFunction_MathQuaternionBinaryAggregateOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionBinaryAggregateOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionBinaryAggregateOp>()
{
	return FRigVMFunction_MathQuaternionBinaryAggregateOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionBinaryAggregateOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionBinaryAggregateOp, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionBinaryAggregateOp, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_Result_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionBinaryAggregateOp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionBinaryAggregateOp",
		sizeof(FRigVMFunction_MathQuaternionBinaryAggregateOp),
		alignof(FRigVMFunction_MathQuaternionBinaryAggregateOp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionMake>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionMake cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake;
class UScriptStruct* FRigVMFunction_MathQuaternionMake::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionMake"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionMake_Execute;
		Arguments_FRigVMFunction_MathQuaternionMake_Execute.Emplace(TEXT("X"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionMake_Execute.Emplace(TEXT("Y"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionMake_Execute.Emplace(TEXT("Z"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionMake_Execute.Emplace(TEXT("W"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionMake_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionMake::Execute"), &FRigVMFunction_MathQuaternionMake::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionMake_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionMake>()
{
	return FRigVMFunction_MathQuaternionMake::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_W;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion from its components\n */" },
		{ "DisplayName", "Make Quat" },
		{ "Keywords", "Make,Construct,Constant" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "Makes a quaternion from its components" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionMake>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMake, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMake, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMake, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_W_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMake, W), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_W_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_W_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMake, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionMake",
		sizeof(FRigVMFunction_MathQuaternionMake),
		alignof(FRigVMFunction_MathQuaternionMake),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionMake::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionMake::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		X,
		Y,
		Z,
		W,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionFromAxisAndAngle>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionFromAxisAndAngle cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle;
class UScriptStruct* FRigVMFunction_MathQuaternionFromAxisAndAngle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionFromAxisAndAngle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionFromAxisAndAngle_Execute;
		Arguments_FRigVMFunction_MathQuaternionFromAxisAndAngle_Execute.Emplace(TEXT("Axis"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionFromAxisAndAngle_Execute.Emplace(TEXT("Angle"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionFromAxisAndAngle_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionFromAxisAndAngle::Execute"), &FRigVMFunction_MathQuaternionFromAxisAndAngle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionFromAxisAndAngle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionFromAxisAndAngle>()
{
	return FRigVMFunction_MathQuaternionFromAxisAndAngle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion from an axis and an angle in radians\n */" },
		{ "DisplayName", "From Axis And Angle" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "FromAxisAndAngle" },
		{ "ToolTip", "Makes a quaternion from an axis and an angle in radians" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionFromAxisAndAngle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromAxisAndAngle, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromAxisAndAngle, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromAxisAndAngle, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionFromAxisAndAngle",
		sizeof(FRigVMFunction_MathQuaternionFromAxisAndAngle),
		alignof(FRigVMFunction_MathQuaternionFromAxisAndAngle),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionFromAxisAndAngle::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionFromAxisAndAngle::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Axis,
		Angle,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionFromEuler>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionFromEuler cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler;
class UScriptStruct* FRigVMFunction_MathQuaternionFromEuler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionFromEuler"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionFromEuler_Execute;
		Arguments_FRigVMFunction_MathQuaternionFromEuler_Execute.Emplace(TEXT("Euler"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionFromEuler_Execute.Emplace(TEXT("RotationOrder"), TEXT("EEulerRotationOrder"));
		Arguments_FRigVMFunction_MathQuaternionFromEuler_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionFromEuler::Execute"), &FRigVMFunction_MathQuaternionFromEuler::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionFromEuler_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionFromEuler>()
{
	return FRigVMFunction_MathQuaternionFromEuler::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Euler_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Euler;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion from euler values in degrees\n */" },
		{ "DisplayName", "From Euler" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "FromEuler" },
		{ "ToolTip", "Makes a quaternion from euler values in degrees" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionFromEuler>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Euler_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Euler = { "Euler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromEuler, Euler), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Euler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Euler_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_RotationOrder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromEuler, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_RotationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_RotationOrder_MetaData)) }; // 2684869264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromEuler, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Euler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_RotationOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_RotationOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionFromEuler",
		sizeof(FRigVMFunction_MathQuaternionFromEuler),
		alignof(FRigVMFunction_MathQuaternionFromEuler),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionFromEuler::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionFromEuler::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Euler,
		RotationOrder,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionFromRotator>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionFromRotator cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator;
class UScriptStruct* FRigVMFunction_MathQuaternionFromRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionFromRotator"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionFromRotator_Execute;
		Arguments_FRigVMFunction_MathQuaternionFromRotator_Execute.Emplace(TEXT("Rotator"), TEXT("FRotator"));
		Arguments_FRigVMFunction_MathQuaternionFromRotator_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionFromRotator::Execute"), &FRigVMFunction_MathQuaternionFromRotator::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionFromRotator_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionFromRotator>()
{
	return FRigVMFunction_MathQuaternionFromRotator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion from a rotator\n */" },
		{ "Deprecated", "5.0.1" },
		{ "DisplayName", "From Rotator" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "Makes a quaternion from a rotator" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionFromRotator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Rotator_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromRotator, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromRotator, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Rotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionFromRotator",
		sizeof(FRigVMFunction_MathQuaternionFromRotator),
		alignof(FRigVMFunction_MathQuaternionFromRotator),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionFromRotator::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionFromRotator::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Rotator,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionFromRotatorV2>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionFromRotatorV2 cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2;
class UScriptStruct* FRigVMFunction_MathQuaternionFromRotatorV2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionFromRotatorV2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionFromRotatorV2_Execute;
		Arguments_FRigVMFunction_MathQuaternionFromRotatorV2_Execute.Emplace(TEXT("Value"), TEXT("FRotator"));
		Arguments_FRigVMFunction_MathQuaternionFromRotatorV2_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionFromRotatorV2::Execute"), &FRigVMFunction_MathQuaternionFromRotatorV2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionFromRotatorV2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionFromRotatorV2>()
{
	return FRigVMFunction_MathQuaternionFromRotatorV2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion from a rotator\n */" },
		{ "DisplayName", "From Rotator" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Makes a quaternion from a rotator" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionFromRotatorV2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromRotatorV2, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromRotatorV2, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionFromRotatorV2",
		sizeof(FRigVMFunction_MathQuaternionFromRotatorV2),
		alignof(FRigVMFunction_MathQuaternionFromRotatorV2),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionFromRotatorV2::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionFromRotatorV2::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionFromTwoVectors>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionFromTwoVectors cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors;
class UScriptStruct* FRigVMFunction_MathQuaternionFromTwoVectors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionFromTwoVectors"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionFromTwoVectors_Execute;
		Arguments_FRigVMFunction_MathQuaternionFromTwoVectors_Execute.Emplace(TEXT("A"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionFromTwoVectors_Execute.Emplace(TEXT("B"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionFromTwoVectors_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionFromTwoVectors::Execute"), &FRigVMFunction_MathQuaternionFromTwoVectors::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionFromTwoVectors_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionFromTwoVectors>()
{
	return FRigVMFunction_MathQuaternionFromTwoVectors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Makes a quaternion from two vectors, representing the shortest rotation between the two vectors.\n */" },
		{ "DisplayName", "From Two Vectors" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "FromTwoVectors" },
		{ "ToolTip", "Makes a quaternion from two vectors, representing the shortest rotation between the two vectors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionFromTwoVectors>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromTwoVectors, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromTwoVectors, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionFromTwoVectors, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionFromTwoVectors",
		sizeof(FRigVMFunction_MathQuaternionFromTwoVectors),
		alignof(FRigVMFunction_MathQuaternionFromTwoVectors),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionFromTwoVectors::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionFromTwoVectors::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionToAxisAndAngle>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionToAxisAndAngle cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle;
class UScriptStruct* FRigVMFunction_MathQuaternionToAxisAndAngle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionToAxisAndAngle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionToAxisAndAngle_Execute;
		Arguments_FRigVMFunction_MathQuaternionToAxisAndAngle_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionToAxisAndAngle_Execute.Emplace(TEXT("Axis"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionToAxisAndAngle_Execute.Emplace(TEXT("Angle"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionToAxisAndAngle::Execute"), &FRigVMFunction_MathQuaternionToAxisAndAngle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionToAxisAndAngle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionToAxisAndAngle>()
{
	return FRigVMFunction_MathQuaternionToAxisAndAngle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Retrieves the axis and angle of a quaternion in radians\n */" },
		{ "DisplayName", "To Axis And Angle" },
		{ "Keywords", "Make,Construct,GetAxis,GetAngle" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "ToAxisAndAngle" },
		{ "ToolTip", "Retrieves the axis and angle of a quaternion in radians" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionToAxisAndAngle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToAxisAndAngle, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToAxisAndAngle, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToAxisAndAngle, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Angle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewProp_Angle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionToAxisAndAngle",
		sizeof(FRigVMFunction_MathQuaternionToAxisAndAngle),
		alignof(FRigVMFunction_MathQuaternionToAxisAndAngle),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionToAxisAndAngle::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionToAxisAndAngle::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Axis,
		Angle
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionScale>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionScale cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale;
class UScriptStruct* FRigVMFunction_MathQuaternionScale::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionScale"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionScale_Execute;
		Arguments_FRigVMFunction_MathQuaternionScale_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionScale_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionScale::Execute"), &FRigVMFunction_MathQuaternionScale::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionScale_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionScale>()
{
	return FRigVMFunction_MathQuaternionScale::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Scales a quaternion's angle\n */" },
		{ "Constant", "" },
		{ "Deprecated", "5.0.1" },
		{ "DisplayName", "Scale" },
		{ "Keywords", "Multiply,Angle,Scale" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "Scales a quaternion's angle" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionScale>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionScale, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionScale, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionScale",
		sizeof(FRigVMFunction_MathQuaternionScale),
		alignof(FRigVMFunction_MathQuaternionScale),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionScale::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionScale::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Scale
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionScaleV2>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionScaleV2 cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2;
class UScriptStruct* FRigVMFunction_MathQuaternionScaleV2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionScaleV2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionScaleV2_Execute;
		Arguments_FRigVMFunction_MathQuaternionScaleV2_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionScaleV2_Execute.Emplace(TEXT("Factor"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionScaleV2_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionScaleV2::Execute"), &FRigVMFunction_MathQuaternionScaleV2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionScaleV2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionScaleV2>()
{
	return FRigVMFunction_MathQuaternionScaleV2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Factor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Factor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Scales a quaternion's angle\n */" },
		{ "Constant", "" },
		{ "DisplayName", "Scale" },
		{ "Keywords", "Multiply,Angle,Scale" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Scale" },
		{ "ToolTip", "Scales a quaternion's angle" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionScaleV2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionScaleV2, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Factor_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionScaleV2, Factor), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Factor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Factor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionScaleV2, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Factor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionScaleV2",
		sizeof(FRigVMFunction_MathQuaternionScaleV2),
		alignof(FRigVMFunction_MathQuaternionScaleV2),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionScaleV2::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionScaleV2::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Factor,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionToEuler>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionToEuler cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler;
class UScriptStruct* FRigVMFunction_MathQuaternionToEuler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionToEuler"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionToEuler_Execute;
		Arguments_FRigVMFunction_MathQuaternionToEuler_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionToEuler_Execute.Emplace(TEXT("RotationOrder"), TEXT("EEulerRotationOrder"));
		Arguments_FRigVMFunction_MathQuaternionToEuler_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionToEuler::Execute"), &FRigVMFunction_MathQuaternionToEuler::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionToEuler_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionToEuler>()
{
	return FRigVMFunction_MathQuaternionToEuler::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Retrieves the euler angles in degrees\n */" },
		{ "DisplayName", "To Euler" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "ToEuler" },
		{ "ToolTip", "Retrieves the euler angles in degrees" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionToEuler>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToEuler, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_RotationOrder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToEuler, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_RotationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_RotationOrder_MetaData)) }; // 2684869264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToEuler, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_RotationOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_RotationOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionToEuler",
		sizeof(FRigVMFunction_MathQuaternionToEuler),
		alignof(FRigVMFunction_MathQuaternionToEuler),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionToEuler::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionToEuler::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		RotationOrder,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionToRotator>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionToRotator cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator;
class UScriptStruct* FRigVMFunction_MathQuaternionToRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionToRotator"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionToRotator_Execute;
		Arguments_FRigVMFunction_MathQuaternionToRotator_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionToRotator_Execute.Emplace(TEXT("Result"), TEXT("FRotator"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionToRotator::Execute"), &FRigVMFunction_MathQuaternionToRotator::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionToRotator_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionToRotator>()
{
	return FRigVMFunction_MathQuaternionToRotator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Retrieves the rotator\n */" },
		{ "DisplayName", "To Rotator" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Retrieves the rotator" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionToRotator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToRotator, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionToRotator, Result), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionToRotator",
		sizeof(FRigVMFunction_MathQuaternionToRotator),
		alignof(FRigVMFunction_MathQuaternionToRotator),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionToRotator::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionToRotator::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionMul>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBinaryAggregateOp>(), "USTRUCT FRigVMFunction_MathQuaternionMul cannot be polymorphic unless super FRigVMFunction_MathQuaternionBinaryAggregateOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul;
class UScriptStruct* FRigVMFunction_MathQuaternionMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionMul"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionMul_Execute;
		Arguments_FRigVMFunction_MathQuaternionMul_Execute.Emplace(TEXT("A"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMul_Execute.Emplace(TEXT("B"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMul_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionMul::Execute"), &FRigVMFunction_MathQuaternionMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionMul_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionMul>()
{
	return FRigVMFunction_MathQuaternionMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the product of the two values\n */" },
		{ "DisplayName", "Multiply" },
		{ "Keywords", "Product,*" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Multiply" },
		{ "ToolTip", "Returns the product of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionMul>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp,
		&NewStructOps,
		"RigVMFunction_MathQuaternionMul",
		sizeof(FRigVMFunction_MathQuaternionMul),
		alignof(FRigVMFunction_MathQuaternionMul),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionMul::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionMul::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionInverse>() == std::is_polymorphic<FRigVMFunction_MathQuaternionUnaryOp>(), "USTRUCT FRigVMFunction_MathQuaternionInverse cannot be polymorphic unless super FRigVMFunction_MathQuaternionUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse;
class UScriptStruct* FRigVMFunction_MathQuaternionInverse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionInverse"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionInverse_Execute;
		Arguments_FRigVMFunction_MathQuaternionInverse_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionInverse_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionInverse::Execute"), &FRigVMFunction_MathQuaternionInverse::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionInverse_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionInverse>()
{
	return FRigVMFunction_MathQuaternionInverse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the negative value\n */" },
		{ "DisplayName", "Inverse" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Inverse" },
		{ "ToolTip", "Returns the negative value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionInverse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp,
		&NewStructOps,
		"RigVMFunction_MathQuaternionInverse",
		sizeof(FRigVMFunction_MathQuaternionInverse),
		alignof(FRigVMFunction_MathQuaternionInverse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionInverse::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionInverse::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionSlerp>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionSlerp cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp;
class UScriptStruct* FRigVMFunction_MathQuaternionSlerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionSlerp"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionSlerp_Execute;
		Arguments_FRigVMFunction_MathQuaternionSlerp_Execute.Emplace(TEXT("A"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionSlerp_Execute.Emplace(TEXT("B"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionSlerp_Execute.Emplace(TEXT("T"), TEXT("float"));
		Arguments_FRigVMFunction_MathQuaternionSlerp_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionSlerp::Execute"), &FRigVMFunction_MathQuaternionSlerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionSlerp_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionSlerp>()
{
	return FRigVMFunction_MathQuaternionSlerp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Linearly interpolates between A and B using the ratio T\n */" },
		{ "DisplayName", "Interpolate" },
		{ "Keywords", "Lerp,Mix,Blend,Slerp,SphericalInterpolate" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Interpolate" },
		{ "ToolTip", "Linearly interpolates between A and B using the ratio T" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionSlerp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSlerp, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSlerp, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_T_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSlerp, T), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_T_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSlerp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_T,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionSlerp",
		sizeof(FRigVMFunction_MathQuaternionSlerp),
		alignof(FRigVMFunction_MathQuaternionSlerp),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionSlerp::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionSlerp::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		T,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionEquals>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionEquals cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals;
class UScriptStruct* FRigVMFunction_MathQuaternionEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionEquals_Execute;
		Arguments_FRigVMFunction_MathQuaternionEquals_Execute.Emplace(TEXT("A"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionEquals_Execute.Emplace(TEXT("B"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionEquals::Execute"), &FRigVMFunction_MathQuaternionEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionEquals>()
{
	return FRigVMFunction_MathQuaternionEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics
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
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if the value A equals B\n */" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "Equals" },
		{ "Keywords", "Same,==" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Equals" },
		{ "ToolTip", "Returns true if the value A equals B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionEquals, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionEquals, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathQuaternionEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathQuaternionEquals), &Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionEquals",
		sizeof(FRigVMFunction_MathQuaternionEquals),
		alignof(FRigVMFunction_MathQuaternionEquals),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionEquals::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionEquals::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionNotEquals>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionNotEquals cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals;
class UScriptStruct* FRigVMFunction_MathQuaternionNotEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionNotEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionNotEquals_Execute;
		Arguments_FRigVMFunction_MathQuaternionNotEquals_Execute.Emplace(TEXT("A"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionNotEquals_Execute.Emplace(TEXT("B"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionNotEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionNotEquals::Execute"), &FRigVMFunction_MathQuaternionNotEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionNotEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionNotEquals>()
{
	return FRigVMFunction_MathQuaternionNotEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics
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
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns true if the value A does not equal B\n */" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "Not Equals" },
		{ "Keywords", "Different,!=" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "NotEquals" },
		{ "ToolTip", "Returns true if the value A does not equal B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionNotEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionNotEquals, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionNotEquals, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigVMFunction_MathQuaternionNotEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathQuaternionNotEquals), &Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionNotEquals",
		sizeof(FRigVMFunction_MathQuaternionNotEquals),
		alignof(FRigVMFunction_MathQuaternionNotEquals),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionNotEquals::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionNotEquals::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionSelectBool>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionSelectBool cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool;
class UScriptStruct* FRigVMFunction_MathQuaternionSelectBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionSelectBool"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionSelectBool_Execute;
		Arguments_FRigVMFunction_MathQuaternionSelectBool_Execute.Emplace(TEXT("Condition"), TEXT("bool"));
		Arguments_FRigVMFunction_MathQuaternionSelectBool_Execute.Emplace(TEXT("IfTrue"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionSelectBool_Execute.Emplace(TEXT("IfFalse"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionSelectBool_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionSelectBool::Execute"), &FRigVMFunction_MathQuaternionSelectBool::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionSelectBool_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionSelectBool>()
{
	return FRigVMFunction_MathQuaternionSelectBool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Return one of the two values based on the condition\n */" },
		{ "Deprecated", "4.26.0" },
		{ "DisplayName", "Select" },
		{ "Keywords", "Pick,If" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Select" },
		{ "ToolTip", "Return one of the two values based on the condition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionSelectBool>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Condition_SetBit(void* Obj)
	{
		((FRigVMFunction_MathQuaternionSelectBool*)Obj)->Condition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_MathQuaternionSelectBool), &Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Condition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfTrue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfTrue = { "IfTrue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSelectBool, IfTrue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfTrue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfFalse_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfFalse = { "IfFalse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSelectBool, IfFalse), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfFalse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSelectBool, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_IfFalse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionSelectBool",
		sizeof(FRigVMFunction_MathQuaternionSelectBool),
		alignof(FRigVMFunction_MathQuaternionSelectBool),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionSelectBool::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionSelectBool::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Condition,
		IfTrue,
		IfFalse,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionDot>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionDot cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot;
class UScriptStruct* FRigVMFunction_MathQuaternionDot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionDot"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionDot_Execute;
		Arguments_FRigVMFunction_MathQuaternionDot_Execute.Emplace(TEXT("A"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionDot_Execute.Emplace(TEXT("B"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionDot_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionDot::Execute"), &FRigVMFunction_MathQuaternionDot::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionDot_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionDot>()
{
	return FRigVMFunction_MathQuaternionDot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics
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
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the dot product between two quaternions\n */" },
		{ "DisplayName", "Dot" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Dot,|" },
		{ "ToolTip", "Returns the dot product between two quaternions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionDot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionDot, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionDot, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionDot, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionDot",
		sizeof(FRigVMFunction_MathQuaternionDot),
		alignof(FRigVMFunction_MathQuaternionDot),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionDot::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionDot::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionUnit>() == std::is_polymorphic<FRigVMFunction_MathQuaternionUnaryOp>(), "USTRUCT FRigVMFunction_MathQuaternionUnit cannot be polymorphic unless super FRigVMFunction_MathQuaternionUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit;
class UScriptStruct* FRigVMFunction_MathQuaternionUnit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionUnit"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionUnit_Execute;
		Arguments_FRigVMFunction_MathQuaternionUnit_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionUnit_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionUnit::Execute"), &FRigVMFunction_MathQuaternionUnit::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionUnit_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionUnit>()
{
	return FRigVMFunction_MathQuaternionUnit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the normalized quaternion\n */" },
		{ "DisplayName", "Unit" },
		{ "Keywords", "Normalize" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Unit" },
		{ "ToolTip", "Returns the normalized quaternion" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionUnit>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp,
		&NewStructOps,
		"RigVMFunction_MathQuaternionUnit",
		sizeof(FRigVMFunction_MathQuaternionUnit),
		alignof(FRigVMFunction_MathQuaternionUnit),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionUnit::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionUnit::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionRotateVector>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionRotateVector cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector;
class UScriptStruct* FRigVMFunction_MathQuaternionRotateVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionRotateVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionRotateVector_Execute;
		Arguments_FRigVMFunction_MathQuaternionRotateVector_Execute.Emplace(TEXT("Transform"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionRotateVector_Execute.Emplace(TEXT("Vector"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionRotateVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionRotateVector::Execute"), &FRigVMFunction_MathQuaternionRotateVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionRotateVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionRotateVector>()
{
	return FRigVMFunction_MathQuaternionRotateVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Rotates a given vector by the quaternion\n */" },
		{ "DisplayName", "Rotate Vector" },
		{ "Keywords", "Transform,Multiply" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Rotate Vector" },
		{ "ToolTip", "Rotates a given vector by the quaternion" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionRotateVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionRotateVector, Transform), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Vector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionRotateVector, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionRotateVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionRotateVector",
		sizeof(FRigVMFunction_MathQuaternionRotateVector),
		alignof(FRigVMFunction_MathQuaternionRotateVector),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionRotateVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionRotateVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Vector,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionGetAxis>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionGetAxis cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis;
class UScriptStruct* FRigVMFunction_MathQuaternionGetAxis::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionGetAxis"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionGetAxis_Execute;
		Arguments_FRigVMFunction_MathQuaternionGetAxis_Execute.Emplace(TEXT("Quaternion"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionGetAxis_Execute.Emplace(TEXT("Axis"), TEXT("EAxis::Type"));
		Arguments_FRigVMFunction_MathQuaternionGetAxis_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionGetAxis::Execute"), &FRigVMFunction_MathQuaternionGetAxis::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionGetAxis_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionGetAxis>()
{
	return FRigVMFunction_MathQuaternionGetAxis::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Rotates a given vector by the quaternion\n */" },
		{ "DisplayName", "Axis" },
		{ "Keywords", "GetAxis,xAxis,yAxis,zAxis" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Axis" },
		{ "ToolTip", "Rotates a given vector by the quaternion" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionGetAxis>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Quaternion_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Quaternion = { "Quaternion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionGetAxis, Quaternion), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Quaternion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Quaternion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionGetAxis, Axis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Axis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionGetAxis, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Quaternion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionGetAxis",
		sizeof(FRigVMFunction_MathQuaternionGetAxis),
		alignof(FRigVMFunction_MathQuaternionGetAxis),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionGetAxis::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionGetAxis::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Quaternion,
		Axis,
		Result
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionSwingTwist>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionSwingTwist cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist;
class UScriptStruct* FRigVMFunction_MathQuaternionSwingTwist::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionSwingTwist"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionSwingTwist_Execute;
		Arguments_FRigVMFunction_MathQuaternionSwingTwist_Execute.Emplace(TEXT("Input"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionSwingTwist_Execute.Emplace(TEXT("TwistAxis"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathQuaternionSwingTwist_Execute.Emplace(TEXT("Swing"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionSwingTwist_Execute.Emplace(TEXT("Twist"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionSwingTwist::Execute"), &FRigVMFunction_MathQuaternionSwingTwist::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionSwingTwist_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionSwingTwist>()
{
	return FRigVMFunction_MathQuaternionSwingTwist::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Swing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Swing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Twist_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Twist;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Computes the swing and twist components of a quaternion\n */" },
		{ "DisplayName", "To Swing & Twist" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "Computes the swing and twist components of a quaternion" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionSwingTwist>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSwingTwist, Input), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSwingTwist, TwistAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_TwistAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_TwistAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Swing_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Swing = { "Swing", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSwingTwist, Swing), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Swing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Swing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Twist_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Twist = { "Twist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionSwingTwist, Twist), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Twist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Twist_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_TwistAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Swing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewProp_Twist,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionSwingTwist",
		sizeof(FRigVMFunction_MathQuaternionSwingTwist),
		alignof(FRigVMFunction_MathQuaternionSwingTwist),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionSwingTwist::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionSwingTwist::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Input,
		TwistAxis,
		Swing,
		Twist
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionRotationOrder>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_MathQuaternionRotationOrder cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder;
class UScriptStruct* FRigVMFunction_MathQuaternionRotationOrder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionRotationOrder"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionRotationOrder_Execute;
		Arguments_FRigVMFunction_MathQuaternionRotationOrder_Execute.Emplace(TEXT("RotationOrder"), TEXT("EEulerRotationOrder"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionRotationOrder::Execute"), &FRigVMFunction_MathQuaternionRotationOrder::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionRotationOrder_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionRotationOrder>()
{
	return FRigVMFunction_MathQuaternionRotationOrder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Math|Quaternion" },
		{ "Comment", "/**\n * Enum of possible rotation orders\n */" },
		{ "Constant", "" },
		{ "DisplayName", "Rotation Order" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "Enum of possible rotation orders" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionRotationOrder>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionRotationOrder, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder_MetaData)) }; // 2684869264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionRotationOrder",
		sizeof(FRigVMFunction_MathQuaternionRotationOrder),
		alignof(FRigVMFunction_MathQuaternionRotationOrder),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionRotationOrder::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionRotationOrder::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		RotationOrder
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionMakeRelative>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionMakeRelative cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative;
class UScriptStruct* FRigVMFunction_MathQuaternionMakeRelative::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionMakeRelative"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionMakeRelative_Execute;
		Arguments_FRigVMFunction_MathQuaternionMakeRelative_Execute.Emplace(TEXT("Global"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMakeRelative_Execute.Emplace(TEXT("Parent"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMakeRelative_Execute.Emplace(TEXT("Local"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionMakeRelative::Execute"), &FRigVMFunction_MathQuaternionMakeRelative::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionMakeRelative_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionMakeRelative>()
{
	return FRigVMFunction_MathQuaternionMakeRelative::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the relative local transform within a parent's transform\n */" },
		{ "DisplayName", "Make Relative" },
		{ "Keywords", "Local,Global,Absolute" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Make Relative" },
		{ "ToolTip", "Returns the relative local transform within a parent's transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionMakeRelative>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMakeRelative, Global), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Global_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Global_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMakeRelative, Parent), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Local_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMakeRelative, Local), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Local_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Local_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Global,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewProp_Local,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionMakeRelative",
		sizeof(FRigVMFunction_MathQuaternionMakeRelative),
		alignof(FRigVMFunction_MathQuaternionMakeRelative),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionMakeRelative::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionMakeRelative::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Global,
		Parent,
		Local
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionMakeAbsolute>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionMakeAbsolute cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute;
class UScriptStruct* FRigVMFunction_MathQuaternionMakeAbsolute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionMakeAbsolute"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionMakeAbsolute_Execute;
		Arguments_FRigVMFunction_MathQuaternionMakeAbsolute_Execute.Emplace(TEXT("Local"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMakeAbsolute_Execute.Emplace(TEXT("Parent"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMakeAbsolute_Execute.Emplace(TEXT("Global"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionMakeAbsolute::Execute"), &FRigVMFunction_MathQuaternionMakeAbsolute::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionMakeAbsolute_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionMakeAbsolute>()
{
	return FRigVMFunction_MathQuaternionMakeAbsolute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the absolute global transform within a parent's transform\n */" },
		{ "DisplayName", "Make Absolute" },
		{ "Keywords", "Local,Global,Relative" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Make Absolute" },
		{ "ToolTip", "Returns the absolute global transform within a parent's transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionMakeAbsolute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Local_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMakeAbsolute, Local), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Local_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Local_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMakeAbsolute, Parent), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMakeAbsolute, Global), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Global_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Global_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Local,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewProp_Global,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionMakeAbsolute",
		sizeof(FRigVMFunction_MathQuaternionMakeAbsolute),
		alignof(FRigVMFunction_MathQuaternionMakeAbsolute),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionMakeAbsolute::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionMakeAbsolute::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Local,
		Parent,
		Global
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_MathQuaternionMirrorTransform>() == std::is_polymorphic<FRigVMFunction_MathQuaternionBase>(), "USTRUCT FRigVMFunction_MathQuaternionMirrorTransform cannot be polymorphic unless super FRigVMFunction_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform;
class UScriptStruct* FRigVMFunction_MathQuaternionMirrorTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathQuaternionMirrorTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute;
		Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute.Emplace(TEXT("MirrorAxis"), TEXT("EAxis::Type"));
		Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute.Emplace(TEXT("AxisToFlip"), TEXT("EAxis::Type"));
		Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute.Emplace(TEXT("CentralTransform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathQuaternionMirrorTransform::Execute"), &FRigVMFunction_MathQuaternionMirrorTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.OuterSingleton, Arguments_FRigVMFunction_MathQuaternionMirrorTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathQuaternionMirrorTransform>()
{
	return FRigVMFunction_MathQuaternionMirrorTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Mirror a rotation about a central transform.\n */" },
		{ "DisplayName", "Mirror" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "TemplateName", "Mirror" },
		{ "ToolTip", "Mirror a rotation about a central transform." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathQuaternionMirrorTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMirrorTransform, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the axis to mirror against\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "the axis to mirror against" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMirrorTransform, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_MirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_MirrorAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_AxisToFlip_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the axis to flip for rotations\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "the axis to flip for rotations" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_AxisToFlip = { "AxisToFlip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMirrorTransform, AxisToFlip), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_AxisToFlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_AxisToFlip_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_CentralTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The transform about which to mirror\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "ToolTip", "The transform about which to mirror" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_CentralTransform = { "CentralTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMirrorTransform, CentralTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_CentralTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_CentralTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_MathQuaternionMirrorTransform, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_MirrorAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_AxisToFlip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_CentralTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase,
		&NewStructOps,
		"RigVMFunction_MathQuaternionMirrorTransform",
		sizeof(FRigVMFunction_MathQuaternionMirrorTransform),
		alignof(FRigVMFunction_MathQuaternionMirrorTransform),
		Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform.InnerSingleton;
	}

void FRigVMFunction_MathQuaternionMirrorTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_MathQuaternionMirrorTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
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

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_MathQuaternionBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionBase), 643909955U) },
		{ FRigVMFunction_MathQuaternionUnaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionUnaryOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionUnaryOp), 2168445679U) },
		{ FRigVMFunction_MathQuaternionBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionBinaryOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionBinaryOp), 2779812204U) },
		{ FRigVMFunction_MathQuaternionBinaryAggregateOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionBinaryAggregateOp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionBinaryAggregateOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionBinaryAggregateOp), 666750323U) },
		{ FRigVMFunction_MathQuaternionMake::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionMake"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMake, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionMake), 2374389750U) },
		{ FRigVMFunction_MathQuaternionFromAxisAndAngle::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionFromAxisAndAngle"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromAxisAndAngle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionFromAxisAndAngle), 1646932511U) },
		{ FRigVMFunction_MathQuaternionFromEuler::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionFromEuler"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromEuler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionFromEuler), 1175260533U) },
		{ FRigVMFunction_MathQuaternionFromRotator::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionFromRotator"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionFromRotator), 496679439U) },
		{ FRigVMFunction_MathQuaternionFromRotatorV2::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionFromRotatorV2"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromRotatorV2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionFromRotatorV2), 2024803000U) },
		{ FRigVMFunction_MathQuaternionFromTwoVectors::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionFromTwoVectors"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionFromTwoVectors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionFromTwoVectors), 2773742689U) },
		{ FRigVMFunction_MathQuaternionToAxisAndAngle::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionToAxisAndAngle"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToAxisAndAngle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionToAxisAndAngle), 521933857U) },
		{ FRigVMFunction_MathQuaternionScale::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionScale"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScale, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionScale), 976755834U) },
		{ FRigVMFunction_MathQuaternionScaleV2::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionScaleV2"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionScaleV2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionScaleV2), 21062939U) },
		{ FRigVMFunction_MathQuaternionToEuler::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionToEuler"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToEuler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionToEuler), 4255689863U) },
		{ FRigVMFunction_MathQuaternionToRotator::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionToRotator"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionToRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionToRotator), 932871951U) },
		{ FRigVMFunction_MathQuaternionMul::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionMul"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionMul), 1599429741U) },
		{ FRigVMFunction_MathQuaternionInverse::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionInverse"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionInverse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionInverse), 1520413916U) },
		{ FRigVMFunction_MathQuaternionSlerp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionSlerp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSlerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionSlerp), 1702307193U) },
		{ FRigVMFunction_MathQuaternionEquals::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionEquals"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionEquals), 3856997987U) },
		{ FRigVMFunction_MathQuaternionNotEquals::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionNotEquals"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionNotEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionNotEquals), 3883666004U) },
		{ FRigVMFunction_MathQuaternionSelectBool::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionSelectBool"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSelectBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionSelectBool), 1640848749U) },
		{ FRigVMFunction_MathQuaternionDot::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionDot"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionDot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionDot), 3376342393U) },
		{ FRigVMFunction_MathQuaternionUnit::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionUnit"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionUnit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionUnit), 3506937279U) },
		{ FRigVMFunction_MathQuaternionRotateVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionRotateVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotateVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionRotateVector), 2878929470U) },
		{ FRigVMFunction_MathQuaternionGetAxis::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionGetAxis"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionGetAxis, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionGetAxis), 790415467U) },
		{ FRigVMFunction_MathQuaternionSwingTwist::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionSwingTwist"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionSwingTwist, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionSwingTwist), 2273063372U) },
		{ FRigVMFunction_MathQuaternionRotationOrder::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionRotationOrder"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionRotationOrder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionRotationOrder), 2000206530U) },
		{ FRigVMFunction_MathQuaternionMakeRelative::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionMakeRelative"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeRelative, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionMakeRelative), 1122119508U) },
		{ FRigVMFunction_MathQuaternionMakeAbsolute::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionMakeAbsolute"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMakeAbsolute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionMakeAbsolute), 1685137590U) },
		{ FRigVMFunction_MathQuaternionMirrorTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics::NewStructOps, TEXT("RigVMFunction_MathQuaternionMirrorTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathQuaternionMirrorTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathQuaternionMirrorTransform), 3289098330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_3635851323(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
