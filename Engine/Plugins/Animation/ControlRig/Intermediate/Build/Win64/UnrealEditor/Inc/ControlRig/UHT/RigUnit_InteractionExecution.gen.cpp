// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Execution/RigUnit_InteractionExecution.h"
#include "Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_InteractionExecution() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_InteractionExecution();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_InteractionExecution>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_InteractionExecution cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_InteractionExecution;
class UScriptStruct* FRigUnit_InteractionExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_InteractionExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_InteractionExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_InteractionExecution, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_InteractionExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_InteractionExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_InteractionExecution::Execute"), &FRigUnit_InteractionExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_InteractionExecution.OuterSingleton, Arguments_FRigUnit_InteractionExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_InteractionExecution.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_InteractionExecution>()
{
	return FRigUnit_InteractionExecution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n * Event for executing logic during an interaction\n */" },
		{ "DisplayName", "Interaction" },
		{ "Keywords", "Manipulation,Event,During,Interacting" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_InteractionExecution.h" },
		{ "NodeColor", "1, 0, 0" },
		{ "ToolTip", "Event for executing logic during an interaction" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_InteractionExecution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "BeginExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_InteractionExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_InteractionExecution, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::NewProp_ExecuteContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::NewProp_ExecuteContext_MetaData)) }; // 1930646767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::NewProp_ExecuteContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_InteractionExecution",
		sizeof(FRigUnit_InteractionExecution),
		alignof(FRigUnit_InteractionExecution),
		Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_InteractionExecution()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_InteractionExecution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_InteractionExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_InteractionExecution.InnerSingleton;
	}

void FRigUnit_InteractionExecution::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_InteractionExecution::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InteractionExecution_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InteractionExecution_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_InteractionExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics::NewStructOps, TEXT("RigUnit_InteractionExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_InteractionExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_InteractionExecution), 2757161475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InteractionExecution_h_3037328822(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InteractionExecution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InteractionExecution_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
