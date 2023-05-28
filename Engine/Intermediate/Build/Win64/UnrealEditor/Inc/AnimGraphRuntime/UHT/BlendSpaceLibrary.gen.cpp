// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlendSpaceLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpaceLibrary() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UBlendSpaceLibrary();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UBlendSpaceLibrary_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSpaceReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FBlendSpaceReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FBlendSpaceReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendSpaceReference;
class UScriptStruct* FBlendSpaceReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendSpaceReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendSpaceReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSpaceReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("BlendSpaceReference"));
	}
	return Z_Registration_Info_UScriptStruct_BlendSpaceReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FBlendSpaceReference>()
{
	return FBlendSpaceReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlendSpaceReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BlendSpaceLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendSpaceReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSpaceReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSpaceReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNodeReference,
		&NewStructOps,
		"BlendSpaceReference",
		sizeof(FBlendSpaceReference),
		alignof(FBlendSpaceReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendSpaceReference()
	{
		if (!Z_Registration_Info_UScriptStruct_BlendSpaceReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendSpaceReference.InnerSingleton, Z_Construct_UScriptStruct_FBlendSpaceReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlendSpaceReference.InnerSingleton;
	}
	DEFINE_FUNCTION(UBlendSpaceLibrary::execSnapToPosition)
	{
		P_GET_STRUCT_REF(FBlendSpaceReference,Z_Param_Out_BlendSpace);
		P_GET_STRUCT(FVector,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlendSpaceLibrary::SnapToPosition(Z_Param_Out_BlendSpace,Z_Param_NewPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlendSpaceLibrary::execGetFilteredPosition)
	{
		P_GET_STRUCT_REF(FBlendSpaceReference,Z_Param_Out_BlendSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UBlendSpaceLibrary::GetFilteredPosition(Z_Param_Out_BlendSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlendSpaceLibrary::execGetPosition)
	{
		P_GET_STRUCT_REF(FBlendSpaceReference,Z_Param_Out_BlendSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UBlendSpaceLibrary::GetPosition(Z_Param_Out_BlendSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlendSpaceLibrary::execConvertToBlendSpacePure)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_STRUCT_REF(FBlendSpaceReference,Z_Param_Out_BlendSpace);
		P_GET_UBOOL_REF(Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlendSpaceLibrary::ConvertToBlendSpacePure(Z_Param_Out_Node,Z_Param_Out_BlendSpace,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlendSpaceLibrary::execConvertToBlendSpace)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlendSpaceReference*)Z_Param__Result=UBlendSpaceLibrary::ConvertToBlendSpace(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	void UBlendSpaceLibrary::StaticRegisterNativesUBlendSpaceLibrary()
	{
		UClass* Class = UBlendSpaceLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToBlendSpace", &UBlendSpaceLibrary::execConvertToBlendSpace },
			{ "ConvertToBlendSpacePure", &UBlendSpaceLibrary::execConvertToBlendSpacePure },
			{ "GetFilteredPosition", &UBlendSpaceLibrary::execGetFilteredPosition },
			{ "GetPosition", &UBlendSpaceLibrary::execGetPosition },
			{ "SnapToPosition", &UBlendSpaceLibrary::execSnapToPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics
	{
		struct BlendSpaceLibrary_eventConvertToBlendSpace_Parms
		{
			FAnimNodeReference Node;
			EAnimNodeReferenceConversionResult Result;
			FBlendSpaceReference ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlendSpaceLibrary_eventConvertToBlendSpace_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlendSpaceLibrary_eventConvertToBlendSpace_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(nullptr, 0) }; // 2316672980
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlendSpaceLibrary_eventConvertToBlendSpace_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlendSpaceReference, METADATA_PARAMS(nullptr, 0) }; // 4122071377
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space" },
		{ "Comment", "/** Get a blend space context from an anim node context. */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/BlendSpaceLibrary.h" },
		{ "ToolTip", "Get a blend space context from an anim node context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpaceLibrary, nullptr, "ConvertToBlendSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::BlendSpaceLibrary_eventConvertToBlendSpace_Parms), Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics
	{
		struct BlendSpaceLibrary_eventConvertToBlendSpacePure_Parms
		{
			FAnimNodeReference Node;
			FBlendSpaceReference BlendSpace;
			bool Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpace;
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlendSpaceLibrary_eventConvertToBlendSpacePure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlendSpaceLibrary_eventConvertToBlendSpacePure_Parms, BlendSpace), Z_Construct_UScriptStruct_FBlendSpaceReference, METADATA_PARAMS(nullptr, 0) }; // 4122071377
	void Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((BlendSpaceLibrary_eventConvertToBlendSpacePure_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlendSpaceLibrary_eventConvertToBlendSpacePure_Parms), &Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::NewProp_BlendSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space" },
		{ "Comment", "/** Get a blend space context from an anim node context (pure). */" },
		{ "DisplayName", "Convert to Blend Space (Pure)" },
		{ "ModuleRelativePath", "Public/BlendSpaceLibrary.h" },
		{ "ToolTip", "Get a blend space context from an anim node context (pure)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpaceLibrary, nullptr, "ConvertToBlendSpacePure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::BlendSpaceLibrary_eventConvertToBlendSpacePure_Parms), Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics
	{
		struct BlendSpaceLibrary_eventGetFilteredPosition_Parms
		{
			FBlendSpaceReference BlendSpace;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlendSpaceLibrary_eventGetFilteredPosition_Parms, BlendSpace), Z_Construct_UScriptStruct_FBlendSpaceReference, METADATA_PARAMS(Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::NewProp_BlendSpace_MetaData)) }; // 4122071377
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlendSpaceLibrary_eventGetFilteredPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::NewProp_BlendSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space" },
		{ "Comment", "/** Get the current sample coordinates after going through the filtering. */" },
		{ "ModuleRelativePath", "Public/BlendSpaceLibrary.h" },
		{ "ToolTip", "Get the current sample coordinates after going through the filtering." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpaceLibrary, nullptr, "GetFilteredPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::BlendSpaceLibrary_eventGetFilteredPosition_Parms), Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics
	{
		struct BlendSpaceLibrary_eventGetPosition_Parms
		{
			FBlendSpaceReference BlendSpace;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlendSpaceLibrary_eventGetPosition_Parms, BlendSpace), Z_Construct_UScriptStruct_FBlendSpaceReference, METADATA_PARAMS(Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::NewProp_BlendSpace_MetaData)) }; // 4122071377
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlendSpaceLibrary_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::NewProp_BlendSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space" },
		{ "Comment", "/** Get the current position of the blend space. */" },
		{ "ModuleRelativePath", "Public/BlendSpaceLibrary.h" },
		{ "ToolTip", "Get the current position of the blend space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpaceLibrary, nullptr, "GetPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::BlendSpaceLibrary_eventGetPosition_Parms), Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics
	{
		struct BlendSpaceLibrary_eventSnapToPosition_Parms
		{
			FBlendSpaceReference BlendSpace;
			FVector NewPosition;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlendSpaceLibrary_eventSnapToPosition_Parms, BlendSpace), Z_Construct_UScriptStruct_FBlendSpaceReference, METADATA_PARAMS(Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::NewProp_BlendSpace_MetaData)) }; // 4122071377
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlendSpaceLibrary_eventSnapToPosition_Parms, NewPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::NewProp_BlendSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Blend Space" },
		{ "Comment", "/** Forces the Position to the specified value */" },
		{ "ModuleRelativePath", "Public/BlendSpaceLibrary.h" },
		{ "ToolTip", "Forces the Position to the specified value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlendSpaceLibrary, nullptr, "SnapToPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::BlendSpaceLibrary_eventSnapToPosition_Parms), Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendSpaceLibrary);
	UClass* Z_Construct_UClass_UBlendSpaceLibrary_NoRegister()
	{
		return UBlendSpaceLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlendSpaceLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendSpaceLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlendSpaceLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpace, "ConvertToBlendSpace" }, // 1088801901
		{ &Z_Construct_UFunction_UBlendSpaceLibrary_ConvertToBlendSpacePure, "ConvertToBlendSpacePure" }, // 3606825622
		{ &Z_Construct_UFunction_UBlendSpaceLibrary_GetFilteredPosition, "GetFilteredPosition" }, // 3166612799
		{ &Z_Construct_UFunction_UBlendSpaceLibrary_GetPosition, "GetPosition" }, // 329922373
		{ &Z_Construct_UFunction_UBlendSpaceLibrary_SnapToPosition, "SnapToPosition" }, // 3784241043
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes operations to be performed on a blend space anim node.\n */" },
		{ "IncludePath", "BlendSpaceLibrary.h" },
		{ "ModuleRelativePath", "Public/BlendSpaceLibrary.h" },
		{ "ToolTip", "Exposes operations to be performed on a blend space anim node." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendSpaceLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendSpaceLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendSpaceLibrary_Statics::ClassParams = {
		&UBlendSpaceLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendSpaceLibrary()
	{
		if (!Z_Registration_Info_UClass_UBlendSpaceLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendSpaceLibrary.OuterSingleton, Z_Construct_UClass_UBlendSpaceLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlendSpaceLibrary.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UBlendSpaceLibrary>()
	{
		return UBlendSpaceLibrary::StaticClass();
	}
	UBlendSpaceLibrary::UBlendSpaceLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpaceLibrary);
	UBlendSpaceLibrary::~UBlendSpaceLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_Statics::ScriptStructInfo[] = {
		{ FBlendSpaceReference::StaticStruct, Z_Construct_UScriptStruct_FBlendSpaceReference_Statics::NewStructOps, TEXT("BlendSpaceReference"), &Z_Registration_Info_UScriptStruct_BlendSpaceReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendSpaceReference), 4122071377U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlendSpaceLibrary, UBlendSpaceLibrary::StaticClass, TEXT("UBlendSpaceLibrary"), &Z_Registration_Info_UClass_UBlendSpaceLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendSpaceLibrary), 4239639724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_3564292112(TEXT("/Script/AnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
