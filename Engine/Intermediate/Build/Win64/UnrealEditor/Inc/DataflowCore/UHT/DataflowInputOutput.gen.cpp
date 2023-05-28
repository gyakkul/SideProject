// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowInputOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowInputOutput() {}
// Cross Module References
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowConnection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowInput();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowOutput();
	UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References

static_assert(std::is_polymorphic<FDataflowInput>() == std::is_polymorphic<FDataflowConnection>(), "USTRUCT FDataflowInput cannot be polymorphic unless super FDataflowConnection is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowInput;
class UScriptStruct* FDataflowInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowInput, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowInput"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowInput.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowInput>()
{
	return FDataflowInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataflowInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowInputOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataflowInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowInput>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
		Z_Construct_UScriptStruct_FDataflowConnection,
		&NewStructOps,
		"DataflowInput",
		sizeof(FDataflowInput),
		alignof(FDataflowInput),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataflowInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataflowInput()
	{
		if (!Z_Registration_Info_UScriptStruct_DataflowInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowInput.InnerSingleton, Z_Construct_UScriptStruct_FDataflowInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataflowInput.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataflowOutput>() == std::is_polymorphic<FDataflowConnection>(), "USTRUCT FDataflowOutput cannot be polymorphic unless super FDataflowConnection is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowOutput;
class UScriptStruct* FDataflowOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowOutput, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowOutput"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowOutput.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowOutput>()
{
	return FDataflowOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataflowOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowOutput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowInputOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataflowOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowOutput>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
		Z_Construct_UScriptStruct_FDataflowConnection,
		&NewStructOps,
		"DataflowOutput",
		sizeof(FDataflowOutput),
		alignof(FDataflowOutput),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataflowOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataflowOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_DataflowOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowOutput.InnerSingleton, Z_Construct_UScriptStruct_FDataflowOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataflowOutput.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowInputOutput_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowInputOutput_h_Statics::ScriptStructInfo[] = {
		{ FDataflowInput::StaticStruct, Z_Construct_UScriptStruct_FDataflowInput_Statics::NewStructOps, TEXT("DataflowInput"), &Z_Registration_Info_UScriptStruct_DataflowInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowInput), 719003804U) },
		{ FDataflowOutput::StaticStruct, Z_Construct_UScriptStruct_FDataflowOutput_Statics::NewStructOps, TEXT("DataflowOutput"), &Z_Registration_Info_UScriptStruct_DataflowOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowOutput), 1233903184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowInputOutput_h_2039495283(TEXT("/Script/DataflowCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowInputOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowInputOutput_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
