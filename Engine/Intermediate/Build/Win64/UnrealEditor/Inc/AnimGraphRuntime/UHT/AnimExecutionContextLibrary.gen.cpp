// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimExecutionContextLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimExecutionContext.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimExecutionContextLibrary() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimExecutionContextLibrary();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimExecutionContextLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimExecutionContext();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInitializationContext();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPoseContext();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UAnimExecutionContextLibrary::execConvertToComponentSpacePoseContext)
	{
		P_GET_STRUCT_REF(FAnimExecutionContext,Z_Param_Out_Context);
		P_GET_ENUM_REF(EAnimExecutionContextConversionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnimComponentSpacePoseContext*)Z_Param__Result=UAnimExecutionContextLibrary::ConvertToComponentSpacePoseContext(Z_Param_Out_Context,(EAnimExecutionContextConversionResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimExecutionContextLibrary::execConvertToPoseContext)
	{
		P_GET_STRUCT_REF(FAnimExecutionContext,Z_Param_Out_Context);
		P_GET_ENUM_REF(EAnimExecutionContextConversionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnimPoseContext*)Z_Param__Result=UAnimExecutionContextLibrary::ConvertToPoseContext(Z_Param_Out_Context,(EAnimExecutionContextConversionResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimExecutionContextLibrary::execGetCurrentWeight)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAnimExecutionContextLibrary::GetCurrentWeight(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimExecutionContextLibrary::execGetDeltaTime)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAnimExecutionContextLibrary::GetDeltaTime(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimExecutionContextLibrary::execConvertToUpdateContext)
	{
		P_GET_STRUCT_REF(FAnimExecutionContext,Z_Param_Out_Context);
		P_GET_ENUM_REF(EAnimExecutionContextConversionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnimUpdateContext*)Z_Param__Result=UAnimExecutionContextLibrary::ConvertToUpdateContext(Z_Param_Out_Context,(EAnimExecutionContextConversionResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimExecutionContextLibrary::execConvertToInitializationContext)
	{
		P_GET_STRUCT_REF(FAnimExecutionContext,Z_Param_Out_Context);
		P_GET_ENUM_REF(EAnimExecutionContextConversionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnimInitializationContext*)Z_Param__Result=UAnimExecutionContextLibrary::ConvertToInitializationContext(Z_Param_Out_Context,(EAnimExecutionContextConversionResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimExecutionContextLibrary::execGetAnimNodeReference)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_Instance);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnimNodeReference*)Z_Param__Result=UAnimExecutionContextLibrary::GetAnimNodeReference(Z_Param_Instance,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimExecutionContextLibrary::execGetAnimInstance)
	{
		P_GET_STRUCT_REF(FAnimExecutionContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=UAnimExecutionContextLibrary::GetAnimInstance(Z_Param_Out_Context);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UAnimExecutionContextLibrary::execPrototype_ThreadSafeAnimUpdateCall)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_Context);
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Prototype_ThreadSafeAnimUpdateCall(Z_Param_Out_Context,Z_Param_Out_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimExecutionContextLibrary::execPrototype_ThreadSafeAnimNodeCall)
	{
		P_GET_STRUCT_REF(FAnimExecutionContext,Z_Param_Out_Context);
		P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Prototype_ThreadSafeAnimNodeCall(Z_Param_Out_Context,Z_Param_Out_Node);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAnimExecutionContextLibrary::StaticRegisterNativesUAnimExecutionContextLibrary()
	{
		UClass* Class = UAnimExecutionContextLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToComponentSpacePoseContext", &UAnimExecutionContextLibrary::execConvertToComponentSpacePoseContext },
			{ "ConvertToInitializationContext", &UAnimExecutionContextLibrary::execConvertToInitializationContext },
			{ "ConvertToPoseContext", &UAnimExecutionContextLibrary::execConvertToPoseContext },
			{ "ConvertToUpdateContext", &UAnimExecutionContextLibrary::execConvertToUpdateContext },
			{ "GetAnimInstance", &UAnimExecutionContextLibrary::execGetAnimInstance },
			{ "GetAnimNodeReference", &UAnimExecutionContextLibrary::execGetAnimNodeReference },
			{ "GetCurrentWeight", &UAnimExecutionContextLibrary::execGetCurrentWeight },
			{ "GetDeltaTime", &UAnimExecutionContextLibrary::execGetDeltaTime },
#if WITH_EDITOR
			{ "Prototype_ThreadSafeAnimNodeCall", &UAnimExecutionContextLibrary::execPrototype_ThreadSafeAnimNodeCall },
			{ "Prototype_ThreadSafeAnimUpdateCall", &UAnimExecutionContextLibrary::execPrototype_ThreadSafeAnimUpdateCall },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics
	{
		struct AnimExecutionContextLibrary_eventConvertToComponentSpacePoseContext_Parms
		{
			FAnimExecutionContext Context;
			EAnimExecutionContextConversionResult Result;
			FAnimComponentSpacePoseContext ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventConvertToComponentSpacePoseContext_Parms, Context), Z_Construct_UScriptStruct_FAnimExecutionContext, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::NewProp_Context_MetaData)) }; // 229911943
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventConvertToComponentSpacePoseContext_Parms, Result), Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult, METADATA_PARAMS(nullptr, 0) }; // 1901325481
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventConvertToComponentSpacePoseContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext, METADATA_PARAMS(nullptr, 0) }; // 440738649
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/** Convert to a component space pose context */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/AnimExecutionContextLibrary.h" },
		{ "ToolTip", "Convert to a component space pose context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimExecutionContextLibrary, nullptr, "ConvertToComponentSpacePoseContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::AnimExecutionContextLibrary_eventConvertToComponentSpacePoseContext_Parms), Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics
	{
		struct AnimExecutionContextLibrary_eventConvertToInitializationContext_Parms
		{
			FAnimExecutionContext Context;
			EAnimExecutionContextConversionResult Result;
			FAnimInitializationContext ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventConvertToInitializationContext_Parms, Context), Z_Construct_UScriptStruct_FAnimExecutionContext, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::NewProp_Context_MetaData)) }; // 229911943
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventConvertToInitializationContext_Parms, Result), Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult, METADATA_PARAMS(nullptr, 0) }; // 1901325481
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventConvertToInitializationContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnimInitializationContext, METADATA_PARAMS(nullptr, 0) }; // 2738482989
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/** Convert to an initialization context */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/AnimExecutionContextLibrary.h" },
		{ "ToolTip", "Convert to an initialization context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimExecutionContextLibrary, nullptr, "ConvertToInitializationContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::AnimExecutionContextLibrary_eventConvertToInitializationContext_Parms), Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics
	{
		struct AnimExecutionContextLibrary_eventConvertToPoseContext_Parms
		{
			FAnimExecutionContext Context;
			EAnimExecutionContextConversionResult Result;
			FAnimPoseContext ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventConvertToPoseContext_Parms, Context), Z_Construct_UScriptStruct_FAnimExecutionContext, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::NewProp_Context_MetaData)) }; // 229911943
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventConvertToPoseContext_Parms, Result), Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult, METADATA_PARAMS(nullptr, 0) }; // 1901325481
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventConvertToPoseContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnimPoseContext, METADATA_PARAMS(nullptr, 0) }; // 2229055392
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/** Convert to a pose context */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/AnimExecutionContextLibrary.h" },
		{ "ToolTip", "Convert to a pose context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimExecutionContextLibrary, nullptr, "ConvertToPoseContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::AnimExecutionContextLibrary_eventConvertToPoseContext_Parms), Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics
	{
		struct AnimExecutionContextLibrary_eventConvertToUpdateContext_Parms
		{
			FAnimExecutionContext Context;
			EAnimExecutionContextConversionResult Result;
			FAnimUpdateContext ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventConvertToUpdateContext_Parms, Context), Z_Construct_UScriptStruct_FAnimExecutionContext, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::NewProp_Context_MetaData)) }; // 229911943
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventConvertToUpdateContext_Parms, Result), Z_Construct_UEnum_Engine_EAnimExecutionContextConversionResult, METADATA_PARAMS(nullptr, 0) }; // 1901325481
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventConvertToUpdateContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(nullptr, 0) }; // 2136872881
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/** Convert to an update context */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/AnimExecutionContextLibrary.h" },
		{ "ToolTip", "Convert to an update context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimExecutionContextLibrary, nullptr, "ConvertToUpdateContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::AnimExecutionContextLibrary_eventConvertToUpdateContext_Parms), Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics
	{
		struct AnimExecutionContextLibrary_eventGetAnimInstance_Parms
		{
			FAnimExecutionContext Context;
			UAnimInstance* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventGetAnimInstance_Parms, Context), Z_Construct_UScriptStruct_FAnimExecutionContext, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::NewProp_Context_MetaData)) }; // 229911943
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventGetAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/** Get the anim instance that hosts this context */" },
		{ "ModuleRelativePath", "Public/AnimExecutionContextLibrary.h" },
		{ "ToolTip", "Get the anim instance that hosts this context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimExecutionContextLibrary, nullptr, "GetAnimInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::AnimExecutionContextLibrary_eventGetAnimInstance_Parms), Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics
	{
		struct AnimExecutionContextLibrary_eventGetAnimNodeReference_Parms
		{
			UAnimInstance* Instance;
			int32 Index;
			FAnimNodeReference ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventGetAnimNodeReference_Parms, Instance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventGetAnimNodeReference_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventGetAnimNodeReference_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(nullptr, 0) }; // 489647993
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Internal compiler use only - Get a reference to an anim node by index */" },
		{ "DefaultToSelf", "Instance" },
		{ "ModuleRelativePath", "Public/AnimExecutionContextLibrary.h" },
		{ "ToolTip", "Internal compiler use only - Get a reference to an anim node by index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimExecutionContextLibrary, nullptr, "GetAnimNodeReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::AnimExecutionContextLibrary_eventGetAnimNodeReference_Parms), Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics
	{
		struct AnimExecutionContextLibrary_eventGetCurrentWeight_Parms
		{
			FAnimUpdateContext Context;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventGetCurrentWeight_Parms, Context), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::NewProp_Context_MetaData)) }; // 2136872881
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventGetCurrentWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/** Get the current weight of this branch of the graph */" },
		{ "ModuleRelativePath", "Public/AnimExecutionContextLibrary.h" },
		{ "ToolTip", "Get the current weight of this branch of the graph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimExecutionContextLibrary, nullptr, "GetCurrentWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::AnimExecutionContextLibrary_eventGetCurrentWeight_Parms), Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics
	{
		struct AnimExecutionContextLibrary_eventGetDeltaTime_Parms
		{
			FAnimUpdateContext Context;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventGetDeltaTime_Parms, Context), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::NewProp_Context_MetaData)) }; // 2136872881
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventGetDeltaTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/** Get the current delta time in seconds */" },
		{ "ModuleRelativePath", "Public/AnimExecutionContextLibrary.h" },
		{ "ToolTip", "Get the current delta time in seconds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimExecutionContextLibrary, nullptr, "GetDeltaTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::AnimExecutionContextLibrary_eventGetDeltaTime_Parms), Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics
	{
		struct AnimExecutionContextLibrary_eventPrototype_ThreadSafeAnimNodeCall_Parms
		{
			FAnimExecutionContext Context;
			FAnimNodeReference Node;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventPrototype_ThreadSafeAnimNodeCall_Parms, Context), Z_Construct_UScriptStruct_FAnimExecutionContext, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::NewProp_Context_MetaData)) }; // 229911943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventPrototype_ThreadSafeAnimNodeCall_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::NewProp_Node,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Prototype function for thread-safe anim node calls */" },
		{ "ModuleRelativePath", "Public/AnimExecutionContextLibrary.h" },
		{ "ToolTip", "Prototype function for thread-safe anim node calls" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimExecutionContextLibrary, nullptr, "Prototype_ThreadSafeAnimNodeCall", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::AnimExecutionContextLibrary_eventPrototype_ThreadSafeAnimNodeCall_Parms), Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics
	{
		struct AnimExecutionContextLibrary_eventPrototype_ThreadSafeAnimUpdateCall_Parms
		{
			FAnimUpdateContext Context;
			FAnimNodeReference Node;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventPrototype_ThreadSafeAnimUpdateCall_Parms, Context), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::NewProp_Context_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimExecutionContextLibrary_eventPrototype_ThreadSafeAnimUpdateCall_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::NewProp_Node_MetaData)) }; // 489647993
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::NewProp_Node,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Prototype function for thread-safe anim update calls */" },
		{ "ModuleRelativePath", "Public/AnimExecutionContextLibrary.h" },
		{ "ToolTip", "Prototype function for thread-safe anim update calls" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimExecutionContextLibrary, nullptr, "Prototype_ThreadSafeAnimUpdateCall", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::AnimExecutionContextLibrary_eventPrototype_ThreadSafeAnimUpdateCall_Parms), Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimExecutionContextLibrary);
	UClass* Z_Construct_UClass_UAnimExecutionContextLibrary_NoRegister()
	{
		return UAnimExecutionContextLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimExecutionContextLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimExecutionContextLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimExecutionContextLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext, "ConvertToComponentSpacePoseContext" }, // 2394668485
		{ &Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToInitializationContext, "ConvertToInitializationContext" }, // 5853349
		{ &Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToPoseContext, "ConvertToPoseContext" }, // 1672299201
		{ &Z_Construct_UFunction_UAnimExecutionContextLibrary_ConvertToUpdateContext, "ConvertToUpdateContext" }, // 146832260
		{ &Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimInstance, "GetAnimInstance" }, // 2871359193
		{ &Z_Construct_UFunction_UAnimExecutionContextLibrary_GetAnimNodeReference, "GetAnimNodeReference" }, // 744323250
		{ &Z_Construct_UFunction_UAnimExecutionContextLibrary_GetCurrentWeight, "GetCurrentWeight" }, // 474493830
		{ &Z_Construct_UFunction_UAnimExecutionContextLibrary_GetDeltaTime, "GetDeltaTime" }, // 2380599910
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimNodeCall, "Prototype_ThreadSafeAnimNodeCall" }, // 1536228410
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimExecutionContextLibrary_Prototype_ThreadSafeAnimUpdateCall, "Prototype_ThreadSafeAnimUpdateCall" }, // 1561752572
#endif //WITH_EDITOR
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimExecutionContextLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Exposes operations to be performed on anim node contexts\n" },
		{ "IncludePath", "AnimExecutionContextLibrary.h" },
		{ "ModuleRelativePath", "Public/AnimExecutionContextLibrary.h" },
		{ "ToolTip", "Exposes operations to be performed on anim node contexts" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimExecutionContextLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimExecutionContextLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimExecutionContextLibrary_Statics::ClassParams = {
		&UAnimExecutionContextLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimExecutionContextLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimExecutionContextLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimExecutionContextLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimExecutionContextLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimExecutionContextLibrary.OuterSingleton, Z_Construct_UClass_UAnimExecutionContextLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimExecutionContextLibrary.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UAnimExecutionContextLibrary>()
	{
		return UAnimExecutionContextLibrary::StaticClass();
	}
	UAnimExecutionContextLibrary::UAnimExecutionContextLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimExecutionContextLibrary);
	UAnimExecutionContextLibrary::~UAnimExecutionContextLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimExecutionContextLibrary, UAnimExecutionContextLibrary::StaticClass, TEXT("UAnimExecutionContextLibrary"), &Z_Registration_Info_UClass_UAnimExecutionContextLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimExecutionContextLibrary), 375116698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_436191672(TEXT("/Script/AnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
