// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/BTCompositeNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTCompositeNode() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTChildIndex();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTDecoratorLogic();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBTCompositeChild();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBTDecoratorLogic();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTChildIndex;
	static UEnum* EBTChildIndex_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBTChildIndex.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBTChildIndex.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTChildIndex, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EBTChildIndex"));
		}
		return Z_Registration_Info_UEnum_EBTChildIndex.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBTChildIndex>()
	{
		return EBTChildIndex_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EBTChildIndex_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::Enumerators[] = {
		{ "EBTChildIndex::FirstNode", (int64)EBTChildIndex::FirstNode },
		{ "EBTChildIndex::TaskNode", (int64)EBTChildIndex::TaskNode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::Enum_MetaDataParams[] = {
		{ "FirstNode.Name", "EBTChildIndex::FirstNode" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "TaskNode.Name", "EBTChildIndex::TaskNode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EBTChildIndex",
		"EBTChildIndex",
		Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EBTChildIndex()
	{
		if (!Z_Registration_Info_UEnum_EBTChildIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTChildIndex.InnerSingleton, Z_Construct_UEnum_AIModule_EBTChildIndex_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBTChildIndex.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTDecoratorLogic;
	static UEnum* EBTDecoratorLogic_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBTDecoratorLogic.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBTDecoratorLogic.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTDecoratorLogic, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EBTDecoratorLogic"));
		}
		return Z_Registration_Info_UEnum_EBTDecoratorLogic.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBTDecoratorLogic::Type>()
	{
		return EBTDecoratorLogic_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::Enumerators[] = {
		{ "EBTDecoratorLogic::Invalid", (int64)EBTDecoratorLogic::Invalid },
		{ "EBTDecoratorLogic::Test", (int64)EBTDecoratorLogic::Test },
		{ "EBTDecoratorLogic::And", (int64)EBTDecoratorLogic::And },
		{ "EBTDecoratorLogic::Or", (int64)EBTDecoratorLogic::Or },
		{ "EBTDecoratorLogic::Not", (int64)EBTDecoratorLogic::Not },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::Enum_MetaDataParams[] = {
		{ "And.Comment", "/** logic op: AND */" },
		{ "And.Name", "EBTDecoratorLogic::And" },
		{ "And.ToolTip", "logic op: AND" },
		{ "Comment", "// keep in sync with DescribeLogicOp() in BTCompositeNode.cpp\n" },
		{ "Invalid.Name", "EBTDecoratorLogic::Invalid" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "Not.Comment", "/** logic op: NOT */" },
		{ "Not.Name", "EBTDecoratorLogic::Not" },
		{ "Not.ToolTip", "logic op: NOT" },
		{ "Or.Comment", "/** logic op: OR */" },
		{ "Or.Name", "EBTDecoratorLogic::Or" },
		{ "Or.ToolTip", "logic op: OR" },
		{ "Test.Comment", "/** Test decorator conditions. */" },
		{ "Test.Name", "EBTDecoratorLogic::Test" },
		{ "Test.ToolTip", "Test decorator conditions." },
		{ "ToolTip", "keep in sync with DescribeLogicOp() in BTCompositeNode.cpp" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EBTDecoratorLogic",
		"EBTDecoratorLogic::Type",
		Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EBTDecoratorLogic()
	{
		if (!Z_Registration_Info_UEnum_EBTDecoratorLogic.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTDecoratorLogic.InnerSingleton, Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBTDecoratorLogic.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BTDecoratorLogic;
class UScriptStruct* FBTDecoratorLogic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BTDecoratorLogic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BTDecoratorLogic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBTDecoratorLogic, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("BTDecoratorLogic"));
	}
	return Z_Registration_Info_UScriptStruct_BTDecoratorLogic.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBTDecoratorLogic>()
{
	return FBTDecoratorLogic::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Number;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBTDecoratorLogic>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Operation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBTDecoratorLogic, Operation), Z_Construct_UEnum_AIModule_EBTDecoratorLogic, METADATA_PARAMS(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Operation_MetaData)) }; // 2804566895
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Number_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBTDecoratorLogic, Number), METADATA_PARAMS(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Number_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Number_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Number,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"BTDecoratorLogic",
		sizeof(FBTDecoratorLogic),
		alignof(FBTDecoratorLogic),
		Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBTDecoratorLogic()
	{
		if (!Z_Registration_Info_UScriptStruct_BTDecoratorLogic.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BTDecoratorLogic.InnerSingleton, Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BTDecoratorLogic.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BTCompositeChild;
class UScriptStruct* FBTCompositeChild::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BTCompositeChild.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BTCompositeChild.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBTCompositeChild, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("BTCompositeChild"));
	}
	return Z_Registration_Info_UScriptStruct_BTCompositeChild.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBTCompositeChild>()
{
	return FBTCompositeChild::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBTCompositeChild_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildComposite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildComposite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildTask;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Decorators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Decorators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Decorators;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecoratorOps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorOps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DecoratorOps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTCompositeChild_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBTCompositeChild>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildComposite_MetaData[] = {
		{ "Comment", "/** child node */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "child node" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildComposite = { "ChildComposite", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBTCompositeChild, ChildComposite), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildComposite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildComposite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildTask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildTask = { "ChildTask", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBTCompositeChild, ChildTask), Z_Construct_UClass_UBTTaskNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildTask_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators_Inner = { "Decorators", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBTDecorator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators_MetaData[] = {
		{ "Comment", "/** execution decorators */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "execution decorators" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators = { "Decorators", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBTCompositeChild, Decorators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps_Inner = { "DecoratorOps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBTDecoratorLogic, METADATA_PARAMS(nullptr, 0) }; // 2871809495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps_MetaData[] = {
		{ "Comment", "/** logic operations for decorators */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "logic operations for decorators" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps = { "DecoratorOps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBTCompositeChild, DecoratorOps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps_MetaData)) }; // 2871809495
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBTCompositeChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildComposite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"BTCompositeChild",
		sizeof(FBTCompositeChild),
		alignof(FBTCompositeChild),
		Z_Construct_UScriptStruct_FBTCompositeChild_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBTCompositeChild()
	{
		if (!Z_Registration_Info_UScriptStruct_BTCompositeChild.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BTCompositeChild.InnerSingleton, Z_Construct_UScriptStruct_FBTCompositeChild_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BTCompositeChild.InnerSingleton;
	}
	void UBTCompositeNode::StaticRegisterNativesUBTCompositeNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTCompositeNode);
	UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister()
	{
		return UBTCompositeNode::StaticClass();
	}
	struct Z_Construct_UClass_UBTCompositeNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Services_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Services;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDecoratorScope_MetaData[];
#endif
		static void NewProp_bApplyDecoratorScope_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDecoratorScope;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTCompositeNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTCompositeNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTCompositeNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBTCompositeChild, METADATA_PARAMS(nullptr, 0) }; // 3370404039
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children_MetaData[] = {
		{ "Comment", "/** child nodes */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "child nodes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTCompositeNode, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children_MetaData)) }; // 3370404039
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services_Inner = { "Services", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBTService_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services_MetaData[] = {
		{ "Comment", "/** service nodes */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "service nodes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services = { "Services", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTCompositeNode, Services), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope_MetaData[] = {
		{ "Category", "Composite" },
		{ "Comment", "/** if set, all decorators in branch below will be removed when execution flow leaves (decorators on this node are not affected) */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "if set, all decorators in branch below will be removed when execution flow leaves (decorators on this node are not affected)" },
	};
#endif
	void Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope_SetBit(void* Obj)
	{
		((UBTCompositeNode*)Obj)->bApplyDecoratorScope = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope = { "bApplyDecoratorScope", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTCompositeNode), &Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTCompositeNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTCompositeNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTCompositeNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTCompositeNode_Statics::ClassParams = {
		&UBTCompositeNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTCompositeNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTCompositeNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTCompositeNode()
	{
		if (!Z_Registration_Info_UClass_UBTCompositeNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTCompositeNode.OuterSingleton, Z_Construct_UClass_UBTCompositeNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTCompositeNode.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTCompositeNode>()
	{
		return UBTCompositeNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTCompositeNode);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::EnumInfo[] = {
		{ EBTChildIndex_StaticEnum, TEXT("EBTChildIndex"), &Z_Registration_Info_UEnum_EBTChildIndex, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1351652438U) },
		{ EBTDecoratorLogic_StaticEnum, TEXT("EBTDecoratorLogic"), &Z_Registration_Info_UEnum_EBTDecoratorLogic, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2804566895U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::ScriptStructInfo[] = {
		{ FBTDecoratorLogic::StaticStruct, Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewStructOps, TEXT("BTDecoratorLogic"), &Z_Registration_Info_UScriptStruct_BTDecoratorLogic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBTDecoratorLogic), 2871809495U) },
		{ FBTCompositeChild::StaticStruct, Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewStructOps, TEXT("BTCompositeChild"), &Z_Registration_Info_UScriptStruct_BTCompositeChild, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBTCompositeChild), 3370404039U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTCompositeNode, UBTCompositeNode::StaticClass, TEXT("UBTCompositeNode"), &Z_Registration_Info_UClass_UBTCompositeNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTCompositeNode), 2653480916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_1959117354(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
