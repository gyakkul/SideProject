// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMDrawInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDrawInterface() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawContainer();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawInterface();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMDrawInterface>() == std::is_polymorphic<FRigVMDrawContainer>(), "USTRUCT FRigVMDrawInterface cannot be polymorphic unless super FRigVMDrawContainer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDrawInterface;
class UScriptStruct* FRigVMDrawInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDrawInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDrawInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDrawInterface, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDrawInterface"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDrawInterface.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDrawInterface>()
{
	return FRigVMDrawInterface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMDrawInterface_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDrawInterface_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMDrawInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDrawInterface>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDrawInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMDrawContainer,
		&NewStructOps,
		"RigVMDrawInterface",
		sizeof(FRigVMDrawInterface),
		alignof(FRigVMDrawInterface),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDrawInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawInterface()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMDrawInterface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDrawInterface.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDrawInterface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMDrawInterface.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInterface_h_Statics::ScriptStructInfo[] = {
		{ FRigVMDrawInterface::StaticStruct, Z_Construct_UScriptStruct_FRigVMDrawInterface_Statics::NewStructOps, TEXT("RigVMDrawInterface"), &Z_Registration_Info_UScriptStruct_RigVMDrawInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDrawInterface), 4165614572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInterface_h_2416496325(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
