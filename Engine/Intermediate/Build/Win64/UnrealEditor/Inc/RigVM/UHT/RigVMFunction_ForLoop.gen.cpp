// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Execution/RigVMFunction_ForLoop.h"
#include "RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_ForLoop() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStructMutable();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_ForLoopCount>() == std::is_polymorphic<FRigVMStructMutable>(), "USTRUCT FRigVMFunction_ForLoopCount cannot be polymorphic unless super FRigVMStructMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_ForLoopCount;
class UScriptStruct* FRigVMFunction_ForLoopCount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_ForLoopCount.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_ForLoopCount.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_ForLoopCount"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_ForLoopCount_Execute;
		Arguments_FRigVMFunction_ForLoopCount_Execute.Emplace(TEXT("BlockToRun"), TEXT("FName"));
		Arguments_FRigVMFunction_ForLoopCount_Execute.Emplace(TEXT("Count"), TEXT("int32"));
		Arguments_FRigVMFunction_ForLoopCount_Execute.Emplace(TEXT("Index"), TEXT("int32"));
		Arguments_FRigVMFunction_ForLoopCount_Execute.Emplace(TEXT("Ratio"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_ForLoopCount::Execute"), &FRigVMFunction_ForLoopCount::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_ForLoopCount.OuterSingleton, Arguments_FRigVMFunction_ForLoopCount_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_ForLoopCount.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_ForLoopCount>()
{
	return FRigVMFunction_ForLoopCount::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockToRun_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BlockToRun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/**\n * Given a count, execute iteratively until the count is up\n */" },
		{ "DisplayName", "For Loop" },
		{ "Icon", "EditorStyle|GraphEditor.Macro.Loop_16x" },
		{ "Keywords", "Iterate" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_ForLoop.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Given a count, execute iteratively until the count is up" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_ForLoopCount>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_BlockToRun_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_ForLoop.h" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_BlockToRun = { "BlockToRun", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_ForLoopCount, BlockToRun), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_BlockToRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_BlockToRun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_ForLoop.h" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_ForLoopCount, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_ForLoop.h" },
		{ "Output", "" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_ForLoopCount, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_ForLoop.h" },
		{ "Output", "" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_ForLoopCount, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Completed_MetaData[] = {
		{ "Category", "ForLoop" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_ForLoop.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_ForLoopCount, Completed), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Completed_MetaData)) }; // 322465941
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_BlockToRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Ratio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewProp_Completed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMStructMutable,
		&NewStructOps,
		"RigVMFunction_ForLoopCount",
		sizeof(FRigVMFunction_ForLoopCount),
		alignof(FRigVMFunction_ForLoopCount),
		Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_ForLoopCount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_ForLoopCount.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_ForLoopCount.InnerSingleton;
	}

void FRigVMFunction_ForLoopCount::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = Completed;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_ForLoopCount::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		BlockToRun,
		Count,
		Index,
		Ratio
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_ForLoop_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_ForLoop_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_ForLoopCount::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics::NewStructOps, TEXT("RigVMFunction_ForLoopCount"), &Z_Registration_Info_UScriptStruct_RigVMFunction_ForLoopCount, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_ForLoopCount), 3580109850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_ForLoop_h_1938539332(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_ForLoop_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_ForLoop_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
