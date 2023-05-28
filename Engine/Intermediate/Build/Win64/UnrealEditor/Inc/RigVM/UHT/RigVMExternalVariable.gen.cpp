// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMExternalVariable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMExternalVariable() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExternalVariable();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMExternalVariable;
class UScriptStruct* FRigVMExternalVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMExternalVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMExternalVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExternalVariable, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMExternalVariable"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMExternalVariable.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMExternalVariable>()
{
	return FRigVMExternalVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The external variable can be used to map external / unowned\n * memory into the VM and back out\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExternalVariable.h" },
		{ "ToolTip", "The external variable can be used to map external / unowned\nmemory into the VM and back out" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMExternalVariable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMExternalVariable",
		sizeof(FRigVMExternalVariable),
		alignof(FRigVMExternalVariable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMExternalVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMExternalVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMExternalVariable.InnerSingleton, Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMExternalVariable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMExternalVariable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMExternalVariable_h_Statics::ScriptStructInfo[] = {
		{ FRigVMExternalVariable::StaticStruct, Z_Construct_UScriptStruct_FRigVMExternalVariable_Statics::NewStructOps, TEXT("RigVMExternalVariable"), &Z_Registration_Info_UScriptStruct_RigVMExternalVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMExternalVariable), 1628550361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMExternalVariable_h_3237392910(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMExternalVariable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMExternalVariable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
