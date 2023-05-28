// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/AnimNextInterfaceExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextInterfaceExecuteContext() {}
// Cross Module References
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
	UPackage* Z_Construct_UPackage__Script_AnimNextInterfaceGraph();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNextInterfaceExecuteContext>() == std::is_polymorphic<FRigVMExecuteContext>(), "USTRUCT FAnimNextInterfaceExecuteContext cannot be polymorphic unless super FRigVMExecuteContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextInterfaceExecuteContext;
class UScriptStruct* FAnimNextInterfaceExecuteContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceExecuteContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextInterfaceExecuteContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("AnimNextInterfaceExecuteContext"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextInterfaceExecuteContext.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FAnimNextInterfaceExecuteContext>()
{
	return FAnimNextInterfaceExecuteContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceExecuteContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextInterfaceExecuteContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FRigVMExecuteContext,
		&NewStructOps,
		"AnimNextInterfaceExecuteContext",
		sizeof(FAnimNextInterfaceExecuteContext),
		alignof(FAnimNextInterfaceExecuteContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceExecuteContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextInterfaceExecuteContext.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextInterfaceExecuteContext.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AnimNextInterfaceBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_AnimNextInterfaceBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBase;
class UScriptStruct* FRigUnit_AnimNextInterfaceBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("RigUnit_AnimNextInterfaceBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBase.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FRigUnit_AnimNextInterfaceBase>()
{
	return FRigUnit_AnimNextInterfaceBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase_Statics::Struct_MetaDataParams[] = {
		{ "ExecuteContext", "FAnimNextInterfaceExecuteContext" },
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceExecuteContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextInterfaceBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_AnimNextInterfaceBase",
		sizeof(FRigUnit_AnimNextInterfaceBase),
		alignof(FRigUnit_AnimNextInterfaceBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimNextInterfaceExecuteContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimNextInterfaceExecuteContext_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextInterfaceExecuteContext::StaticStruct, Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext_Statics::NewStructOps, TEXT("AnimNextInterfaceExecuteContext"), &Z_Registration_Info_UScriptStruct_AnimNextInterfaceExecuteContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextInterfaceExecuteContext), 1836530780U) },
		{ FRigUnit_AnimNextInterfaceBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase_Statics::NewStructOps, TEXT("RigUnit_AnimNextInterfaceBase"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextInterfaceBase), 2606533355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimNextInterfaceExecuteContext_h_3427678745(TEXT("/Script/AnimNextInterfaceGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimNextInterfaceExecuteContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimNextInterfaceExecuteContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
