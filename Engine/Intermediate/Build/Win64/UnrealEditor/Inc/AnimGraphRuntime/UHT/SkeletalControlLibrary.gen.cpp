// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkeletalControlLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalControlLibrary() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USkeletalControlLibrary();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USkeletalControlLibrary_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalControlReference();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FSkeletalControlReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FSkeletalControlReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalControlReference;
class UScriptStruct* FSkeletalControlReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalControlReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalControlReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalControlReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("SkeletalControlReference"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalControlReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FSkeletalControlReference>()
{
	return FSkeletalControlReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalControlReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalControlReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkeletalControlLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalControlReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalControlReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalControlReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNodeReference,
		&NewStructOps,
		"SkeletalControlReference",
		sizeof(FSkeletalControlReference),
		alignof(FSkeletalControlReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalControlReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalControlReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalControlReference()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalControlReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalControlReference.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalControlReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalControlReference.InnerSingleton;
	}
	DEFINE_FUNCTION(USkeletalControlLibrary::execGetAlpha)
	{
		P_GET_STRUCT_REF(FSkeletalControlReference,Z_Param_Out_SkeletalControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USkeletalControlLibrary::GetAlpha(Z_Param_Out_SkeletalControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalControlLibrary::execSetAlpha)
	{
		P_GET_STRUCT_REF(FSkeletalControlReference,Z_Param_Out_SkeletalControl);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSkeletalControlReference*)Z_Param__Result=USkeletalControlLibrary::SetAlpha(Z_Param_Out_SkeletalControl,Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalControlLibrary::execConvertToSkeletalControlPure)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_STRUCT_REF(FSkeletalControlReference,Z_Param_Out_SkeletalControl);
		P_GET_UBOOL_REF(Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USkeletalControlLibrary::ConvertToSkeletalControlPure(Z_Param_Out_Node,Z_Param_Out_SkeletalControl,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalControlLibrary::execConvertToSkeletalControl)
	{
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSkeletalControlReference*)Z_Param__Result=USkeletalControlLibrary::ConvertToSkeletalControl(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	void USkeletalControlLibrary::StaticRegisterNativesUSkeletalControlLibrary()
	{
		UClass* Class = USkeletalControlLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToSkeletalControl", &USkeletalControlLibrary::execConvertToSkeletalControl },
			{ "ConvertToSkeletalControlPure", &USkeletalControlLibrary::execConvertToSkeletalControlPure },
			{ "GetAlpha", &USkeletalControlLibrary::execGetAlpha },
			{ "SetAlpha", &USkeletalControlLibrary::execSetAlpha },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics
	{
		struct SkeletalControlLibrary_eventConvertToSkeletalControl_Parms
		{
			FAnimNodeReference Node;
			EAnimNodeReferenceConversionResult Result;
			FSkeletalControlReference ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalControlLibrary_eventConvertToSkeletalControl_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalControlLibrary_eventConvertToSkeletalControl_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(nullptr, 0) }; // 2316672980
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalControlLibrary_eventConvertToSkeletalControl_Parms, ReturnValue), Z_Construct_UScriptStruct_FSkeletalControlReference, METADATA_PARAMS(nullptr, 0) }; // 2392314973
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Skeletal Controls" },
		{ "Comment", "/** Get a skeletal control from an anim node */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SkeletalControlLibrary.h" },
		{ "ToolTip", "Get a skeletal control from an anim node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalControlLibrary, nullptr, "ConvertToSkeletalControl", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::SkeletalControlLibrary_eventConvertToSkeletalControl_Parms), Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics
	{
		struct SkeletalControlLibrary_eventConvertToSkeletalControlPure_Parms
		{
			FAnimNodeReference Node;
			FSkeletalControlReference SkeletalControl;
			bool Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalControl;
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalControlLibrary_eventConvertToSkeletalControlPure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::NewProp_SkeletalControl = { "SkeletalControl", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalControlLibrary_eventConvertToSkeletalControlPure_Parms, SkeletalControl), Z_Construct_UScriptStruct_FSkeletalControlReference, METADATA_PARAMS(nullptr, 0) }; // 2392314973
	void Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((SkeletalControlLibrary_eventConvertToSkeletalControlPure_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalControlLibrary_eventConvertToSkeletalControlPure_Parms), &Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::NewProp_SkeletalControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Skeletal Controls" },
		{ "Comment", "/** Get a skeletal control from an anim node (pure) */" },
		{ "DisplayName", "Convert to Skeletal Control" },
		{ "ModuleRelativePath", "Public/SkeletalControlLibrary.h" },
		{ "ToolTip", "Get a skeletal control from an anim node (pure)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalControlLibrary, nullptr, "ConvertToSkeletalControlPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::SkeletalControlLibrary_eventConvertToSkeletalControlPure_Parms), Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics
	{
		struct SkeletalControlLibrary_eventGetAlpha_Parms
		{
			FSkeletalControlReference SkeletalControl;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalControl;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::NewProp_SkeletalControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::NewProp_SkeletalControl = { "SkeletalControl", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalControlLibrary_eventGetAlpha_Parms, SkeletalControl), Z_Construct_UScriptStruct_FSkeletalControlReference, METADATA_PARAMS(Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::NewProp_SkeletalControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::NewProp_SkeletalControl_MetaData)) }; // 2392314973
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalControlLibrary_eventGetAlpha_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::NewProp_SkeletalControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Skeletal Controls" },
		{ "Comment", "/** Get the alpha value of this skeletal control */" },
		{ "ModuleRelativePath", "Public/SkeletalControlLibrary.h" },
		{ "ToolTip", "Get the alpha value of this skeletal control" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalControlLibrary, nullptr, "GetAlpha", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::SkeletalControlLibrary_eventGetAlpha_Parms), Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics
	{
		struct SkeletalControlLibrary_eventSetAlpha_Parms
		{
			FSkeletalControlReference SkeletalControl;
			float Alpha;
			FSkeletalControlReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalControl;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::NewProp_SkeletalControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::NewProp_SkeletalControl = { "SkeletalControl", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalControlLibrary_eventSetAlpha_Parms, SkeletalControl), Z_Construct_UScriptStruct_FSkeletalControlReference, METADATA_PARAMS(Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::NewProp_SkeletalControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::NewProp_SkeletalControl_MetaData)) }; // 2392314973
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalControlLibrary_eventSetAlpha_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalControlLibrary_eventSetAlpha_Parms, ReturnValue), Z_Construct_UScriptStruct_FSkeletalControlReference, METADATA_PARAMS(nullptr, 0) }; // 2392314973
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::NewProp_SkeletalControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Skeletal Controls" },
		{ "Comment", "/** Set the alpha value of this skeletal control */" },
		{ "ModuleRelativePath", "Public/SkeletalControlLibrary.h" },
		{ "ToolTip", "Set the alpha value of this skeletal control" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalControlLibrary, nullptr, "SetAlpha", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::SkeletalControlLibrary_eventSetAlpha_Parms), Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalControlLibrary);
	UClass* Z_Construct_UClass_USkeletalControlLibrary_NoRegister()
	{
		return USkeletalControlLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalControlLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalControlLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkeletalControlLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControl, "ConvertToSkeletalControl" }, // 4242293198
		{ &Z_Construct_UFunction_USkeletalControlLibrary_ConvertToSkeletalControlPure, "ConvertToSkeletalControlPure" }, // 913367967
		{ &Z_Construct_UFunction_USkeletalControlLibrary_GetAlpha, "GetAlpha" }, // 3453236071
		{ &Z_Construct_UFunction_USkeletalControlLibrary_SetAlpha, "SetAlpha" }, // 3974022211
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalControlLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Exposes operations to be performed on a skeletal control anim node\n// Note: Experimental and subject to change!\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "SkeletalControlLibrary.h" },
		{ "ModuleRelativePath", "Public/SkeletalControlLibrary.h" },
		{ "ToolTip", "Exposes operations to be performed on a skeletal control anim node\nNote: Experimental and subject to change!" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalControlLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalControlLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalControlLibrary_Statics::ClassParams = {
		&USkeletalControlLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletalControlLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalControlLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalControlLibrary()
	{
		if (!Z_Registration_Info_UClass_USkeletalControlLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalControlLibrary.OuterSingleton, Z_Construct_UClass_USkeletalControlLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalControlLibrary.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<USkeletalControlLibrary>()
	{
		return USkeletalControlLibrary::StaticClass();
	}
	USkeletalControlLibrary::USkeletalControlLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalControlLibrary);
	USkeletalControlLibrary::~USkeletalControlLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_Statics::ScriptStructInfo[] = {
		{ FSkeletalControlReference::StaticStruct, Z_Construct_UScriptStruct_FSkeletalControlReference_Statics::NewStructOps, TEXT("SkeletalControlReference"), &Z_Registration_Info_UScriptStruct_SkeletalControlReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalControlReference), 2392314973U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalControlLibrary, USkeletalControlLibrary::StaticClass, TEXT("USkeletalControlLibrary"), &Z_Registration_Info_UClass_USkeletalControlLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalControlLibrary), 2175369685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_1345527080(TEXT("/Script/AnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
