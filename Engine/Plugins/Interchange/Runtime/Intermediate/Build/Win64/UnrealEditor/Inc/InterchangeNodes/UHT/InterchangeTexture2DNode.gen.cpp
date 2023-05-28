// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeTexture2DNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTexture2DNode() {}
// Cross Module References
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode();
	INTERCHANGENODES_API UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeTexture2DNode::execGetCustomWrapV)
	{
		P_GET_ENUM_REF(EInterchangeTextureWrapMode,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomWrapV((EInterchangeTextureWrapMode&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DNode::execSetCustomWrapV)
	{
		P_GET_ENUM_REF(EInterchangeTextureWrapMode,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomWrapV((EInterchangeTextureWrapMode&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DNode::execGetCustomWrapU)
	{
		P_GET_ENUM_REF(EInterchangeTextureWrapMode,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomWrapU((EInterchangeTextureWrapMode&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DNode::execSetCustomWrapU)
	{
		P_GET_ENUM_REF(EInterchangeTextureWrapMode,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomWrapU((EInterchangeTextureWrapMode&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DNode::execGetSourceBlocks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,FString>*)Z_Param__Result=P_THIS->GetSourceBlocks();
		P_NATIVE_END;
	}
	void UInterchangeTexture2DNode::StaticRegisterNativesUInterchangeTexture2DNode()
	{
		UClass* Class = UInterchangeTexture2DNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomWrapU", &UInterchangeTexture2DNode::execGetCustomWrapU },
			{ "GetCustomWrapV", &UInterchangeTexture2DNode::execGetCustomWrapV },
			{ "GetSourceBlocks", &UInterchangeTexture2DNode::execGetSourceBlocks },
			{ "SetCustomWrapU", &UInterchangeTexture2DNode::execSetCustomWrapU },
			{ "SetCustomWrapV", &UInterchangeTexture2DNode::execSetCustomWrapV },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics
	{
		struct InterchangeTexture2DNode_eventGetCustomWrapU_Parms
		{
			EInterchangeTextureWrapMode AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DNode_eventGetCustomWrapU_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode, METADATA_PARAMS(nullptr, 0) }; // 1504979457
	void Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DNode_eventGetCustomWrapU_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DNode_eventGetCustomWrapU_Parms), &Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DNode, nullptr, "GetCustomWrapU", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::InterchangeTexture2DNode_eventGetCustomWrapU_Parms), Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics
	{
		struct InterchangeTexture2DNode_eventGetCustomWrapV_Parms
		{
			EInterchangeTextureWrapMode AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DNode_eventGetCustomWrapV_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode, METADATA_PARAMS(nullptr, 0) }; // 1504979457
	void Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DNode_eventGetCustomWrapV_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DNode_eventGetCustomWrapV_Parms), &Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DNode, nullptr, "GetCustomWrapV", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::InterchangeTexture2DNode_eventGetCustomWrapV_Parms), Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics
	{
		struct InterchangeTexture2DNode_eventGetSourceBlocks_Parms
		{
			TMap<int32,FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DNode_eventGetSourceBlocks_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture | UDIMs" },
		{ "Comment", "/**\n\x09 * Get the source blocks for the texture\n\x09 * If the map is empty then the texture will be simply be imported as normal texture using the payload key\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DNode.h" },
		{ "ToolTip", "Get the source blocks for the texture\nIf the map is empty then the texture will be simply be imported as normal texture using the payload key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DNode, nullptr, "GetSourceBlocks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::InterchangeTexture2DNode_eventGetSourceBlocks_Parms), Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics
	{
		struct InterchangeTexture2DNode_eventSetCustomWrapU_Parms
		{
			EInterchangeTextureWrapMode AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DNode_eventSetCustomWrapU_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::NewProp_AttributeValue_MetaData)) }; // 1504979457
	void Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DNode_eventSetCustomWrapU_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DNode_eventSetCustomWrapU_Parms), &Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DNode, nullptr, "SetCustomWrapU", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::InterchangeTexture2DNode_eventSetCustomWrapU_Parms), Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics
	{
		struct InterchangeTexture2DNode_eventSetCustomWrapV_Parms
		{
			EInterchangeTextureWrapMode AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DNode_eventSetCustomWrapV_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::NewProp_AttributeValue_MetaData)) }; // 1504979457
	void Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DNode_eventSetCustomWrapV_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DNode_eventSetCustomWrapV_Parms), &Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DNode, nullptr, "SetCustomWrapV", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::InterchangeTexture2DNode_eventSetCustomWrapV_Parms), Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTexture2DNode);
	UClass* Z_Construct_UClass_UInterchangeTexture2DNode_NoRegister()
	{
		return UInterchangeTexture2DNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTexture2DNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTexture2DNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTextureNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeTexture2DNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapU, "GetCustomWrapU" }, // 847074946
		{ &Z_Construct_UFunction_UInterchangeTexture2DNode_GetCustomWrapV, "GetCustomWrapV" }, // 3821965155
		{ &Z_Construct_UFunction_UInterchangeTexture2DNode_GetSourceBlocks, "GetSourceBlocks" }, // 914643387
		{ &Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapU, "SetCustomWrapU" }, // 4261682301
		{ &Z_Construct_UFunction_UInterchangeTexture2DNode_SetCustomWrapV, "SetCustomWrapV" }, // 1519854550
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTexture2DNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//ns UE::Interchange\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTexture2DNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DNode.h" },
		{ "ToolTip", "ns UE::Interchange" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTexture2DNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTexture2DNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTexture2DNode_Statics::ClassParams = {
		&UInterchangeTexture2DNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeTexture2DNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTexture2DNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeTexture2DNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTexture2DNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTexture2DNode.OuterSingleton, Z_Construct_UClass_UInterchangeTexture2DNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTexture2DNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeTexture2DNode>()
	{
		return UInterchangeTexture2DNode::StaticClass();
	}
	UInterchangeTexture2DNode::UInterchangeTexture2DNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTexture2DNode);
	UInterchangeTexture2DNode::~UInterchangeTexture2DNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeTexture2DNode)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTexture2DNode, UInterchangeTexture2DNode::StaticClass, TEXT("UInterchangeTexture2DNode"), &Z_Registration_Info_UClass_UInterchangeTexture2DNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTexture2DNode), 3411620244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_4213229433(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
