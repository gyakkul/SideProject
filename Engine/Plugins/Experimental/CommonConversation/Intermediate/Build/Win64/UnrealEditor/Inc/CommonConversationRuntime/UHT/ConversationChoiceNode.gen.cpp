// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationChoiceNode.h"
#include "ConversationContext.h"
#include "ConversationTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationChoiceNode() {}
// Cross Module References
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationChoiceNode();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationChoiceNode_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationSubNode();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClientConversationOptionEntry();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationContext();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_CommonConversationRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UConversationChoiceNode::execFillChoice)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_GET_STRUCT_REF(FClientConversationOptionEntry,Z_Param_Out_ChoiceEntry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FillChoice_Implementation(Z_Param_Out_Context,Z_Param_Out_ChoiceEntry);
		P_NATIVE_END;
	}
	struct ConversationChoiceNode_eventFillChoice_Parms
	{
		FConversationContext Context;
		FClientConversationOptionEntry ChoiceEntry;
	};
	static FName NAME_UConversationChoiceNode_FillChoice = FName(TEXT("FillChoice"));
	void UConversationChoiceNode::FillChoice(FConversationContext const& Context, FClientConversationOptionEntry& ChoiceEntry) const
	{
		ConversationChoiceNode_eventFillChoice_Parms Parms;
		Parms.Context=Context;
		Parms.ChoiceEntry=ChoiceEntry;
		const_cast<UConversationChoiceNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UConversationChoiceNode_FillChoice),&Parms);
		ChoiceEntry=Parms.ChoiceEntry;
	}
	void UConversationChoiceNode::StaticRegisterNativesUConversationChoiceNode()
	{
		UClass* Class = UConversationChoiceNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FillChoice", &UConversationChoiceNode::execFillChoice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChoiceEntry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationChoiceNode_eventFillChoice_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::NewProp_ChoiceEntry = { "ChoiceEntry", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationChoiceNode_eventFillChoice_Parms, ChoiceEntry), Z_Construct_UScriptStruct_FClientConversationOptionEntry, METADATA_PARAMS(nullptr, 0) }; // 2053502488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::NewProp_ChoiceEntry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationChoiceNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationChoiceNode, nullptr, "FillChoice", nullptr, nullptr, sizeof(ConversationChoiceNode_eventFillChoice_Parms), Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationChoiceNode_FillChoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationChoiceNode_FillChoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationChoiceNode);
	UClass* Z_Construct_UClass_UConversationChoiceNode_NoRegister()
	{
		return UConversationChoiceNode::StaticClass();
	}
	struct Z_Construct_UClass_UConversationChoiceNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChoiceDisplayText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultChoiceDisplayText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChoiceTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationChoiceNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConversationSubNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConversationChoiceNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConversationChoiceNode_FillChoice, "FillChoice" }, // 3271957611
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationChoiceNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A choice on a task indicates that an option be presented to the user when the owning task is one of\n * the available options of a preceding task.\n */" },
		{ "IncludePath", "ConversationChoiceNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConversationChoiceNode.h" },
		{ "ToolTip", "A choice on a task indicates that an option be presented to the user when the owning task is one of\nthe available options of a preceding task." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationChoiceNode_Statics::NewProp_DefaultChoiceDisplayText_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/ConversationChoiceNode.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UConversationChoiceNode_Statics::NewProp_DefaultChoiceDisplayText = { "DefaultChoiceDisplayText", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationChoiceNode, DefaultChoiceDisplayText), METADATA_PARAMS(Z_Construct_UClass_UConversationChoiceNode_Statics::NewProp_DefaultChoiceDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationChoiceNode_Statics::NewProp_DefaultChoiceDisplayText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationChoiceNode_Statics::NewProp_ChoiceTags_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationChoiceNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationChoiceNode_Statics::NewProp_ChoiceTags = { "ChoiceTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationChoiceNode, ChoiceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UConversationChoiceNode_Statics::NewProp_ChoiceTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationChoiceNode_Statics::NewProp_ChoiceTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConversationChoiceNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationChoiceNode_Statics::NewProp_DefaultChoiceDisplayText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationChoiceNode_Statics::NewProp_ChoiceTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationChoiceNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationChoiceNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationChoiceNode_Statics::ClassParams = {
		&UConversationChoiceNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConversationChoiceNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConversationChoiceNode_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationChoiceNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationChoiceNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationChoiceNode()
	{
		if (!Z_Registration_Info_UClass_UConversationChoiceNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationChoiceNode.OuterSingleton, Z_Construct_UClass_UConversationChoiceNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationChoiceNode.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<UConversationChoiceNode>()
	{
		return UConversationChoiceNode::StaticClass();
	}
	UConversationChoiceNode::UConversationChoiceNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationChoiceNode);
	UConversationChoiceNode::~UConversationChoiceNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationChoiceNode, UConversationChoiceNode::StaticClass, TEXT("UConversationChoiceNode"), &Z_Registration_Info_UClass_UConversationChoiceNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationChoiceNode), 3127704821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_3203753537(TEXT("/Script/CommonConversationRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
