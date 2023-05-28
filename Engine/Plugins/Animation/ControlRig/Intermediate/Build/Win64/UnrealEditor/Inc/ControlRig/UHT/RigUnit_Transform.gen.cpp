// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Deprecated/Math/RigUnit_Transform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Transform() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_BinaryTransformOp>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_BinaryTransformOp cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp;
class UScriptStruct* FRigUnit_BinaryTransformOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BinaryTransformOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BinaryTransformOp>()
{
	return FRigUnit_BinaryTransformOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Comment", "/** Two args and a result of Transform type */" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Transform.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
		{ "ToolTip", "Two args and a result of Transform type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BinaryTransformOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument0_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Transform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument0 = { "Argument0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BinaryTransformOp, Argument0), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument1_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Transform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument1 = { "Argument1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BinaryTransformOp, Argument1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Transform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BinaryTransformOp, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_BinaryTransformOp",
		sizeof(FRigUnit_BinaryTransformOp),
		alignof(FRigUnit_BinaryTransformOp),
		Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MultiplyTransform>() == std::is_polymorphic<FRigUnit_BinaryTransformOp>(), "USTRUCT FRigUnit_MultiplyTransform cannot be polymorphic unless super FRigUnit_BinaryTransformOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform;
class UScriptStruct* FRigUnit_MultiplyTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MultiplyTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MultiplyTransform_Execute;
		Arguments_FRigUnit_MultiplyTransform_Execute.Emplace(TEXT("Argument0"), TEXT("FTransform"));
		Arguments_FRigUnit_MultiplyTransform_Execute.Emplace(TEXT("Argument1"), TEXT("FTransform"));
		Arguments_FRigUnit_MultiplyTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MultiplyTransform::Execute"), &FRigUnit_MultiplyTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.OuterSingleton, Arguments_FRigUnit_MultiplyTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MultiplyTransform>()
{
	return FRigUnit_MultiplyTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Transform" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Multiply(Transform)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Transform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MultiplyTransform>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp,
		&NewStructOps,
		"RigUnit_MultiplyTransform",
		sizeof(FRigUnit_MultiplyTransform),
		alignof(FRigUnit_MultiplyTransform),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.InnerSingleton;
	}

void FRigUnit_MultiplyTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_MultiplyTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_GetRelativeTransform>() == std::is_polymorphic<FRigUnit_BinaryTransformOp>(), "USTRUCT FRigUnit_GetRelativeTransform cannot be polymorphic unless super FRigUnit_BinaryTransformOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform;
class UScriptStruct* FRigUnit_GetRelativeTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetRelativeTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetRelativeTransform_Execute;
		Arguments_FRigUnit_GetRelativeTransform_Execute.Emplace(TEXT("Argument0"), TEXT("FTransform"));
		Arguments_FRigUnit_GetRelativeTransform_Execute.Emplace(TEXT("Argument1"), TEXT("FTransform"));
		Arguments_FRigUnit_GetRelativeTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetRelativeTransform::Execute"), &FRigUnit_GetRelativeTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.OuterSingleton, Arguments_FRigUnit_GetRelativeTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetRelativeTransform>()
{
	return FRigUnit_GetRelativeTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Transform" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "GetRelativeTransform" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Transform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetRelativeTransform>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp,
		&NewStructOps,
		"RigUnit_GetRelativeTransform",
		sizeof(FRigUnit_GetRelativeTransform),
		alignof(FRigUnit_GetRelativeTransform),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.InnerSingleton;
	}

void FRigUnit_GetRelativeTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetRelativeTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Transform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Transform_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_BinaryTransformOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewStructOps, TEXT("RigUnit_BinaryTransformOp"), &Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BinaryTransformOp), 2400495402U) },
		{ FRigUnit_MultiplyTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics::NewStructOps, TEXT("RigUnit_MultiplyTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MultiplyTransform), 1624982403U) },
		{ FRigUnit_GetRelativeTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::NewStructOps, TEXT("RigUnit_GetRelativeTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetRelativeTransform), 819822626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Transform_h_1799958795(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Transform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Transform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
