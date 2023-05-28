// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Units/RigDispatchFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigDispatchFactory() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatchFactory();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatchFactory();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigDispatchFactory>() == std::is_polymorphic<FRigVMDispatchFactory>(), "USTRUCT FRigDispatchFactory cannot be polymorphic unless super FRigVMDispatchFactory is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatchFactory;
class UScriptStruct* FRigDispatchFactory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatchFactory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatchFactory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatchFactory, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatchFactory"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatchFactory.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatchFactory>()
{
	return FRigDispatchFactory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigDispatchFactory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigDispatchFactory_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base class for all rig dispatch factories */" },
		{ "ExecuteContextType", "FControlRigExecuteContext" },
		{ "ModuleRelativePath", "Public/Units/RigDispatchFactory.h" },
		{ "ToolTip", "Base class for all rig dispatch factories" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigDispatchFactory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatchFactory>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatchFactory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigVMDispatchFactory,
		&NewStructOps,
		"RigDispatchFactory",
		sizeof(FRigDispatchFactory),
		alignof(FRigDispatchFactory),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigDispatchFactory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatchFactory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigDispatchFactory()
	{
		if (!Z_Registration_Info_UScriptStruct_RigDispatchFactory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatchFactory.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatchFactory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigDispatchFactory.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigDispatchFactory_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigDispatchFactory_h_Statics::ScriptStructInfo[] = {
		{ FRigDispatchFactory::StaticStruct, Z_Construct_UScriptStruct_FRigDispatchFactory_Statics::NewStructOps, TEXT("RigDispatchFactory"), &Z_Registration_Info_UScriptStruct_RigDispatchFactory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatchFactory), 3570344724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigDispatchFactory_h_765161236(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigDispatchFactory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigDispatchFactory_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
