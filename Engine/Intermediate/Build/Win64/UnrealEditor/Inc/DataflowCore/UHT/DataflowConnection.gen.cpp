// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowConnection() {}
// Cross Module References
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowConnection();
	UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowConnection;
class UScriptStruct* FDataflowConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConnection, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowConnection"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowConnection.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowConnection>()
{
	return FDataflowConnection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataflowConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowConnection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//\n// Input Output Base\n//\n" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowConnection.h" },
		{ "ToolTip", "Input Output Base" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataflowConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowConnection>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
		nullptr,
		&NewStructOps,
		"DataflowConnection",
		sizeof(FDataflowConnection),
		alignof(FDataflowConnection),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataflowConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataflowConnection()
	{
		if (!Z_Registration_Info_UScriptStruct_DataflowConnection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowConnection.InnerSingleton, Z_Construct_UScriptStruct_FDataflowConnection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataflowConnection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConnection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConnection_h_Statics::ScriptStructInfo[] = {
		{ FDataflowConnection::StaticStruct, Z_Construct_UScriptStruct_FDataflowConnection_Statics::NewStructOps, TEXT("DataflowConnection"), &Z_Registration_Info_UScriptStruct_DataflowConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowConnection), 2612372428U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConnection_h_1262256676(TEXT("/Script/DataflowCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConnection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowConnection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
