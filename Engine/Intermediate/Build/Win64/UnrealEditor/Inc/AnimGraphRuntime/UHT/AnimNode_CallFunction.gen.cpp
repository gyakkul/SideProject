// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_CallFunction.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeFunctionRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CallFunction() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EAnimFunctionCallSite();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CallFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeFunctionRef();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimFunctionCallSite;
	static UEnum* EAnimFunctionCallSite_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimFunctionCallSite.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimFunctionCallSite.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EAnimFunctionCallSite, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EAnimFunctionCallSite"));
		}
		return Z_Registration_Info_UEnum_EAnimFunctionCallSite.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EAnimFunctionCallSite>()
	{
		return EAnimFunctionCallSite_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_EAnimFunctionCallSite_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_EAnimFunctionCallSite_Statics::Enumerators[] = {
		{ "EAnimFunctionCallSite::OnInitialize", (int64)EAnimFunctionCallSite::OnInitialize },
		{ "EAnimFunctionCallSite::OnUpdate", (int64)EAnimFunctionCallSite::OnUpdate },
		{ "EAnimFunctionCallSite::OnBecomeRelevant", (int64)EAnimFunctionCallSite::OnBecomeRelevant },
		{ "EAnimFunctionCallSite::OnEvaluate", (int64)EAnimFunctionCallSite::OnEvaluate },
		{ "EAnimFunctionCallSite::OnInitializePostRecursion", (int64)EAnimFunctionCallSite::OnInitializePostRecursion },
		{ "EAnimFunctionCallSite::OnUpdatePostRecursion", (int64)EAnimFunctionCallSite::OnUpdatePostRecursion },
		{ "EAnimFunctionCallSite::OnBecomeRelevantPostRecursion", (int64)EAnimFunctionCallSite::OnBecomeRelevantPostRecursion },
		{ "EAnimFunctionCallSite::OnEvaluatePostRecursion", (int64)EAnimFunctionCallSite::OnEvaluatePostRecursion },
		{ "EAnimFunctionCallSite::OnStartedBlendingOut", (int64)EAnimFunctionCallSite::OnStartedBlendingOut },
		{ "EAnimFunctionCallSite::OnStartedBlendingIn", (int64)EAnimFunctionCallSite::OnStartedBlendingIn },
		{ "EAnimFunctionCallSite::OnFinishedBlendingOut", (int64)EAnimFunctionCallSite::OnFinishedBlendingOut },
		{ "EAnimFunctionCallSite::OnFinishedBlendingIn", (int64)EAnimFunctionCallSite::OnFinishedBlendingIn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_EAnimFunctionCallSite_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// When to call the function during the execution of the animation graph\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CallFunction.h" },
		{ "OnBecomeRelevant.Comment", "// Called when the node is updated for the first time with a valid weight\n" },
		{ "OnBecomeRelevant.Name", "EAnimFunctionCallSite::OnBecomeRelevant" },
		{ "OnBecomeRelevant.ToolTip", "Called when the node is updated for the first time with a valid weight" },
		{ "OnBecomeRelevantPostRecursion.Comment", "// Called when the node is updated for the first time with a valid weight (after child nodes are updated)\n" },
		{ "OnBecomeRelevantPostRecursion.DisplayName", "On Become Relevant (Post Recursion)" },
		{ "OnBecomeRelevantPostRecursion.Name", "EAnimFunctionCallSite::OnBecomeRelevantPostRecursion" },
		{ "OnBecomeRelevantPostRecursion.ToolTip", "Called when the node is updated for the first time with a valid weight (after child nodes are updated)" },
		{ "OnEvaluate.Comment", "// Called when the node is evaluated (before child nodes are evaluated)\n" },
		{ "OnEvaluate.Name", "EAnimFunctionCallSite::OnEvaluate" },
		{ "OnEvaluate.ToolTip", "Called when the node is evaluated (before child nodes are evaluated)" },
		{ "OnEvaluatePostRecursion.Comment", "// Called when the node is evaluated (after child nodes are evaluated)\n" },
		{ "OnEvaluatePostRecursion.DisplayName", "On Evaluate (Post Recursion)" },
		{ "OnEvaluatePostRecursion.Name", "EAnimFunctionCallSite::OnEvaluatePostRecursion" },
		{ "OnEvaluatePostRecursion.ToolTip", "Called when the node is evaluated (after child nodes are evaluated)" },
		{ "OnFinishedBlendingIn.Comment", "// Called when the node is updated, was at non-zero weight and becomes full weight. Called before child nodes are\n// updated\n" },
		{ "OnFinishedBlendingIn.Name", "EAnimFunctionCallSite::OnFinishedBlendingIn" },
		{ "OnFinishedBlendingIn.ToolTip", "Called when the node is updated, was at non-zero weight and becomes full weight. Called before child nodes are\nupdated" },
		{ "OnFinishedBlendingOut.Comment", "// Called when the node is updated, was at non-zero weight and finishes blending out. Called before child nodes are\n// updated (note that this is necessarily not called within the graph update but from outside)\n// @TODO: Not currently supported, needs subsystem support!\n" },
		{ "OnFinishedBlendingOut.Hidden", "" },
		{ "OnFinishedBlendingOut.Name", "EAnimFunctionCallSite::OnFinishedBlendingOut" },
		{ "OnFinishedBlendingOut.ToolTip", "Called when the node is updated, was at non-zero weight and finishes blending out. Called before child nodes are\nupdated (note that this is necessarily not called within the graph update but from outside)\n@TODO: Not currently supported, needs subsystem support!" },
		{ "OnInitialize.Comment", "// Called when the node is initialized - i.e. it becomes weighted/relevant in the graph (before child nodes are initialized)\n" },
		{ "OnInitialize.Name", "EAnimFunctionCallSite::OnInitialize" },
		{ "OnInitialize.ToolTip", "Called when the node is initialized - i.e. it becomes weighted/relevant in the graph (before child nodes are initialized)" },
		{ "OnInitializePostRecursion.Comment", "// Called when the node is initialized - i.e. it becomes weighted/relevant in the graph (after child nodes are initialized)\n" },
		{ "OnInitializePostRecursion.DisplayName", "On Initialize (Post Recursion)" },
		{ "OnInitializePostRecursion.Name", "EAnimFunctionCallSite::OnInitializePostRecursion" },
		{ "OnInitializePostRecursion.ToolTip", "Called when the node is initialized - i.e. it becomes weighted/relevant in the graph (after child nodes are initialized)" },
		{ "OnStartedBlendingIn.Comment", "// Called when the node is updated, was at zero weight and beings to blend in. Called before child nodes are updated\n" },
		{ "OnStartedBlendingIn.Name", "EAnimFunctionCallSite::OnStartedBlendingIn" },
		{ "OnStartedBlendingIn.ToolTip", "Called when the node is updated, was at zero weight and beings to blend in. Called before child nodes are updated" },
		{ "OnStartedBlendingOut.Comment", "// Called when the node is updated, was at full weight and beings to blend out. Called before child nodes are\n// updated\n" },
		{ "OnStartedBlendingOut.Name", "EAnimFunctionCallSite::OnStartedBlendingOut" },
		{ "OnStartedBlendingOut.ToolTip", "Called when the node is updated, was at full weight and beings to blend out. Called before child nodes are\nupdated" },
		{ "OnUpdate.Comment", "// Called when the node is updated (before child nodes are updated)\n" },
		{ "OnUpdate.Name", "EAnimFunctionCallSite::OnUpdate" },
		{ "OnUpdate.ToolTip", "Called when the node is updated (before child nodes are updated)" },
		{ "OnUpdatePostRecursion.Comment", "// Called when the node is updated (after child nodes are updated)\n" },
		{ "OnUpdatePostRecursion.DisplayName", "On Update (Post Recursion)" },
		{ "OnUpdatePostRecursion.Name", "EAnimFunctionCallSite::OnUpdatePostRecursion" },
		{ "OnUpdatePostRecursion.ToolTip", "Called when the node is updated (after child nodes are updated)" },
		{ "ToolTip", "When to call the function during the execution of the animation graph" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EAnimFunctionCallSite_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"EAnimFunctionCallSite",
		"EAnimFunctionCallSite",
		Z_Construct_UEnum_AnimGraphRuntime_EAnimFunctionCallSite_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EAnimFunctionCallSite_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_EAnimFunctionCallSite_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EAnimFunctionCallSite_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EAnimFunctionCallSite()
	{
		if (!Z_Registration_Info_UEnum_EAnimFunctionCallSite.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimFunctionCallSite.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EAnimFunctionCallSite_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimFunctionCallSite.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_CallFunction>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_CallFunction cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_CallFunction;
class UScriptStruct* FAnimNode_CallFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CallFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_CallFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CallFunction, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CallFunction"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CallFunction.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_CallFunction>()
{
	return FAnimNode_CallFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Function;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CallSite_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallSite_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CallSite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Calls specified user-defined events/functions during anim graph execution */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CallFunction.h" },
		{ "ToolTip", "Calls specified user-defined events/functions during anim graph execution" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CallFunction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CallFunction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CallFunction, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_Source_MetaData)) }; // 2393943538
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_Function_MetaData[] = {
		{ "Comment", "// Function to call\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CallFunction.h" },
		{ "ToolTip", "Function to call" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CallFunction, Function), Z_Construct_UScriptStruct_FAnimNodeFunctionRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_Function_MetaData)) }; // 258600643
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_CallSite_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_CallSite_MetaData[] = {
		{ "Category", "Function" },
		{ "Comment", "//  When to call the function during the execution of the animation graph\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CallFunction.h" },
		{ "ToolTip", "When to call the function during the execution of the animation graph" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_CallSite = { "CallSite", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CallFunction, CallSite), Z_Construct_UEnum_AnimGraphRuntime_EAnimFunctionCallSite, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_CallSite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_CallSite_MetaData)) }; // 196522500
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_Source,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_Function,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_CallSite_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewProp_CallSite,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_CallFunction",
		sizeof(FAnimNode_CallFunction),
		alignof(FAnimNode_CallFunction),
		Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CallFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_CallFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_CallFunction.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_CallFunction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CallFunction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CallFunction_h_Statics::EnumInfo[] = {
		{ EAnimFunctionCallSite_StaticEnum, TEXT("EAnimFunctionCallSite"), &Z_Registration_Info_UEnum_EAnimFunctionCallSite, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 196522500U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CallFunction_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_CallFunction::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics::NewStructOps, TEXT("AnimNode_CallFunction"), &Z_Registration_Info_UScriptStruct_AnimNode_CallFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_CallFunction), 4182766023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CallFunction_h_2361144906(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CallFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CallFunction_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CallFunction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CallFunction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
