// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Deprecated/Math/RigUnit_Quaternion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Quaternion() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_BinaryQuaternionOp>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_BinaryQuaternionOp cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp;
class UScriptStruct* FRigUnit_BinaryQuaternionOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BinaryQuaternionOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BinaryQuaternionOp>()
{
	return FRigUnit_BinaryQuaternionOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Comment", "/** Two args and a result of Quaternion type */" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
		{ "ToolTip", "Two args and a result of Quaternion type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BinaryQuaternionOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument0_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument0 = { "Argument0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BinaryQuaternionOp, Argument0), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument1_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument1 = { "Argument1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BinaryQuaternionOp, Argument1), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BinaryQuaternionOp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_BinaryQuaternionOp",
		sizeof(FRigUnit_BinaryQuaternionOp),
		alignof(FRigUnit_BinaryQuaternionOp),
		Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MultiplyQuaternion>() == std::is_polymorphic<FRigUnit_BinaryQuaternionOp>(), "USTRUCT FRigUnit_MultiplyQuaternion cannot be polymorphic unless super FRigUnit_BinaryQuaternionOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion;
class UScriptStruct* FRigUnit_MultiplyQuaternion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MultiplyQuaternion"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MultiplyQuaternion_Execute;
		Arguments_FRigUnit_MultiplyQuaternion_Execute.Emplace(TEXT("Argument0"), TEXT("FQuat"));
		Arguments_FRigUnit_MultiplyQuaternion_Execute.Emplace(TEXT("Argument1"), TEXT("FQuat"));
		Arguments_FRigUnit_MultiplyQuaternion_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MultiplyQuaternion::Execute"), &FRigUnit_MultiplyQuaternion::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.OuterSingleton, Arguments_FRigUnit_MultiplyQuaternion_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MultiplyQuaternion>()
{
	return FRigUnit_MultiplyQuaternion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Quaternion" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Multiply(Quaternion)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MultiplyQuaternion>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp,
		&NewStructOps,
		"RigUnit_MultiplyQuaternion",
		sizeof(FRigUnit_MultiplyQuaternion),
		alignof(FRigUnit_MultiplyQuaternion),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.InnerSingleton;
	}

void FRigUnit_MultiplyQuaternion::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_MultiplyQuaternion::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_UnaryQuaternionOp>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_UnaryQuaternionOp cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp;
class UScriptStruct* FRigUnit_UnaryQuaternionOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_UnaryQuaternionOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_UnaryQuaternionOp>()
{
	return FRigUnit_UnaryQuaternionOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Argument;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Comment", "/** Two args and a result of Quaternion type */" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
		{ "ToolTip", "Two args and a result of Quaternion type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_UnaryQuaternionOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Argument_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_UnaryQuaternionOp, Argument), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Argument_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Argument_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_UnaryQuaternionOp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Argument,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_UnaryQuaternionOp",
		sizeof(FRigUnit_UnaryQuaternionOp),
		alignof(FRigUnit_UnaryQuaternionOp),
		Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_InverseQuaterion>() == std::is_polymorphic<FRigUnit_UnaryQuaternionOp>(), "USTRUCT FRigUnit_InverseQuaterion cannot be polymorphic unless super FRigUnit_UnaryQuaternionOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion;
class UScriptStruct* FRigUnit_InverseQuaterion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_InverseQuaterion"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_InverseQuaterion_Execute;
		Arguments_FRigUnit_InverseQuaterion_Execute.Emplace(TEXT("Argument"), TEXT("FQuat"));
		Arguments_FRigUnit_InverseQuaterion_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_InverseQuaterion::Execute"), &FRigUnit_InverseQuaterion::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.OuterSingleton, Arguments_FRigUnit_InverseQuaterion_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_InverseQuaterion>()
{
	return FRigUnit_InverseQuaterion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Quaternion" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Inverse(Quaternion)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_InverseQuaterion>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp,
		&NewStructOps,
		"RigUnit_InverseQuaterion",
		sizeof(FRigUnit_InverseQuaterion),
		alignof(FRigUnit_InverseQuaterion),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.InnerSingleton;
	}

void FRigUnit_InverseQuaterion::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_InverseQuaterion::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_QuaternionToAxisAndAngle>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_QuaternionToAxisAndAngle cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle;
class UScriptStruct* FRigUnit_QuaternionToAxisAndAngle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_QuaternionToAxisAndAngle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_QuaternionToAxisAndAngle_Execute;
		Arguments_FRigUnit_QuaternionToAxisAndAngle_Execute.Emplace(TEXT("Argument"), TEXT("FQuat"));
		Arguments_FRigUnit_QuaternionToAxisAndAngle_Execute.Emplace(TEXT("Axis"), TEXT("FVector"));
		Arguments_FRigUnit_QuaternionToAxisAndAngle_Execute.Emplace(TEXT("Angle"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_QuaternionToAxisAndAngle::Execute"), &FRigUnit_QuaternionToAxisAndAngle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.OuterSingleton, Arguments_FRigUnit_QuaternionToAxisAndAngle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_QuaternionToAxisAndAngle>()
{
	return FRigUnit_QuaternionToAxisAndAngle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Argument;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Quaternion" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "To Axis And Angle(Quaternion)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_QuaternionToAxisAndAngle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Argument_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_QuaternionToAxisAndAngle, Argument), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Argument_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Argument_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_QuaternionToAxisAndAngle, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_QuaternionToAxisAndAngle, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Angle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Argument,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Angle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_QuaternionToAxisAndAngle",
		sizeof(FRigUnit_QuaternionToAxisAndAngle),
		alignof(FRigUnit_QuaternionToAxisAndAngle),
		Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.InnerSingleton;
	}

void FRigUnit_QuaternionToAxisAndAngle::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_QuaternionToAxisAndAngle::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument,
		Axis,
		Angle
	);
}


static_assert(std::is_polymorphic<FRigUnit_QuaternionFromAxisAndAngle>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_QuaternionFromAxisAndAngle cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle;
class UScriptStruct* FRigUnit_QuaternionFromAxisAndAngle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_QuaternionFromAxisAndAngle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_QuaternionFromAxisAndAngle_Execute;
		Arguments_FRigUnit_QuaternionFromAxisAndAngle_Execute.Emplace(TEXT("Axis"), TEXT("FVector"));
		Arguments_FRigUnit_QuaternionFromAxisAndAngle_Execute.Emplace(TEXT("Angle"), TEXT("float"));
		Arguments_FRigUnit_QuaternionFromAxisAndAngle_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_QuaternionFromAxisAndAngle::Execute"), &FRigUnit_QuaternionFromAxisAndAngle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.OuterSingleton, Arguments_FRigUnit_QuaternionFromAxisAndAngle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_QuaternionFromAxisAndAngle>()
{
	return FRigUnit_QuaternionFromAxisAndAngle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Quaternion" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "From Axis And Angle(Quaternion)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_QuaternionFromAxisAndAngle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_QuaternionFromAxisAndAngle, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_QuaternionFromAxisAndAngle, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_QuaternionFromAxisAndAngle, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_QuaternionFromAxisAndAngle",
		sizeof(FRigUnit_QuaternionFromAxisAndAngle),
		alignof(FRigUnit_QuaternionFromAxisAndAngle),
		Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.InnerSingleton;
	}

void FRigUnit_QuaternionFromAxisAndAngle::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_QuaternionFromAxisAndAngle::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Axis,
		Angle,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_QuaternionToAngle>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_QuaternionToAngle cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle;
class UScriptStruct* FRigUnit_QuaternionToAngle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_QuaternionToAngle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_QuaternionToAngle_Execute;
		Arguments_FRigUnit_QuaternionToAngle_Execute.Emplace(TEXT("Axis"), TEXT("FVector"));
		Arguments_FRigUnit_QuaternionToAngle_Execute.Emplace(TEXT("Argument"), TEXT("FQuat"));
		Arguments_FRigUnit_QuaternionToAngle_Execute.Emplace(TEXT("Angle"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_QuaternionToAngle::Execute"), &FRigUnit_QuaternionToAngle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.OuterSingleton, Arguments_FRigUnit_QuaternionToAngle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_QuaternionToAngle>()
{
	return FRigUnit_QuaternionToAngle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Argument;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Quaternion" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Get Angle Around Axis" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_QuaternionToAngle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_QuaternionToAngle, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Argument_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_QuaternionToAngle, Argument), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Argument_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Argument_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_QuaternionToAngle, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Angle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Argument,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Angle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_QuaternionToAngle",
		sizeof(FRigUnit_QuaternionToAngle),
		alignof(FRigUnit_QuaternionToAngle),
		Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.InnerSingleton;
	}

void FRigUnit_QuaternionToAngle::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_QuaternionToAngle::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Axis,
		Argument,
		Angle
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_BinaryQuaternionOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewStructOps, TEXT("RigUnit_BinaryQuaternionOp"), &Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BinaryQuaternionOp), 960240376U) },
		{ FRigUnit_MultiplyQuaternion::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::NewStructOps, TEXT("RigUnit_MultiplyQuaternion"), &Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MultiplyQuaternion), 1859700144U) },
		{ FRigUnit_UnaryQuaternionOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewStructOps, TEXT("RigUnit_UnaryQuaternionOp"), &Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_UnaryQuaternionOp), 3476920431U) },
		{ FRigUnit_InverseQuaterion::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::NewStructOps, TEXT("RigUnit_InverseQuaterion"), &Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_InverseQuaterion), 4002149236U) },
		{ FRigUnit_QuaternionToAxisAndAngle::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewStructOps, TEXT("RigUnit_QuaternionToAxisAndAngle"), &Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_QuaternionToAxisAndAngle), 1663032814U) },
		{ FRigUnit_QuaternionFromAxisAndAngle::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewStructOps, TEXT("RigUnit_QuaternionFromAxisAndAngle"), &Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_QuaternionFromAxisAndAngle), 2789096367U) },
		{ FRigUnit_QuaternionToAngle::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewStructOps, TEXT("RigUnit_QuaternionToAngle"), &Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_QuaternionToAngle), 3833623227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_4059261616(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
