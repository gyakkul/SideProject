// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeTexture2DArrayFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTexture2DArrayFactoryNode() {}
// Cross Module References
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_NoRegister();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureFactoryNode();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeTexture2DArrayFactoryNode::execSetCustomAddressZ)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAddressZ(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressZ)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAddressZ(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressY)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAddressY(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressX)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAddressX(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeTexture2DArrayFactoryNode::StaticRegisterNativesUInterchangeTexture2DArrayFactoryNode()
	{
		UClass* Class = UInterchangeTexture2DArrayFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomAddressX", &UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressX },
			{ "GetCustomAddressY", &UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressY },
			{ "GetCustomAddressZ", &UInterchangeTexture2DArrayFactoryNode::execGetCustomAddressZ },
			{ "SetCustomAddressZ", &UInterchangeTexture2DArrayFactoryNode::execSetCustomAddressZ },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics
	{
		struct InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressX_Parms
		{
			uint8 AttributeValue;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressX_Parms, AttributeValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressX_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressX_Parms), &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DArrayFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode, nullptr, "GetCustomAddressX", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressX_Parms), Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics
	{
		struct InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressY_Parms
		{
			uint8 AttributeValue;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressY_Parms, AttributeValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressY_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressY_Parms), &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DArrayFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode, nullptr, "GetCustomAddressY", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressY_Parms), Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics
	{
		struct InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressZ_Parms
		{
			uint8 AttributeValue;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressZ_Parms, AttributeValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressZ_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressZ_Parms), &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DArrayFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode, nullptr, "GetCustomAddressZ", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::InterchangeTexture2DArrayFactoryNode_eventGetCustomAddressZ_Parms), Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics
	{
		struct InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms
		{
			uint8 AttributeValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms, AttributeValue), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms), &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms), &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DArrayFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode, nullptr, "SetCustomAddressZ", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::InterchangeTexture2DArrayFactoryNode_eventSetCustomAddressZ_Parms), Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTexture2DArrayFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_NoRegister()
	{
		return UInterchangeTexture2DArrayFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTextureFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX, "GetCustomAddressX" }, // 1058682284
		{ &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY, "GetCustomAddressY" }, // 3903645594
		{ &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ, "GetCustomAddressZ" }, // 2550596574
		{ &Z_Construct_UFunction_UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ, "SetCustomAddressZ" }, // 1058642419
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTexture2DArrayFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DArrayFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTexture2DArrayFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::ClassParams = {
		&UInterchangeTexture2DArrayFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeTexture2DArrayFactoryNode>()
	{
		return UInterchangeTexture2DArrayFactoryNode::StaticClass();
	}
	UInterchangeTexture2DArrayFactoryNode::UInterchangeTexture2DArrayFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTexture2DArrayFactoryNode);
	UInterchangeTexture2DArrayFactoryNode::~UInterchangeTexture2DArrayFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode, UInterchangeTexture2DArrayFactoryNode::StaticClass, TEXT("UInterchangeTexture2DArrayFactoryNode"), &Z_Registration_Info_UClass_UInterchangeTexture2DArrayFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTexture2DArrayFactoryNode), 3971608585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_2562646430(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
