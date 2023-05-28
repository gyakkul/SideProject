// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeTexture2DFactoryNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTexture2DFactoryNode() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DFactoryNode_NoRegister();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureFactoryNode();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeTexture2DFactoryNode::execSetSourceBlock)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BlockIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSourceFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceBlock(Z_Param_BlockIndex,Z_Param_InSourceFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DFactoryNode::execSetSourceBlockByCoordinates)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSourceFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceBlockByCoordinates(Z_Param_X,Z_Param_Y,Z_Param_InSourceFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DFactoryNode::execGetSourceBlock)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BlockIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutSourceFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSourceBlock(Z_Param_BlockIndex,Z_Param_Out_OutSourceFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DFactoryNode::execGetSourceBlockByCoordinates)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutSourceFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSourceBlockByCoordinates(Z_Param_X,Z_Param_Y,Z_Param_Out_OutSourceFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DFactoryNode::execSetSourceBlocks)
	{
		P_GET_TMAP_REF(int32,FString,Z_Param_Out_InSourceBlocks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceBlocks(Z_Param_Out_InSourceBlocks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DFactoryNode::execGetSourceBlocks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,FString>*)Z_Param__Result=P_THIS->GetSourceBlocks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DFactoryNode::execSetCustomAddressY)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAddressY(TextureAddress(Z_Param_AttributeValue),Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DFactoryNode::execGetCustomAddressY)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAddressY((TEnumAsByte<TextureAddress>&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DFactoryNode::execSetCustomAddressX)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAddressX(TextureAddress(Z_Param_AttributeValue),Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DFactoryNode::execGetCustomAddressX)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAddressX((TEnumAsByte<TextureAddress>&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	void UInterchangeTexture2DFactoryNode::StaticRegisterNativesUInterchangeTexture2DFactoryNode()
	{
		UClass* Class = UInterchangeTexture2DFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomAddressX", &UInterchangeTexture2DFactoryNode::execGetCustomAddressX },
			{ "GetCustomAddressY", &UInterchangeTexture2DFactoryNode::execGetCustomAddressY },
			{ "GetSourceBlock", &UInterchangeTexture2DFactoryNode::execGetSourceBlock },
			{ "GetSourceBlockByCoordinates", &UInterchangeTexture2DFactoryNode::execGetSourceBlockByCoordinates },
			{ "GetSourceBlocks", &UInterchangeTexture2DFactoryNode::execGetSourceBlocks },
			{ "SetCustomAddressX", &UInterchangeTexture2DFactoryNode::execSetCustomAddressX },
			{ "SetCustomAddressY", &UInterchangeTexture2DFactoryNode::execSetCustomAddressY },
			{ "SetSourceBlock", &UInterchangeTexture2DFactoryNode::execSetSourceBlock },
			{ "SetSourceBlockByCoordinates", &UInterchangeTexture2DFactoryNode::execSetSourceBlockByCoordinates },
			{ "SetSourceBlocks", &UInterchangeTexture2DFactoryNode::execSetSourceBlocks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics
	{
		struct InterchangeTexture2DFactoryNode_eventGetCustomAddressX_Parms
		{
			TEnumAsByte<TextureAddress> AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventGetCustomAddressX_Parms, AttributeValue), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(nullptr, 0) }; // 1462649072
	void Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DFactoryNode_eventGetCustomAddressX_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DFactoryNode_eventGetCustomAddressX_Parms), &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DFactoryNode, nullptr, "GetCustomAddressX", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::InterchangeTexture2DFactoryNode_eventGetCustomAddressX_Parms), Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics
	{
		struct InterchangeTexture2DFactoryNode_eventGetCustomAddressY_Parms
		{
			TEnumAsByte<TextureAddress> AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventGetCustomAddressY_Parms, AttributeValue), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(nullptr, 0) }; // 1462649072
	void Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DFactoryNode_eventGetCustomAddressY_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DFactoryNode_eventGetCustomAddressY_Parms), &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DFactoryNode, nullptr, "GetCustomAddressY", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::InterchangeTexture2DFactoryNode_eventGetCustomAddressY_Parms), Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics
	{
		struct InterchangeTexture2DFactoryNode_eventGetSourceBlock_Parms
		{
			int32 BlockIndex;
			FString OutSourceFile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlockIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutSourceFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::NewProp_BlockIndex = { "BlockIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventGetSourceBlock_Parms, BlockIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::NewProp_OutSourceFile = { "OutSourceFile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventGetSourceBlock_Parms, OutSourceFile), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DFactoryNode_eventGetSourceBlock_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DFactoryNode_eventGetSourceBlock_Parms), &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::NewProp_BlockIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::NewProp_OutSourceFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture | UDIMs" },
		{ "Comment", "/**\n\x09 * Get a source block from the texture\n\x09 *\n\x09 * @param BlockIndex The UDIM Index of the block\n\x09 * @param OutSourceFile The source file for that block if found\n\x09 * @return True if the source file for the block was found\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DFactoryNode.h" },
		{ "ToolTip", "Get a source block from the texture\n\n@param BlockIndex The UDIM Index of the block\n@param OutSourceFile The source file for that block if found\n@return True if the source file for the block was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DFactoryNode, nullptr, "GetSourceBlock", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::InterchangeTexture2DFactoryNode_eventGetSourceBlock_Parms), Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics
	{
		struct InterchangeTexture2DFactoryNode_eventGetSourceBlockByCoordinates_Parms
		{
			int32 X;
			int32 Y;
			FString OutSourceFile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutSourceFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventGetSourceBlockByCoordinates_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventGetSourceBlockByCoordinates_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::NewProp_OutSourceFile = { "OutSourceFile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventGetSourceBlockByCoordinates_Parms, OutSourceFile), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DFactoryNode_eventGetSourceBlockByCoordinates_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DFactoryNode_eventGetSourceBlockByCoordinates_Parms), &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::NewProp_OutSourceFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture | UDIMs" },
		{ "Comment", "/**\n\x09 * Get a source block from the texture\n\x09 *\n\x09 * @param X The X coordinate of the block\n\x09 * @param Y The Y coordinate of the block\n\x09 * @param OutSourceFile The source file for that block if found\n\x09 * @return True if the source file for the block was found\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DFactoryNode.h" },
		{ "ToolTip", "Get a source block from the texture\n\n@param X The X coordinate of the block\n@param Y The Y coordinate of the block\n@param OutSourceFile The source file for that block if found\n@return True if the source file for the block was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DFactoryNode, nullptr, "GetSourceBlockByCoordinates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::InterchangeTexture2DFactoryNode_eventGetSourceBlockByCoordinates_Parms), Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics
	{
		struct InterchangeTexture2DFactoryNode_eventGetSourceBlocks_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventGetSourceBlocks_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture | UDIMs" },
		{ "Comment", "/**\n\x09 * Get the source blocks for the texture\n\x09 * If the map is empty then the texture will be simply be imported as normal texture using the payload key\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DFactoryNode.h" },
		{ "ToolTip", "Get the source blocks for the texture\nIf the map is empty then the texture will be simply be imported as normal texture using the payload key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DFactoryNode, nullptr, "GetSourceBlocks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::InterchangeTexture2DFactoryNode_eventGetSourceBlocks_Parms), Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics
	{
		struct InterchangeTexture2DFactoryNode_eventSetCustomAddressX_Parms
		{
			TEnumAsByte<TextureAddress> AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventSetCustomAddressX_Parms, AttributeValue), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::NewProp_AttributeValue_MetaData)) }; // 1462649072
	void Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTexture2DFactoryNode_eventSetCustomAddressX_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DFactoryNode_eventSetCustomAddressX_Parms), &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DFactoryNode_eventSetCustomAddressX_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DFactoryNode_eventSetCustomAddressX_Parms), &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DFactoryNode, nullptr, "SetCustomAddressX", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::InterchangeTexture2DFactoryNode_eventSetCustomAddressX_Parms), Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics
	{
		struct InterchangeTexture2DFactoryNode_eventSetCustomAddressY_Parms
		{
			TEnumAsByte<TextureAddress> AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventSetCustomAddressY_Parms, AttributeValue), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::NewProp_AttributeValue_MetaData)) }; // 1462649072
	void Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTexture2DFactoryNode_eventSetCustomAddressY_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DFactoryNode_eventSetCustomAddressY_Parms), &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DFactoryNode_eventSetCustomAddressY_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DFactoryNode_eventSetCustomAddressY_Parms), &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DFactoryNode, nullptr, "SetCustomAddressY", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::InterchangeTexture2DFactoryNode_eventSetCustomAddressY_Parms), Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics
	{
		struct InterchangeTexture2DFactoryNode_eventSetSourceBlock_Parms
		{
			int32 BlockIndex;
			FString InSourceFile;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlockIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSourceFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSourceFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::NewProp_BlockIndex = { "BlockIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventSetSourceBlock_Parms, BlockIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::NewProp_InSourceFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::NewProp_InSourceFile = { "InSourceFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventSetSourceBlock_Parms, InSourceFile), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::NewProp_InSourceFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::NewProp_InSourceFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::NewProp_BlockIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::NewProp_InSourceFile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture | UDIMs" },
		{ "Comment", "/**\n\x09 * Set a source block for the texture\n\x09 *\n\x09 * @param BlockIndex The UDIM Index of the block\n\x09 * @param InSourceFile The source file for that block\n\x09 * \n\x09 * The textures must be of the same format and use the same pixel format\n\x09 * The first block in the map is used to determine the accepted texture format and pixel format\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DFactoryNode.h" },
		{ "ToolTip", "Set a source block for the texture\n\n@param BlockIndex The UDIM Index of the block\n@param InSourceFile The source file for that block\n\nThe textures must be of the same format and use the same pixel format\nThe first block in the map is used to determine the accepted texture format and pixel format" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DFactoryNode, nullptr, "SetSourceBlock", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::InterchangeTexture2DFactoryNode_eventSetSourceBlock_Parms), Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics
	{
		struct InterchangeTexture2DFactoryNode_eventSetSourceBlockByCoordinates_Parms
		{
			int32 X;
			int32 Y;
			FString InSourceFile;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSourceFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSourceFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventSetSourceBlockByCoordinates_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventSetSourceBlockByCoordinates_Parms, Y), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::NewProp_InSourceFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::NewProp_InSourceFile = { "InSourceFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventSetSourceBlockByCoordinates_Parms, InSourceFile), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::NewProp_InSourceFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::NewProp_InSourceFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::NewProp_InSourceFile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture | UDIMs" },
		{ "Comment", "/**\n\x09 * Set a source block for the texture\n\x09 *\n\x09 * @param X The X coordinate of the block\n\x09 * @param Y The Y coordinate of the block\n\x09 * @param InSourceFile The source file for that block\n\x09 * \n\x09 * The textures must be of the same format and use the same pixel format\n\x09 * The first block in the map is used to determine the accepted texture format and pixel format\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DFactoryNode.h" },
		{ "ToolTip", "Set a source block for the texture\n\n@param X The X coordinate of the block\n@param Y The Y coordinate of the block\n@param InSourceFile The source file for that block\n\nThe textures must be of the same format and use the same pixel format\nThe first block in the map is used to determine the accepted texture format and pixel format" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DFactoryNode, nullptr, "SetSourceBlockByCoordinates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::InterchangeTexture2DFactoryNode_eventSetSourceBlockByCoordinates_Parms), Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics
	{
		struct InterchangeTexture2DFactoryNode_eventSetSourceBlocks_Parms
		{
			TMap<int32,FString> InSourceBlocks;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSourceBlocks_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSourceBlocks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSourceBlocks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InSourceBlocks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::NewProp_InSourceBlocks_ValueProp = { "InSourceBlocks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::NewProp_InSourceBlocks_Key_KeyProp = { "InSourceBlocks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::NewProp_InSourceBlocks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::NewProp_InSourceBlocks = { "InSourceBlocks", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DFactoryNode_eventSetSourceBlocks_Parms, InSourceBlocks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::NewProp_InSourceBlocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::NewProp_InSourceBlocks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::NewProp_InSourceBlocks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::NewProp_InSourceBlocks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::NewProp_InSourceBlocks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture | UDIMs" },
		{ "Comment", "/**\n\x09 * Set the source blocks\n\x09 * Using this will suggest the pipeline to consider this texture as UDIM and it can chose to pass or not these block to the texture factory node.\n\x09 * @param InSourceBlocks The blocks and their source image that compose the whole texture.\n\x09 * The textures must be of the same format and use the same pixel format\n\x09 * The first block in the map is used to determine the accepted texture format and pixel format\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DFactoryNode.h" },
		{ "ToolTip", "Set the source blocks\nUsing this will suggest the pipeline to consider this texture as UDIM and it can chose to pass or not these block to the texture factory node.\n@param InSourceBlocks The blocks and their source image that compose the whole texture.\nThe textures must be of the same format and use the same pixel format\nThe first block in the map is used to determine the accepted texture format and pixel format" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DFactoryNode, nullptr, "SetSourceBlocks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::InterchangeTexture2DFactoryNode_eventSetSourceBlocks_Parms), Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTexture2DFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeTexture2DFactoryNode_NoRegister()
	{
		return UInterchangeTexture2DFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTexture2DFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTexture2DFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTextureFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeTexture2DFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressX, "GetCustomAddressX" }, // 1000242391
		{ &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetCustomAddressY, "GetCustomAddressY" }, // 124320282
		{ &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlock, "GetSourceBlock" }, // 2145469347
		{ &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates, "GetSourceBlockByCoordinates" }, // 3610616710
		{ &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_GetSourceBlocks, "GetSourceBlocks" }, // 1961896761
		{ &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressX, "SetCustomAddressX" }, // 667531926
		{ &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetCustomAddressY, "SetCustomAddressY" }, // 2738625149
		{ &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlock, "SetSourceBlock" }, // 1623604396
		{ &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates, "SetSourceBlockByCoordinates" }, // 2006695073
		{ &Z_Construct_UFunction_UInterchangeTexture2DFactoryNode_SetSourceBlocks, "SetSourceBlocks" }, // 2774821449
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTexture2DFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//ns UE::Interchange\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTexture2DFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DFactoryNode.h" },
		{ "ToolTip", "ns UE::Interchange" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTexture2DFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTexture2DFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTexture2DFactoryNode_Statics::ClassParams = {
		&UInterchangeTexture2DFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeTexture2DFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTexture2DFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeTexture2DFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTexture2DFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTexture2DFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeTexture2DFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTexture2DFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeTexture2DFactoryNode>()
	{
		return UInterchangeTexture2DFactoryNode::StaticClass();
	}
	UInterchangeTexture2DFactoryNode::UInterchangeTexture2DFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTexture2DFactoryNode);
	UInterchangeTexture2DFactoryNode::~UInterchangeTexture2DFactoryNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeTexture2DFactoryNode)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTexture2DFactoryNode, UInterchangeTexture2DFactoryNode::StaticClass, TEXT("UInterchangeTexture2DFactoryNode"), &Z_Registration_Info_UClass_UInterchangeTexture2DFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTexture2DFactoryNode), 3122530075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_1335249706(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
