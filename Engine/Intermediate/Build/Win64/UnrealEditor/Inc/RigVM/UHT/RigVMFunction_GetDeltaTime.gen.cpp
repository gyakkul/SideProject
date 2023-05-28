// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Animation/RigVMFunction_GetDeltaTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_GetDeltaTime() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AnimBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_GetDeltaTime>() == std::is_polymorphic<FRigVMFunction_AnimBase>(), "USTRUCT FRigVMFunction_GetDeltaTime cannot be polymorphic unless super FRigVMFunction_AnimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_GetDeltaTime;
class UScriptStruct* FRigVMFunction_GetDeltaTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_GetDeltaTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_GetDeltaTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_GetDeltaTime"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_GetDeltaTime_Execute;
		Arguments_FRigVMFunction_GetDeltaTime_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_GetDeltaTime::Execute"), &FRigVMFunction_GetDeltaTime::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_GetDeltaTime.OuterSingleton, Arguments_FRigVMFunction_GetDeltaTime_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_GetDeltaTime.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_GetDeltaTime>()
{
	return FRigVMFunction_GetDeltaTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the time gone by from the previous evaluation\n */" },
		{ "DisplayName", "Delta Time" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetDeltaTime.h" },
		{ "ToolTip", "Returns the time gone by from the previous evaluation" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_GetDeltaTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetDeltaTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_GetDeltaTime, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AnimBase,
		&NewStructOps,
		"RigVMFunction_GetDeltaTime",
		sizeof(FRigVMFunction_GetDeltaTime),
		alignof(FRigVMFunction_GetDeltaTime),
		Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_GetDeltaTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_GetDeltaTime.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_GetDeltaTime.InnerSingleton;
	}

void FRigVMFunction_GetDeltaTime::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_GetDeltaTime::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Result
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetDeltaTime_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetDeltaTime_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_GetDeltaTime::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics::NewStructOps, TEXT("RigVMFunction_GetDeltaTime"), &Z_Registration_Info_UScriptStruct_RigVMFunction_GetDeltaTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_GetDeltaTime), 3034215433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetDeltaTime_h_1362264642(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetDeltaTime_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetDeltaTime_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
