// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeMaterialInstanceNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMaterialInstanceNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeMaterialInstanceNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeMaterialInstanceNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeMaterialInstanceNode::execGetStaticSwitchParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStaticSwitchParameterValue(Z_Param_ParameterName,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMaterialInstanceNode::execAddStaticSwitchParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_UBOOL(Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddStaticSwitchParameterValue(Z_Param_ParameterName,Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMaterialInstanceNode::execGetTextureParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTextureParameterValue(Z_Param_ParameterName,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMaterialInstanceNode::execAddTextureParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddTextureParameterValue(Z_Param_ParameterName,Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMaterialInstanceNode::execGetVectorParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVectorParameterValue(Z_Param_ParameterName,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMaterialInstanceNode::execAddVectorParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddVectorParameterValue(Z_Param_ParameterName,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMaterialInstanceNode::execGetScalarParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetScalarParameterValue(Z_Param_ParameterName,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMaterialInstanceNode::execAddScalarParameterValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddScalarParameterValue(Z_Param_ParameterName,Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMaterialInstanceNode::execGetCustomParent)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomParent(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMaterialInstanceNode::execSetCustomParent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomParent(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeMaterialInstanceNode::StaticRegisterNativesUInterchangeMaterialInstanceNode()
	{
		UClass* Class = UInterchangeMaterialInstanceNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScalarParameterValue", &UInterchangeMaterialInstanceNode::execAddScalarParameterValue },
			{ "AddStaticSwitchParameterValue", &UInterchangeMaterialInstanceNode::execAddStaticSwitchParameterValue },
			{ "AddTextureParameterValue", &UInterchangeMaterialInstanceNode::execAddTextureParameterValue },
			{ "AddVectorParameterValue", &UInterchangeMaterialInstanceNode::execAddVectorParameterValue },
			{ "GetCustomParent", &UInterchangeMaterialInstanceNode::execGetCustomParent },
			{ "GetScalarParameterValue", &UInterchangeMaterialInstanceNode::execGetScalarParameterValue },
			{ "GetStaticSwitchParameterValue", &UInterchangeMaterialInstanceNode::execGetStaticSwitchParameterValue },
			{ "GetTextureParameterValue", &UInterchangeMaterialInstanceNode::execGetTextureParameterValue },
			{ "GetVectorParameterValue", &UInterchangeMaterialInstanceNode::execGetVectorParameterValue },
			{ "SetCustomParent", &UInterchangeMaterialInstanceNode::execSetCustomParent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics
	{
		struct InterchangeMaterialInstanceNode_eventAddScalarParameterValue_Parms
		{
			FString ParameterName;
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventAddScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::NewProp_ParameterName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventAddScalarParameterValue_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMaterialInstanceNode_eventAddScalarParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMaterialInstanceNode_eventAddScalarParameterValue_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material Instance" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialInstanceNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceNode, nullptr, "AddScalarParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::InterchangeMaterialInstanceNode_eventAddScalarParameterValue_Parms), Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics
	{
		struct InterchangeMaterialInstanceNode_eventAddStaticSwitchParameterValue_Parms
		{
			FString ParameterName;
			bool AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventAddStaticSwitchParameterValue_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::NewProp_ParameterName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeMaterialInstanceNode_eventAddStaticSwitchParameterValue_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMaterialInstanceNode_eventAddStaticSwitchParameterValue_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMaterialInstanceNode_eventAddStaticSwitchParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMaterialInstanceNode_eventAddStaticSwitchParameterValue_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material Instance" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialInstanceNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceNode, nullptr, "AddStaticSwitchParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::InterchangeMaterialInstanceNode_eventAddStaticSwitchParameterValue_Parms), Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics
	{
		struct InterchangeMaterialInstanceNode_eventAddTextureParameterValue_Parms
		{
			FString ParameterName;
			FString AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventAddTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventAddTextureParameterValue_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMaterialInstanceNode_eventAddTextureParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMaterialInstanceNode_eventAddTextureParameterValue_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material Instance" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialInstanceNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceNode, nullptr, "AddTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::InterchangeMaterialInstanceNode_eventAddTextureParameterValue_Parms), Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics
	{
		struct InterchangeMaterialInstanceNode_eventAddVectorParameterValue_Parms
		{
			FString ParameterName;
			FLinearColor AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventAddVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventAddVectorParameterValue_Parms, AttributeValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMaterialInstanceNode_eventAddVectorParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMaterialInstanceNode_eventAddVectorParameterValue_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material Instance" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialInstanceNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceNode, nullptr, "AddVectorParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::InterchangeMaterialInstanceNode_eventAddVectorParameterValue_Parms), Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics
	{
		struct InterchangeMaterialInstanceNode_eventGetCustomParent_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventGetCustomParent_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMaterialInstanceNode_eventGetCustomParent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMaterialInstanceNode_eventGetCustomParent_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material Instance" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialInstanceNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceNode, nullptr, "GetCustomParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::InterchangeMaterialInstanceNode_eventGetCustomParent_Parms), Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics
	{
		struct InterchangeMaterialInstanceNode_eventGetScalarParameterValue_Parms
		{
			FString ParameterName;
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventGetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::NewProp_ParameterName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventGetScalarParameterValue_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMaterialInstanceNode_eventGetScalarParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMaterialInstanceNode_eventGetScalarParameterValue_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material Instance" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialInstanceNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceNode, nullptr, "GetScalarParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::InterchangeMaterialInstanceNode_eventGetScalarParameterValue_Parms), Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics
	{
		struct InterchangeMaterialInstanceNode_eventGetStaticSwitchParameterValue_Parms
		{
			FString ParameterName;
			bool AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventGetStaticSwitchParameterValue_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::NewProp_ParameterName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeMaterialInstanceNode_eventGetStaticSwitchParameterValue_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMaterialInstanceNode_eventGetStaticSwitchParameterValue_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMaterialInstanceNode_eventGetStaticSwitchParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMaterialInstanceNode_eventGetStaticSwitchParameterValue_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material Instance" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialInstanceNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceNode, nullptr, "GetStaticSwitchParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::InterchangeMaterialInstanceNode_eventGetStaticSwitchParameterValue_Parms), Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics
	{
		struct InterchangeMaterialInstanceNode_eventGetTextureParameterValue_Parms
		{
			FString ParameterName;
			FString AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventGetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::NewProp_ParameterName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventGetTextureParameterValue_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMaterialInstanceNode_eventGetTextureParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMaterialInstanceNode_eventGetTextureParameterValue_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material Instance" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialInstanceNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceNode, nullptr, "GetTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::InterchangeMaterialInstanceNode_eventGetTextureParameterValue_Parms), Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics
	{
		struct InterchangeMaterialInstanceNode_eventGetVectorParameterValue_Parms
		{
			FString ParameterName;
			FLinearColor AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventGetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::NewProp_ParameterName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventGetVectorParameterValue_Parms, AttributeValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMaterialInstanceNode_eventGetVectorParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMaterialInstanceNode_eventGetVectorParameterValue_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material Instance" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialInstanceNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceNode, nullptr, "GetVectorParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::InterchangeMaterialInstanceNode_eventGetVectorParameterValue_Parms), Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics
	{
		struct InterchangeMaterialInstanceNode_eventSetCustomParent_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMaterialInstanceNode_eventSetCustomParent_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMaterialInstanceNode_eventSetCustomParent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMaterialInstanceNode_eventSetCustomParent_Parms), &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material Instance" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialInstanceNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMaterialInstanceNode, nullptr, "SetCustomParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::InterchangeMaterialInstanceNode_eventSetCustomParent_Parms), Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMaterialInstanceNode);
	UClass* Z_Construct_UClass_UInterchangeMaterialInstanceNode_NoRegister()
	{
		return UInterchangeMaterialInstanceNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeMaterialInstanceNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeMaterialInstanceNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeMaterialInstanceNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddScalarParameterValue, "AddScalarParameterValue" }, // 1389243715
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddStaticSwitchParameterValue, "AddStaticSwitchParameterValue" }, // 1630404693
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddTextureParameterValue, "AddTextureParameterValue" }, // 1833688801
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_AddVectorParameterValue, "AddVectorParameterValue" }, // 3350508852
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetCustomParent, "GetCustomParent" }, // 2607822308
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetScalarParameterValue, "GetScalarParameterValue" }, // 591207439
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetStaticSwitchParameterValue, "GetStaticSwitchParameterValue" }, // 3469580730
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetTextureParameterValue, "GetTextureParameterValue" }, // 3883887849
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_GetVectorParameterValue, "GetVectorParameterValue" }, // 3920356899
		{ &Z_Construct_UFunction_UInterchangeMaterialInstanceNode_SetCustomParent, "SetCustomParent" }, // 3740809932
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeMaterialInstanceNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeMaterialInstanceNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialInstanceNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeMaterialInstanceNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMaterialInstanceNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMaterialInstanceNode_Statics::ClassParams = {
		&UInterchangeMaterialInstanceNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeMaterialInstanceNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialInstanceNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeMaterialInstanceNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeMaterialInstanceNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMaterialInstanceNode.OuterSingleton, Z_Construct_UClass_UInterchangeMaterialInstanceNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeMaterialInstanceNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeMaterialInstanceNode>()
	{
		return UInterchangeMaterialInstanceNode::StaticClass();
	}
	UInterchangeMaterialInstanceNode::UInterchangeMaterialInstanceNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMaterialInstanceNode);
	UInterchangeMaterialInstanceNode::~UInterchangeMaterialInstanceNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeMaterialInstanceNode, UInterchangeMaterialInstanceNode::StaticClass, TEXT("UInterchangeMaterialInstanceNode"), &Z_Registration_Info_UClass_UInterchangeMaterialInstanceNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMaterialInstanceNode), 2936735673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h_604501791(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialInstanceNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
