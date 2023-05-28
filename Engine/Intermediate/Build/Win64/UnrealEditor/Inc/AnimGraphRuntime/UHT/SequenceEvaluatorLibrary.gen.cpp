// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceEvaluatorLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimExecutionContext.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceEvaluatorLibrary() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequenceEvaluatorLibrary();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequenceEvaluatorLibrary_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceEvaluatorReference();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FSequenceEvaluatorReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FSequenceEvaluatorReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequenceEvaluatorReference;
class UScriptStruct* FSequenceEvaluatorReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequenceEvaluatorReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequenceEvaluatorReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequenceEvaluatorReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("SequenceEvaluatorReference"));
	}
	return Z_Registration_Info_UScriptStruct_SequenceEvaluatorReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FSequenceEvaluatorReference>()
{
	return FSequenceEvaluatorReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequenceEvaluatorReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceEvaluatorReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SequenceEvaluatorLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequenceEvaluatorReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequenceEvaluatorReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequenceEvaluatorReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNodeReference,
		&NewStructOps,
		"SequenceEvaluatorReference",
		sizeof(FSequenceEvaluatorReference),
		alignof(FSequenceEvaluatorReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceEvaluatorReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceEvaluatorReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequenceEvaluatorReference()
	{
		if (!Z_Registration_Info_UScriptStruct_SequenceEvaluatorReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequenceEvaluatorReference.InnerSingleton, Z_Construct_UScriptStruct_FSequenceEvaluatorReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequenceEvaluatorReference.InnerSingleton;
	}
	DEFINE_FUNCTION(USequenceEvaluatorLibrary::execGetSequence)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequenceBase**)Z_Param__Result=USequenceEvaluatorLibrary::GetSequence(Z_Param_Out_SequenceEvaluator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequenceEvaluatorLibrary::execGetAccumulatedTime)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USequenceEvaluatorLibrary::GetAccumulatedTime(Z_Param_Out_SequenceEvaluator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequenceEvaluatorLibrary::execSetSequenceWithInertialBlending)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Sequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=USequenceEvaluatorLibrary::SetSequenceWithInertialBlending(Z_Param_Out_UpdateContext,Z_Param_Out_SequenceEvaluator,Z_Param_Sequence,Z_Param_BlendTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequenceEvaluatorLibrary::execSetSequence)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=USequenceEvaluatorLibrary::SetSequence(Z_Param_Out_SequenceEvaluator,Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequenceEvaluatorLibrary::execAdvanceTime)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=USequenceEvaluatorLibrary::AdvanceTime(Z_Param_Out_UpdateContext,Z_Param_Out_SequenceEvaluator,Z_Param_PlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequenceEvaluatorLibrary::execSetExplicitTime)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=USequenceEvaluatorLibrary::SetExplicitTime(Z_Param_Out_SequenceEvaluator,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequenceEvaluatorLibrary::execConvertToSequenceEvaluatorPure)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_UBOOL_REF(Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USequenceEvaluatorLibrary::ConvertToSequenceEvaluatorPure(Z_Param_Out_Node,Z_Param_Out_SequenceEvaluator,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequenceEvaluatorLibrary::execConvertToSequenceEvaluator)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=USequenceEvaluatorLibrary::ConvertToSequenceEvaluator(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	void USequenceEvaluatorLibrary::StaticRegisterNativesUSequenceEvaluatorLibrary()
	{
		UClass* Class = USequenceEvaluatorLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvanceTime", &USequenceEvaluatorLibrary::execAdvanceTime },
			{ "ConvertToSequenceEvaluator", &USequenceEvaluatorLibrary::execConvertToSequenceEvaluator },
			{ "ConvertToSequenceEvaluatorPure", &USequenceEvaluatorLibrary::execConvertToSequenceEvaluatorPure },
			{ "GetAccumulatedTime", &USequenceEvaluatorLibrary::execGetAccumulatedTime },
			{ "GetSequence", &USequenceEvaluatorLibrary::execGetSequence },
			{ "SetExplicitTime", &USequenceEvaluatorLibrary::execSetExplicitTime },
			{ "SetSequence", &USequenceEvaluatorLibrary::execSetSequence },
			{ "SetSequenceWithInertialBlending", &USequenceEvaluatorLibrary::execSetSequenceWithInertialBlending },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics
	{
		struct SequenceEvaluatorLibrary_eventAdvanceTime_Parms
		{
			FAnimUpdateContext UpdateContext;
			FSequenceEvaluatorReference SequenceEvaluator;
			float PlayRate;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventAdvanceTime_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventAdvanceTime_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventAdvanceTime_Parms, PlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventAdvanceTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Advance the current accumulated time of the sequence evaluator */" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "ModuleRelativePath", "Public/SequenceEvaluatorLibrary.h" },
		{ "ToolTip", "Advance the current accumulated time of the sequence evaluator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceEvaluatorLibrary, nullptr, "AdvanceTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::SequenceEvaluatorLibrary_eventAdvanceTime_Parms), Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics
	{
		struct SequenceEvaluatorLibrary_eventConvertToSequenceEvaluator_Parms
		{
			FAnimNodeReference Node;
			EAnimNodeReferenceConversionResult Result;
			FSequenceEvaluatorReference ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventConvertToSequenceEvaluator_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventConvertToSequenceEvaluator_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(nullptr, 0) }; // 2316672980
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventConvertToSequenceEvaluator_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Get a sequence evaluator context from an anim node context */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SequenceEvaluatorLibrary.h" },
		{ "ToolTip", "Get a sequence evaluator context from an anim node context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceEvaluatorLibrary, nullptr, "ConvertToSequenceEvaluator", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::SequenceEvaluatorLibrary_eventConvertToSequenceEvaluator_Parms), Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics
	{
		struct SequenceEvaluatorLibrary_eventConvertToSequenceEvaluatorPure_Parms
		{
			FAnimNodeReference Node;
			FSequenceEvaluatorReference SequenceEvaluator;
			bool Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventConvertToSequenceEvaluatorPure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventConvertToSequenceEvaluatorPure_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	void Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((SequenceEvaluatorLibrary_eventConvertToSequenceEvaluatorPure_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequenceEvaluatorLibrary_eventConvertToSequenceEvaluatorPure_Parms), &Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Get a sequence evaluator context from an anim node context (pure) */" },
		{ "DisplayName", "Convert to Sequence Evaluator" },
		{ "ModuleRelativePath", "Public/SequenceEvaluatorLibrary.h" },
		{ "ToolTip", "Get a sequence evaluator context from an anim node context (pure)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceEvaluatorLibrary, nullptr, "ConvertToSequenceEvaluatorPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::SequenceEvaluatorLibrary_eventConvertToSequenceEvaluatorPure_Parms), Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics
	{
		struct SequenceEvaluatorLibrary_eventGetAccumulatedTime_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventGetAccumulatedTime_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventGetAccumulatedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Sequence Evaluator" },
		{ "Comment", "/** Gets the current accumulated time of the sequence evaluator */" },
		{ "ModuleRelativePath", "Public/SequenceEvaluatorLibrary.h" },
		{ "ToolTip", "Gets the current accumulated time of the sequence evaluator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceEvaluatorLibrary, nullptr, "GetAccumulatedTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::SequenceEvaluatorLibrary_eventGetAccumulatedTime_Parms), Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics
	{
		struct SequenceEvaluatorLibrary_eventGetSequence_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			UAnimSequenceBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventGetSequence_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Sequence Evaluator" },
		{ "Comment", "/** Gets the current sequence of the sequence evaluator */" },
		{ "ModuleRelativePath", "Public/SequenceEvaluatorLibrary.h" },
		{ "ToolTip", "Gets the current sequence of the sequence evaluator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceEvaluatorLibrary, nullptr, "GetSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::SequenceEvaluatorLibrary_eventGetSequence_Parms), Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics
	{
		struct SequenceEvaluatorLibrary_eventSetExplicitTime_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			float Time;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventSetExplicitTime_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventSetExplicitTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventSetExplicitTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Set the current accumulated time of the sequence evaluator */" },
		{ "ModuleRelativePath", "Public/SequenceEvaluatorLibrary.h" },
		{ "ToolTip", "Set the current accumulated time of the sequence evaluator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceEvaluatorLibrary, nullptr, "SetExplicitTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::SequenceEvaluatorLibrary_eventSetExplicitTime_Parms), Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics
	{
		struct SequenceEvaluatorLibrary_eventSetSequence_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			UAnimSequenceBase* Sequence;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventSetSequence_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventSetSequence_Parms, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventSetSequence_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Set the current sequence of the sequence evaluator */" },
		{ "ModuleRelativePath", "Public/SequenceEvaluatorLibrary.h" },
		{ "ToolTip", "Set the current sequence of the sequence evaluator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceEvaluatorLibrary, nullptr, "SetSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::SequenceEvaluatorLibrary_eventSetSequence_Parms), Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics
	{
		struct SequenceEvaluatorLibrary_eventSetSequenceWithInertialBlending_Parms
		{
			FAnimUpdateContext UpdateContext;
			FSequenceEvaluatorReference SequenceEvaluator;
			UAnimSequenceBase* Sequence;
			float BlendTime;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventSetSequenceWithInertialBlending_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventSetSequenceWithInertialBlending_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventSetSequenceWithInertialBlending_Parms, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventSetSequenceWithInertialBlending_Parms, BlendTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceEvaluatorLibrary_eventSetSequenceWithInertialBlending_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Set the current sequence of the sequence evaluator with an inertial blend time */" },
		{ "CPP_Default_BlendTime", "0.200000" },
		{ "ModuleRelativePath", "Public/SequenceEvaluatorLibrary.h" },
		{ "ToolTip", "Set the current sequence of the sequence evaluator with an inertial blend time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceEvaluatorLibrary, nullptr, "SetSequenceWithInertialBlending", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::SequenceEvaluatorLibrary_eventSetSequenceWithInertialBlending_Parms), Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequenceEvaluatorLibrary);
	UClass* Z_Construct_UClass_USequenceEvaluatorLibrary_NoRegister()
	{
		return USequenceEvaluatorLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USequenceEvaluatorLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceEvaluatorLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USequenceEvaluatorLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USequenceEvaluatorLibrary_AdvanceTime, "AdvanceTime" }, // 1731910677
		{ &Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluator, "ConvertToSequenceEvaluator" }, // 3752549299
		{ &Z_Construct_UFunction_USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure, "ConvertToSequenceEvaluatorPure" }, // 4182962476
		{ &Z_Construct_UFunction_USequenceEvaluatorLibrary_GetAccumulatedTime, "GetAccumulatedTime" }, // 2173810441
		{ &Z_Construct_UFunction_USequenceEvaluatorLibrary_GetSequence, "GetSequence" }, // 383329333
		{ &Z_Construct_UFunction_USequenceEvaluatorLibrary_SetExplicitTime, "SetExplicitTime" }, // 4274047820
		{ &Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequence, "SetSequence" }, // 863813456
		{ &Z_Construct_UFunction_USequenceEvaluatorLibrary_SetSequenceWithInertialBlending, "SetSequenceWithInertialBlending" }, // 3474423188
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceEvaluatorLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Exposes operations to be performed on a sequence evaluator anim node\n// Note: Experimental and subject to change!\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "SequenceEvaluatorLibrary.h" },
		{ "ModuleRelativePath", "Public/SequenceEvaluatorLibrary.h" },
		{ "ToolTip", "Exposes operations to be performed on a sequence evaluator anim node\nNote: Experimental and subject to change!" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceEvaluatorLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceEvaluatorLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequenceEvaluatorLibrary_Statics::ClassParams = {
		&USequenceEvaluatorLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USequenceEvaluatorLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceEvaluatorLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceEvaluatorLibrary()
	{
		if (!Z_Registration_Info_UClass_USequenceEvaluatorLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequenceEvaluatorLibrary.OuterSingleton, Z_Construct_UClass_USequenceEvaluatorLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequenceEvaluatorLibrary.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<USequenceEvaluatorLibrary>()
	{
		return USequenceEvaluatorLibrary::StaticClass();
	}
	USequenceEvaluatorLibrary::USequenceEvaluatorLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceEvaluatorLibrary);
	USequenceEvaluatorLibrary::~USequenceEvaluatorLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_Statics::ScriptStructInfo[] = {
		{ FSequenceEvaluatorReference::StaticStruct, Z_Construct_UScriptStruct_FSequenceEvaluatorReference_Statics::NewStructOps, TEXT("SequenceEvaluatorReference"), &Z_Registration_Info_UScriptStruct_SequenceEvaluatorReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequenceEvaluatorReference), 1982540663U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequenceEvaluatorLibrary, USequenceEvaluatorLibrary::StaticClass, TEXT("USequenceEvaluatorLibrary"), &Z_Registration_Info_UClass_USequenceEvaluatorLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequenceEvaluatorLibrary), 1606063888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_841744836(TEXT("/Script/AnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
