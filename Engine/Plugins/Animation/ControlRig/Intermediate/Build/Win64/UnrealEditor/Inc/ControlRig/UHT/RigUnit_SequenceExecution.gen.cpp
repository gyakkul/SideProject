// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Execution/RigUnit_SequenceExecution.h"
#include "Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SequenceExecution() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SequenceExecution();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_SequenceExecution>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_SequenceExecution cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution;
class UScriptStruct* FRigUnit_SequenceExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SequenceExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SequenceExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SequenceExecution::Execute"), &FRigUnit_SequenceExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.OuterSingleton, Arguments_FRigUnit_SequenceExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SequenceExecution>()
{
	return FRigUnit_SequenceExecution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/**\n * Allows for a single execution pulse to trigger a series of events in order.\n */" },
		{ "Deprecated", "5.1.0" },
		{ "DisplayName", "Sequence" },
		{ "Icon", "EditorStyle|GraphEditor.Sequence_16x" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Allows for a single execution pulse to trigger a series of events in order." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SequenceExecution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution input\n" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "ToolTip", "The execution input" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SequenceExecution, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_ExecuteContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_ExecuteContext_MetaData)) }; // 1930646767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_A_MetaData[] = {
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result A\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result A" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SequenceExecution, A), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_A_MetaData)) }; // 1930646767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_B_MetaData[] = {
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result B\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result B" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SequenceExecution, B), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_B_MetaData)) }; // 1930646767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_C_MetaData[] = {
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result C\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result C" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SequenceExecution, C), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_C_MetaData)) }; // 1930646767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_D_MetaData[] = {
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result D\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result D" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SequenceExecution, D), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_D_MetaData)) }; // 1930646767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_ExecuteContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewProp_D,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_SequenceExecution",
		sizeof(FRigUnit_SequenceExecution),
		alignof(FRigUnit_SequenceExecution),
		Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SequenceExecution()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution.InnerSingleton;
	}

void FRigUnit_SequenceExecution::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SequenceExecution::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}


static_assert(std::is_polymorphic<FRigUnit_SequenceAggregate>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_SequenceAggregate cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SequenceAggregate;
class UScriptStruct* FRigUnit_SequenceAggregate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SequenceAggregate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SequenceAggregate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SequenceAggregate"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SequenceAggregate_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SequenceAggregate::Execute"), &FRigUnit_SequenceAggregate::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SequenceAggregate.OuterSingleton, Arguments_FRigUnit_SequenceAggregate_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SequenceAggregate.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SequenceAggregate>()
{
	return FRigUnit_SequenceAggregate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/**\n * Allows for a single execution pulse to trigger a series of events in order.\n */" },
		{ "DisplayName", "Sequence" },
		{ "Icon", "EditorStyle|GraphEditor.Sequence_16x" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Allows for a single execution pulse to trigger a series of events in order." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SequenceAggregate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution input\n" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "ToolTip", "The execution input" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SequenceAggregate, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_ExecuteContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_ExecuteContext_MetaData)) }; // 1930646767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result A\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result A" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SequenceAggregate, A), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_A_MetaData)) }; // 1930646767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result B\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_SequenceExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result B" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SequenceAggregate, B), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_B_MetaData)) }; // 1930646767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_ExecuteContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewProp_B,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_SequenceAggregate",
		sizeof(FRigUnit_SequenceAggregate),
		alignof(FRigUnit_SequenceAggregate),
		Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SequenceAggregate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SequenceAggregate.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SequenceAggregate.InnerSingleton;
	}

void FRigUnit_SequenceAggregate::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SequenceAggregate::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_SequenceExecution_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_SequenceExecution_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_SequenceExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::NewStructOps, TEXT("RigUnit_SequenceExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_SequenceExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SequenceExecution), 905513193U) },
		{ FRigUnit_SequenceAggregate::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SequenceAggregate_Statics::NewStructOps, TEXT("RigUnit_SequenceAggregate"), &Z_Registration_Info_UScriptStruct_RigUnit_SequenceAggregate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SequenceAggregate), 3840743756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_SequenceExecution_h_3706081534(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_SequenceExecution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_SequenceExecution_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
