// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInputSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputSubsystem() {}
// Cross Module References
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputActionDomainTable_NoRegister();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputSubsystem();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputSubsystem_NoRegister();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
	COMMONINPUT_API UFunction* Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_CommonInput_eventInputMethodChangedDelegate_Parms
		{
			ECommonInputType bNewInputType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bNewInputType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_bNewInputType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics::NewProp_bNewInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics::NewProp_bNewInputType = { "bNewInputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonInput_eventInputMethodChangedDelegate_Parms, bNewInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) }; // 3567225506
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics::NewProp_bNewInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics::NewProp_bNewInputType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonInput, nullptr, "InputMethodChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics::_Script_CommonInput_eventInputMethodChangedDelegate_Parms), Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInputMethodChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InputMethodChangedDelegate, ECommonInputType bNewInputType)
{
	struct _Script_CommonInput_eventInputMethodChangedDelegate_Parms
	{
		ECommonInputType bNewInputType;
	};
	_Script_CommonInput_eventInputMethodChangedDelegate_Parms Parms;
	Parms.bNewInputType=bNewInputType;
	InputMethodChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCommonInputSubsystem::execBroadcastInputMethodChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastInputMethodChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonInputSubsystem::execShouldShowInputKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldShowInputKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonInputSubsystem::execIsUsingPointerInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingPointerInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonInputSubsystem::execSetGamepadInputType)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InGamepadInputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGamepadInputType(Z_Param_InGamepadInputType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonInputSubsystem::execGetCurrentGamepadName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCurrentGamepadName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonInputSubsystem::execSetCurrentInputType)
	{
		P_GET_ENUM(ECommonInputType,Z_Param_NewInputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentInputType(ECommonInputType(Z_Param_NewInputType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonInputSubsystem::execGetDefaultInputType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECommonInputType*)Z_Param__Result=P_THIS->GetDefaultInputType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonInputSubsystem::execGetCurrentInputType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECommonInputType*)Z_Param__Result=P_THIS->GetCurrentInputType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonInputSubsystem::execIsInputMethodActive)
	{
		P_GET_ENUM(ECommonInputType,Z_Param_InputMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInputMethodActive(ECommonInputType(Z_Param_InputMethod));
		P_NATIVE_END;
	}
	void UCommonInputSubsystem::StaticRegisterNativesUCommonInputSubsystem()
	{
		UClass* Class = UCommonInputSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastInputMethodChanged", &UCommonInputSubsystem::execBroadcastInputMethodChanged },
			{ "GetCurrentGamepadName", &UCommonInputSubsystem::execGetCurrentGamepadName },
			{ "GetCurrentInputType", &UCommonInputSubsystem::execGetCurrentInputType },
			{ "GetDefaultInputType", &UCommonInputSubsystem::execGetDefaultInputType },
			{ "IsInputMethodActive", &UCommonInputSubsystem::execIsInputMethodActive },
			{ "IsUsingPointerInput", &UCommonInputSubsystem::execIsUsingPointerInput },
			{ "SetCurrentInputType", &UCommonInputSubsystem::execSetCurrentInputType },
			{ "SetGamepadInputType", &UCommonInputSubsystem::execSetGamepadInputType },
			{ "ShouldShowInputKeys", &UCommonInputSubsystem::execShouldShowInputKeys },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_BroadcastInputMethodChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_BroadcastInputMethodChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_BroadcastInputMethodChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, nullptr, "BroadcastInputMethodChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_BroadcastInputMethodChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_BroadcastInputMethodChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_BroadcastInputMethodChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_BroadcastInputMethodChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics
	{
		struct CommonInputSubsystem_eventGetCurrentGamepadName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonInputSubsystem_eventGetCurrentGamepadName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonInputSubsystem" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, nullptr, "GetCurrentGamepadName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::CommonInputSubsystem_eventGetCurrentGamepadName_Parms), Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics
	{
		struct CommonInputSubsystem_eventGetCurrentInputType_Parms
		{
			ECommonInputType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonInputSubsystem_eventGetCurrentInputType_Parms, ReturnValue), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) }; // 3567225506
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonInputSubsystem" },
		{ "Comment", "/** The current input type based on the last input received on the device. */" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
		{ "ToolTip", "The current input type based on the last input received on the device." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, nullptr, "GetCurrentInputType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::CommonInputSubsystem_eventGetCurrentInputType_Parms), Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics
	{
		struct CommonInputSubsystem_eventGetDefaultInputType_Parms
		{
			ECommonInputType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonInputSubsystem_eventGetDefaultInputType_Parms, ReturnValue), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) }; // 3567225506
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonInputSubsystem" },
		{ "Comment", "/** The default input type for the current platform. */" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
		{ "ToolTip", "The default input type for the current platform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, nullptr, "GetDefaultInputType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::CommonInputSubsystem_eventGetDefaultInputType_Parms), Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics
	{
		struct CommonInputSubsystem_eventIsInputMethodActive_Parms
		{
			ECommonInputType InputMethod;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMethod;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::NewProp_InputMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::NewProp_InputMethod = { "InputMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonInputSubsystem_eventIsInputMethodActive_Parms, InputMethod), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) }; // 3567225506
	void Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonInputSubsystem_eventIsInputMethodActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonInputSubsystem_eventIsInputMethodActive_Parms), &Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::NewProp_InputMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::NewProp_InputMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonInputSubsystem" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, nullptr, "IsInputMethodActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::CommonInputSubsystem_eventIsInputMethodActive_Parms), Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics
	{
		struct CommonInputSubsystem_eventIsUsingPointerInput_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonInputSubsystem_eventIsUsingPointerInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonInputSubsystem_eventIsUsingPointerInput_Parms), &Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonInputSubsystem" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, nullptr, "IsUsingPointerInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::CommonInputSubsystem_eventIsUsingPointerInput_Parms), Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics
	{
		struct CommonInputSubsystem_eventSetCurrentInputType_Parms
		{
			ECommonInputType NewInputType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewInputType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewInputType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::NewProp_NewInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::NewProp_NewInputType = { "NewInputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonInputSubsystem_eventSetCurrentInputType_Parms, NewInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) }; // 3567225506
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::NewProp_NewInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::NewProp_NewInputType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonInputSubsystem" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, nullptr, "SetCurrentInputType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::CommonInputSubsystem_eventSetCurrentInputType_Parms), Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics
	{
		struct CommonInputSubsystem_eventSetGamepadInputType_Parms
		{
			FName InGamepadInputType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGamepadInputType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InGamepadInputType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::NewProp_InGamepadInputType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::NewProp_InGamepadInputType = { "InGamepadInputType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonInputSubsystem_eventSetGamepadInputType_Parms, InGamepadInputType), METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::NewProp_InGamepadInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::NewProp_InGamepadInputType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::NewProp_InGamepadInputType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonInputSubsystem" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, nullptr, "SetGamepadInputType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::CommonInputSubsystem_eventSetGamepadInputType_Parms), Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics
	{
		struct CommonInputSubsystem_eventShouldShowInputKeys_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonInputSubsystem_eventShouldShowInputKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonInputSubsystem_eventShouldShowInputKeys_Parms), &Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonInputSubsystem" },
		{ "Comment", "/** Should display indicators for the current input device on screen.  This is needed when capturing videos, but we don't want to reveal the capture source device. */" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
		{ "ToolTip", "Should display indicators for the current input device on screen.  This is needed when capturing videos, but we don't want to reveal the capture source device." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, nullptr, "ShouldShowInputKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::CommonInputSubsystem_eventShouldShowInputKeys_Parms), Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonInputSubsystem);
	UClass* Z_Construct_UClass_UCommonInputSubsystem_NoRegister()
	{
		return UCommonInputSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCommonInputSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInputMethodChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputMethodChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfInputMethodChangesRecently_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfInputMethodChangesRecently;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInputMethodChangeTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LastInputMethodChangeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastTimeInputMethodThrashingBegan_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LastTimeInputMethodThrashingBegan;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LastInputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LastInputType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentInputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentInputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadInputType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GamepadInputType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentInputLocks_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentInputLocks_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentInputLocks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputLocks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CurrentInputLocks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionDomainTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionDomainTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadSimulatedClick_MetaData[];
#endif
		static void NewProp_bIsGamepadSimulatedClick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadSimulatedClick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonInputSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonInputSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonInputSubsystem_BroadcastInputMethodChanged, "BroadcastInputMethodChanged" }, // 1907683959
		{ &Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadName, "GetCurrentGamepadName" }, // 1335161726
		{ &Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType, "GetCurrentInputType" }, // 163486540
		{ &Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType, "GetDefaultInputType" }, // 327599656
		{ &Z_Construct_UFunction_UCommonInputSubsystem_IsInputMethodActive, "IsInputMethodActive" }, // 1180805793
		{ &Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput, "IsUsingPointerInput" }, // 625480113
		{ &Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType, "SetCurrentInputType" }, // 648008778
		{ &Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType, "SetGamepadInputType" }, // 3032928937
		{ &Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys, "ShouldShowInputKeys" }, // 3757504894
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "CommonInput" },
		{ "IncludePath", "CommonInputSubsystem.h" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_OnInputMethodChanged_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "CommonInputSubsystem" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_OnInputMethodChanged = { "OnInputMethodChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, OnInputMethodChanged), Z_Construct_UDelegateFunction_CommonInput_InputMethodChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_OnInputMethodChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_OnInputMethodChanged_MetaData)) }; // 2974414720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_NumberOfInputMethodChangesRecently_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_NumberOfInputMethodChangesRecently = { "NumberOfInputMethodChangesRecently", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, NumberOfInputMethodChangesRecently), METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_NumberOfInputMethodChangesRecently_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_NumberOfInputMethodChangesRecently_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputMethodChangeTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputMethodChangeTime = { "LastInputMethodChangeTime", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, LastInputMethodChangeTime), METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputMethodChangeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputMethodChangeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastTimeInputMethodThrashingBegan_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastTimeInputMethodThrashingBegan = { "LastTimeInputMethodThrashingBegan", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, LastTimeInputMethodThrashingBegan), METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastTimeInputMethodThrashingBegan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastTimeInputMethodThrashingBegan_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType = { "LastInputType", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, LastInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType_MetaData)) }; // 3567225506
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType = { "CurrentInputType", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, CurrentInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType_MetaData)) }; // 3567225506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_GamepadInputType_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_GamepadInputType = { "GamepadInputType", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, GamepadInputType), METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_GamepadInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_GamepadInputType_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_ValueProp = { "CurrentInputLocks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) }; // 3567225506
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_Key_KeyProp = { "CurrentInputLocks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks = { "CurrentInputLocks", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, CurrentInputLocks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_MetaData)) }; // 3567225506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_ActionDomainTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_ActionDomainTable = { "ActionDomainTable", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, ActionDomainTable), Z_Construct_UClass_UCommonInputActionDomainTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_ActionDomainTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_ActionDomainTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick_MetaData[] = {
		{ "Comment", "/** Is the current click simulated by the gamepad's face button down/right (platform dependent) */" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
		{ "ToolTip", "Is the current click simulated by the gamepad's face button down/right (platform dependent)" },
	};
#endif
	void Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick_SetBit(void* Obj)
	{
		((UCommonInputSubsystem*)Obj)->bIsGamepadSimulatedClick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick = { "bIsGamepadSimulatedClick", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonInputSubsystem), &Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonInputSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_OnInputMethodChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_NumberOfInputMethodChangesRecently,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputMethodChangeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastTimeInputMethodThrashingBegan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_GamepadInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_ActionDomainTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonInputSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonInputSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonInputSubsystem_Statics::ClassParams = {
		&UCommonInputSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonInputSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonInputSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCommonInputSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonInputSubsystem.OuterSingleton, Z_Construct_UClass_UCommonInputSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonInputSubsystem.OuterSingleton;
	}
	template<> COMMONINPUT_API UClass* StaticClass<UCommonInputSubsystem>()
	{
		return UCommonInputSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonInputSubsystem);
	UCommonInputSubsystem::~UCommonInputSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonInputSubsystem, UCommonInputSubsystem::StaticClass, TEXT("UCommonInputSubsystem"), &Z_Registration_Info_UClass_UCommonInputSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonInputSubsystem), 34755276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_463131203(TEXT("/Script/CommonInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
