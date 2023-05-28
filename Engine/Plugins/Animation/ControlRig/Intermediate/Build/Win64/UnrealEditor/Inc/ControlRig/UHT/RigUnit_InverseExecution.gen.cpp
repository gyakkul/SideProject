// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Execution/RigUnit_InverseExecution.h"
#include "Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_InverseExecution() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_InverseExecution();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_InverseExecution>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_InverseExecution cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_InverseExecution;
class UScriptStruct* FRigUnit_InverseExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_InverseExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_InverseExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_InverseExecution, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_InverseExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_InverseExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_InverseExecution::Execute"), &FRigUnit_InverseExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_InverseExecution.OuterSingleton, Arguments_FRigUnit_InverseExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_InverseExecution.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_InverseExecution>()
{
	return FRigUnit_InverseExecution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n * Event for driving elements based off the skeleton hierarchy\n */" },
		{ "DisplayName", "Backwards Solve" },
		{ "Keywords", "Inverse,Reverse,Backwards,Event" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_InverseExecution.h" },
		{ "NodeColor", "1, 0, 0" },
		{ "ToolTip", "Event for driving elements based off the skeleton hierarchy" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_InverseExecution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "InverseExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_InverseExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_InverseExecution, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::NewProp_ExecuteContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::NewProp_ExecuteContext_MetaData)) }; // 1930646767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::NewProp_ExecuteContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_InverseExecution",
		sizeof(FRigUnit_InverseExecution),
		alignof(FRigUnit_InverseExecution),
		Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_InverseExecution()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_InverseExecution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_InverseExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_InverseExecution.InnerSingleton;
	}

void FRigUnit_InverseExecution::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_InverseExecution::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InverseExecution_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InverseExecution_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_InverseExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics::NewStructOps, TEXT("RigUnit_InverseExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_InverseExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_InverseExecution), 548429234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InverseExecution_h_536668066(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InverseExecution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InverseExecution_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
