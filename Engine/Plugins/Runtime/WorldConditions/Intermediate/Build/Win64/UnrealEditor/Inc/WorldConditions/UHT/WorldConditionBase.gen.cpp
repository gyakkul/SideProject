// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldConditionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldConditionBase() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldConditions();
	WORLDCONDITIONS_API UEnum* Z_Construct_UEnum_WorldConditions_EWorldConditionOperator();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionBase();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionCommonActorBase();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionCommonBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionBase;
class UScriptStruct* FWorldConditionBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionBase, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("WorldConditionBase"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionBase.OuterSingleton;
}
template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<FWorldConditionBase>()
{
	return FWorldConditionBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextExpressionDepth_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NextExpressionDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct for all World Conditions.\n *\n * World Conditions are used together with World Condition Query to create expressions of conditions whose result can be checked.\n * The conditions can be based on globally accessible data (e.g. subsystems), or based on any of the context data accessible via FWorldConditionContext.\n * The data that is available is defined for each use case using a UWorldConditionSchema. It also defines which conditions are available when creating\n * a query in that use case.\n *\n * FWorldConditionContextDataRef allows to reference a specific context data. When added on a world condition as property, the UI allows to pick\n * context data of specified type, and in code, pointer to the actual data can be accessed via the context. \n *\n *\x09\x09UPROPERTY(EditAnywhere, Category=\"Default\", meta=(BaseStruct=\"/Script/ModuleFoo.StructBar\"))\n *\x09\x09""FWorldConditionContextDataRef BarRef;\n *\n *\x09\x09""FWorldConditionResult FWorldConditionFoo::IsTrue(const FWorldConditionContext& Context) const\n *\x09\x09{\n *\x09\x09\x09if (FStructBar* Bar = Context.GetMutableContextDataPtr<FStructBar>(BarRef))\n *\x09\x09\x09{\n *\x09\x09\x09}\n *\x09\x09\x09...\n *\x09\x09}\n *\n * Under the hood a reference is a name that needs to be turned into an index before use. This is done on Initialize():\n *\n *\x09\x09""bool FWorldConditionFoo::Initialize(const UWorldConditionSchema& Schema)\n *\x09\x09{\n *\x09\x09\x09if (!Schema.ResolveContextDataRef<FStructBar>(BarRef))\n *\x09\x09\x09{\n *\x09\x09\x09\x09return false;\n *\x09\x09\x09}\n *\x09\x09\x09...\n *\x09\x09}\n *\n * To speed up query evaluation, the result of a World Condition can be cached by World Condition Query.\n * A result can be cached, if the condition is based on globally accessible data, or context data that is marked as Permanent.\n * Context data marked as Dynamic may change each time IsTrue() is called and the result should never be cached.\n *\n * To indicate that a result can be cached it should have bCanBeCached set to true when returned by IsTrue().\n *\n * In cases where a data change callback can be registered based on context data, the caching can be determined\n * during Initialize() by checking of the referenced data is persistent:\n *\n *\x09\x09""bool FWorldConditionFoo::Initialize(const UWorldConditionSchema& Schema)\n *\x09\x09{\n *\x09\x09\x09...\n *\x09\x09\x09""bCanCacheResult = Schema.GetContextDataTypeByRef(BarRef) == EWorldConditionContextDataType::Persistent)\n *\x09\x09\x09...\n *\x09\x09}\n *\n * The caching status is returned from IsTrue() along with the result:\n *\n *\x09\x09""FWorldConditionResult FWorldConditionFoo::IsTrue(const FWorldConditionContext& Context) const\n *\x09\x09{\n *\x09\x09\x09""FWorldConditionResult Result(EWorldConditionResult::IsFalse, bCanCacheResult);\n *\x09\x09\x09...\n *\x09\x09\x09return Result;\n *\x09\x09}\n *\n * When the result is cached, it needs to be invalidated when new value arrives. This can be done using e.g. a delegate callback and invalidation handle.\n * The call to InvalidateResult() on that handle will invalidate the query state so that next time IsTrue() is called required conditions will be re-evaluated.\n * It is advised to do as little work as possible in the delegate callback:\n *\n *\x09\x09""bool FWorldConditionFoo::Activate(const FWorldConditionContext& Context) const\n *\x09\x09{\n *\x09\x09\x09""FStructBar* Bar = Context.GetMutableContextDataPtr<FStructBar>(BarRef)\n *\x09\x09\x09if (bCanCacheResult && Bar != nullptr)\n *\x09\x09\x09{\n *\x09\x09\x09\x09if (FOnFooEvent* Delegate = Bar->GetDelegate())\n *\x09\x09\x09\x09{\n *\x09\x09\x09\x09\x09""FStateType& State = Context.GetState(*this);\n *\x09\x09\x09\x09\x09State.DelegateHandle = Delegate->AddLambda([this, InvalidationHandle = Context.GetInvalidationHandle(*this)]()\n *                      {\n *                          InvalidationHandle.InvalidateResult();\n *                      });\n *\x09\x09\x09\x09}\n *\x09\x09\x09...\n *\x09\x09}\n *\n *\x09Note that bCanCacheResult is stored in the condition inside world condition definition, and is the same for all instances of the world condition query state.\n *\x09Sometimes the caching status also relies on the input data, say, a condition may operate with a component or interface\n *\x09of a given actor, one of which may not have invalidation callbacks.\n *\x09In such case we can use some data in the condition state to decide the caching status of the result when returning it from IsTrue():\n *\x09\n *\x09\x09""FWorldConditionResult FWorldConditionFoo::IsTrue(const FWorldConditionContext& Context) const\n *\x09\x09{\n *\x09\x09\x09""FStateType& State = Context.GetState(*this);\n *\n *\x09\x09\x09// Only cache result if we were able to register invalidation callback\n *\x09\x09\x09""const bool bResultCanBeCached = State.DelegateHandle.IsValid();\n *\x09\x09\x09""FWorldConditionResult Result(EWorldConditionResult::IsFalse, bResultCanBeCached);\n *\n *\x09\x09\x09if (FStructBar* Bar = Context.GetMutableContextDataPtr<FStructBar>(BarRef))\n *\x09\x09\x09{\n *\x09\x09\x09\x09if (Bar->EvaluateSomething())\n *\x09\x09\x09\x09{\n *\x09\x09\x09\x09\x09Result.Value = EWorldConditionResult::IsTrue;\n *\x09\x09\x09\x09}\n *\x09\x09\x09}\n *\n *\x09\x09\x09return Result;\n *\x09\x09}\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/WorldConditionBase.h" },
		{ "ToolTip", "Base struct for all World Conditions.\n\nWorld Conditions are used together with World Condition Query to create expressions of conditions whose result can be checked.\nThe conditions can be based on globally accessible data (e.g. subsystems), or based on any of the context data accessible via FWorldConditionContext.\nThe data that is available is defined for each use case using a UWorldConditionSchema. It also defines which conditions are available when creating\na query in that use case.\n\nFWorldConditionContextDataRef allows to reference a specific context data. When added on a world condition as property, the UI allows to pick\ncontext data of specified type, and in code, pointer to the actual data can be accessed via the context.\n\n            UPROPERTY(EditAnywhere, Category=\"Default\", meta=(BaseStruct=\"/Script/ModuleFoo.StructBar\"))\n            FWorldConditionContextDataRef BarRef;\n\n            FWorldConditionResult FWorldConditionFoo::IsTrue(const FWorldConditionContext& Context) const\n            {\n                    if (FStructBar* Bar = Context.GetMutableContextDataPtr<FStructBar>(BarRef))\n                    {\n                    }\n                    ...\n            }\n\nUnder the hood a reference is a name that needs to be turned into an index before use. This is done on Initialize():\n\n            bool FWorldConditionFoo::Initialize(const UWorldConditionSchema& Schema)\n            {\n                    if (!Schema.ResolveContextDataRef<FStructBar>(BarRef))\n                    {\n                            return false;\n                    }\n                    ...\n            }\n\nTo speed up query evaluation, the result of a World Condition can be cached by World Condition Query.\nA result can be cached, if the condition is based on globally accessible data, or context data that is marked as Permanent.\nContext data marked as Dynamic may change each time IsTrue() is called and the result should never be cached.\n\nTo indicate that a result can be cached it should have bCanBeCached set to true when returned by IsTrue().\n\nIn cases where a data change callback can be registered based on context data, the caching can be determined\nduring Initialize() by checking of the referenced data is persistent:\n\n            bool FWorldConditionFoo::Initialize(const UWorldConditionSchema& Schema)\n            {\n                    ...\n                    bCanCacheResult = Schema.GetContextDataTypeByRef(BarRef) == EWorldConditionContextDataType::Persistent)\n                    ...\n            }\n\nThe caching status is returned from IsTrue() along with the result:\n\n            FWorldConditionResult FWorldConditionFoo::IsTrue(const FWorldConditionContext& Context) const\n            {\n                    FWorldConditionResult Result(EWorldConditionResult::IsFalse, bCanCacheResult);\n                    ...\n                    return Result;\n            }\n\nWhen the result is cached, it needs to be invalidated when new value arrives. This can be done using e.g. a delegate callback and invalidation handle.\nThe call to InvalidateResult() on that handle will invalidate the query state so that next time IsTrue() is called required conditions will be re-evaluated.\nIt is advised to do as little work as possible in the delegate callback:\n\n            bool FWorldConditionFoo::Activate(const FWorldConditionContext& Context) const\n            {\n                    FStructBar* Bar = Context.GetMutableContextDataPtr<FStructBar>(BarRef)\n                    if (bCanCacheResult && Bar != nullptr)\n                    {\n                            if (FOnFooEvent* Delegate = Bar->GetDelegate())\n                            {\n                                    FStateType& State = Context.GetState(*this);\n                                    State.DelegateHandle = Delegate->AddLambda([this, InvalidationHandle = Context.GetInvalidationHandle(*this)]()\n                     {\n                         InvalidationHandle.InvalidateResult();\n                     });\n                            }\n                    ...\n            }\n\n    Note that bCanCacheResult is stored in the condition inside world condition definition, and is the same for all instances of the world condition query state.\n    Sometimes the caching status also relies on the input data, say, a condition may operate with a component or interface\n    of a given actor, one of which may not have invalidation callbacks.\n    In such case we can use some data in the condition state to decide the caching status of the result when returning it from IsTrue():\n\n            FWorldConditionResult FWorldConditionFoo::IsTrue(const FWorldConditionContext& Context) const\n            {\n                    FStateType& State = Context.GetState(*this);\n\n                    // Only cache result if we were able to register invalidation callback\n                    const bool bResultCanBeCached = State.DelegateHandle.IsValid();\n                    FWorldConditionResult Result(EWorldConditionResult::IsFalse, bResultCanBeCached);\n\n                    if (FStructBar* Bar = Context.GetMutableContextDataPtr<FStructBar>(BarRef))\n                    {\n                            if (Bar->EvaluateSomething())\n                            {\n                                    Result.Value = EWorldConditionResult::IsTrue;\n                            }\n                    }\n\n                    return Result;\n            }" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_bInvert_MetaData[] = {
		{ "Comment", "/** Controls whether the value of the expressions as calculated by IsTrue should be inverted. The inversion is handled by the expression evaluator. */" },
		{ "ModuleRelativePath", "Public/WorldConditionBase.h" },
		{ "ToolTip", "Controls whether the value of the expressions as calculated by IsTrue should be inverted. The inversion is handled by the expression evaluator." },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FWorldConditionBase*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FWorldConditionBase), &Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_bInvert_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_Operator_MetaData[] = {
		{ "Comment", "/** Operator describing how the results of the condition is combined with other conditions. Not used directly, but to set up condition item in query state. */" },
		{ "ModuleRelativePath", "Public/WorldConditionBase.h" },
		{ "ToolTip", "Operator describing how the results of the condition is combined with other conditions. Not used directly, but to set up condition item in query state." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionBase, Operator), Z_Construct_UEnum_WorldConditions_EWorldConditionOperator, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_Operator_MetaData)) }; // 2659154772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_NextExpressionDepth_MetaData[] = {
		{ "Comment", "/** Depth controlling the parenthesis of the expression. Not used directly, but to set up condition item in query state. */" },
		{ "ModuleRelativePath", "Public/WorldConditionBase.h" },
		{ "ToolTip", "Depth controlling the parenthesis of the expression. Not used directly, but to set up condition item in query state." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_NextExpressionDepth = { "NextExpressionDepth", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionBase, NextExpressionDepth), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_NextExpressionDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_NextExpressionDepth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldConditionBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_bInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_Operator_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_Operator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewProp_NextExpressionDepth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
		nullptr,
		&NewStructOps,
		"WorldConditionBase",
		sizeof(FWorldConditionBase),
		alignof(FWorldConditionBase),
		Z_Construct_UScriptStruct_FWorldConditionBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionBase()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionBase.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWorldConditionCommonBase>() == std::is_polymorphic<FWorldConditionBase>(), "USTRUCT FWorldConditionCommonBase cannot be polymorphic unless super FWorldConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionCommonBase;
class UScriptStruct* FWorldConditionCommonBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionCommonBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionCommonBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionCommonBase, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("WorldConditionCommonBase"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionCommonBase.OuterSingleton;
}
template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<FWorldConditionCommonBase>()
{
	return FWorldConditionCommonBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionCommonBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionCommonBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct for world conditions that do not need a specific context data to work (e.g. interfaces a subsystem).\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/WorldConditionBase.h" },
		{ "ToolTip", "Base struct for world conditions that do not need a specific context data to work (e.g. interfaces a subsystem)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionCommonBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionCommonBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionCommonBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
		Z_Construct_UScriptStruct_FWorldConditionBase,
		&NewStructOps,
		"WorldConditionCommonBase",
		sizeof(FWorldConditionCommonBase),
		alignof(FWorldConditionCommonBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionCommonBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionCommonBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionCommonBase()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionCommonBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionCommonBase.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionCommonBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionCommonBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWorldConditionCommonActorBase>() == std::is_polymorphic<FWorldConditionBase>(), "USTRUCT FWorldConditionCommonActorBase cannot be polymorphic unless super FWorldConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionCommonActorBase;
class UScriptStruct* FWorldConditionCommonActorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionCommonActorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionCommonActorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionCommonActorBase, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("WorldConditionCommonActorBase"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionCommonActorBase.OuterSingleton;
}
template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<FWorldConditionCommonActorBase>()
{
	return FWorldConditionCommonActorBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionCommonActorBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionCommonActorBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct for world conditions that require just an AActor as a context data to work.\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/WorldConditionBase.h" },
		{ "ToolTip", "Base struct for world conditions that require just an AActor as a context data to work." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionCommonActorBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionCommonActorBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionCommonActorBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
		Z_Construct_UScriptStruct_FWorldConditionBase,
		&NewStructOps,
		"WorldConditionCommonActorBase",
		sizeof(FWorldConditionCommonActorBase),
		alignof(FWorldConditionCommonActorBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionCommonActorBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionCommonActorBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionCommonActorBase()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionCommonActorBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionCommonActorBase.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionCommonActorBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionCommonActorBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionBase_h_Statics::ScriptStructInfo[] = {
		{ FWorldConditionBase::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionBase_Statics::NewStructOps, TEXT("WorldConditionBase"), &Z_Registration_Info_UScriptStruct_WorldConditionBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionBase), 3059481946U) },
		{ FWorldConditionCommonBase::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionCommonBase_Statics::NewStructOps, TEXT("WorldConditionCommonBase"), &Z_Registration_Info_UScriptStruct_WorldConditionCommonBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionCommonBase), 430896863U) },
		{ FWorldConditionCommonActorBase::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionCommonActorBase_Statics::NewStructOps, TEXT("WorldConditionCommonActorBase"), &Z_Registration_Info_UScriptStruct_WorldConditionCommonActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionCommonActorBase), 221916466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionBase_h_975613562(TEXT("/Script/WorldConditions"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
