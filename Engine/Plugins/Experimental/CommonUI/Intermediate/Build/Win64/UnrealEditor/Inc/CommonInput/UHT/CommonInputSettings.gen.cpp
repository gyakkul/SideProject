// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInputSettings.h"
#include "CommonInputBaseTypes.h"
#include "Engine/PlatformSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputSettings() {}
// Cross Module References
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputActionDomainTable_NoRegister();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputSettings();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputSettings_NoRegister();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonUIInputData_NoRegister();
	COMMONINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputPlatformBaseData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	DEVELOPERSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformSettings();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
// End Cross Module References
	DEFINE_FUNCTION(UCommonInputSettings::execIsEnhancedInputSupportEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCommonInputSettings::IsEnhancedInputSupportEnabled();
		P_NATIVE_END;
	}
	void UCommonInputSettings::StaticRegisterNativesUCommonInputSettings()
	{
		UClass* Class = UCommonInputSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEnhancedInputSupportEnabled", &UCommonInputSettings::execIsEnhancedInputSupportEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics
	{
		struct CommonInputSettings_eventIsEnhancedInputSupportEnabled_Parms
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
	void Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonInputSettings_eventIsEnhancedInputSupportEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonInputSettings_eventIsEnhancedInputSupportEnabled_Parms), &Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Static version of enhanced input support check, exists to hide based on edit condition */" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
		{ "ToolTip", "Static version of enhanced input support check, exists to hide based on edit condition" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSettings, nullptr, "IsEnhancedInputSupportEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::CommonInputSettings_eventIsEnhancedInputSupportEnabled_Parms), Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonInputSettings);
	UClass* Z_Construct_UClass_UCommonInputSettings_NoRegister()
	{
		return UCommonInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCommonInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputData_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_InputData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformInput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommonInputPlatformData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CommonInputPlatformData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonInputPlatformData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CommonInputPlatformData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInputMethodThrashingProtection_MetaData[];
#endif
		static void NewProp_bEnableInputMethodThrashingProtection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInputMethodThrashingProtection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMethodThrashingLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputMethodThrashingLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMethodThrashingWindowInSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InputMethodThrashingWindowInSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMethodThrashingCooldownInSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InputMethodThrashingCooldownInSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowOutOfFocusDeviceInput_MetaData[];
#endif
		static void NewProp_bAllowOutOfFocusDeviceInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowOutOfFocusDeviceInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDefaultInputConfig_MetaData[];
#endif
		static void NewProp_bEnableDefaultInputConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDefaultInputConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEnhancedInputSupport_MetaData[];
#endif
		static void NewProp_bEnableEnhancedInputSupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEnhancedInputSupport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionDomainTable_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActionDomainTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDataClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InputDataClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionDomainTablePtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionDomainTablePtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonInputSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonInputSettings_IsEnhancedInputSupportEnabled, "IsEnhancedInputSupportEnabled" }, // 301453206
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CommonInputSettings.h" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputData_MetaData[] = {
		{ "AllowAbstract", "FALSE" },
		{ "Category", "Input" },
		{ "Comment", "/** Create a derived asset from UCommonUIInputData to store Input data for your game.*/" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
		{ "ToolTip", "Create a derived asset from UCommonUIInputData to store Input data for your game." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputData = { "InputData", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSettings, InputData), Z_Construct_UClass_UCommonUIInputData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_PlatformInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_PlatformInput = { "PlatformInput", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSettings, PlatformInput), Z_Construct_UScriptStruct_FPerPlatformSettings, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_PlatformInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_PlatformInput_MetaData)) }; // 145519765
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData_ValueProp = { "CommonInputPlatformData", nullptr, (EPropertyFlags)0x0000000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCommonInputPlatformBaseData, METADATA_PARAMS(nullptr, 0) }; // 1741090021
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData_Key_KeyProp = { "CommonInputPlatformData_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData = { "CommonInputPlatformData", nullptr, (EPropertyFlags)0x0040000020004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSettings, CommonInputPlatformData_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData_MetaData)) }; // 1741090021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableInputMethodThrashingProtection_MetaData[] = {
		{ "Category", "Thrashing Settings" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableInputMethodThrashingProtection_SetBit(void* Obj)
	{
		((UCommonInputSettings*)Obj)->bEnableInputMethodThrashingProtection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableInputMethodThrashingProtection = { "bEnableInputMethodThrashingProtection", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonInputSettings), &Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableInputMethodThrashingProtection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableInputMethodThrashingProtection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableInputMethodThrashingProtection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingLimit_MetaData[] = {
		{ "Category", "Thrashing Settings" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingLimit = { "InputMethodThrashingLimit", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSettings, InputMethodThrashingLimit), METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingWindowInSeconds_MetaData[] = {
		{ "Category", "Thrashing Settings" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingWindowInSeconds = { "InputMethodThrashingWindowInSeconds", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSettings, InputMethodThrashingWindowInSeconds), METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingWindowInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingWindowInSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingCooldownInSeconds_MetaData[] = {
		{ "Category", "Thrashing Settings" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingCooldownInSeconds = { "InputMethodThrashingCooldownInSeconds", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSettings, InputMethodThrashingCooldownInSeconds), METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingCooldownInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingCooldownInSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAllowOutOfFocusDeviceInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAllowOutOfFocusDeviceInput_SetBit(void* Obj)
	{
		((UCommonInputSettings*)Obj)->bAllowOutOfFocusDeviceInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAllowOutOfFocusDeviceInput = { "bAllowOutOfFocusDeviceInput", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonInputSettings), &Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAllowOutOfFocusDeviceInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAllowOutOfFocusDeviceInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAllowOutOfFocusDeviceInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableDefaultInputConfig_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Controls whether a default Input Config will be set when the active CommonActivatableWidgets do not specify a desired one.\n\x09* Disable this if you want to control the Input Mode via alternative means.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
		{ "ToolTip", "Controls whether a default Input Config will be set when the active CommonActivatableWidgets do not specify a desired one.\nDisable this if you want to control the Input Mode via alternative means." },
	};
#endif
	void Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableDefaultInputConfig_SetBit(void* Obj)
	{
		((UCommonInputSettings*)Obj)->bEnableDefaultInputConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableDefaultInputConfig = { "bEnableDefaultInputConfig", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonInputSettings), &Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableDefaultInputConfig_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableDefaultInputConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableDefaultInputConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableEnhancedInputSupport_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Controls if Enhanced Input Support plugin-wide. Requires restart due to caching. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
		{ "ToolTip", "Controls if Enhanced Input Support plugin-wide. Requires restart due to caching." },
	};
#endif
	void Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableEnhancedInputSupport_SetBit(void* Obj)
	{
		((UCommonInputSettings*)Obj)->bEnableEnhancedInputSupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableEnhancedInputSupport = { "bEnableEnhancedInputSupport", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonInputSettings), &Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableEnhancedInputSupport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableEnhancedInputSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableEnhancedInputSupport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_ActionDomainTable_MetaData[] = {
		{ "Category", "Action Domain" },
		{ "Comment", "/** Create a derived asset from UCommonInputActionDomainTable to store ordered ActionDomain data for your game */" },
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
		{ "ToolTip", "Create a derived asset from UCommonInputActionDomainTable to store ordered ActionDomain data for your game" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_ActionDomainTable = { "ActionDomainTable", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSettings, ActionDomainTable), Z_Construct_UClass_UCommonInputActionDomainTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_ActionDomainTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_ActionDomainTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputDataClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputDataClass = { "InputDataClass", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSettings, InputDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonUIInputData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputDataClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_ActionDomainTablePtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_ActionDomainTablePtr = { "ActionDomainTablePtr", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputSettings, ActionDomainTablePtr), Z_Construct_UClass_UCommonInputActionDomainTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_ActionDomainTablePtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_ActionDomainTablePtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonInputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_PlatformInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_CommonInputPlatformData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableInputMethodThrashingProtection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingWindowInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputMethodThrashingCooldownInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bAllowOutOfFocusDeviceInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableDefaultInputConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_bEnableEnhancedInputSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_ActionDomainTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_InputDataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSettings_Statics::NewProp_ActionDomainTablePtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonInputSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonInputSettings_Statics::ClassParams = {
		&UCommonInputSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonInputSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonInputSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonInputSettings()
	{
		if (!Z_Registration_Info_UClass_UCommonInputSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonInputSettings.OuterSingleton, Z_Construct_UClass_UCommonInputSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonInputSettings.OuterSingleton;
	}
	template<> COMMONINPUT_API UClass* StaticClass<UCommonInputSettings>()
	{
		return UCommonInputSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonInputSettings);
	UCommonInputSettings::~UCommonInputSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonInputSettings, UCommonInputSettings::StaticClass, TEXT("UCommonInputSettings"), &Z_Registration_Info_UClass_UCommonInputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonInputSettings), 3936935216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_3640848545(TEXT("/Script/CommonInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
