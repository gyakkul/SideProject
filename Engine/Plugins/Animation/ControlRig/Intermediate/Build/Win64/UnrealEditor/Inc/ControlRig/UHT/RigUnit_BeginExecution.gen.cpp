// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Execution/RigUnit_BeginExecution.h"
#include "Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_BeginExecution() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BeginExecution();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_BeginExecution>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_BeginExecution cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution;
class UScriptStruct* FRigUnit_BeginExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BeginExecution, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BeginExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_BeginExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_BeginExecution::Execute"), &FRigUnit_BeginExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.OuterSingleton, Arguments_FRigUnit_BeginExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BeginExecution>()
{
	return FRigUnit_BeginExecution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n * Event for driving the skeleton hierarchy with variables and rig elements\n */" },
		{ "DisplayName", "Forwards Solve" },
		{ "Keywords", "Begin,Update,Tick,Forward,Event" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_BeginExecution.h" },
		{ "NodeColor", "1, 0, 0" },
		{ "ToolTip", "Event for driving the skeleton hierarchy with variables and rig elements" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BeginExecution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "BeginExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_BeginExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BeginExecution, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::NewProp_ExecuteContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::NewProp_ExecuteContext_MetaData)) }; // 1930646767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::NewProp_ExecuteContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_BeginExecution",
		sizeof(FRigUnit_BeginExecution),
		alignof(FRigUnit_BeginExecution),
		Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BeginExecution()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution.InnerSingleton;
	}

void FRigUnit_BeginExecution::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_BeginExecution::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_BeginExecution_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_BeginExecution_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_BeginExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::NewStructOps, TEXT("RigUnit_BeginExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_BeginExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BeginExecution), 2207355111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_BeginExecution_h_1968462931(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_BeginExecution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_BeginExecution_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
