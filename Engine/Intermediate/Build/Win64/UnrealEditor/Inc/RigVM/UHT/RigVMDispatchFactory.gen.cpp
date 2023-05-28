// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMDispatchFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDispatchFactory() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatchFactory();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatchFactory;
class UScriptStruct* FRigVMDispatchFactory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatchFactory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatchFactory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatchFactory, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatchFactory"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatchFactory.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatchFactory>()
{
	return FRigVMDispatchFactory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A factory to generate a template and its dispatch functions\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDispatchFactory.h" },
		{ "ToolTip", "A factory to generate a template and its dispatch functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatchFactory>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMDispatchFactory",
		sizeof(FRigVMDispatchFactory),
		alignof(FRigVMDispatchFactory),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatchFactory()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMDispatchFactory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatchFactory.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMDispatchFactory.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDispatchFactory_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDispatchFactory_h_Statics::ScriptStructInfo[] = {
		{ FRigVMDispatchFactory::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatchFactory_Statics::NewStructOps, TEXT("RigVMDispatchFactory"), &Z_Registration_Info_UScriptStruct_RigVMDispatchFactory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatchFactory), 4011766408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDispatchFactory_h_920396710(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDispatchFactory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDispatchFactory_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
