// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/RigVMDispatch_Select.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDispatch_Select() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMDispatch_SelectInt32>() == std::is_polymorphic<FRigVMDispatch_CoreBase>(), "USTRUCT FRigVMDispatch_SelectInt32 cannot be polymorphic unless super FRigVMDispatch_CoreBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32;
class UScriptStruct* FRigVMDispatch_SelectInt32::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatch_SelectInt32"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatch_SelectInt32>()
{
	return FRigVMDispatch_SelectInt32::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/*\n * Pick from a list of values based on an integer index\n */" },
		{ "DisplayName", "Select" },
		{ "Keywords", "Switch,Case" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMDispatch_Select.h" },
		{ "NodeColor", "0,1,0,1" },
		{ "ToolTip", "* Pick from a list of values based on an integer index" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_SelectInt32>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase,
		&NewStructOps,
		"RigVMDispatch_SelectInt32",
		sizeof(FRigVMDispatch_SelectInt32),
		alignof(FRigVMDispatch_SelectInt32),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMDispatch_Select_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMDispatch_Select_h_Statics::ScriptStructInfo[] = {
		{ FRigVMDispatch_SelectInt32::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_SelectInt32_Statics::NewStructOps, TEXT("RigVMDispatch_SelectInt32"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_SelectInt32, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_SelectInt32), 2580089567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMDispatch_Select_h_210236530(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMDispatch_Select_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMDispatch_Select_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
