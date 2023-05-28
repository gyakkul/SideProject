// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeTaskBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeTaskBase() {}
// Cross Module References
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskCommonBase();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

static_assert(std::is_polymorphic<FStateTreeTaskBase>() == std::is_polymorphic<FStateTreeNodeBase>(), "USTRUCT FStateTreeTaskBase cannot be polymorphic unless super FStateTreeNodeBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTaskBase;
class UScriptStruct* FStateTreeTaskBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTaskBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTaskBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTaskBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTaskBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTaskBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTaskBase>()
{
	return FStateTreeTaskBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct for StateTree Tasks.\n * Tasks are logic executed in an active state.\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeTaskBase.h" },
		{ "ToolTip", "Base struct for StateTree Tasks.\nTasks are logic executed in an active state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTaskBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeNodeBase,
		&NewStructOps,
		"StateTreeTaskBase",
		sizeof(FStateTreeTaskBase),
		alignof(FStateTreeTaskBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskBase()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTaskBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTaskBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTaskBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStateTreeTaskCommonBase>() == std::is_polymorphic<FStateTreeTaskBase>(), "USTRUCT FStateTreeTaskCommonBase cannot be polymorphic unless super FStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase;
class UScriptStruct* FStateTreeTaskCommonBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTaskCommonBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeTaskCommonBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeTaskCommonBase>()
{
	return FStateTreeTaskCommonBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class (namespace) for all common Tasks that are generally applicable.\n * This allows schemas to safely include all conditions child of this struct. \n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeTaskBase.h" },
		{ "ToolTip", "Base class (namespace) for all common Tasks that are generally applicable.\nThis allows schemas to safely include all conditions child of this struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTaskCommonBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeTaskBase,
		&NewStructOps,
		"StateTreeTaskCommonBase",
		sizeof(FStateTreeTaskCommonBase),
		alignof(FStateTreeTaskCommonBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskCommonBase()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTaskBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTaskBase_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeTaskBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTaskBase_Statics::NewStructOps, TEXT("StateTreeTaskBase"), &Z_Registration_Info_UScriptStruct_StateTreeTaskBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTaskBase), 943830452U) },
		{ FStateTreeTaskCommonBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTaskCommonBase_Statics::NewStructOps, TEXT("StateTreeTaskCommonBase"), &Z_Registration_Info_UScriptStruct_StateTreeTaskCommonBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTaskCommonBase), 3122614311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTaskBase_h_1656660678(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTaskBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTaskBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
