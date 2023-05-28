// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Execution/RigUnit_PrepareForExecution.h"
#include "Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_PrepareForExecution() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_PrepareForExecution>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_PrepareForExecution cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution;
class UScriptStruct* FRigUnit_PrepareForExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PrepareForExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PrepareForExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PrepareForExecution::Execute"), &FRigUnit_PrepareForExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.OuterSingleton, Arguments_FRigUnit_PrepareForExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PrepareForExecution>()
{
	return FRigUnit_PrepareForExecution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n * Event to create / configure elements before any other event\n */" },
		{ "DisplayName", "Construction Event" },
		{ "Keywords", "Create,Build,Spawn,Setup,Init,Fit" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_PrepareForExecution.h" },
		{ "NodeColor", "0.6, 0, 1" },
		{ "ToolTip", "Event to create / configure elements before any other event" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PrepareForExecution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "PrepareForExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_PrepareForExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PrepareForExecution, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::NewProp_ExecuteContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::NewProp_ExecuteContext_MetaData)) }; // 1930646767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::NewProp_ExecuteContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_PrepareForExecution",
		sizeof(FRigUnit_PrepareForExecution),
		alignof(FRigUnit_PrepareForExecution),
		Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution.InnerSingleton;
	}

void FRigUnit_PrepareForExecution::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PrepareForExecution::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_PrepareForExecution_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_PrepareForExecution_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_PrepareForExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PrepareForExecution_Statics::NewStructOps, TEXT("RigUnit_PrepareForExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_PrepareForExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PrepareForExecution), 1523725078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_PrepareForExecution_h_1167382100(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_PrepareForExecution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_PrepareForExecution_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
