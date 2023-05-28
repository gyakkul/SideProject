// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeConditionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeConditionBase() {}
// Cross Module References
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionCommonBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeBase();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

static_assert(std::is_polymorphic<FStateTreeConditionBase>() == std::is_polymorphic<FStateTreeNodeBase>(), "USTRUCT FStateTreeConditionBase cannot be polymorphic unless super FStateTreeNodeBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeConditionBase;
class UScriptStruct* FStateTreeConditionBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConditionBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeConditionBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeConditionBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConditionBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeConditionBase>()
{
	return FStateTreeConditionBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaIndent_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_DeltaIndent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct for all conditions.\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeConditionBase.h" },
		{ "ToolTip", "Base struct for all conditions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeConditionBase>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_Operand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_Operand_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeConditionBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_Operand = { "Operand", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeConditionBase, Operand), Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_Operand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_Operand_MetaData)) }; // 2673936265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_DeltaIndent_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeConditionBase.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_DeltaIndent = { "DeltaIndent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeConditionBase, DeltaIndent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_DeltaIndent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_DeltaIndent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_Operand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_Operand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewProp_DeltaIndent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeNodeBase,
		&NewStructOps,
		"StateTreeConditionBase",
		sizeof(FStateTreeConditionBase),
		alignof(FStateTreeConditionBase),
		Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionBase()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeConditionBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeConditionBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeConditionBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStateTreeConditionCommonBase>() == std::is_polymorphic<FStateTreeConditionBase>(), "USTRUCT FStateTreeConditionCommonBase cannot be polymorphic unless super FStateTreeConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase;
class UScriptStruct* FStateTreeConditionCommonBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionCommonBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeConditionCommonBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeConditionCommonBase>()
{
	return FStateTreeConditionCommonBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class (namespace) for all common Conditions that are generally applicable.\n * This allows schemas to safely include all conditions child of this struct. \n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeConditionBase.h" },
		{ "ToolTip", "Base class (namespace) for all common Conditions that are generally applicable.\nThis allows schemas to safely include all conditions child of this struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeConditionCommonBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeConditionBase,
		&NewStructOps,
		"StateTreeConditionCommonBase",
		sizeof(FStateTreeConditionCommonBase),
		alignof(FStateTreeConditionCommonBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionCommonBase()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeConditionBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeConditionBase_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeConditionBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeConditionBase_Statics::NewStructOps, TEXT("StateTreeConditionBase"), &Z_Registration_Info_UScriptStruct_StateTreeConditionBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeConditionBase), 863265799U) },
		{ FStateTreeConditionCommonBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeConditionCommonBase_Statics::NewStructOps, TEXT("StateTreeConditionCommonBase"), &Z_Registration_Info_UScriptStruct_StateTreeConditionCommonBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeConditionCommonBase), 3931973099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeConditionBase_h_3732130027(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeConditionBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeConditionBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
