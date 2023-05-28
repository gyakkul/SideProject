// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RCVirtualProperty.h"
#include "PropertyBag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCVirtualProperty() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyBase();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyBase_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyContainerBase_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyInContainer();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyInContainer_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertySelfContainer();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertySelfContainer_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPreset_NoRegister();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetPropertyName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetPropertyName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueColor)
	{
		P_GET_STRUCT_REF(FColor,Z_Param_Out_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueColor(Z_Param_Out_InColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueRotator)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueRotator(Z_Param_Out_InRotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueVector(Z_Param_Out_InVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueNumericInteger)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_InInt64Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueNumericInteger(Z_Param_InInt64Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InTextValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueText(Z_Param_Out_InTextValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InNameValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueName(Z_Param_Out_InNameValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InStringValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueString(Z_Param_InStringValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueDouble)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InDouble);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueDouble(Z_Param_InDouble);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueFloat(Z_Param_InFloat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueUint64)
	{
		P_GET_PROPERTY(FUInt64Property,Z_Param_InUInt64);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueUint64(Z_Param_InUInt64);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueInt64)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_InInt64);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueInt64(Z_Param_InInt64);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueUInt32)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_InUInt32);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueUInt32(Z_Param_InUInt32);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueInt32)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InInt32);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueInt32(Z_Param_InInt32);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueUint16)
	{
		P_GET_PROPERTY(FUInt16Property,Z_Param_InUInt16);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueUint16(Z_Param_InUInt16);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueInt16)
	{
		P_GET_PROPERTY(FInt16Property,Z_Param_InInt16);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueInt16(Z_Param_InInt16);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueByte)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InByte);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueByte(Z_Param_InByte);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueInt8)
	{
		P_GET_PROPERTY(FInt8Property,Z_Param_InInt8);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueInt8(Z_Param_InInt8);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execSetValueBool)
	{
		P_GET_UBOOL(Z_Param_InBoolValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValueBool(Z_Param_InBoolValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetDisplayValueAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDisplayValueAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueColor)
	{
		P_GET_STRUCT_REF(FColor,Z_Param_Out_OutColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueColor(Z_Param_Out_OutColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueRotator)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueRotator(Z_Param_Out_OutRotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueVector(Z_Param_Out_OutVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueNumericInteger)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutInt64Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueNumericInteger(Z_Param_Out_OutInt64Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutTextValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueText(Z_Param_Out_OutTextValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutNameValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueName(Z_Param_Out_OutNameValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueString)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutStringValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueString(Z_Param_Out_OutStringValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueDouble)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutDouble);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueDouble(Z_Param_Out_OutDouble);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueFloat)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutFloat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueFloat(Z_Param_Out_OutFloat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueUint64)
	{
		P_GET_PROPERTY_REF(FUInt64Property,Z_Param_Out_OuyUInt64);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueUint64(Z_Param_Out_OuyUInt64);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueInt64)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OuyInt64);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueInt64(Z_Param_Out_OuyInt64);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueUInt32)
	{
		P_GET_PROPERTY_REF(FUInt32Property,Z_Param_Out_OutUInt32);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueUInt32(Z_Param_Out_OutUInt32);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueInt32)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutInt32);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueInt32(Z_Param_Out_OutInt32);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueUint16)
	{
		P_GET_PROPERTY_REF(FUInt16Property,Z_Param_Out_OutUInt16);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueUint16(Z_Param_Out_OutUInt16);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueInt16)
	{
		P_GET_PROPERTY_REF(FInt16Property,Z_Param_Out_OutInt16);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueInt16(Z_Param_Out_OutInt16);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueByte)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutByte);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueByte(Z_Param_Out_OutByte);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueInt8)
	{
		P_GET_PROPERTY_REF(FInt8Property,Z_Param_Out_OutInt8);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueInt8(Z_Param_Out_OutInt8);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCVirtualPropertyBase::execGetValueBool)
	{
		P_GET_UBOOL_REF(Z_Param_Out_OutBoolValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueBool(Z_Param_Out_OutBoolValue);
		P_NATIVE_END;
	}
	void URCVirtualPropertyBase::StaticRegisterNativesURCVirtualPropertyBase()
	{
		UClass* Class = URCVirtualPropertyBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayValueAsString", &URCVirtualPropertyBase::execGetDisplayValueAsString },
			{ "GetPropertyName", &URCVirtualPropertyBase::execGetPropertyName },
			{ "GetValueBool", &URCVirtualPropertyBase::execGetValueBool },
			{ "GetValueByte", &URCVirtualPropertyBase::execGetValueByte },
			{ "GetValueColor", &URCVirtualPropertyBase::execGetValueColor },
			{ "GetValueDouble", &URCVirtualPropertyBase::execGetValueDouble },
			{ "GetValueFloat", &URCVirtualPropertyBase::execGetValueFloat },
			{ "GetValueInt16", &URCVirtualPropertyBase::execGetValueInt16 },
			{ "GetValueInt32", &URCVirtualPropertyBase::execGetValueInt32 },
			{ "GetValueInt64", &URCVirtualPropertyBase::execGetValueInt64 },
			{ "GetValueInt8", &URCVirtualPropertyBase::execGetValueInt8 },
			{ "GetValueName", &URCVirtualPropertyBase::execGetValueName },
			{ "GetValueNumericInteger", &URCVirtualPropertyBase::execGetValueNumericInteger },
			{ "GetValueRotator", &URCVirtualPropertyBase::execGetValueRotator },
			{ "GetValueString", &URCVirtualPropertyBase::execGetValueString },
			{ "GetValueText", &URCVirtualPropertyBase::execGetValueText },
			{ "GetValueUint16", &URCVirtualPropertyBase::execGetValueUint16 },
			{ "GetValueUInt32", &URCVirtualPropertyBase::execGetValueUInt32 },
			{ "GetValueUint64", &URCVirtualPropertyBase::execGetValueUint64 },
			{ "GetValueVector", &URCVirtualPropertyBase::execGetValueVector },
			{ "SetValueBool", &URCVirtualPropertyBase::execSetValueBool },
			{ "SetValueByte", &URCVirtualPropertyBase::execSetValueByte },
			{ "SetValueColor", &URCVirtualPropertyBase::execSetValueColor },
			{ "SetValueDouble", &URCVirtualPropertyBase::execSetValueDouble },
			{ "SetValueFloat", &URCVirtualPropertyBase::execSetValueFloat },
			{ "SetValueInt16", &URCVirtualPropertyBase::execSetValueInt16 },
			{ "SetValueInt32", &URCVirtualPropertyBase::execSetValueInt32 },
			{ "SetValueInt64", &URCVirtualPropertyBase::execSetValueInt64 },
			{ "SetValueInt8", &URCVirtualPropertyBase::execSetValueInt8 },
			{ "SetValueName", &URCVirtualPropertyBase::execSetValueName },
			{ "SetValueNumericInteger", &URCVirtualPropertyBase::execSetValueNumericInteger },
			{ "SetValueRotator", &URCVirtualPropertyBase::execSetValueRotator },
			{ "SetValueString", &URCVirtualPropertyBase::execSetValueString },
			{ "SetValueText", &URCVirtualPropertyBase::execSetValueText },
			{ "SetValueUint16", &URCVirtualPropertyBase::execSetValueUint16 },
			{ "SetValueUInt32", &URCVirtualPropertyBase::execSetValueUInt32 },
			{ "SetValueUint64", &URCVirtualPropertyBase::execSetValueUint64 },
			{ "SetValueVector", &URCVirtualPropertyBase::execSetValueVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString_Statics
	{
		struct RCVirtualPropertyBase_eventGetDisplayValueAsString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetDisplayValueAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Infers correct type internally, fetches value from memory and returns the value as a string \n\x09* that can be immediately used for dispaly (without needing to create a generic readonly property widget)\n\x09*/" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Infers correct type internally, fetches value from memory and returns the value as a string\nthat can be immediately used for dispaly (without needing to create a generic readonly property widget)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetDisplayValueAsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString_Statics::RCVirtualPropertyBase_eventGetDisplayValueAsString_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName_Statics
	{
		struct RCVirtualPropertyBase_eventGetPropertyName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetPropertyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get FProperty Name */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get FProperty Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetPropertyName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName_Statics::RCVirtualPropertyBase_eventGetPropertyName_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueBool_Parms
		{
			bool OutBoolValue;
			bool ReturnValue;
		};
		static void NewProp_OutBoolValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutBoolValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::NewProp_OutBoolValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueBool_Parms*)Obj)->OutBoolValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::NewProp_OutBoolValue = { "OutBoolValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueBool_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::NewProp_OutBoolValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueBool_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::NewProp_OutBoolValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get Bool value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Bool value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::RCVirtualPropertyBase_eventGetValueBool_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueByte_Parms
		{
			uint8 OutByte;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutByte;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::NewProp_OutByte = { "OutByte", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueByte_Parms, OutByte), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueByte_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueByte_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::NewProp_OutByte,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get Byte value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Byte value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueByte", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::RCVirtualPropertyBase_eventGetValueByte_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueColor_Parms
		{
			FColor OutColor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutColor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::NewProp_OutColor = { "OutColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueColor_Parms, OutColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueColor_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::NewProp_OutColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get Color value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Color value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::RCVirtualPropertyBase_eventGetValueColor_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueDouble_Parms
		{
			double OutDouble;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OutDouble;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::NewProp_OutDouble = { "OutDouble", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueDouble_Parms, OutDouble), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueDouble_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueDouble_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::NewProp_OutDouble,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get Double value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Double value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueDouble", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::RCVirtualPropertyBase_eventGetValueDouble_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueFloat_Parms
		{
			float OutFloat;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutFloat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::NewProp_OutFloat = { "OutFloat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueFloat_Parms, OutFloat), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueFloat_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::NewProp_OutFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get Float value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Float value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::RCVirtualPropertyBase_eventGetValueFloat_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueInt16_Parms
		{
			int16 OutInt16;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt16PropertyParams NewProp_OutInt16;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::NewProp_OutInt16 = { "OutInt16", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueInt16_Parms, OutInt16), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueInt16_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueInt16_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::NewProp_OutInt16,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Get Int16 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Int16 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueInt16", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::RCVirtualPropertyBase_eventGetValueInt16_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueInt32_Parms
		{
			int32 OutInt32;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutInt32;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::NewProp_OutInt32 = { "OutInt32", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueInt32_Parms, OutInt32), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueInt32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueInt32_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::NewProp_OutInt32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get Int32 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Int32 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueInt32", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::RCVirtualPropertyBase_eventGetValueInt32_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueInt64_Parms
		{
			int64 OuyInt64;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_OuyInt64;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::NewProp_OuyInt64 = { "OuyInt64", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueInt64_Parms, OuyInt64), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueInt64_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueInt64_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::NewProp_OuyInt64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get Int64 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Int64 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueInt64", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::RCVirtualPropertyBase_eventGetValueInt64_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueInt8_Parms
		{
			int8 OutInt8;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt8PropertyParams NewProp_OutInt8;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::NewProp_OutInt8 = { "OutInt8", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueInt8_Parms, OutInt8), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueInt8_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueInt8_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::NewProp_OutInt8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Get Int8 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Int8 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueInt8", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::RCVirtualPropertyBase_eventGetValueInt8_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueName_Parms
		{
			FName OutNameValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutNameValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::NewProp_OutNameValue = { "OutNameValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueName_Parms, OutNameValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueName_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::NewProp_OutNameValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get Name value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Name value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::RCVirtualPropertyBase_eventGetValueName_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueNumericInteger_Parms
		{
			int64 OutInt64Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_OutInt64Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::NewProp_OutInt64Value = { "OutInt64Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueNumericInteger_Parms, OutInt64Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueNumericInteger_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueNumericInteger_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::NewProp_OutInt64Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get Numeric value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Numeric value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueNumericInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::RCVirtualPropertyBase_eventGetValueNumericInteger_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueRotator_Parms
		{
			FRotator OutRotator;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotator;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::NewProp_OutRotator = { "OutRotator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueRotator_Parms, OutRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueRotator_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueRotator_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::NewProp_OutRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get Rotator value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Rotator value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::RCVirtualPropertyBase_eventGetValueRotator_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueString_Parms
		{
			FString OutStringValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutStringValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::NewProp_OutStringValue = { "OutStringValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueString_Parms, OutStringValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueString_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::NewProp_OutStringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get String value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get String value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueString", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::RCVirtualPropertyBase_eventGetValueString_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueText_Parms
		{
			FText OutTextValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutTextValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::NewProp_OutTextValue = { "OutTextValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueText_Parms, OutTextValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueText_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::NewProp_OutTextValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get Text value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Text value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueText", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::RCVirtualPropertyBase_eventGetValueText_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueUint16_Parms
		{
			uint16 OutUInt16;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_OutUInt16;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::NewProp_OutUInt16 = { "OutUInt16", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueUint16_Parms, OutUInt16), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueUint16_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueUint16_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::NewProp_OutUInt16,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Get Uint16 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Uint16 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueUint16", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::RCVirtualPropertyBase_eventGetValueUint16_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueUInt32_Parms
		{
			uint32 OutUInt32;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutUInt32;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::NewProp_OutUInt32 = { "OutUInt32", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueUInt32_Parms, OutUInt32), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueUInt32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueUInt32_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::NewProp_OutUInt32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Get Uint32 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Uint32 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueUInt32", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::RCVirtualPropertyBase_eventGetValueUInt32_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueUint64_Parms
		{
			uint64 OuyUInt64;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_OuyUInt64;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::NewProp_OuyUInt64 = { "OuyUInt64", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueUint64_Parms, OuyUInt64), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueUint64_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueUint64_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::NewProp_OuyUInt64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Get Uint64 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Uint64 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueUint64", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::RCVirtualPropertyBase_eventGetValueUint64_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics
	{
		struct RCVirtualPropertyBase_eventGetValueVector_Parms
		{
			FVector OutVector;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutVector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::NewProp_OutVector = { "OutVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventGetValueVector_Parms, OutVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventGetValueVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventGetValueVector_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::NewProp_OutVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Get Vector value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Get Vector value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "GetValueVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::RCVirtualPropertyBase_eventGetValueVector_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueBool_Parms
		{
			bool InBoolValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBoolValue_MetaData[];
#endif
		static void NewProp_InBoolValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InBoolValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::NewProp_InBoolValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::NewProp_InBoolValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueBool_Parms*)Obj)->InBoolValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::NewProp_InBoolValue = { "InBoolValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueBool_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::NewProp_InBoolValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::NewProp_InBoolValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::NewProp_InBoolValue_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueBool_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::NewProp_InBoolValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Set Bool value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Bool value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::RCVirtualPropertyBase_eventSetValueBool_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueByte_Parms
		{
			uint8 InByte;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InByte_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InByte;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::NewProp_InByte_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::NewProp_InByte = { "InByte", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueByte_Parms, InByte), nullptr, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::NewProp_InByte_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::NewProp_InByte_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueByte_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueByte_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::NewProp_InByte,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Set Byte value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Byte value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueByte", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::RCVirtualPropertyBase_eventSetValueByte_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueColor_Parms
		{
			FColor InColor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueColor_Parms, InColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::NewProp_InColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::NewProp_InColor_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueColor_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::NewProp_InColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Set Color value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Color value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::RCVirtualPropertyBase_eventSetValueColor_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueDouble_Parms
		{
			double InDouble;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDouble_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InDouble;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::NewProp_InDouble_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::NewProp_InDouble = { "InDouble", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueDouble_Parms, InDouble), METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::NewProp_InDouble_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::NewProp_InDouble_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueDouble_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueDouble_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::NewProp_InDouble,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Set Double value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Double value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueDouble", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::RCVirtualPropertyBase_eventSetValueDouble_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueFloat_Parms
		{
			float InFloat;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::NewProp_InFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueFloat_Parms, InFloat), METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::NewProp_InFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::NewProp_InFloat_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueFloat_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::NewProp_InFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Set Float value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Float value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::RCVirtualPropertyBase_eventSetValueFloat_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueInt16_Parms
		{
			int16 InInt16;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInt16_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_InInt16;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::NewProp_InInt16_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::NewProp_InInt16 = { "InInt16", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueInt16_Parms, InInt16), METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::NewProp_InInt16_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::NewProp_InInt16_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueInt16_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueInt16_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::NewProp_InInt16,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Set Int16 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Int16 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueInt16", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::RCVirtualPropertyBase_eventSetValueInt16_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueInt32_Parms
		{
			int32 InInt32;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInt32_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInt32;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::NewProp_InInt32_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::NewProp_InInt32 = { "InInt32", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueInt32_Parms, InInt32), METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::NewProp_InInt32_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::NewProp_InInt32_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueInt32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueInt32_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::NewProp_InInt32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Set Int32 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Int32 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueInt32", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::RCVirtualPropertyBase_eventSetValueInt32_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueInt64_Parms
		{
			int64 InInt64;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInt64_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_InInt64;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::NewProp_InInt64_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::NewProp_InInt64 = { "InInt64", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueInt64_Parms, InInt64), METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::NewProp_InInt64_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::NewProp_InInt64_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueInt64_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueInt64_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::NewProp_InInt64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Set Int64 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Int64 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueInt64", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::RCVirtualPropertyBase_eventSetValueInt64_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueInt8_Parms
		{
			int8 InInt8;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInt8_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_InInt8;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::NewProp_InInt8_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::NewProp_InInt8 = { "InInt8", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueInt8_Parms, InInt8), METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::NewProp_InInt8_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::NewProp_InInt8_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueInt8_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueInt8_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::NewProp_InInt8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Set Int8 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Int8 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueInt8", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::RCVirtualPropertyBase_eventSetValueInt8_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueName_Parms
		{
			FName InNameValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNameValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InNameValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::NewProp_InNameValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::NewProp_InNameValue = { "InNameValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueName_Parms, InNameValue), METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::NewProp_InNameValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::NewProp_InNameValue_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueName_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::NewProp_InNameValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Set Name value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Name value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::RCVirtualPropertyBase_eventSetValueName_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueNumericInteger_Parms
		{
			int64 InInt64Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInt64Value_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_InInt64Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::NewProp_InInt64Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::NewProp_InInt64Value = { "InInt64Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueNumericInteger_Parms, InInt64Value), METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::NewProp_InInt64Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::NewProp_InInt64Value_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueNumericInteger_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueNumericInteger_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::NewProp_InInt64Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Set Numeric value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Numeric value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueNumericInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::RCVirtualPropertyBase_eventSetValueNumericInteger_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueRotator_Parms
		{
			FRotator InRotator;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRotator;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::NewProp_InRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::NewProp_InRotator = { "InRotator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueRotator_Parms, InRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::NewProp_InRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::NewProp_InRotator_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueRotator_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueRotator_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::NewProp_InRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Set Rotator value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Rotator value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::RCVirtualPropertyBase_eventSetValueRotator_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueString_Parms
		{
			FString InStringValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStringValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InStringValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::NewProp_InStringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::NewProp_InStringValue = { "InStringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueString_Parms, InStringValue), METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::NewProp_InStringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::NewProp_InStringValue_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueString_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::NewProp_InStringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Set String value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set String value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueString", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::RCVirtualPropertyBase_eventSetValueString_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueText_Parms
		{
			FText InTextValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTextValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InTextValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::NewProp_InTextValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::NewProp_InTextValue = { "InTextValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueText_Parms, InTextValue), METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::NewProp_InTextValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::NewProp_InTextValue_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueText_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::NewProp_InTextValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Set Text value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Text value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueText", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::RCVirtualPropertyBase_eventSetValueText_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueUint16_Parms
		{
			uint16 InUInt16;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUInt16_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_InUInt16;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::NewProp_InUInt16_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::NewProp_InUInt16 = { "InUInt16", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueUint16_Parms, InUInt16), METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::NewProp_InUInt16_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::NewProp_InUInt16_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueUint16_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueUint16_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::NewProp_InUInt16,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Set Uint16 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Uint16 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueUint16", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::RCVirtualPropertyBase_eventSetValueUint16_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueUInt32_Parms
		{
			uint32 InUInt32;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUInt32_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_InUInt32;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::NewProp_InUInt32_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::NewProp_InUInt32 = { "InUInt32", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueUInt32_Parms, InUInt32), METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::NewProp_InUInt32_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::NewProp_InUInt32_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueUInt32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueUInt32_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::NewProp_InUInt32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Set Uint32 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Uint32 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueUInt32", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::RCVirtualPropertyBase_eventSetValueUInt32_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueUint64_Parms
		{
			uint64 InUInt64;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUInt64_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_InUInt64;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::NewProp_InUInt64_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::NewProp_InUInt64 = { "InUInt64", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueUint64_Parms, InUInt64), METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::NewProp_InUInt64_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::NewProp_InUInt64_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueUint64_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueUint64_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::NewProp_InUInt64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Set Uint64 value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Uint64 value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueUint64", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::RCVirtualPropertyBase_eventSetValueUint64_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics
	{
		struct RCVirtualPropertyBase_eventSetValueVector_Parms
		{
			FVector InVector;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCVirtualPropertyBase_eventSetValueVector_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::NewProp_InVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::NewProp_InVector_MetaData)) };
	void Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RCVirtualPropertyBase_eventSetValueVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RCVirtualPropertyBase_eventSetValueVector_Parms), &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::NewProp_InVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Behaviour" },
		{ "Comment", "/** Set Vector value from Virtual Property */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Set Vector value from Virtual Property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCVirtualPropertyBase, nullptr, "SetValueVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::RCVirtualPropertyBase_eventSetValueVector_Parms), Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCVirtualPropertyBase);
	UClass* Z_Construct_UClass_URCVirtualPropertyBase_NoRegister()
	{
		return URCVirtualPropertyBase::StaticClass();
	}
	struct Z_Construct_UClass_URCVirtualPropertyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetWeakPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PresetWeakPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DisplayIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Metadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCVirtualPropertyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URCVirtualPropertyBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetDisplayValueAsString, "GetDisplayValueAsString" }, // 3470456095
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetPropertyName, "GetPropertyName" }, // 1283632820
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueBool, "GetValueBool" }, // 1677015079
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueByte, "GetValueByte" }, // 594162392
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueColor, "GetValueColor" }, // 3633845465
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueDouble, "GetValueDouble" }, // 1269681574
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueFloat, "GetValueFloat" }, // 1617151001
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt16, "GetValueInt16" }, // 3907251570
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt32, "GetValueInt32" }, // 2467520000
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt64, "GetValueInt64" }, // 2922673760
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueInt8, "GetValueInt8" }, // 2534970998
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueName, "GetValueName" }, // 870210367
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueNumericInteger, "GetValueNumericInteger" }, // 4003093087
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueRotator, "GetValueRotator" }, // 3155424102
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueString, "GetValueString" }, // 266113159
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueText, "GetValueText" }, // 2105609929
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint16, "GetValueUint16" }, // 385993366
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUInt32, "GetValueUInt32" }, // 1511144591
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueUint64, "GetValueUint64" }, // 2055182378
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_GetValueVector, "GetValueVector" }, // 2260998768
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueBool, "SetValueBool" }, // 24939507
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueByte, "SetValueByte" }, // 3327864788
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueColor, "SetValueColor" }, // 3321298912
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueDouble, "SetValueDouble" }, // 2461577412
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueFloat, "SetValueFloat" }, // 3073940309
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt16, "SetValueInt16" }, // 3032164919
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt32, "SetValueInt32" }, // 3846345259
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt64, "SetValueInt64" }, // 3015618462
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueInt8, "SetValueInt8" }, // 1162605649
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueName, "SetValueName" }, // 2018675432
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueNumericInteger, "SetValueNumericInteger" }, // 3586836955
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueRotator, "SetValueRotator" }, // 3341447627
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueString, "SetValueString" }, // 1339663438
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueText, "SetValueText" }, // 1840379
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint16, "SetValueUint16" }, // 3302356310
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUInt32, "SetValueUInt32" }, // 3530212839
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueUint64, "SetValueUint64" }, // 2176459245
		{ &Z_Construct_UFunction_URCVirtualPropertyBase_SetValueVector, "SetValueVector" }, // 2640118376
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertyBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for dynamic virtual properties\n * Remote Control Virtual Properties using Property Bag and FInstancedPropertyBag to serialize FProperties values and UStruct \n */" },
		{ "IncludePath", "RCVirtualProperty.h" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Base class for dynamic virtual properties\nRemote Control Virtual Properties using Property Bag and FInstancedPropertyBag to serialize FProperties values and UStruct" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** Unique property name */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Unique property name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCVirtualPropertyBase, PropertyName), METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/** Property Id */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Property Id" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCVirtualPropertyBase, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_PresetWeakPtr_MetaData[] = {
		{ "Comment", "/** Pointer to Remote Control Preset */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Pointer to Remote Control Preset" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_PresetWeakPtr = { "PresetWeakPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCVirtualPropertyBase, PresetWeakPtr), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_PresetWeakPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_PresetWeakPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** User friendly name of the Controller*/" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "User friendly name of the Controller" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCVirtualPropertyBase, DisplayName), METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_DisplayIndex_MetaData[] = {
		{ "Comment", "/** User configurable Display Index for this Virtual Property (as Logic Controller) when represented as a row in the RC Logic Controllers list  */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "User configurable Display Index for this Virtual Property (as Logic Controller) when represented as a row in the RC Logic Controllers list" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_DisplayIndex = { "DisplayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCVirtualPropertyBase, DisplayIndex), METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_DisplayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_DisplayIndex_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Metadata_MetaData[] = {
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCVirtualPropertyBase, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCVirtualPropertyBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_PresetWeakPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_DisplayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Metadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Metadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertyBase_Statics::NewProp_Metadata,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCVirtualPropertyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCVirtualPropertyBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCVirtualPropertyBase_Statics::ClassParams = {
		&URCVirtualPropertyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URCVirtualPropertyBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCVirtualPropertyBase()
	{
		if (!Z_Registration_Info_UClass_URCVirtualPropertyBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCVirtualPropertyBase.OuterSingleton, Z_Construct_UClass_URCVirtualPropertyBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCVirtualPropertyBase.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URCVirtualPropertyBase>()
	{
		return URCVirtualPropertyBase::StaticClass();
	}
	URCVirtualPropertyBase::URCVirtualPropertyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCVirtualPropertyBase);
	URCVirtualPropertyBase::~URCVirtualPropertyBase() {}
	void URCVirtualPropertyInContainer::StaticRegisterNativesURCVirtualPropertyInContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCVirtualPropertyInContainer);
	UClass* Z_Construct_UClass_URCVirtualPropertyInContainer_NoRegister()
	{
		return URCVirtualPropertyInContainer::StaticClass();
	}
	struct Z_Construct_UClass_URCVirtualPropertyInContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerWeakPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ContainerWeakPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCVirtualPropertyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Remote Control Virtual Property which is stores in container with many properties\n * Where Property Bag has more then one Property \n */" },
		{ "IncludePath", "RCVirtualProperty.h" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Remote Control Virtual Property which is stores in container with many properties\nWhere Property Bag has more then one Property" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::NewProp_ContainerWeakPtr_MetaData[] = {
		{ "Comment", "/** Pointer to container where stores Virtual Properties */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Pointer to container where stores Virtual Properties" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::NewProp_ContainerWeakPtr = { "ContainerWeakPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCVirtualPropertyInContainer, ContainerWeakPtr), Z_Construct_UClass_URCVirtualPropertyContainerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::NewProp_ContainerWeakPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::NewProp_ContainerWeakPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::NewProp_ContainerWeakPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCVirtualPropertyInContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::ClassParams = {
		&URCVirtualPropertyInContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCVirtualPropertyInContainer()
	{
		if (!Z_Registration_Info_UClass_URCVirtualPropertyInContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCVirtualPropertyInContainer.OuterSingleton, Z_Construct_UClass_URCVirtualPropertyInContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCVirtualPropertyInContainer.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URCVirtualPropertyInContainer>()
	{
		return URCVirtualPropertyInContainer::StaticClass();
	}
	URCVirtualPropertyInContainer::URCVirtualPropertyInContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCVirtualPropertyInContainer);
	URCVirtualPropertyInContainer::~URCVirtualPropertyInContainer() {}
	void URCVirtualPropertySelfContainer::StaticRegisterNativesURCVirtualPropertySelfContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCVirtualPropertySelfContainer);
	UClass* Z_Construct_UClass_URCVirtualPropertySelfContainer_NoRegister()
	{
		return URCVirtualPropertySelfContainer::StaticClass();
	}
	struct Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCVirtualPropertyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Remote Control Virtual Property which is stores in self defined Property Bag\n * In this case SelfContainer holds only single property in the Property Bag\n */" },
		{ "IncludePath", "RCVirtualProperty.h" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Remote Control Virtual Property which is stores in self defined Property Bag\nIn this case SelfContainer holds only single property in the Property Bag" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::NewProp_Bag_MetaData[] = {
		{ "Comment", "/** Instanced property bag for store a bag of properties. */" },
		{ "ModuleRelativePath", "Public/RCVirtualProperty.h" },
		{ "ToolTip", "Instanced property bag for store a bag of properties." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::NewProp_Bag = { "Bag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCVirtualPropertySelfContainer, Bag), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::NewProp_Bag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::NewProp_Bag_MetaData)) }; // 3551882691
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::NewProp_Bag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCVirtualPropertySelfContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::ClassParams = {
		&URCVirtualPropertySelfContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCVirtualPropertySelfContainer()
	{
		if (!Z_Registration_Info_UClass_URCVirtualPropertySelfContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCVirtualPropertySelfContainer.OuterSingleton, Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCVirtualPropertySelfContainer.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URCVirtualPropertySelfContainer>()
	{
		return URCVirtualPropertySelfContainer::StaticClass();
	}
	URCVirtualPropertySelfContainer::URCVirtualPropertySelfContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCVirtualPropertySelfContainer);
	URCVirtualPropertySelfContainer::~URCVirtualPropertySelfContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCVirtualPropertyBase, URCVirtualPropertyBase::StaticClass, TEXT("URCVirtualPropertyBase"), &Z_Registration_Info_UClass_URCVirtualPropertyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCVirtualPropertyBase), 3442023076U) },
		{ Z_Construct_UClass_URCVirtualPropertyInContainer, URCVirtualPropertyInContainer::StaticClass, TEXT("URCVirtualPropertyInContainer"), &Z_Registration_Info_UClass_URCVirtualPropertyInContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCVirtualPropertyInContainer), 180819911U) },
		{ Z_Construct_UClass_URCVirtualPropertySelfContainer, URCVirtualPropertySelfContainer::StaticClass, TEXT("URCVirtualPropertySelfContainer"), &Z_Registration_Info_UClass_URCVirtualPropertySelfContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCVirtualPropertySelfContainer), 3135575038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_2110469774(TEXT("/Script/RemoteControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
