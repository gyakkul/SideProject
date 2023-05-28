// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixelStreamingInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelStreamingInputComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingInput();
	PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingInput_NoRegister();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PixelStreaming();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics
	{
		struct PixelStreamingInput_eventOnInput_Parms
		{
			FString Descriptor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Descriptor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::NewProp_Descriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingInput_eventOnInput_Parms, Descriptor), METADATA_PARAMS(Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::NewProp_Descriptor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::NewProp_Descriptor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// The delegate which will be notified about a UI interaction.\n" },
		{ "ModuleRelativePath", "Public/PixelStreamingInputComponent.h" },
		{ "ToolTip", "The delegate which will be notified about a UI interaction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingInput, nullptr, "OnInput__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::PixelStreamingInput_eventOnInput_Parms), Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPixelStreamingInput::FOnInput_DelegateWrapper(const FMulticastScriptDelegate& OnInput, const FString& Descriptor)
{
	struct PixelStreamingInput_eventOnInput_Parms
	{
		FString Descriptor;
	};
	PixelStreamingInput_eventOnInput_Parms Parms;
	Parms.Descriptor=Descriptor;
	OnInput.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPixelStreamingInput::execAddJsonStringValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Descriptor);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_NewDescriptor);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddJsonStringValue(Z_Param_Descriptor,Z_Param_FieldName,Z_Param_StringValue,Z_Param_Out_NewDescriptor,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingInput::execGetJsonStringValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Descriptor);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_StringValue);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetJsonStringValue(Z_Param_Descriptor,Z_Param_FieldName,Z_Param_Out_StringValue,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingInput::execSendPixelStreamingResponse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Descriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPixelStreamingResponse(Z_Param_Descriptor);
		P_NATIVE_END;
	}
	void UPixelStreamingInput::StaticRegisterNativesUPixelStreamingInput()
	{
		UClass* Class = UPixelStreamingInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddJsonStringValue", &UPixelStreamingInput::execAddJsonStringValue },
			{ "GetJsonStringValue", &UPixelStreamingInput::execGetJsonStringValue },
			{ "SendPixelStreamingResponse", &UPixelStreamingInput::execSendPixelStreamingResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics
	{
		struct PixelStreamingInput_eventAddJsonStringValue_Parms
		{
			FString Descriptor;
			FString FieldName;
			FString StringValue;
			FString NewDescriptor;
			bool Success;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Descriptor;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewDescriptor;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_Descriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingInput_eventAddJsonStringValue_Parms, Descriptor), METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_Descriptor_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingInput_eventAddJsonStringValue_Parms, FieldName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingInput_eventAddJsonStringValue_Parms, StringValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_NewDescriptor = { "NewDescriptor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingInput_eventAddJsonStringValue_Parms, NewDescriptor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((PixelStreamingInput_eventAddJsonStringValue_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PixelStreamingInput_eventAddJsonStringValue_Parms), &Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_Descriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_NewDescriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming Input" },
		{ "Comment", "/**\n\x09 * Helper function to add a string field to a JSON descriptor. This produces\n\x09 * a new descriptor which may then be chained to add further string fields.\n\x09 * @param Descriptor - The initial JSON descriptor which may be blank initially.\n\x09 * @param FieldName - The name of the field to add to the JSON.\n\x09 * @param StringValue - The string value associated with the field name.\n\x09 * @param NewDescriptor - The JSON descriptor with the string field added.\n\x09 * @param Success - True if the string field could be added successfully.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingInputComponent.h" },
		{ "ToolTip", "Helper function to add a string field to a JSON descriptor. This produces\na new descriptor which may then be chained to add further string fields.\n@param Descriptor - The initial JSON descriptor which may be blank initially.\n@param FieldName - The name of the field to add to the JSON.\n@param StringValue - The string value associated with the field name.\n@param NewDescriptor - The JSON descriptor with the string field added.\n@param Success - True if the string field could be added successfully." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingInput, nullptr, "AddJsonStringValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::PixelStreamingInput_eventAddJsonStringValue_Parms), Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics
	{
		struct PixelStreamingInput_eventGetJsonStringValue_Parms
		{
			FString Descriptor;
			FString FieldName;
			FString StringValue;
			bool Success;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Descriptor;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingInput_eventGetJsonStringValue_Parms, Descriptor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingInput_eventGetJsonStringValue_Parms, FieldName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingInput_eventGetJsonStringValue_Parms, StringValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((PixelStreamingInput_eventGetJsonStringValue_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PixelStreamingInput_eventGetJsonStringValue_Parms), &Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::NewProp_Descriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming Input" },
		{ "Comment", "/**\n\x09 * Helper function to extract a string field from a JSON descriptor of a\n\x09 * UI interaction given its field name.\n\x09 * The field name may be hierarchical, delimited by a period. For example,\n\x09 * to access the Width value of a Resolution command above you should use\n\x09 * \"Resolution.Width\" to get the width value.\n\x09 * @param Descriptor - The UI interaction JSON descriptor.\n\x09 * @param FieldName - The name of the field to look for in the JSON.\n\x09 * @param StringValue - The string value associated with the field name.\n\x09 * @param Success - True if the field exists in the JSON data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingInputComponent.h" },
		{ "ToolTip", "Helper function to extract a string field from a JSON descriptor of a\nUI interaction given its field name.\nThe field name may be hierarchical, delimited by a period. For example,\nto access the Width value of a Resolution command above you should use\n\"Resolution.Width\" to get the width value.\n@param Descriptor - The UI interaction JSON descriptor.\n@param FieldName - The name of the field to look for in the JSON.\n@param StringValue - The string value associated with the field name.\n@param Success - True if the field exists in the JSON data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingInput, nullptr, "GetJsonStringValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::PixelStreamingInput_eventGetJsonStringValue_Parms), Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics
	{
		struct PixelStreamingInput_eventSendPixelStreamingResponse_Parms
		{
			FString Descriptor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Descriptor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::NewProp_Descriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingInput_eventSendPixelStreamingResponse_Parms, Descriptor), METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::NewProp_Descriptor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::NewProp_Descriptor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming Input" },
		{ "Comment", "/**\n\x09 * Send a response back to the source of the UI interactions.\n\x09 * @param Descriptor - A generic descriptor string.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingInputComponent.h" },
		{ "ToolTip", "Send a response back to the source of the UI interactions.\n@param Descriptor - A generic descriptor string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingInput, nullptr, "SendPixelStreamingResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::PixelStreamingInput_eventSendPixelStreamingResponse_Parms), Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelStreamingInput);
	UClass* Z_Construct_UClass_UPixelStreamingInput_NoRegister()
	{
		return UPixelStreamingInput::StaticClass();
	}
	struct Z_Construct_UClass_UPixelStreamingInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInputEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelStreamingInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreaming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPixelStreamingInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPixelStreamingInput_AddJsonStringValue, "AddJsonStringValue" }, // 1302855465
		{ &Z_Construct_UFunction_UPixelStreamingInput_GetJsonStringValue, "GetJsonStringValue" }, // 1774129923
		{ &Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature, "OnInput__DelegateSignature" }, // 3491748133
		{ &Z_Construct_UFunction_UPixelStreamingInput_SendPixelStreamingResponse, "SendPixelStreamingResponse" }, // 3028654722
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "PixelStreaming" },
		{ "Comment", "/**\n * This component may be attached to an actor to allow UI interactions to be\n * handled as the delegate will be notified about the interaction and will be\n * supplied with a generic descriptor string containing, for example, JSON data.\n * Responses back to the source of the UI interactions may also be sent.\n */" },
		{ "IncludePath", "PixelStreamingInputComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PixelStreamingInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This component may be attached to an actor to allow UI interactions to be\nhandled as the delegate will be notified about the interaction and will be\nsupplied with a generic descriptor string containing, for example, JSON data.\nResponses back to the source of the UI interactions may also be sent." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingInput_Statics::NewProp_OnInputEvent_MetaData[] = {
		{ "Category", "PixelStreaming Input" },
		{ "ModuleRelativePath", "Public/PixelStreamingInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPixelStreamingInput_Statics::NewProp_OnInputEvent = { "OnInputEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingInput, OnInputEvent), Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingInput_Statics::NewProp_OnInputEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingInput_Statics::NewProp_OnInputEvent_MetaData)) }; // 3491748133
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPixelStreamingInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingInput_Statics::NewProp_OnInputEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelStreamingInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelStreamingInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelStreamingInput_Statics::ClassParams = {
		&UPixelStreamingInput::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPixelStreamingInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingInput_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelStreamingInput()
	{
		if (!Z_Registration_Info_UClass_UPixelStreamingInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelStreamingInput.OuterSingleton, Z_Construct_UClass_UPixelStreamingInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelStreamingInput.OuterSingleton;
	}
	template<> PIXELSTREAMING_API UClass* StaticClass<UPixelStreamingInput>()
	{
		return UPixelStreamingInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelStreamingInput);
	UPixelStreamingInput::~UPixelStreamingInput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelStreamingInput, UPixelStreamingInput::StaticClass, TEXT("UPixelStreamingInput"), &Z_Registration_Info_UClass_UPixelStreamingInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelStreamingInput), 203885378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_259381126(TEXT("/Script/PixelStreaming"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
