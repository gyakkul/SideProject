// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/RigUnit_AnimNextInterfaceBeginExecution.h"
#include "../Internal/AnimNextInterfaceExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AnimNextInterfaceBeginExecution() {}
// Cross Module References
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution();
	UPackage* Z_Construct_UPackage__Script_AnimNextInterfaceGraph();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_AnimNextInterfaceBeginExecution>() == std::is_polymorphic<FRigUnit_AnimNextInterfaceBase>(), "USTRUCT FRigUnit_AnimNextInterfaceBeginExecution cannot be polymorphic unless super FRigUnit_AnimNextInterfaceBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBeginExecution;
class UScriptStruct* FRigUnit_AnimNextInterfaceBeginExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBeginExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBeginExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("RigUnit_AnimNextInterfaceBeginExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimNextInterfaceBeginExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimNextInterfaceBeginExecution::Execute"), &FRigUnit_AnimNextInterfaceBeginExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBeginExecution.OuterSingleton, Arguments_FRigUnit_AnimNextInterfaceBeginExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBeginExecution.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FRigUnit_AnimNextInterfaceBeginExecution>()
{
	return FRigUnit_AnimNextInterfaceBeginExecution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n * Event for driving the skeleton hierarchy with variables and rig elements\n */" },
		{ "DisplayName", "Execute Anim Interface" },
		{ "Keywords", "Begin,Update,Tick,Forward,Event" },
		{ "ModuleRelativePath", "Internal/RigUnit_AnimNextInterfaceBeginExecution.h" },
		{ "NodeColor", "1, 0, 0" },
		{ "ToolTip", "Event for driving the skeleton hierarchy with variables and rig elements" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextInterfaceBeginExecution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "BeginExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Internal/RigUnit_AnimNextInterfaceBeginExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimNextInterfaceBeginExecution, ExecuteContext), Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::NewProp_ExecuteContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::NewProp_ExecuteContext_MetaData)) }; // 1836530780
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::NewProp_ExecuteContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase,
		&NewStructOps,
		"RigUnit_AnimNextInterfaceBeginExecution",
		sizeof(FRigUnit_AnimNextInterfaceBeginExecution),
		alignof(FRigUnit_AnimNextInterfaceBeginExecution),
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBeginExecution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBeginExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBeginExecution.InnerSingleton;
	}

void FRigUnit_AnimNextInterfaceBeginExecution::Execute()
{
	FAnimNextInterfaceExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AnimNextInterfaceBeginExecution::Execute(FAnimNextInterfaceExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_RigUnit_AnimNextInterfaceBeginExecution_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_RigUnit_AnimNextInterfaceBeginExecution_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_AnimNextInterfaceBeginExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBeginExecution_Statics::NewStructOps, TEXT("RigUnit_AnimNextInterfaceBeginExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBeginExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextInterfaceBeginExecution), 2602259510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_RigUnit_AnimNextInterfaceBeginExecution_h_967267248(TEXT("/Script/AnimNextInterfaceGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_RigUnit_AnimNextInterfaceBeginExecution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_RigUnit_AnimNextInterfaceBeginExecution_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
