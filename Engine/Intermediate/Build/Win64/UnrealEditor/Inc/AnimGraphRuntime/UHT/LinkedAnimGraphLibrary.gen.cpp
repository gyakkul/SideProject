// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LinkedAnimGraphLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinkedAnimGraphLibrary() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_ULinkedAnimGraphLibrary();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_ULinkedAnimGraphLibrary_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLinkedAnimGraphReference();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FLinkedAnimGraphReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FLinkedAnimGraphReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LinkedAnimGraphReference;
class UScriptStruct* FLinkedAnimGraphReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LinkedAnimGraphReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LinkedAnimGraphReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinkedAnimGraphReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("LinkedAnimGraphReference"));
	}
	return Z_Registration_Info_UScriptStruct_LinkedAnimGraphReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FLinkedAnimGraphReference>()
{
	return FLinkedAnimGraphReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLinkedAnimGraphReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinkedAnimGraphReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LinkedAnimGraphLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLinkedAnimGraphReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinkedAnimGraphReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLinkedAnimGraphReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNodeReference,
		&NewStructOps,
		"LinkedAnimGraphReference",
		sizeof(FLinkedAnimGraphReference),
		alignof(FLinkedAnimGraphReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLinkedAnimGraphReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkedAnimGraphReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLinkedAnimGraphReference()
	{
		if (!Z_Registration_Info_UScriptStruct_LinkedAnimGraphReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LinkedAnimGraphReference.InnerSingleton, Z_Construct_UScriptStruct_FLinkedAnimGraphReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LinkedAnimGraphReference.InnerSingleton;
	}
	DEFINE_FUNCTION(ULinkedAnimGraphLibrary::execGetLinkedAnimInstance)
	{
		P_GET_STRUCT_REF(FLinkedAnimGraphReference,Z_Param_Out_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=ULinkedAnimGraphLibrary::GetLinkedAnimInstance(Z_Param_Out_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULinkedAnimGraphLibrary::execHasLinkedAnimInstance)
	{
		P_GET_STRUCT_REF(FLinkedAnimGraphReference,Z_Param_Out_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULinkedAnimGraphLibrary::HasLinkedAnimInstance(Z_Param_Out_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULinkedAnimGraphLibrary::execConvertToLinkedAnimGraphPure)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_STRUCT_REF(FLinkedAnimGraphReference,Z_Param_Out_LinkedAnimGraph);
		P_GET_UBOOL_REF(Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraphPure(Z_Param_Out_Node,Z_Param_Out_LinkedAnimGraph,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULinkedAnimGraphLibrary::execConvertToLinkedAnimGraph)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinkedAnimGraphReference*)Z_Param__Result=ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraph(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	void ULinkedAnimGraphLibrary::StaticRegisterNativesULinkedAnimGraphLibrary()
	{
		UClass* Class = ULinkedAnimGraphLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToLinkedAnimGraph", &ULinkedAnimGraphLibrary::execConvertToLinkedAnimGraph },
			{ "ConvertToLinkedAnimGraphPure", &ULinkedAnimGraphLibrary::execConvertToLinkedAnimGraphPure },
			{ "GetLinkedAnimInstance", &ULinkedAnimGraphLibrary::execGetLinkedAnimInstance },
			{ "HasLinkedAnimInstance", &ULinkedAnimGraphLibrary::execHasLinkedAnimInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics
	{
		struct LinkedAnimGraphLibrary_eventConvertToLinkedAnimGraph_Parms
		{
			FAnimNodeReference Node;
			EAnimNodeReferenceConversionResult Result;
			FLinkedAnimGraphReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinkedAnimGraphLibrary_eventConvertToLinkedAnimGraph_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinkedAnimGraphLibrary_eventConvertToLinkedAnimGraph_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(nullptr, 0) }; // 2316672980
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinkedAnimGraphLibrary_eventConvertToLinkedAnimGraph_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinkedAnimGraphReference, METADATA_PARAMS(nullptr, 0) }; // 582369459
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Linked Anim Graphs" },
		{ "Comment", "/** Get a linked anim graph reference from an anim node reference */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/LinkedAnimGraphLibrary.h" },
		{ "ToolTip", "Get a linked anim graph reference from an anim node reference" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULinkedAnimGraphLibrary, nullptr, "ConvertToLinkedAnimGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::LinkedAnimGraphLibrary_eventConvertToLinkedAnimGraph_Parms), Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics
	{
		struct LinkedAnimGraphLibrary_eventConvertToLinkedAnimGraphPure_Parms
		{
			FAnimNodeReference Node;
			FLinkedAnimGraphReference LinkedAnimGraph;
			bool Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedAnimGraph;
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinkedAnimGraphLibrary_eventConvertToLinkedAnimGraphPure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::NewProp_LinkedAnimGraph = { "LinkedAnimGraph", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinkedAnimGraphLibrary_eventConvertToLinkedAnimGraphPure_Parms, LinkedAnimGraph), Z_Construct_UScriptStruct_FLinkedAnimGraphReference, METADATA_PARAMS(nullptr, 0) }; // 582369459
	void Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((LinkedAnimGraphLibrary_eventConvertToLinkedAnimGraphPure_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LinkedAnimGraphLibrary_eventConvertToLinkedAnimGraphPure_Parms), &Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::NewProp_LinkedAnimGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Linked Anim Graphs" },
		{ "Comment", "/** Get a linked anim graph reference from an anim node reference (pure) */" },
		{ "DisplayName", "Convert to Linked Anim Graph" },
		{ "ModuleRelativePath", "Public/LinkedAnimGraphLibrary.h" },
		{ "ToolTip", "Get a linked anim graph reference from an anim node reference (pure)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULinkedAnimGraphLibrary, nullptr, "ConvertToLinkedAnimGraphPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::LinkedAnimGraphLibrary_eventConvertToLinkedAnimGraphPure_Parms), Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics
	{
		struct LinkedAnimGraphLibrary_eventGetLinkedAnimInstance_Parms
		{
			FLinkedAnimGraphReference Node;
			UAnimInstance* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinkedAnimGraphLibrary_eventGetLinkedAnimInstance_Parms, Node), Z_Construct_UScriptStruct_FLinkedAnimGraphReference, METADATA_PARAMS(Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::NewProp_Node_MetaData)) }; // 582369459
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinkedAnimGraphLibrary_eventGetLinkedAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Linked Anim Graphs" },
		{ "Comment", "/** Get the linked instance is hosted by this node. If the node does not host an instance then HasLinkedAnimInstance will return false */" },
		{ "ModuleRelativePath", "Public/LinkedAnimGraphLibrary.h" },
		{ "ToolTip", "Get the linked instance is hosted by this node. If the node does not host an instance then HasLinkedAnimInstance will return false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULinkedAnimGraphLibrary, nullptr, "GetLinkedAnimInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::LinkedAnimGraphLibrary_eventGetLinkedAnimInstance_Parms), Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics
	{
		struct LinkedAnimGraphLibrary_eventHasLinkedAnimInstance_Parms
		{
			FLinkedAnimGraphReference Node;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinkedAnimGraphLibrary_eventHasLinkedAnimInstance_Parms, Node), Z_Construct_UScriptStruct_FLinkedAnimGraphReference, METADATA_PARAMS(Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::NewProp_Node_MetaData)) }; // 582369459
	void Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LinkedAnimGraphLibrary_eventHasLinkedAnimInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LinkedAnimGraphLibrary_eventHasLinkedAnimInstance_Parms), &Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Linked Anim Graphs" },
		{ "Comment", "/** Returns whether the node hosts an instance (e.g. linked anim graph or layer) */" },
		{ "ModuleRelativePath", "Public/LinkedAnimGraphLibrary.h" },
		{ "ToolTip", "Returns whether the node hosts an instance (e.g. linked anim graph or layer)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULinkedAnimGraphLibrary, nullptr, "HasLinkedAnimInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::LinkedAnimGraphLibrary_eventHasLinkedAnimInstance_Parms), Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULinkedAnimGraphLibrary);
	UClass* Z_Construct_UClass_ULinkedAnimGraphLibrary_NoRegister()
	{
		return ULinkedAnimGraphLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph, "ConvertToLinkedAnimGraph" }, // 4133012816
		{ &Z_Construct_UFunction_ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure, "ConvertToLinkedAnimGraphPure" }, // 520747077
		{ &Z_Construct_UFunction_ULinkedAnimGraphLibrary_GetLinkedAnimInstance, "GetLinkedAnimInstance" }, // 1117339943
		{ &Z_Construct_UFunction_ULinkedAnimGraphLibrary_HasLinkedAnimInstance, "HasLinkedAnimInstance" }, // 1857428286
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Exposes operations to be performed on anim node contexts\n" },
		{ "IncludePath", "LinkedAnimGraphLibrary.h" },
		{ "ModuleRelativePath", "Public/LinkedAnimGraphLibrary.h" },
		{ "ToolTip", "Exposes operations to be performed on anim node contexts" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULinkedAnimGraphLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics::ClassParams = {
		&ULinkedAnimGraphLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULinkedAnimGraphLibrary()
	{
		if (!Z_Registration_Info_UClass_ULinkedAnimGraphLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULinkedAnimGraphLibrary.OuterSingleton, Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULinkedAnimGraphLibrary.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<ULinkedAnimGraphLibrary>()
	{
		return ULinkedAnimGraphLibrary::StaticClass();
	}
	ULinkedAnimGraphLibrary::ULinkedAnimGraphLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinkedAnimGraphLibrary);
	ULinkedAnimGraphLibrary::~ULinkedAnimGraphLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_Statics::ScriptStructInfo[] = {
		{ FLinkedAnimGraphReference::StaticStruct, Z_Construct_UScriptStruct_FLinkedAnimGraphReference_Statics::NewStructOps, TEXT("LinkedAnimGraphReference"), &Z_Registration_Info_UScriptStruct_LinkedAnimGraphReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLinkedAnimGraphReference), 582369459U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULinkedAnimGraphLibrary, ULinkedAnimGraphLibrary::StaticClass, TEXT("ULinkedAnimGraphLibrary"), &Z_Registration_Info_UClass_ULinkedAnimGraphLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULinkedAnimGraphLibrary), 4265439048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_1440514400(TEXT("/Script/AnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
