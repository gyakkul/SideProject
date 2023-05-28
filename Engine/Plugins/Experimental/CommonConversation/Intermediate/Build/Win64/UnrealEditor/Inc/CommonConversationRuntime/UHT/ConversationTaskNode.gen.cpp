// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationTaskNode.h"
#include "ConversationContext.h"
#include "ConversationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationTaskNode() {}
// Cross Module References
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationNodeWithLinks();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationSubNode_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationTaskNode();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationTaskNode_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UEnum* Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationContext();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationNodeParameterPair();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationTaskResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UPackage* Z_Construct_UPackage__Script_CommonConversationRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UConversationTaskNode::execGatherStaticExtraData)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_GET_TARRAY_REF(FConversationNodeParameterPair,Z_Param_Out_InOutExtraData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GatherStaticExtraData_Implementation(Z_Param_Out_Context,Z_Param_Out_InOutExtraData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationTaskNode::execExecuteClientEffects)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteClientEffects_Implementation(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationTaskNode::execExecuteTaskNode)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConversationTaskResult*)Z_Param__Result=P_THIS->ExecuteTaskNode_Implementation(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationTaskNode::execIsRequirementSatisfied)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EConversationRequirementResult*)Z_Param__Result=P_THIS->IsRequirementSatisfied_Implementation(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationTaskNode::execGetNodeBodyColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_BodyColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNodeBodyColor_Implementation(Z_Param_Out_BodyColor);
		P_NATIVE_END;
	}
	struct ConversationTaskNode_eventExecuteClientEffects_Parms
	{
		FConversationContext Context;
	};
	struct ConversationTaskNode_eventExecuteTaskNode_Parms
	{
		FConversationContext Context;
		FConversationTaskResult ReturnValue;
	};
	struct ConversationTaskNode_eventGatherStaticExtraData_Parms
	{
		FConversationContext Context;
		TArray<FConversationNodeParameterPair> InOutExtraData;
	};
	struct ConversationTaskNode_eventGetNodeBodyColor_Parms
	{
		FLinearColor BodyColor;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ConversationTaskNode_eventGetNodeBodyColor_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ConversationTaskNode_eventIsRequirementSatisfied_Parms
	{
		FConversationContext Context;
		EConversationRequirementResult ReturnValue;

		/** Constructor, initializes return property only **/
		ConversationTaskNode_eventIsRequirementSatisfied_Parms()
			: ReturnValue((EConversationRequirementResult)0)
		{
		}
	};
	static FName NAME_UConversationTaskNode_ExecuteClientEffects = FName(TEXT("ExecuteClientEffects"));
	void UConversationTaskNode::ExecuteClientEffects(FConversationContext const& Context) const
	{
		ConversationTaskNode_eventExecuteClientEffects_Parms Parms;
		Parms.Context=Context;
		const_cast<UConversationTaskNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UConversationTaskNode_ExecuteClientEffects),&Parms);
	}
	static FName NAME_UConversationTaskNode_ExecuteTaskNode = FName(TEXT("ExecuteTaskNode"));
	FConversationTaskResult UConversationTaskNode::ExecuteTaskNode(FConversationContext const& Context) const
	{
		ConversationTaskNode_eventExecuteTaskNode_Parms Parms;
		Parms.Context=Context;
		const_cast<UConversationTaskNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UConversationTaskNode_ExecuteTaskNode),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UConversationTaskNode_GatherStaticExtraData = FName(TEXT("GatherStaticExtraData"));
	void UConversationTaskNode::GatherStaticExtraData(FConversationContext const& Context, TArray<FConversationNodeParameterPair>& InOutExtraData) const
	{
		ConversationTaskNode_eventGatherStaticExtraData_Parms Parms;
		Parms.Context=Context;
		Parms.InOutExtraData=InOutExtraData;
		const_cast<UConversationTaskNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UConversationTaskNode_GatherStaticExtraData),&Parms);
		InOutExtraData=Parms.InOutExtraData;
	}
	static FName NAME_UConversationTaskNode_GetNodeBodyColor = FName(TEXT("GetNodeBodyColor"));
	bool UConversationTaskNode::GetNodeBodyColor(FLinearColor& BodyColor) const
	{
		ConversationTaskNode_eventGetNodeBodyColor_Parms Parms;
		Parms.BodyColor=BodyColor;
		const_cast<UConversationTaskNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UConversationTaskNode_GetNodeBodyColor),&Parms);
		BodyColor=Parms.BodyColor;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UConversationTaskNode_IsRequirementSatisfied = FName(TEXT("IsRequirementSatisfied"));
	EConversationRequirementResult UConversationTaskNode::IsRequirementSatisfied(FConversationContext const& Context) const
	{
		ConversationTaskNode_eventIsRequirementSatisfied_Parms Parms;
		Parms.Context=Context;
		const_cast<UConversationTaskNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UConversationTaskNode_IsRequirementSatisfied),&Parms);
		return Parms.ReturnValue;
	}
	void UConversationTaskNode::StaticRegisterNativesUConversationTaskNode()
	{
		UClass* Class = UConversationTaskNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteClientEffects", &UConversationTaskNode::execExecuteClientEffects },
			{ "ExecuteTaskNode", &UConversationTaskNode::execExecuteTaskNode },
			{ "GatherStaticExtraData", &UConversationTaskNode::execGatherStaticExtraData },
			{ "GetNodeBodyColor", &UConversationTaskNode::execGetNodeBodyColor },
			{ "IsRequirementSatisfied", &UConversationTaskNode::execIsRequirementSatisfied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationTaskNode_eventExecuteClientEffects_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationTaskNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationTaskNode, nullptr, "ExecuteClientEffects", nullptr, nullptr, sizeof(ConversationTaskNode_eventExecuteClientEffects_Parms), Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationTaskNode_eventExecuteTaskNode_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationTaskNode_eventExecuteTaskNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FConversationTaskResult, METADATA_PARAMS(nullptr, 0) }; // 3685988545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationTaskNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationTaskNode, nullptr, "ExecuteTaskNode", nullptr, nullptr, sizeof(ConversationTaskNode_eventExecuteTaskNode_Parms), Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOutExtraData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InOutExtraData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationTaskNode_eventGatherStaticExtraData_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::NewProp_InOutExtraData_Inner = { "InOutExtraData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConversationNodeParameterPair, METADATA_PARAMS(nullptr, 0) }; // 3894127766
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::NewProp_InOutExtraData = { "InOutExtraData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationTaskNode_eventGatherStaticExtraData_Parms, InOutExtraData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3894127766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::NewProp_InOutExtraData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::NewProp_InOutExtraData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationTaskNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationTaskNode, nullptr, "GatherStaticExtraData", nullptr, nullptr, sizeof(ConversationTaskNode_eventGatherStaticExtraData_Parms), Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyColor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::NewProp_BodyColor = { "BodyColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationTaskNode_eventGetNodeBodyColor_Parms, BodyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConversationTaskNode_eventGetNodeBodyColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConversationTaskNode_eventGetNodeBodyColor_Parms), &Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::NewProp_BodyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationTaskNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationTaskNode, nullptr, "GetNodeBodyColor", nullptr, nullptr, sizeof(ConversationTaskNode_eventGetNodeBodyColor_Parms), Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationTaskNode_eventIsRequirementSatisfied_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationTaskNode_eventIsRequirementSatisfied_Parms, ReturnValue), Z_Construct_UEnum_CommonConversationRuntime_EConversationRequirementResult, METADATA_PARAMS(nullptr, 0) }; // 2646035500
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationTaskNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationTaskNode, nullptr, "IsRequirementSatisfied", nullptr, nullptr, sizeof(ConversationTaskNode_eventIsRequirementSatisfied_Parms), Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationTaskNode);
	UClass* Z_Construct_UClass_UConversationTaskNode_NoRegister()
	{
		return UConversationTaskNode::StaticClass();
	}
	struct Z_Construct_UClass_UConversationTaskNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubNodes;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRequirements_MetaData[];
#endif
		static void NewProp_bHasRequirements_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDynamicChoices_MetaData[];
#endif
		static void NewProp_bHasDynamicChoices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDynamicChoices;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRequirementsWhileAdvancingConversations_MetaData[];
#endif
		static void NewProp_bIgnoreRequirementsWhileAdvancingConversations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRequirementsWhileAdvancingConversations;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNodeBodyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultNodeBodyColor;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationTaskNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConversationNodeWithLinks,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConversationTaskNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConversationTaskNode_ExecuteClientEffects, "ExecuteClientEffects" }, // 1218158062
		{ &Z_Construct_UFunction_UConversationTaskNode_ExecuteTaskNode, "ExecuteTaskNode" }, // 3631748995
		{ &Z_Construct_UFunction_UConversationTaskNode_GatherStaticExtraData, "GatherStaticExtraData" }, // 3788443834
		{ &Z_Construct_UFunction_UConversationTaskNode_GetNodeBodyColor, "GetNodeBodyColor" }, // 2215770562
		{ &Z_Construct_UFunction_UConversationTaskNode_IsRequirementSatisfied, "IsRequirementSatisfied" }, // 2453643914
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationTaskNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The ConversationTaskNode is the basis of any task in the conversation graph,\n * that task may be as simple as saying some text to the user, and providing some choices.\n * However more complex tasks can fire off quests, can spawn actors, pretty much any arbitrary\n * thing you want.\n * \n * The conversation system is less about just a dialogue tree, and more about a graph of\n * actions the NPC can take, and choices they can provide to the player.\n */" },
		{ "IncludePath", "ConversationTaskNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConversationTaskNode.h" },
		{ "ToolTip", "The ConversationTaskNode is the basis of any task in the conversation graph,\nthat task may be as simple as saying some text to the user, and providing some choices.\nHowever more complex tasks can fire off quests, can spawn actors, pretty much any arbitrary\nthing you want.\n\nThe conversation system is less about just a dialogue tree, and more about a graph of\nactions the NPC can take, and choices they can provide to the player." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_SubNodes_Inner = { "SubNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UConversationSubNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_SubNodes_MetaData[] = {
		{ "Comment", "// Requirements and side effects\n" },
		{ "ModuleRelativePath", "Public/ConversationTaskNode.h" },
		{ "ToolTip", "Requirements and side effects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_SubNodes = { "SubNodes", nullptr, (EPropertyFlags)0x0014000000000010, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationTaskNode, SubNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_SubNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_SubNodes_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasRequirements_MetaData[] = {
		{ "Category", "Conversation" },
		{ "Comment", "/* EDITOR ONLY VISUALS: Does this task internally have requirements? */" },
		{ "ModuleRelativePath", "Public/ConversationTaskNode.h" },
		{ "ToolTip", "EDITOR ONLY VISUALS: Does this task internally have requirements?" },
	};
#endif
	void Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasRequirements_SetBit(void* Obj)
	{
		((UConversationTaskNode*)Obj)->bHasRequirements = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasRequirements = { "bHasRequirements", nullptr, (EPropertyFlags)0x0010000800010011, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UConversationTaskNode), &Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasRequirements_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasRequirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasRequirements_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasDynamicChoices_MetaData[] = {
		{ "Category", "Conversation" },
		{ "Comment", "/** EDITOR ONLY VISUALS: Does this task generate dynamic choices? */" },
		{ "ModuleRelativePath", "Public/ConversationTaskNode.h" },
		{ "ToolTip", "EDITOR ONLY VISUALS: Does this task generate dynamic choices?" },
	};
#endif
	void Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasDynamicChoices_SetBit(void* Obj)
	{
		((UConversationTaskNode*)Obj)->bHasDynamicChoices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasDynamicChoices = { "bHasDynamicChoices", nullptr, (EPropertyFlags)0x0010000800010011, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UConversationTaskNode), &Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasDynamicChoices_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasDynamicChoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasDynamicChoices_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bIgnoreRequirementsWhileAdvancingConversations_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "//This setting is designed for requirements that only matter when option is generated\n" },
		{ "ModuleRelativePath", "Public/ConversationTaskNode.h" },
		{ "ToolTip", "This setting is designed for requirements that only matter when option is generated" },
	};
#endif
	void Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bIgnoreRequirementsWhileAdvancingConversations_SetBit(void* Obj)
	{
		((UConversationTaskNode*)Obj)->bIgnoreRequirementsWhileAdvancingConversations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bIgnoreRequirementsWhileAdvancingConversations = { "bIgnoreRequirementsWhileAdvancingConversations", nullptr, (EPropertyFlags)0x0010000000010011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConversationTaskNode), &Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bIgnoreRequirementsWhileAdvancingConversations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bIgnoreRequirementsWhileAdvancingConversations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bIgnoreRequirementsWhileAdvancingConversations_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_DefaultNodeBodyColor_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/** Default color of the node. */" },
		{ "ModuleRelativePath", "Public/ConversationTaskNode.h" },
		{ "ToolTip", "Default color of the node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_DefaultNodeBodyColor = { "DefaultNodeBodyColor", nullptr, (EPropertyFlags)0x0020080800010011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationTaskNode, DefaultNodeBodyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_DefaultNodeBodyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_DefaultNodeBodyColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConversationTaskNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_SubNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_SubNodes,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bHasDynamicChoices,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_bIgnoreRequirementsWhileAdvancingConversations,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationTaskNode_Statics::NewProp_DefaultNodeBodyColor,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationTaskNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationTaskNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationTaskNode_Statics::ClassParams = {
		&UConversationTaskNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConversationTaskNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConversationTaskNode_Statics::PropPointers),
		0,
		0x001100A1u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationTaskNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationTaskNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationTaskNode()
	{
		if (!Z_Registration_Info_UClass_UConversationTaskNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationTaskNode.OuterSingleton, Z_Construct_UClass_UConversationTaskNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationTaskNode.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<UConversationTaskNode>()
	{
		return UConversationTaskNode::StaticClass();
	}
	UConversationTaskNode::UConversationTaskNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationTaskNode);
	UConversationTaskNode::~UConversationTaskNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationTaskNode, UConversationTaskNode::StaticClass, TEXT("UConversationTaskNode"), &Z_Registration_Info_UClass_UConversationTaskNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationTaskNode), 501362335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_3695189302(TEXT("/Script/CommonConversationRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
