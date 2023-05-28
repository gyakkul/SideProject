// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeEditorNode.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeEditorNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STATETREEEDITORMODULE_API UEnum* Z_Construct_UEnum_StateTreeEditorModule_EStateTreeNodeType();
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorNode();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_StateTreeEditorModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeNodeType;
	static UEnum* EStateTreeNodeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeNodeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeNodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeEditorModule_EStateTreeNodeType, (UObject*)Z_Construct_UPackage__Script_StateTreeEditorModule(), TEXT("EStateTreeNodeType"));
		}
		return Z_Registration_Info_UEnum_EStateTreeNodeType.OuterSingleton;
	}
	template<> STATETREEEDITORMODULE_API UEnum* StaticEnum<EStateTreeNodeType>()
	{
		return EStateTreeNodeType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeEditorModule_EStateTreeNodeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeEditorModule_EStateTreeNodeType_Statics::Enumerators[] = {
		{ "EStateTreeNodeType::EnterCondition", (int64)EStateTreeNodeType::EnterCondition },
		{ "EStateTreeNodeType::Evaluator", (int64)EStateTreeNodeType::Evaluator },
		{ "EStateTreeNodeType::Task", (int64)EStateTreeNodeType::Task },
		{ "EStateTreeNodeType::TransitionCondition", (int64)EStateTreeNodeType::TransitionCondition },
		{ "EStateTreeNodeType::StateParameters", (int64)EStateTreeNodeType::StateParameters },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeEditorModule_EStateTreeNodeType_Statics::Enum_MetaDataParams[] = {
		{ "EnterCondition.Name", "EStateTreeNodeType::EnterCondition" },
		{ "Evaluator.Name", "EStateTreeNodeType::Evaluator" },
		{ "ModuleRelativePath", "Public/StateTreeEditorNode.h" },
		{ "StateParameters.Name", "EStateTreeNodeType::StateParameters" },
		{ "Task.Name", "EStateTreeNodeType::Task" },
		{ "TransitionCondition.Name", "EStateTreeNodeType::TransitionCondition" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeEditorModule_EStateTreeNodeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
		nullptr,
		"EStateTreeNodeType",
		"EStateTreeNodeType",
		Z_Construct_UEnum_StateTreeEditorModule_EStateTreeNodeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeEditorModule_EStateTreeNodeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeEditorModule_EStateTreeNodeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeEditorModule_EStateTreeNodeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeEditorModule_EStateTreeNodeType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeNodeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeNodeType.InnerSingleton, Z_Construct_UEnum_StateTreeEditorModule_EStateTreeNodeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeNodeType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEditorNode;
class UScriptStruct* FStateTreeEditorNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEditorNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEditorNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEditorNode, (UObject*)Z_Construct_UPackage__Script_StateTreeEditorModule(), TEXT("StateTreeEditorNode"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEditorNode.OuterSingleton;
}
template<> STATETREEEDITORMODULE_API UScriptStruct* StaticStruct<FStateTreeEditorNode>()
{
	return FStateTreeEditorNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstanceObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionIndent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConditionIndent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConditionOperand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionOperand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConditionOperand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base for Evaluator, Task and Condition nodes.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeEditorNode.h" },
		{ "ToolTip", "Base for Evaluator, Task and Condition nodes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEditorNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/StateTreeEditorNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEditorNode, Node), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_Node_MetaData)) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_Instance_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/StateTreeEditorNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEditorNode, Instance), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_Instance_MetaData)) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_InstanceObject_MetaData[] = {
		{ "Category", "Node" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StateTreeEditorNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_InstanceObject = { "InstanceObject", nullptr, (EPropertyFlags)0x0016000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEditorNode, InstanceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_InstanceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_InstanceObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/StateTreeEditorNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEditorNode, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ConditionIndent_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/StateTreeEditorNode.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ConditionIndent = { "ConditionIndent", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEditorNode, ConditionIndent), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ConditionIndent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ConditionIndent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ConditionOperand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ConditionOperand_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Public/StateTreeEditorNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ConditionOperand = { "ConditionOperand", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEditorNode, ConditionOperand), Z_Construct_UEnum_StateTreeModule_EStateTreeConditionOperand, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ConditionOperand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ConditionOperand_MetaData)) }; // 2673936265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_InstanceObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ConditionIndent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ConditionOperand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewProp_ConditionOperand,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
		nullptr,
		&NewStructOps,
		"StateTreeEditorNode",
		sizeof(FStateTreeEditorNode),
		alignof(FStateTreeEditorNode),
		Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorNode()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeEditorNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEditorNode.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeEditorNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorNode_h_Statics::EnumInfo[] = {
		{ EStateTreeNodeType_StaticEnum, TEXT("EStateTreeNodeType"), &Z_Registration_Info_UEnum_EStateTreeNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1355998058U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorNode_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeEditorNode::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics::NewStructOps, TEXT("StateTreeEditorNode"), &Z_Registration_Info_UScriptStruct_StateTreeEditorNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEditorNode), 2428380729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorNode_h_2483868547(TEXT("/Script/StateTreeEditorModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorNode_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
