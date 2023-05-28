// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/RigVMFunction_ControlFlow.h"
#include "RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_ControlFlow() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_ControlFlowBase>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMFunction_ControlFlowBase cannot be polymorphic unless super FRigVMStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase;
class UScriptStruct* FRigVMFunction_ControlFlowBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_ControlFlowBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_ControlFlowBase>()
{
	return FRigVMFunction_ControlFlowBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Execution" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
		{ "NodeColor", "0, 0, 0, 1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_ControlFlowBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMStruct,
		&NewStructOps,
		"RigVMFunction_ControlFlowBase",
		sizeof(FRigVMFunction_ControlFlowBase),
		alignof(FRigVMFunction_ControlFlowBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_ControlFlowBranch>() == std::is_polymorphic<FRigVMFunction_ControlFlowBase>(), "USTRUCT FRigVMFunction_ControlFlowBranch cannot be polymorphic unless super FRigVMFunction_ControlFlowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch;
class UScriptStruct* FRigVMFunction_ControlFlowBranch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_ControlFlowBranch"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_ControlFlowBranch_Execute;
		Arguments_FRigVMFunction_ControlFlowBranch_Execute.Emplace(TEXT("Condition"), TEXT("bool"));
		Arguments_FRigVMFunction_ControlFlowBranch_Execute.Emplace(TEXT("BlockToRun"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_ControlFlowBranch::Execute"), &FRigVMFunction_ControlFlowBranch::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.OuterSingleton, Arguments_FRigVMFunction_ControlFlowBranch_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_ControlFlowBranch>()
{
	return FRigVMFunction_ControlFlowBranch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static void NewProp_Condition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_True_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_True;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_False_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_False;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockToRun_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BlockToRun;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Executes either the True or False branch based on the condition\n */" },
		{ "DisplayName", "Branch" },
		{ "Keywords", "If" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
		{ "ToolTip", "Executes either the True or False branch based on the condition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_ControlFlowBranch>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "Pins" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_ControlFlowBranch, ExecuteContext), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_ExecuteContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_ExecuteContext_MetaData)) }; // 322465941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Condition_SetBit(void* Obj)
	{
		((FRigVMFunction_ControlFlowBranch*)Obj)->Condition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_ControlFlowBranch), &Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Condition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_True_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_True = { "True", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_ControlFlowBranch, True), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_True_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_True_MetaData)) }; // 322465941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_False_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_False = { "False", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_ControlFlowBranch, False), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_False_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_False_MetaData)) }; // 322465941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Completed_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_ControlFlowBranch, Completed), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Completed_MetaData)) }; // 322465941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_BlockToRun_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunction_ControlFlow.h" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_BlockToRun = { "BlockToRun", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_ControlFlowBranch, BlockToRun), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_BlockToRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_BlockToRun_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_ExecuteContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_True,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_False,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewProp_BlockToRun,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase,
		&NewStructOps,
		"RigVMFunction_ControlFlowBranch",
		sizeof(FRigVMFunction_ControlFlowBranch),
		alignof(FRigVMFunction_ControlFlowBranch),
		Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch.InnerSingleton;
	}

void FRigVMFunction_ControlFlowBranch::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_ControlFlowBranch::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Condition,
		BlockToRun
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_ControlFlowBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics::NewStructOps, TEXT("RigVMFunction_ControlFlowBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_ControlFlowBase), 3145905015U) },
		{ FRigVMFunction_ControlFlowBranch::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics::NewStructOps, TEXT("RigVMFunction_ControlFlowBranch"), &Z_Registration_Info_UScriptStruct_RigVMFunction_ControlFlowBranch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_ControlFlowBranch), 4105244403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h_178719280(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
