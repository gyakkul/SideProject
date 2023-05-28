// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationRequirementNode.h"
#include "ConversationContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationRequirementNode() {}
// Cross Module References
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationRequirementNode();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationRequirementNode_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationSubNode();
	COMMONCONVERSATIONRUNTIME_API UEnum* Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationContext();
	UPackage* Z_Construct_UPackage__Script_CommonConversationRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConversationRequirementResult;
	static UEnum* EConversationRequirementResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConversationRequirementResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConversationRequirementResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("EConversationRequirementResult"));
		}
		return Z_Registration_Info_UEnum_EConversationRequirementResult.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UEnum* StaticEnum<EConversationRequirementResult>()
	{
		return EConversationRequirementResult_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult_Statics::Enumerators[] = {
		{ "EConversationRequirementResult::Passed", (int64)EConversationRequirementResult::Passed },
		{ "EConversationRequirementResult::FailedButVisible", (int64)EConversationRequirementResult::FailedButVisible },
		{ "EConversationRequirementResult::FailedAndHidden", (int64)EConversationRequirementResult::FailedAndHidden },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The requirement result.\n */" },
		{ "FailedAndHidden.Comment", "/** This option is not available, and we should keep it hidden. */" },
		{ "FailedAndHidden.Name", "EConversationRequirementResult::FailedAndHidden" },
		{ "FailedAndHidden.ToolTip", "This option is not available, and we should keep it hidden." },
		{ "FailedButVisible.Comment", "/** This option is not available, but we should tell the player about it still. */" },
		{ "FailedButVisible.Name", "EConversationRequirementResult::FailedButVisible" },
		{ "FailedButVisible.ToolTip", "This option is not available, but we should tell the player about it still." },
		{ "ModuleRelativePath", "Public/ConversationRequirementNode.h" },
		{ "Passed.Comment", "/** This option is available */" },
		{ "Passed.Name", "EConversationRequirementResult::Passed" },
		{ "Passed.ToolTip", "This option is available" },
		{ "ToolTip", "The requirement result." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		"EConversationRequirementResult",
		"EConversationRequirementResult",
		Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult()
	{
		if (!Z_Registration_Info_UEnum_EConversationRequirementResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConversationRequirementResult.InnerSingleton, Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConversationRequirementResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UConversationRequirementNode::execIsRequirementSatisfied)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EConversationRequirementResult*)Z_Param__Result=P_THIS->IsRequirementSatisfied_Implementation(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	struct ConversationRequirementNode_eventIsRequirementSatisfied_Parms
	{
		FConversationContext Context;
		EConversationRequirementResult ReturnValue;

		/** Constructor, initializes return property only **/
		ConversationRequirementNode_eventIsRequirementSatisfied_Parms()
			: ReturnValue((EConversationRequirementResult)0)
		{
		}
	};
	static FName NAME_UConversationRequirementNode_IsRequirementSatisfied = FName(TEXT("IsRequirementSatisfied"));
	EConversationRequirementResult UConversationRequirementNode::IsRequirementSatisfied(FConversationContext const& Context) const
	{
		ConversationRequirementNode_eventIsRequirementSatisfied_Parms Parms;
		Parms.Context=Context;
		const_cast<UConversationRequirementNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UConversationRequirementNode_IsRequirementSatisfied),&Parms);
		return Parms.ReturnValue;
	}
	void UConversationRequirementNode::StaticRegisterNativesUConversationRequirementNode()
	{
		UClass* Class = UConversationRequirementNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsRequirementSatisfied", &UConversationRequirementNode::execIsRequirementSatisfied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationRequirementNode_eventIsRequirementSatisfied_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationRequirementNode_eventIsRequirementSatisfied_Parms, ReturnValue), Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult, METADATA_PARAMS(nullptr, 0) }; // 2646035500
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationRequirementNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationRequirementNode, nullptr, "IsRequirementSatisfied", nullptr, nullptr, sizeof(ConversationRequirementNode_eventIsRequirementSatisfied_Parms), Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationRequirementNode);
	UClass* Z_Construct_UClass_UConversationRequirementNode_NoRegister()
	{
		return UConversationRequirementNode::StaticClass();
	}
	struct Z_Construct_UClass_UConversationRequirementNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationRequirementNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConversationSubNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConversationRequirementNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConversationRequirementNode_IsRequirementSatisfied, "IsRequirementSatisfied" }, // 3911732051
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationRequirementNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  A requirement is placed on a parent node to control whether or not it can be activated\n *  (when a link to the parent node is being evaluated, the requirement will be asked if it is satisfied or not)\n */" },
		{ "IncludePath", "ConversationRequirementNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConversationRequirementNode.h" },
		{ "ToolTip", "A requirement is placed on a parent node to control whether or not it can be activated\n(when a link to the parent node is being evaluated, the requirement will be asked if it is satisfied or not)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationRequirementNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationRequirementNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationRequirementNode_Statics::ClassParams = {
		&UConversationRequirementNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001100A1u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationRequirementNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationRequirementNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationRequirementNode()
	{
		if (!Z_Registration_Info_UClass_UConversationRequirementNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationRequirementNode.OuterSingleton, Z_Construct_UClass_UConversationRequirementNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationRequirementNode.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<UConversationRequirementNode>()
	{
		return UConversationRequirementNode::StaticClass();
	}
	UConversationRequirementNode::UConversationRequirementNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationRequirementNode);
	UConversationRequirementNode::~UConversationRequirementNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_Statics::EnumInfo[] = {
		{ EConversationRequirementResult_StaticEnum, TEXT("EConversationRequirementResult"), &Z_Registration_Info_UEnum_EConversationRequirementResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2646035500U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationRequirementNode, UConversationRequirementNode::StaticClass, TEXT("UConversationRequirementNode"), &Z_Registration_Info_UClass_UConversationRequirementNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationRequirementNode), 198042029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_1817639791(TEXT("/Script/CommonConversationRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
