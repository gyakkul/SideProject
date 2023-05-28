// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/InterchangeUserDefinedAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeUserDefinedAttribute() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_NoRegister();
	INTERCHANGECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo();
	UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo;
class UScriptStruct* FInterchangeUserDefinedAttributeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("InterchangeUserDefinedAttributeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo.OuterSingleton;
}
template<> INTERCHANGECORE_API UScriptStruct* StaticStruct<FInterchangeUserDefinedAttributeInfo>()
{
	return FInterchangeUserDefinedAttributeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeUserDefinedAttributeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Interchange | Node | UserDefinedAttributeInfo" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeUserDefinedAttributeInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
		nullptr,
		&NewStructOps,
		"InterchangeUserDefinedAttributeInfo",
		sizeof(FInterchangeUserDefinedAttributeInfo),
		alignof(FInterchangeUserDefinedAttributeInfo),
		Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execDuplicateAllUserDefinedAttribute)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeSourceNode);
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeDestinationNode);
		P_GET_UBOOL(Z_Param_bAddSourceNodeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute(Z_Param_InterchangeSourceNode,Z_Param_InterchangeDestinationNode,Z_Param_bAddSourceNodeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttributeInfos)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_TARRAY_REF(FInterchangeUserDefinedAttributeInfo,Z_Param_Out_UserDefinedAttributeInfos);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttributeInfos(Z_Param_InterchangeNode,Z_Param_Out_UserDefinedAttributeInfos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_FString)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_FString(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_OutValue,Z_Param_Out_OutPayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Int32)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Int32(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_OutValue,Z_Param_Out_OutPayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Double)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutValue);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Double(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_OutValue,Z_Param_Out_OutPayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Float)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Float(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_OutValue,Z_Param_Out_OutPayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Boolean)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
		P_GET_UBOOL_REF(Z_Param_Out_OutValue);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Boolean(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_OutValue,Z_Param_Out_OutPayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execRemoveUserDefinedAttribute)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::RemoveUserDefinedAttribute(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_FString)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_FString(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Value,Z_Param_PayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Int32)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Int32(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_Value,Z_Param_PayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Double)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Value);
		P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Double(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_Value,Z_Param_PayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Float)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Float(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_Value,Z_Param_PayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Boolean)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserDefinedAttributeName);
		P_GET_UBOOL_REF(Z_Param_Out_Value);
		P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Boolean(Z_Param_InterchangeNode,Z_Param_UserDefinedAttributeName,Z_Param_Out_Value,Z_Param_PayloadKey);
		P_NATIVE_END;
	}
	void UInterchangeUserDefinedAttributesAPI::StaticRegisterNativesUInterchangeUserDefinedAttributesAPI()
	{
		UClass* Class = UInterchangeUserDefinedAttributesAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateUserDefinedAttribute_Boolean", &UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Boolean },
			{ "CreateUserDefinedAttribute_Double", &UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Double },
			{ "CreateUserDefinedAttribute_Float", &UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Float },
			{ "CreateUserDefinedAttribute_FString", &UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_FString },
			{ "CreateUserDefinedAttribute_Int32", &UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Int32 },
			{ "DuplicateAllUserDefinedAttribute", &UInterchangeUserDefinedAttributesAPI::execDuplicateAllUserDefinedAttribute },
			{ "GetUserDefinedAttribute_Boolean", &UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Boolean },
			{ "GetUserDefinedAttribute_Double", &UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Double },
			{ "GetUserDefinedAttribute_Float", &UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Float },
			{ "GetUserDefinedAttribute_FString", &UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_FString },
			{ "GetUserDefinedAttribute_Int32", &UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Int32 },
			{ "GetUserDefinedAttributeInfos", &UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttributeInfos },
			{ "RemoveUserDefinedAttribute", &UInterchangeUserDefinedAttributesAPI::execRemoveUserDefinedAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics
	{
		struct InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms
		{
			UInterchangeBaseNode* InterchangeNode;
			FString UserDefinedAttributeName;
			bool Value;
			FString PayloadKey;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms, UserDefinedAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms, PayloadKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_PayloadKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_PayloadKey_MetaData)) };
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_PayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "CreateUserDefinedAttribute_Boolean", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Boolean_Parms), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics
	{
		struct InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms
		{
			UInterchangeBaseNode* InterchangeNode;
			FString UserDefinedAttributeName;
			double Value;
			FString PayloadKey;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms, UserDefinedAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms, PayloadKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_PayloadKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_PayloadKey_MetaData)) };
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_PayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "CreateUserDefinedAttribute_Double", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Double_Parms), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics
	{
		struct InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms
		{
			UInterchangeBaseNode* InterchangeNode;
			FString UserDefinedAttributeName;
			float Value;
			FString PayloadKey;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms, UserDefinedAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms, PayloadKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_PayloadKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_PayloadKey_MetaData)) };
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_PayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "CreateUserDefinedAttribute_Float", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Float_Parms), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics
	{
		struct InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms
		{
			UInterchangeBaseNode* InterchangeNode;
			FString UserDefinedAttributeName;
			FString Value;
			FString PayloadKey;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms, UserDefinedAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms, PayloadKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_PayloadKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_PayloadKey_MetaData)) };
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_PayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "CreateUserDefinedAttribute_FString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_FString_Parms), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics
	{
		struct InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms
		{
			UInterchangeBaseNode* InterchangeNode;
			FString UserDefinedAttributeName;
			int32 Value;
			FString PayloadKey;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms, UserDefinedAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms, PayloadKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_PayloadKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_PayloadKey_MetaData)) };
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_PayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "CreateUserDefinedAttribute_Int32", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::InterchangeUserDefinedAttributesAPI_eventCreateUserDefinedAttribute_Int32_Parms), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics
	{
		struct InterchangeUserDefinedAttributesAPI_eventDuplicateAllUserDefinedAttribute_Parms
		{
			const UInterchangeBaseNode* InterchangeSourceNode;
			UInterchangeBaseNode* InterchangeDestinationNode;
			bool bAddSourceNodeName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeSourceNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeSourceNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeDestinationNode;
		static void NewProp_bAddSourceNodeName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddSourceNodeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_InterchangeSourceNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_InterchangeSourceNode = { "InterchangeSourceNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventDuplicateAllUserDefinedAttribute_Parms, InterchangeSourceNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_InterchangeSourceNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_InterchangeSourceNode_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_InterchangeDestinationNode = { "InterchangeDestinationNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventDuplicateAllUserDefinedAttribute_Parms, InterchangeDestinationNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_bAddSourceNodeName_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventDuplicateAllUserDefinedAttribute_Parms*)Obj)->bAddSourceNodeName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_bAddSourceNodeName = { "bAddSourceNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventDuplicateAllUserDefinedAttribute_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_bAddSourceNodeName_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_InterchangeSourceNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_InterchangeDestinationNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::NewProp_bAddSourceNodeName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "DuplicateAllUserDefinedAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::InterchangeUserDefinedAttributesAPI_eventDuplicateAllUserDefinedAttribute_Parms), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics
	{
		struct InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms
		{
			const UInterchangeBaseNode* InterchangeNode;
			FString UserDefinedAttributeName;
			bool OutValue;
			FString OutPayloadKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
		static void NewProp_OutValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_InterchangeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_InterchangeNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms, UserDefinedAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_OutValue_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms*)Obj)->OutValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_OutValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_OutPayloadKey = { "OutPayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms, OutPayloadKey), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_UserDefinedAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_OutPayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "GetUserDefinedAttribute_Boolean", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Boolean_Parms), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics
	{
		struct InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms
		{
			const UInterchangeBaseNode* InterchangeNode;
			FString UserDefinedAttributeName;
			double OutValue;
			FString OutPayloadKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_InterchangeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_InterchangeNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms, UserDefinedAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_OutPayloadKey = { "OutPayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms, OutPayloadKey), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_UserDefinedAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_OutPayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "GetUserDefinedAttribute_Double", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Double_Parms), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics
	{
		struct InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms
		{
			const UInterchangeBaseNode* InterchangeNode;
			FString UserDefinedAttributeName;
			float OutValue;
			FString OutPayloadKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_InterchangeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_InterchangeNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms, UserDefinedAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_OutPayloadKey = { "OutPayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms, OutPayloadKey), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_UserDefinedAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_OutPayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "GetUserDefinedAttribute_Float", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Float_Parms), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics
	{
		struct InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms
		{
			const UInterchangeBaseNode* InterchangeNode;
			FString UserDefinedAttributeName;
			FString OutValue;
			FString OutPayloadKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_InterchangeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_InterchangeNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms, UserDefinedAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_OutPayloadKey = { "OutPayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms, OutPayloadKey), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_UserDefinedAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_OutPayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "GetUserDefinedAttribute_FString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_FString_Parms), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics
	{
		struct InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms
		{
			const UInterchangeBaseNode* InterchangeNode;
			FString UserDefinedAttributeName;
			int32 OutValue;
			FString OutPayloadKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_InterchangeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_InterchangeNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms, UserDefinedAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_OutPayloadKey = { "OutPayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms, OutPayloadKey), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_UserDefinedAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_OutPayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "GetUserDefinedAttribute_Int32", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttribute_Int32_Parms), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics
	{
		struct InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttributeInfos_Parms
		{
			const UInterchangeBaseNode* InterchangeNode;
			TArray<FInterchangeUserDefinedAttributeInfo> UserDefinedAttributeInfos;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserDefinedAttributeInfos_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserDefinedAttributeInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttributeInfos_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_InterchangeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_InterchangeNode_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_UserDefinedAttributeInfos_Inner = { "UserDefinedAttributeInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo, METADATA_PARAMS(nullptr, 0) }; // 1419292894
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_UserDefinedAttributeInfos = { "UserDefinedAttributeInfos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttributeInfos_Parms, UserDefinedAttributeInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1419292894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_UserDefinedAttributeInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::NewProp_UserDefinedAttributeInfos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "GetUserDefinedAttributeInfos", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::InterchangeUserDefinedAttributesAPI_eventGetUserDefinedAttributeInfos_Parms), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics
	{
		struct InterchangeUserDefinedAttributesAPI_eventRemoveUserDefinedAttribute_Parms
		{
			UInterchangeBaseNode* InterchangeNode;
			FString UserDefinedAttributeName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedAttributeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventRemoveUserDefinedAttribute_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_UserDefinedAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_UserDefinedAttributeName = { "UserDefinedAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeUserDefinedAttributesAPI_eventRemoveUserDefinedAttribute_Parms, UserDefinedAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_UserDefinedAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_UserDefinedAttributeName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeUserDefinedAttributesAPI_eventRemoveUserDefinedAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeUserDefinedAttributesAPI_eventRemoveUserDefinedAttribute_Parms), &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_UserDefinedAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | UserDefinedAttribute" },
		{ "Comment", "/**\n\x09 * Remove the specified user defined attribute\n\x09 * param UserDefinedAttributeName - The name of the user defined attribute to remove\n\x09 * return - True if the attribute exist and was remove or if the attribute doesn't exist. Return false if the attribute exist but the attribute was not properly remove.\n\x09 * note - User defined attributes are the DCC translated node user custom attributes (i.e. Maya extra attributes)\n\x09 *        Payload key will point on a FRichCurve payload.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
		{ "ToolTip", "Remove the specified user defined attribute\nparam UserDefinedAttributeName - The name of the user defined attribute to remove\nreturn - True if the attribute exist and was remove or if the attribute doesn't exist. Return false if the attribute exist but the attribute was not properly remove.\nnote - User defined attributes are the DCC translated node user custom attributes (i.e. Maya extra attributes)\n       Payload key will point on a FRichCurve payload." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, nullptr, "RemoveUserDefinedAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::InterchangeUserDefinedAttributesAPI_eventRemoveUserDefinedAttribute_Parms), Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeUserDefinedAttributesAPI);
	UClass* Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_NoRegister()
	{
		return UInterchangeUserDefinedAttributesAPI::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean, "CreateUserDefinedAttribute_Boolean" }, // 3106565098
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double, "CreateUserDefinedAttribute_Double" }, // 2629609654
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float, "CreateUserDefinedAttribute_Float" }, // 645991986
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString, "CreateUserDefinedAttribute_FString" }, // 1003381287
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32, "CreateUserDefinedAttribute_Int32" }, // 1965206673
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute, "DuplicateAllUserDefinedAttribute" }, // 2241386156
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean, "GetUserDefinedAttribute_Boolean" }, // 675544863
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double, "GetUserDefinedAttribute_Double" }, // 2563587008
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float, "GetUserDefinedAttribute_Float" }, // 3937453588
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString, "GetUserDefinedAttribute_FString" }, // 1174472329
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32, "GetUserDefinedAttribute_Int32" }, // 171388009
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos, "GetUserDefinedAttributeInfos" }, // 1048668303
		{ &Z_Construct_UFunction_UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute, "RemoveUserDefinedAttribute" }, // 345359245
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UInterchangeUserDefinedAttributesAPI is used to store and retrieve user defined attributes (i.e. DCC node attributes, pipelines will have access to those attributes)\n * Any user defined attribute have: name, value and a optional AnimationPayloadKey (FRichCurve which is a float curve).\n * Value type must be supported by the UE::Interchange::EAttributeTypes enumeration.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Nodes/InterchangeUserDefinedAttribute.h" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeUserDefinedAttribute.h" },
		{ "ToolTip", "UInterchangeUserDefinedAttributesAPI is used to store and retrieve user defined attributes (i.e. DCC node attributes, pipelines will have access to those attributes)\nAny user defined attribute have: name, value and a optional AnimationPayloadKey (FRichCurve which is a float curve).\nValue type must be supported by the UE::Interchange::EAttributeTypes enumeration." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeUserDefinedAttributesAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::ClassParams = {
		&UInterchangeUserDefinedAttributesAPI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI()
	{
		if (!Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI.OuterSingleton, Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeUserDefinedAttributesAPI>()
	{
		return UInterchangeUserDefinedAttributesAPI::StaticClass();
	}
	UInterchangeUserDefinedAttributesAPI::UInterchangeUserDefinedAttributesAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeUserDefinedAttributesAPI);
	UInterchangeUserDefinedAttributesAPI::~UInterchangeUserDefinedAttributesAPI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_Statics::ScriptStructInfo[] = {
		{ FInterchangeUserDefinedAttributeInfo::StaticStruct, Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics::NewStructOps, TEXT("InterchangeUserDefinedAttributeInfo"), &Z_Registration_Info_UScriptStruct_InterchangeUserDefinedAttributeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeUserDefinedAttributeInfo), 1419292894U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI, UInterchangeUserDefinedAttributesAPI::StaticClass, TEXT("UInterchangeUserDefinedAttributesAPI"), &Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeUserDefinedAttributesAPI), 1577479231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_4281333840(TEXT("/Script/InterchangeCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
