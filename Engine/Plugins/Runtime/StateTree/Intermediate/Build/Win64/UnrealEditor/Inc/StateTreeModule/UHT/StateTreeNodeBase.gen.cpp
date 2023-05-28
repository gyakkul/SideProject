// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeNodeBase.h"
#include "StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeNodeBase() {}
// Cross Module References
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeBase();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeNodeBase;
class UScriptStruct* FStateTreeNodeBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeNodeBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeNodeBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeNodeBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeNodeBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeNodeBase>()
{
	return FStateTreeNodeBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingsBatch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingsBatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataViewIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataViewIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstanceIsObject_MetaData[];
#endif
		static void NewProp_bInstanceIsObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstanceIsObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct of StateTree Conditions, Evaluators, and Tasks.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
		{ "ToolTip", "Base struct of StateTree Conditions, Evaluators, and Tasks." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeNodeBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** Name of the node. */" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
		{ "ToolTip", "Name of the node." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeNodeBase, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_BindingsBatch_MetaData[] = {
		{ "Comment", "/** Property binding copy batch handle. */" },
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
		{ "ToolTip", "Property binding copy batch handle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_BindingsBatch = { "BindingsBatch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeNodeBase, BindingsBatch), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_BindingsBatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_BindingsBatch_MetaData)) }; // 1228038794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_DataViewIndex_MetaData[] = {
		{ "Comment", "/** The runtime data's data view index in the StateTreeExecutionContext, and source struct index in property binding. */" },
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
		{ "ToolTip", "The runtime data's data view index in the StateTreeExecutionContext, and source struct index in property binding." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_DataViewIndex = { "DataViewIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeNodeBase, DataViewIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_DataViewIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_DataViewIndex_MetaData)) }; // 1228038794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_InstanceIndex_MetaData[] = {
		{ "Comment", "/** Index in runtime instance storage. */" },
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
		{ "ToolTip", "Index in runtime instance storage." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeNodeBase, InstanceIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_InstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_InstanceIndex_MetaData)) }; // 1228038794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_bInstanceIsObject_MetaData[] = {
		{ "Comment", "/** True if the instance is an UObject. */" },
		{ "ModuleRelativePath", "Public/StateTreeNodeBase.h" },
		{ "ToolTip", "True if the instance is an UObject." },
	};
#endif
	void Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_bInstanceIsObject_SetBit(void* Obj)
	{
		((FStateTreeNodeBase*)Obj)->bInstanceIsObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_bInstanceIsObject = { "bInstanceIsObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStateTreeNodeBase), &Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_bInstanceIsObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_bInstanceIsObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_bInstanceIsObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_BindingsBatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_DataViewIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewProp_bInstanceIsObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeNodeBase",
		sizeof(FStateTreeNodeBase),
		alignof(FStateTreeNodeBase),
		Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeBase()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeNodeBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeNodeBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeNodeBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeNodeBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeNodeBase_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeNodeBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeNodeBase_Statics::NewStructOps, TEXT("StateTreeNodeBase"), &Z_Registration_Info_UScriptStruct_StateTreeNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeNodeBase), 1987941070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeNodeBase_h_2995348343(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeNodeBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeNodeBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
