// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LayeredBoneBlendLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimExecutionContext.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayeredBoneBlendLibrary() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_ULayeredBoneBlendLibrary();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_ULayeredBoneBlendLibrary_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredBoneBlendReference();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FLayeredBoneBlendReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FLayeredBoneBlendReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference;
class UScriptStruct* FLayeredBoneBlendReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredBoneBlendReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("LayeredBoneBlendReference"));
	}
	return Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FLayeredBoneBlendReference>()
{
	return FLayeredBoneBlendReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LayeredBoneBlendLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredBoneBlendReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNodeReference,
		&NewStructOps,
		"LayeredBoneBlendReference",
		sizeof(FLayeredBoneBlendReference),
		alignof(FLayeredBoneBlendReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLayeredBoneBlendReference()
	{
		if (!Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference.InnerSingleton, Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference.InnerSingleton;
	}
	DEFINE_FUNCTION(ULayeredBoneBlendLibrary::execSetBlendMask)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FLayeredBoneBlendReference,Z_Param_Out_LayeredBoneBlend);
		P_GET_PROPERTY(FIntProperty,Z_Param_PoseIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_BlendMaskName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLayeredBoneBlendReference*)Z_Param__Result=ULayeredBoneBlendLibrary::SetBlendMask(Z_Param_Out_UpdateContext,Z_Param_Out_LayeredBoneBlend,Z_Param_PoseIndex,Z_Param_BlendMaskName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayeredBoneBlendLibrary::execGetNumPoses)
	{
		P_GET_STRUCT_REF(FLayeredBoneBlendReference,Z_Param_Out_LayeredBoneBlend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULayeredBoneBlendLibrary::GetNumPoses(Z_Param_Out_LayeredBoneBlend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayeredBoneBlendLibrary::execConvertToLayeredBlendPerBonePure)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_STRUCT_REF(FLayeredBoneBlendReference,Z_Param_Out_LayeredBoneBlend);
		P_GET_UBOOL_REF(Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULayeredBoneBlendLibrary::ConvertToLayeredBlendPerBonePure(Z_Param_Out_Node,Z_Param_Out_LayeredBoneBlend,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayeredBoneBlendLibrary::execConvertToLayeredBoneBlend)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLayeredBoneBlendReference*)Z_Param__Result=ULayeredBoneBlendLibrary::ConvertToLayeredBoneBlend(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	void ULayeredBoneBlendLibrary::StaticRegisterNativesULayeredBoneBlendLibrary()
	{
		UClass* Class = ULayeredBoneBlendLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToLayeredBlendPerBonePure", &ULayeredBoneBlendLibrary::execConvertToLayeredBlendPerBonePure },
			{ "ConvertToLayeredBoneBlend", &ULayeredBoneBlendLibrary::execConvertToLayeredBoneBlend },
			{ "GetNumPoses", &ULayeredBoneBlendLibrary::execGetNumPoses },
			{ "SetBlendMask", &ULayeredBoneBlendLibrary::execSetBlendMask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics
	{
		struct LayeredBoneBlendLibrary_eventConvertToLayeredBlendPerBonePure_Parms
		{
			FAnimNodeReference Node;
			FLayeredBoneBlendReference LayeredBoneBlend;
			bool Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayeredBoneBlend;
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventConvertToLayeredBlendPerBonePure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_LayeredBoneBlend = { "LayeredBoneBlend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventConvertToLayeredBlendPerBonePure_Parms, LayeredBoneBlend), Z_Construct_UScriptStruct_FLayeredBoneBlendReference, METADATA_PARAMS(nullptr, 0) }; // 3216415843
	void Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((LayeredBoneBlendLibrary_eventConvertToLayeredBlendPerBonePure_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayeredBoneBlendLibrary_eventConvertToLayeredBlendPerBonePure_Parms), &Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_LayeredBoneBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Layered Bone Blend" },
		{ "Comment", "/** Get a layered bone blend context from an anim node context (pure). */" },
		{ "DisplayName", "Convert to Layered Bone Blend" },
		{ "ModuleRelativePath", "Public/LayeredBoneBlendLibrary.h" },
		{ "ToolTip", "Get a layered bone blend context from an anim node context (pure)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayeredBoneBlendLibrary, nullptr, "ConvertToLayeredBlendPerBonePure", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::LayeredBoneBlendLibrary_eventConvertToLayeredBlendPerBonePure_Parms), Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics
	{
		struct LayeredBoneBlendLibrary_eventConvertToLayeredBoneBlend_Parms
		{
			FAnimNodeReference Node;
			EAnimNodeReferenceConversionResult Result;
			FLayeredBoneBlendReference ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventConvertToLayeredBoneBlend_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventConvertToLayeredBoneBlend_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(nullptr, 0) }; // 2316672980
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventConvertToLayeredBoneBlend_Parms, ReturnValue), Z_Construct_UScriptStruct_FLayeredBoneBlendReference, METADATA_PARAMS(nullptr, 0) }; // 3216415843
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Layered Bone Blend" },
		{ "Comment", "/** Get a layered bone blend context from an anim node context. */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/LayeredBoneBlendLibrary.h" },
		{ "ToolTip", "Get a layered bone blend context from an anim node context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayeredBoneBlendLibrary, nullptr, "ConvertToLayeredBoneBlend", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::LayeredBoneBlendLibrary_eventConvertToLayeredBoneBlend_Parms), Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics
	{
		struct LayeredBoneBlendLibrary_eventGetNumPoses_Parms
		{
			FLayeredBoneBlendReference LayeredBoneBlend;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayeredBoneBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayeredBoneBlend;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::NewProp_LayeredBoneBlend_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::NewProp_LayeredBoneBlend = { "LayeredBoneBlend", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventGetNumPoses_Parms, LayeredBoneBlend), Z_Construct_UScriptStruct_FLayeredBoneBlendReference, METADATA_PARAMS(Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::NewProp_LayeredBoneBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::NewProp_LayeredBoneBlend_MetaData)) }; // 3216415843
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventGetNumPoses_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::NewProp_LayeredBoneBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Layered Bone Blend" },
		{ "Comment", "/** Get the number of poses that a layered bone blend node has (this does not include the base pose) */" },
		{ "ModuleRelativePath", "Public/LayeredBoneBlendLibrary.h" },
		{ "ToolTip", "Get the number of poses that a layered bone blend node has (this does not include the base pose)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayeredBoneBlendLibrary, nullptr, "GetNumPoses", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::LayeredBoneBlendLibrary_eventGetNumPoses_Parms), Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics
	{
		struct LayeredBoneBlendLibrary_eventSetBlendMask_Parms
		{
			FAnimUpdateContext UpdateContext;
			FLayeredBoneBlendReference LayeredBoneBlend;
			int32 PoseIndex;
			FName BlendMaskName;
			FLayeredBoneBlendReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayeredBoneBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayeredBoneBlend;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PoseIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BlendMaskName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventSetBlendMask_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_LayeredBoneBlend_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_LayeredBoneBlend = { "LayeredBoneBlend", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventSetBlendMask_Parms, LayeredBoneBlend), Z_Construct_UScriptStruct_FLayeredBoneBlendReference, METADATA_PARAMS(Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_LayeredBoneBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_LayeredBoneBlend_MetaData)) }; // 3216415843
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_PoseIndex = { "PoseIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventSetBlendMask_Parms, PoseIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_BlendMaskName = { "BlendMaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventSetBlendMask_Parms, BlendMaskName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayeredBoneBlendLibrary_eventSetBlendMask_Parms, ReturnValue), Z_Construct_UScriptStruct_FLayeredBoneBlendReference, METADATA_PARAMS(nullptr, 0) }; // 3216415843
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_LayeredBoneBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_PoseIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_BlendMaskName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Layered Bone Blend" },
		{ "Comment", "/**\n\x09 * Sets the currently-used blend mask for a blended input pose by name.\n\x09 * @param\x09UpdateContext\x09\x09The update context to use. This is used to extract the current skeleton to derive the blend mask from\n\x09 * @param\x09LayeredBoneBlend\x09""A reference to the node\n\x09 * @param\x09PoseIndex\x09\x09\x09The pose index to set the blend mask for\n\x09 * @param\x09""BlendMaskName\x09The name of the blend mask to use \n\x09 */" },
		{ "ModuleRelativePath", "Public/LayeredBoneBlendLibrary.h" },
		{ "ToolTip", "Sets the currently-used blend mask for a blended input pose by name.\n@param       UpdateContext           The update context to use. This is used to extract the current skeleton to derive the blend mask from\n@param       LayeredBoneBlend        A reference to the node\n@param       PoseIndex                       The pose index to set the blend mask for\n@param       BlendMaskName   The name of the blend mask to use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayeredBoneBlendLibrary, nullptr, "SetBlendMask", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::LayeredBoneBlendLibrary_eventSetBlendMask_Parms), Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULayeredBoneBlendLibrary);
	UClass* Z_Construct_UClass_ULayeredBoneBlendLibrary_NoRegister()
	{
		return ULayeredBoneBlendLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure, "ConvertToLayeredBlendPerBonePure" }, // 3584114852
		{ &Z_Construct_UFunction_ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend, "ConvertToLayeredBoneBlend" }, // 1737195253
		{ &Z_Construct_UFunction_ULayeredBoneBlendLibrary_GetNumPoses, "GetNumPoses" }, // 252859289
		{ &Z_Construct_UFunction_ULayeredBoneBlendLibrary_SetBlendMask, "SetBlendMask" }, // 2963959054
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes operations to be performed on a layered bone blend anim node.\n */" },
		{ "IncludePath", "LayeredBoneBlendLibrary.h" },
		{ "ModuleRelativePath", "Public/LayeredBoneBlendLibrary.h" },
		{ "ToolTip", "Exposes operations to be performed on a layered bone blend anim node." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayeredBoneBlendLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::ClassParams = {
		&ULayeredBoneBlendLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULayeredBoneBlendLibrary()
	{
		if (!Z_Registration_Info_UClass_ULayeredBoneBlendLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULayeredBoneBlendLibrary.OuterSingleton, Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULayeredBoneBlendLibrary.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<ULayeredBoneBlendLibrary>()
	{
		return ULayeredBoneBlendLibrary::StaticClass();
	}
	ULayeredBoneBlendLibrary::ULayeredBoneBlendLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULayeredBoneBlendLibrary);
	ULayeredBoneBlendLibrary::~ULayeredBoneBlendLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_Statics::ScriptStructInfo[] = {
		{ FLayeredBoneBlendReference::StaticStruct, Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics::NewStructOps, TEXT("LayeredBoneBlendReference"), &Z_Registration_Info_UScriptStruct_LayeredBoneBlendReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredBoneBlendReference), 3216415843U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULayeredBoneBlendLibrary, ULayeredBoneBlendLibrary::StaticClass, TEXT("ULayeredBoneBlendLibrary"), &Z_Registration_Info_UClass_ULayeredBoneBlendLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULayeredBoneBlendLibrary), 965826951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_1900120417(TEXT("/Script/AnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
