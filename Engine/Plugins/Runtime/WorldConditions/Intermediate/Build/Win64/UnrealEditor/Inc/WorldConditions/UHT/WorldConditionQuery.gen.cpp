// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldConditionQuery.h"
#include "InstancedStruct.h"
#include "InstancedStructContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldConditionQuery() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStructContainer();
	UPackage* Z_Construct_UPackage__Script_WorldConditions();
	WORLDCONDITIONS_API UClass* Z_Construct_UClass_UWorldConditionQuerySharedDefinition();
	WORLDCONDITIONS_API UClass* Z_Construct_UClass_UWorldConditionQuerySharedDefinition_NoRegister();
	WORLDCONDITIONS_API UClass* Z_Construct_UClass_UWorldConditionSchema_NoRegister();
	WORLDCONDITIONS_API UEnum* Z_Construct_UEnum_WorldConditions_EWorldConditionOperator();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionEditable();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionItem();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionQuery();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionQueryDefinition();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionQueryState();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionStateObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionEditable;
class UScriptStruct* FWorldConditionEditable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionEditable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionEditable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionEditable, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("WorldConditionEditable"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionEditable.OuterSingleton;
}
template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<FWorldConditionEditable>()
{
	return FWorldConditionEditable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionEditable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionDepth_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExpressionDepth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Condition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct used to store a world condition in editor. Used internally.\n * Note that the Operator and ExpressionDepth are stored here separately from the World Condition to make sure they are not reset if the Condition is empty. \n */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Struct used to store a world condition in editor. Used internally.\nNote that the Operator and ExpressionDepth are stored here separately from the World Condition to make sure they are not reset if the Condition is empty." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionEditable>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_ExpressionDepth_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Expression depth controlling the parenthesis of the expression. */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Expression depth controlling the parenthesis of the expression." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_ExpressionDepth = { "ExpressionDepth", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionEditable, ExpressionDepth), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_ExpressionDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_ExpressionDepth_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Operator describing how the results of the condition is combined with other conditions. */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Operator describing how the results of the condition is combined with other conditions." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionEditable, Operator), Z_Construct_UEnum_WorldConditions_EWorldConditionOperator, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_Operator_MetaData)) }; // 2659154772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Controls whether the value of the expressions as calculated by IsTrue should be inverted. */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Controls whether the value of the expressions as calculated by IsTrue should be inverted." },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FWorldConditionEditable*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldConditionEditable), &Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_bInvert_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Instance of a world condition. */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Instance of a world condition." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionEditable, Condition), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_Condition_MetaData)) }; // 3026308664
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_ExpressionDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_Operator_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_Operator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_bInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewProp_Condition,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
		nullptr,
		&NewStructOps,
		"WorldConditionEditable",
		sizeof(FWorldConditionEditable),
		alignof(FWorldConditionEditable),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionEditable()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionEditable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionEditable.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionEditable.InnerSingleton;
	}
	void UWorldConditionQuerySharedDefinition::StaticRegisterNativesUWorldConditionQuerySharedDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldConditionQuerySharedDefinition);
	UClass* Z_Construct_UClass_UWorldConditionQuerySharedDefinition_NoRegister()
	{
		return UWorldConditionQuerySharedDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Conditions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SchemaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SchemaClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class that describes a specific configuration of a world condition. Should not be used directly.\n * It is shared between all query states initialized with a specific FWorldConditionQueryDefinition.\n */" },
		{ "IncludePath", "WorldConditionQuery.h" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Class that describes a specific configuration of a world condition. Should not be used directly.\nIt is shared between all query states initialized with a specific FWorldConditionQueryDefinition." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::NewProp_Conditions_MetaData[] = {
		{ "Comment", "/** All the conditions of the world conditions. */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "All the conditions of the world conditions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldConditionQuerySharedDefinition, Conditions), Z_Construct_UScriptStruct_FInstancedStructContainer, METADATA_PARAMS(Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::NewProp_Conditions_MetaData)) }; // 334302854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::NewProp_SchemaClass_MetaData[] = {
		{ "Comment", "/** Schema used to create the conditions. */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Schema used to create the conditions." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::NewProp_SchemaClass = { "SchemaClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldConditionQuerySharedDefinition, SchemaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldConditionSchema_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::NewProp_SchemaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::NewProp_SchemaClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::NewProp_Conditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::NewProp_SchemaClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldConditionQuerySharedDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::ClassParams = {
		&UWorldConditionQuerySharedDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldConditionQuerySharedDefinition()
	{
		if (!Z_Registration_Info_UClass_UWorldConditionQuerySharedDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldConditionQuerySharedDefinition.OuterSingleton, Z_Construct_UClass_UWorldConditionQuerySharedDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldConditionQuerySharedDefinition.OuterSingleton;
	}
	template<> WORLDCONDITIONS_API UClass* StaticClass<UWorldConditionQuerySharedDefinition>()
	{
		return UWorldConditionQuerySharedDefinition::StaticClass();
	}
	UWorldConditionQuerySharedDefinition::UWorldConditionQuerySharedDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldConditionQuerySharedDefinition);
	UWorldConditionQuerySharedDefinition::~UWorldConditionQuerySharedDefinition() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionQueryDefinition;
class UScriptStruct* FWorldConditionQueryDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionQueryDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionQueryDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionQueryDefinition, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("WorldConditionQueryDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionQueryDefinition.OuterSingleton;
}
template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<FWorldConditionQueryDefinition>()
{
	return FWorldConditionQueryDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SharedDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SchemaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SchemaClass;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditableConditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableConditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditableConditions;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Definition of a world condition.\n * The mutable state of the world condition is stored in FWorldConditionQueryState.\n * This allows to reuse the definitions and minimize the runtime memory needed to run queries.\n */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Definition of a world condition.\nThe mutable state of the world condition is stored in FWorldConditionQueryState.\nThis allows to reuse the definitions and minimize the runtime memory needed to run queries." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionQueryDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_SharedDefinition_MetaData[] = {
		{ "Comment", "/**\n\x09 * The definition used to initialize and execute world conditions.\n\x09 * Created from editable conditions during edit via Initialize().\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "The definition used to initialize and execute world conditions.\nCreated from editable conditions during edit via Initialize()." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_SharedDefinition = { "SharedDefinition", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionQueryDefinition, SharedDefinition), Z_Construct_UClass_UWorldConditionQuerySharedDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_SharedDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_SharedDefinition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_SchemaClass_MetaData[] = {
		{ "Comment", "/** Schema of the definition, also stored in SharedDefinition. */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Schema of the definition, also stored in SharedDefinition." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_SchemaClass = { "SchemaClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionQueryDefinition, SchemaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldConditionSchema_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_SchemaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_SchemaClass_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_EditableConditions_Inner = { "EditableConditions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWorldConditionEditable, METADATA_PARAMS(nullptr, 0) }; // 2724809189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_EditableConditions_MetaData[] = {
		{ "BaseStruct", "/Script/SmartObjectsModule.WorldCondition" },
		{ "Category", "Default" },
		{ "Comment", "/** Conditions used while editing, converted in to Conditions via Initialize(). */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Conditions used while editing, converted in to Conditions via Initialize()." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_EditableConditions = { "EditableConditions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionQueryDefinition, EditableConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_EditableConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_EditableConditions_MetaData)) }; // 2724809189
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_SharedDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_SchemaClass,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_EditableConditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewProp_EditableConditions,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
		nullptr,
		&NewStructOps,
		"WorldConditionQueryDefinition",
		sizeof(FWorldConditionQueryDefinition),
		alignof(FWorldConditionQueryDefinition),
		Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionQueryDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionQueryDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionQueryDefinition.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionQueryDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionItem;
class UScriptStruct* FWorldConditionItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionItem, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("WorldConditionItem"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionItem.OuterSingleton;
}
template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<FWorldConditionItem>()
{
	return FWorldConditionItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Item used to describe the structure of a world condition query for fast traversal of the expression.\n */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Item used to describe the structure of a world condition query for fast traversal of the expression." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionItem>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
		nullptr,
		&NewStructOps,
		"WorldConditionItem",
		sizeof(FWorldConditionItem),
		alignof(FWorldConditionItem),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionItem()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionItem.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionStateObject;
class UScriptStruct* FWorldConditionStateObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionStateObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionStateObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionStateObject, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("WorldConditionStateObject"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionStateObject.OuterSingleton;
}
template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<FWorldConditionStateObject>()
{
	return FWorldConditionStateObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct used to store the pointer to an UObject based condition state.\n */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Struct used to store the pointer to an UObject based condition state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionStateObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionStateObject, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::NewProp_Object,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
		nullptr,
		&NewStructOps,
		"WorldConditionStateObject",
		sizeof(FWorldConditionStateObject),
		alignof(FWorldConditionStateObject),
		Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionStateObject()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionStateObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionStateObject.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionStateObject.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionQueryState;
class UScriptStruct* FWorldConditionQueryState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionQueryState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionQueryState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionQueryState, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("WorldConditionQueryState"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionQueryState.OuterSingleton;
}
template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<FWorldConditionQueryState>()
{
	return FWorldConditionQueryState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SharedDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Runtime state of a world conditions.\n * The structure of the data for the state is defined in a query definition.\n * The definition and conditions are stored in FWorldConditionQueryDefinition.\n * This allows to reuse the definitions and minimize the runtime memory needed to run queries.\n *\n * Note: Any code embedding this struct is responsible for calling AddReferencedObjects().\n */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Runtime state of a world conditions.\nThe structure of the data for the state is defined in a query definition.\nThe definition and conditions are stored in FWorldConditionQueryDefinition.\nThis allows to reuse the definitions and minimize the runtime memory needed to run queries.\n\nNote: Any code embedding this struct is responsible for calling AddReferencedObjects()." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionQueryState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::NewProp_SharedDefinition_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::NewProp_SharedDefinition = { "SharedDefinition", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionQueryState, SharedDefinition), Z_Construct_UClass_UWorldConditionQuerySharedDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::NewProp_SharedDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::NewProp_SharedDefinition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionQueryState, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::NewProp_SharedDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
		nullptr,
		&NewStructOps,
		"WorldConditionQueryState",
		sizeof(FWorldConditionQueryState),
		alignof(FWorldConditionQueryState),
		Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionQueryState()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionQueryState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionQueryState.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionQueryState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionQuery;
class UScriptStruct* FWorldConditionQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionQuery, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("WorldConditionQuery"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionQuery.OuterSingleton;
}
template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<FWorldConditionQuery>()
{
	return FWorldConditionQuery::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionQuery_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * General purpose World Condition Query that combines Query Definition and Query State in one.\n */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "General purpose World Condition Query that combines Query Definition and Query State in one." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionQuery>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::NewProp_QueryDefinition_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Defines the conditions to run on the query.  */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Defines the conditions to run on the query." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::NewProp_QueryDefinition = { "QueryDefinition", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionQuery, QueryDefinition), Z_Construct_UScriptStruct_FWorldConditionQueryDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::NewProp_QueryDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::NewProp_QueryDefinition_MetaData)) }; // 3528044641
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::NewProp_QueryState_MetaData[] = {
		{ "Comment", "/** Runtime state of the query. */" },
		{ "ModuleRelativePath", "Public/WorldConditionQuery.h" },
		{ "ToolTip", "Runtime state of the query." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::NewProp_QueryState = { "QueryState", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionQuery, QueryState), Z_Construct_UScriptStruct_FWorldConditionQueryState, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::NewProp_QueryState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::NewProp_QueryState_MetaData)) }; // 873620186
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::NewProp_QueryDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::NewProp_QueryState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
		nullptr,
		&NewStructOps,
		"WorldConditionQuery",
		sizeof(FWorldConditionQuery),
		alignof(FWorldConditionQuery),
		Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionQuery()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionQuery.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionQuery.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionQuery.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionQuery_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionQuery_h_Statics::ScriptStructInfo[] = {
		{ FWorldConditionEditable::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionEditable_Statics::NewStructOps, TEXT("WorldConditionEditable"), &Z_Registration_Info_UScriptStruct_WorldConditionEditable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionEditable), 2724809189U) },
		{ FWorldConditionQueryDefinition::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionQueryDefinition_Statics::NewStructOps, TEXT("WorldConditionQueryDefinition"), &Z_Registration_Info_UScriptStruct_WorldConditionQueryDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionQueryDefinition), 3528044641U) },
		{ FWorldConditionItem::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionItem_Statics::NewStructOps, TEXT("WorldConditionItem"), &Z_Registration_Info_UScriptStruct_WorldConditionItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionItem), 983340650U) },
		{ FWorldConditionStateObject::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionStateObject_Statics::NewStructOps, TEXT("WorldConditionStateObject"), &Z_Registration_Info_UScriptStruct_WorldConditionStateObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionStateObject), 3886954208U) },
		{ FWorldConditionQueryState::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionQueryState_Statics::NewStructOps, TEXT("WorldConditionQueryState"), &Z_Registration_Info_UScriptStruct_WorldConditionQueryState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionQueryState), 873620186U) },
		{ FWorldConditionQuery::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionQuery_Statics::NewStructOps, TEXT("WorldConditionQuery"), &Z_Registration_Info_UScriptStruct_WorldConditionQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionQuery), 772255536U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldConditionQuerySharedDefinition, UWorldConditionQuerySharedDefinition::StaticClass, TEXT("UWorldConditionQuerySharedDefinition"), &Z_Registration_Info_UClass_UWorldConditionQuerySharedDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldConditionQuerySharedDefinition), 3287098895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionQuery_h_726819102(TEXT("/Script/WorldConditions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionQuery_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionQuery_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionQuery_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
