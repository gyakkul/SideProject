// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "../../Source/Runtime/Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialFunctionCall() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionOutput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionOutput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FunctionExpressionInput;
class UScriptStruct* FFunctionExpressionInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FunctionExpressionInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FunctionExpressionInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionExpressionInput, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FunctionExpressionInput"));
	}
	return Z_Registration_Info_UScriptStruct_FunctionExpressionInput.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFunctionExpressionInput>()
{
	return FFunctionExpressionInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExpressionInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionInputId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionInputId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that stores information about a function input which is needed to maintain connections and implement the function call. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Struct that stores information about a function input which is needed to maintain connections and implement the function call." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionExpressionInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInput_MetaData[] = {
		{ "Comment", "/** \n\x09 * Reference to the FunctionInput in the material function.  \n\x09 * This is a reference to a private object so it can't be saved, and must be generated by UpdateFromFunctionResource or SetMaterialFunction. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Reference to the FunctionInput in the material function.\nThis is a reference to a private object so it can't be saved, and must be generated by UpdateFromFunctionResource or SetMaterialFunction." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInput = { "ExpressionInput", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionExpressionInput, ExpressionInput), Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInputId_MetaData[] = {
		{ "Comment", "/** Id of the FunctionInput, used to link ExpressionInput. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Id of the FunctionInput, used to link ExpressionInput." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInputId = { "ExpressionInputId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionExpressionInput, ExpressionInputId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInputId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInputId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_Input_MetaData[] = {
		{ "Comment", "/** Actual input struct which stores information about how this input is connected in the material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Actual input struct which stores information about how this input is connected in the material." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionExpressionInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInputId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_Input,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FunctionExpressionInput",
		sizeof(FFunctionExpressionInput),
		alignof(FFunctionExpressionInput),
		Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionInput()
	{
		if (!Z_Registration_Info_UScriptStruct_FunctionExpressionInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FunctionExpressionInput.InnerSingleton, Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FunctionExpressionInput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FunctionExpressionOutput;
class UScriptStruct* FFunctionExpressionOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FunctionExpressionOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FunctionExpressionOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionExpressionOutput, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FunctionExpressionOutput"));
	}
	return Z_Registration_Info_UScriptStruct_FunctionExpressionOutput.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFunctionExpressionOutput>()
{
	return FFunctionExpressionOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionOutput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExpressionOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionOutputId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionOutputId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that stores information about a function output which is needed to maintain connections and implement the function call. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Struct that stores information about a function output which is needed to maintain connections and implement the function call." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionExpressionOutput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutput_MetaData[] = {
		{ "Comment", "/** \n\x09 * Reference to the FunctionOutput in the material function.  \n\x09 * This is a reference to a private object so it can't be saved, and must be generated by UpdateFromFunctionResource or SetMaterialFunction. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Reference to the FunctionOutput in the material function.\nThis is a reference to a private object so it can't be saved, and must be generated by UpdateFromFunctionResource or SetMaterialFunction." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutput = { "ExpressionOutput", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionExpressionOutput, ExpressionOutput), Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutputId_MetaData[] = {
		{ "Comment", "/** Id of the FunctionOutput, used to link ExpressionOutput. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Id of the FunctionOutput, used to link ExpressionOutput." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutputId = { "ExpressionOutputId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionExpressionOutput, ExpressionOutputId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutputId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutputId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_Output_MetaData[] = {
		{ "Comment", "/** Actual output struct which stores information about how this output is connected in the material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Actual output struct which stores information about how this output is connected in the material." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionExpressionOutput, Output), Z_Construct_UScriptStruct_FExpressionOutput, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutputId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FunctionExpressionOutput",
		sizeof(FFunctionExpressionOutput),
		alignof(FFunctionExpressionOutput),
		Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_FunctionExpressionOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FunctionExpressionOutput.InnerSingleton, Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FunctionExpressionOutput.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UMaterialExpressionMaterialFunctionCall::execSetMaterialFunction)
	{
		P_GET_OBJECT(UMaterialFunctionInterface,Z_Param_NewMaterialFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMaterialFunction(Z_Param_NewMaterialFunction);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UMaterialExpressionMaterialFunctionCall::StaticRegisterNativesUMaterialExpressionMaterialFunctionCall()
	{
#if WITH_EDITOR
		UClass* Class = UMaterialExpressionMaterialFunctionCall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMaterialFunction", &UMaterialExpressionMaterialFunctionCall::execSetMaterialFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics
	{
		struct MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms
		{
			UMaterialFunctionInterface* NewMaterialFunction;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterialFunction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::NewProp_NewMaterialFunction = { "NewMaterialFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms, NewMaterialFunction), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms), &Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::NewProp_NewMaterialFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall, nullptr, "SetMaterialFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms), Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMaterialFunctionCall);
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister()
	{
		return UMaterialExpressionMaterialFunctionCall::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFunction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialFunction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionInputs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionOutputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionOutputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionParameterInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction, "SetMaterialFunction" }, // 3419135522
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object Object" },
		{ "IncludePath", "Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_MaterialFunction_MetaData[] = {
		{ "Category", "MaterialExpressionMaterialFunctionCall" },
		{ "Comment", "/** The function to call. */" },
		{ "DisallowedClasses", "/Script/Engine.MaterialFunctionInstance" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "The function to call." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialFunctionCall, MaterialFunction), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_MaterialFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_MaterialFunction_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs_Inner = { "FunctionInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFunctionExpressionInput, METADATA_PARAMS(nullptr, 0) }; // 3485982200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs_MetaData[] = {
		{ "Comment", "/** Array of all the function inputs that this function exposes. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Array of all the function inputs that this function exposes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs = { "FunctionInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialFunctionCall, FunctionInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs_MetaData)) }; // 3485982200
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs_Inner = { "FunctionOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFunctionExpressionOutput, METADATA_PARAMS(nullptr, 0) }; // 2897640888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs_MetaData[] = {
		{ "Comment", "/** Array of all the function outputs that this function exposes. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Array of all the function outputs that this function exposes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs = { "FunctionOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialFunctionCall, FunctionOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs_MetaData)) }; // 2897640888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionParameterInfo_MetaData[] = {
		{ "Comment", "/** Used by material parameters to split references to separate instances. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Used by material parameters to split references to separate instances." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionParameterInfo = { "FunctionParameterInfo", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialFunctionCall, FunctionParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionParameterInfo_MetaData)) }; // 1695244105
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_MaterialFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionParameterInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialFunctionCall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::ClassParams = {
		&UMaterialExpressionMaterialFunctionCall::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionMaterialFunctionCall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMaterialFunctionCall.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionMaterialFunctionCall.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMaterialFunctionCall>()
	{
		return UMaterialExpressionMaterialFunctionCall::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialFunctionCall);
	UMaterialExpressionMaterialFunctionCall::~UMaterialExpressionMaterialFunctionCall() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_Statics::ScriptStructInfo[] = {
		{ FFunctionExpressionInput::StaticStruct, Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewStructOps, TEXT("FunctionExpressionInput"), &Z_Registration_Info_UScriptStruct_FunctionExpressionInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFunctionExpressionInput), 3485982200U) },
		{ FFunctionExpressionOutput::StaticStruct, Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewStructOps, TEXT("FunctionExpressionOutput"), &Z_Registration_Info_UScriptStruct_FunctionExpressionOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFunctionExpressionOutput), 2897640888U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall, UMaterialExpressionMaterialFunctionCall::StaticClass, TEXT("UMaterialExpressionMaterialFunctionCall"), &Z_Registration_Info_UClass_UMaterialExpressionMaterialFunctionCall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMaterialFunctionCall), 2859601071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_3331824508(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
