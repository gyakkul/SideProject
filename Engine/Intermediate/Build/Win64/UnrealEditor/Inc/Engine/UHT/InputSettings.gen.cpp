// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/InputSettings.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Engine/PlatformSettings.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettings();
	DEVELOPERSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformSettings();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputPlatformSettings();
	ENGINE_API UClass* Z_Construct_UClass_UInputPlatformSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputSettings();
	ENGINE_API UClass* Z_Construct_UClass_UInputSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseLockMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHardwareDeviceIdentifier();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSpeechMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UInputSettings::execForceRebuildKeymaps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceRebuildKeymaps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execGetAxisNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_AxisNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAxisNames(Z_Param_Out_AxisNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execGetActionNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_ActionNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActionNames(Z_Param_Out_ActionNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execSaveKeyMappings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveKeyMappings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execRemoveAxisMapping)
	{
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_KeyMapping);
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAxisMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execGetAxisMappingByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InAxisName);
		P_GET_TARRAY_REF(FInputAxisKeyMapping,Z_Param_Out_OutMappings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAxisMappingByName(Z_Param_InAxisName,Z_Param_Out_OutMappings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execAddAxisMapping)
	{
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_KeyMapping);
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAxisMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execRemoveActionMapping)
	{
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_KeyMapping);
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveActionMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execGetActionMappingByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InActionName);
		P_GET_TARRAY_REF(FInputActionKeyMapping,Z_Param_Out_OutMappings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActionMappingByName(Z_Param_InActionName,Z_Param_Out_OutMappings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execAddActionMapping)
	{
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_KeyMapping);
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActionMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execGetInputSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInputSettings**)Z_Param__Result=UInputSettings::GetInputSettings();
		P_NATIVE_END;
	}
	void UInputSettings::StaticRegisterNativesUInputSettings()
	{
		UClass* Class = UInputSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActionMapping", &UInputSettings::execAddActionMapping },
			{ "AddAxisMapping", &UInputSettings::execAddAxisMapping },
			{ "ForceRebuildKeymaps", &UInputSettings::execForceRebuildKeymaps },
			{ "GetActionMappingByName", &UInputSettings::execGetActionMappingByName },
			{ "GetActionNames", &UInputSettings::execGetActionNames },
			{ "GetAxisMappingByName", &UInputSettings::execGetAxisMappingByName },
			{ "GetAxisNames", &UInputSettings::execGetAxisNames },
			{ "GetInputSettings", &UInputSettings::execGetInputSettings },
			{ "RemoveActionMapping", &UInputSettings::execRemoveActionMapping },
			{ "RemoveAxisMapping", &UInputSettings::execRemoveAxisMapping },
			{ "SaveKeyMappings", &UInputSettings::execSaveKeyMappings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics
	{
		struct InputSettings_eventAddActionMapping_Parms
		{
			FInputActionKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
		static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping = { "KeyMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputSettings_eventAddActionMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping_MetaData)) }; // 1282624095
	void Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
	{
		((InputSettings_eventAddActionMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps = { "bForceRebuildKeymaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InputSettings_eventAddActionMapping_Parms), &Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Programmatically add an action mapping to the project defaults */" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically add an action mapping to the project defaults" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "AddActionMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::InputSettings_eventAddActionMapping_Parms), Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_AddActionMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics
	{
		struct InputSettings_eventAddAxisMapping_Parms
		{
			FInputAxisKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
		static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping = { "KeyMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputSettings_eventAddAxisMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping_MetaData)) }; // 3112688522
	void Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
	{
		((InputSettings_eventAddAxisMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps = { "bForceRebuildKeymaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InputSettings_eventAddAxisMapping_Parms), &Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Programmatically add an axis mapping to the project defaults */" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically add an axis mapping to the project defaults" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "AddAxisMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::InputSettings_eventAddAxisMapping_Parms), Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_AddAxisMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When changes are made to the default mappings, push those changes out to PlayerInput key maps */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "When changes are made to the default mappings, push those changes out to PlayerInput key maps" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "ForceRebuildKeymaps", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics
	{
		struct InputSettings_eventGetActionMappingByName_Parms
		{
			FName InActionName;
			TArray<FInputActionKeyMapping> OutMappings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InActionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InActionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMappings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName = { "InActionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputSettings_eventGetActionMappingByName_Parms, InActionName), METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings_Inner = { "OutMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 1282624095
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings = { "OutMappings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputSettings_eventGetActionMappingByName_Parms, OutMappings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1282624095
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetActionMappingByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::InputSettings_eventGetActionMappingByName_Parms), Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetActionMappingByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetActionNames_Statics
	{
		struct InputSettings_eventGetActionNames_Parms
		{
			TArray<FName> ActionNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames_Inner = { "ActionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames = { "ActionNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputSettings_eventGetActionNames_Parms, ActionNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Populate a list of all defined action names */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Populate a list of all defined action names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetActionNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::InputSettings_eventGetActionNames_Parms), Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetActionNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics
	{
		struct InputSettings_eventGetAxisMappingByName_Parms
		{
			FName InAxisName;
			TArray<FInputAxisKeyMapping> OutMappings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAxisName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InAxisName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMappings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName = { "InAxisName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputSettings_eventGetAxisMappingByName_Parms, InAxisName), METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings_Inner = { "OutMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 3112688522
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings = { "OutMappings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputSettings_eventGetAxisMappingByName_Parms, OutMappings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3112688522
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Retrieve all axis mappings by a certain name. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Retrieve all axis mappings by a certain name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetAxisMappingByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::InputSettings_eventGetAxisMappingByName_Parms), Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetAxisMappingByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics
	{
		struct InputSettings_eventGetAxisNames_Parms
		{
			TArray<FName> AxisNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AxisNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames_Inner = { "AxisNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames = { "AxisNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputSettings_eventGetAxisNames_Parms, AxisNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Populate a list of all defined axis names */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Populate a list of all defined axis names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetAxisNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::InputSettings_eventGetAxisNames_Parms), Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetAxisNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics
	{
		struct InputSettings_eventGetInputSettings_Parms
		{
			UInputSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputSettings_eventGetInputSettings_Parms, ReturnValue), Z_Construct_UClass_UInputSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the game local input settings (action mappings, axis mappings, etc...) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Returns the game local input settings (action mappings, axis mappings, etc...)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetInputSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::InputSettings_eventGetInputSettings_Parms), Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetInputSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics
	{
		struct InputSettings_eventRemoveActionMapping_Parms
		{
			FInputActionKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
		static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping = { "KeyMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputSettings_eventRemoveActionMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping_MetaData)) }; // 1282624095
	void Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
	{
		((InputSettings_eventRemoveActionMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps = { "bForceRebuildKeymaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InputSettings_eventRemoveActionMapping_Parms), &Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Programmatically remove an action mapping to the project defaults */" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically remove an action mapping to the project defaults" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "RemoveActionMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::InputSettings_eventRemoveActionMapping_Parms), Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_RemoveActionMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics
	{
		struct InputSettings_eventRemoveAxisMapping_Parms
		{
			FInputAxisKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
		static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping = { "KeyMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputSettings_eventRemoveAxisMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping_MetaData)) }; // 3112688522
	void Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
	{
		((InputSettings_eventRemoveAxisMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps = { "bForceRebuildKeymaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InputSettings_eventRemoveAxisMapping_Parms), &Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Programmatically remove an axis mapping to the project defaults */" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically remove an axis mapping to the project defaults" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "RemoveAxisMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::InputSettings_eventRemoveAxisMapping_Parms), Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_RemoveAxisMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Flush the current mapping values to the config file */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Flush the current mapping values to the config file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "SaveKeyMappings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_SaveKeyMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputSettings);
	UClass* Z_Construct_UClass_UInputSettings_NoRegister()
	{
		return UInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_UInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisConfig_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisConfig_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAltEnterTogglesFullscreen_MetaData[];
#endif
		static void NewProp_bAltEnterTogglesFullscreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAltEnterTogglesFullscreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bF11TogglesFullscreen_MetaData[];
#endif
		static void NewProp_bF11TogglesFullscreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bF11TogglesFullscreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMouseForTouch_MetaData[];
#endif
		static void NewProp_bUseMouseForTouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMouseForTouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMouseSmoothing_MetaData[];
#endif
		static void NewProp_bEnableMouseSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMouseSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFOVScaling_MetaData[];
#endif
		static void NewProp_bEnableFOVScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFOVScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureMouseOnLaunch_MetaData[];
#endif
		static void NewProp_bCaptureMouseOnLaunch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureMouseOnLaunch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLegacyInputScales_MetaData[];
#endif
		static void NewProp_bEnableLegacyInputScales_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLegacyInputScales;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMotionControls_MetaData[];
#endif
		static void NewProp_bEnableMotionControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMotionControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFilterInputByPlatformUser_MetaData[];
#endif
		static void NewProp_bFilterInputByPlatformUser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterInputByPlatformUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInputDeviceSubsystem_MetaData[];
#endif
		static void NewProp_bEnableInputDeviceSubsystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInputDeviceSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFlushPressedKeysOnViewportFocusLost_MetaData[];
#endif
		static void NewProp_bShouldFlushPressedKeysOnViewportFocusLost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFlushPressedKeysOnViewportFocusLost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDynamicComponentInputBinding_MetaData[];
#endif
		static void NewProp_bEnableDynamicComponentInputBinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDynamicComponentInputBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowTouchInterface_MetaData[];
#endif
		static void NewProp_bAlwaysShowTouchInterface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowTouchInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowConsoleOnFourFingerTap_MetaData[];
#endif
		static void NewProp_bShowConsoleOnFourFingerTap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConsoleOnFourFingerTap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGestureRecognizer_MetaData[];
#endif
		static void NewProp_bEnableGestureRecognizer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGestureRecognizer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAutocorrect_MetaData[];
#endif
		static void NewProp_bUseAutocorrect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAutocorrect;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedAutocorrectOS_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedAutocorrectOS_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedAutocorrectOS;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedAutocorrectCultures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedAutocorrectCultures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedAutocorrectCultures;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedAutocorrectDeviceModels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedAutocorrectDeviceModels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedAutocorrectDeviceModels;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultViewportMouseCaptureMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultViewportMouseCaptureMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultViewportMouseCaptureMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultViewportMouseLockMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultViewportMouseLockMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultViewportMouseLockMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOVScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleClickTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DoubleClickTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeechMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeechMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeechMappings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerInputClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultPlayerInputClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultInputComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTouchInterface_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTouchInterface;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConsoleKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConsoleKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputSettings_AddActionMapping, "AddActionMapping" }, // 2624975942
		{ &Z_Construct_UFunction_UInputSettings_AddAxisMapping, "AddAxisMapping" }, // 2025234266
		{ &Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps, "ForceRebuildKeymaps" }, // 757160977
		{ &Z_Construct_UFunction_UInputSettings_GetActionMappingByName, "GetActionMappingByName" }, // 697922889
		{ &Z_Construct_UFunction_UInputSettings_GetActionNames, "GetActionNames" }, // 642716524
		{ &Z_Construct_UFunction_UInputSettings_GetAxisMappingByName, "GetAxisMappingByName" }, // 295543273
		{ &Z_Construct_UFunction_UInputSettings_GetAxisNames, "GetAxisNames" }, // 1053428486
		{ &Z_Construct_UFunction_UInputSettings_GetInputSettings, "GetInputSettings" }, // 2733236208
		{ &Z_Construct_UFunction_UInputSettings_RemoveActionMapping, "RemoveActionMapping" }, // 255177322
		{ &Z_Construct_UFunction_UInputSettings_RemoveAxisMapping, "RemoveAxisMapping" }, // 2331090847
		{ &Z_Construct_UFunction_UInputSettings_SaveKeyMappings, "SaveKeyMappings" }, // 1735451104
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Project wide settings for input handling\n * \n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html\n */" },
		{ "IncludePath", "GameFramework/InputSettings.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Project wide settings for input handling\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_Inner = { "AxisConfig", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputAxisConfigEntry, METADATA_PARAMS(nullptr, 0) }; // 3076826120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Axis Properties" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig = { "AxisConfig", nullptr, (EPropertyFlags)0x0010040000004041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, AxisConfig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_MetaData)) }; // 3076826120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_PlatformSettings_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/**\n\x09 * Platform specific settings for Input.\n\x09 * @see UInputPlatformSettings\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Platform specific settings for Input.\n@see UInputPlatformSettings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_PlatformSettings = { "PlatformSettings", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, PlatformSettings), Z_Construct_UScriptStruct_FPerPlatformSettings, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_PlatformSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_PlatformSettings_MetaData)) }; // 145519765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bAltEnterTogglesFullscreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen = { "bAltEnterTogglesFullscreen", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bF11TogglesFullscreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen = { "bF11TogglesFullscreen", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "// Allow mouse to be used for touch\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Allow mouse to be used for touch" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bUseMouseForTouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch = { "bUseMouseForTouch", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "// Mouse smoothing control\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Mouse smoothing control" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableMouseSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing = { "bEnableMouseSmoothing", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "// Scale the mouse based on the player camera manager's field of view\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Scale the mouse based on the player camera manager's field of view" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableFOVScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling = { "bEnableFOVScaling", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_MetaData[] = {
		{ "Category", "ViewportProperties" },
		{ "Comment", "/** Controls if the viewport will capture the mouse on Launch of the application */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Controls if the viewport will capture the mouse on Launch of the application" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bCaptureMouseOnLaunch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch = { "bCaptureMouseOnLaunch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Enable the use of legacy input scales on the player controller (InputYawScale, InputPitchScale, and InputRollScale) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Enable the use of legacy input scales on the player controller (InputYawScale, InputPitchScale, and InputRollScale)" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableLegacyInputScales = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales = { "bEnableLegacyInputScales", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMotionControls_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If set to false, then the player controller's InputMotion function will never be called.\n\x09 * This will effectively disable any motion input (tilt, rotation, acceleration, etc) on\n\x09 * the GameViewportClient.\n\x09 * \n\x09 * @see GameViewportClient::InputMotion\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If set to false, then the player controller's InputMotion function will never be called.\nThis will effectively disable any motion input (tilt, rotation, acceleration, etc) on\nthe GameViewportClient.\n\n@see GameViewportClient::InputMotion" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMotionControls_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableMotionControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMotionControls = { "bEnableMotionControls", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMotionControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMotionControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMotionControls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bFilterInputByPlatformUser_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If true, then the PlayerController::InputKey function will only process an input event if it\n\x09 * came from an input device that is owned by the PlayerController's Platform User.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If true, then the PlayerController::InputKey function will only process an input event if it\ncame from an input device that is owned by the PlayerController's Platform User." },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bFilterInputByPlatformUser_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bFilterInputByPlatformUser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bFilterInputByPlatformUser = { "bFilterInputByPlatformUser", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bFilterInputByPlatformUser_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bFilterInputByPlatformUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bFilterInputByPlatformUser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableInputDeviceSubsystem_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If true, then the input device subsystem will be allowed to Initalize when the engine boots.\n\x09 * NOTE: For this setting to take effect, and editor restart is required.\n\x09 * \n\x09 * @see UInputDeviceSubsystem\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If true, then the input device subsystem will be allowed to Initalize when the engine boots.\nNOTE: For this setting to take effect, and editor restart is required.\n\n@see UInputDeviceSubsystem" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableInputDeviceSubsystem_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableInputDeviceSubsystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableInputDeviceSubsystem = { "bEnableInputDeviceSubsystem", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableInputDeviceSubsystem_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableInputDeviceSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableInputDeviceSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bShouldFlushPressedKeysOnViewportFocusLost_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If true, then the Player Controller will have it's Pressed Keys flushed when the input mode is changed\n\x09 * to Game and UI mode or the game viewport loses focus. The default behavior is true.\n\x09 * \n\x09 * @see UGameViewportClient::LostFocus\n\x09 * @see APlayerController::ShouldFlushKeysWhenViewportFocusChanges\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If true, then the Player Controller will have it's Pressed Keys flushed when the input mode is changed\nto Game and UI mode or the game viewport loses focus. The default behavior is true.\n\n@see UGameViewportClient::LostFocus\n@see APlayerController::ShouldFlushKeysWhenViewportFocusChanges" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bShouldFlushPressedKeysOnViewportFocusLost_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bShouldFlushPressedKeysOnViewportFocusLost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bShouldFlushPressedKeysOnViewportFocusLost = { "bShouldFlushPressedKeysOnViewportFocusLost", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bShouldFlushPressedKeysOnViewportFocusLost_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bShouldFlushPressedKeysOnViewportFocusLost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bShouldFlushPressedKeysOnViewportFocusLost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableDynamicComponentInputBinding_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Should components that are dynamically added via the 'AddComponent' function at runtime have input delegates bound to them?\n\x09 * @see AActor::FinishAddComponent\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Should components that are dynamically added via the 'AddComponent' function at runtime have input delegates bound to them?\n@see AActor::FinishAddComponent" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableDynamicComponentInputBinding_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableDynamicComponentInputBinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableDynamicComponentInputBinding = { "bEnableDynamicComponentInputBinding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableDynamicComponentInputBinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableDynamicComponentInputBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableDynamicComponentInputBinding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Should the touch input interface be shown always, or only when the platform has a touch screen? */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Should the touch input interface be shown always, or only when the platform has a touch screen?" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bAlwaysShowTouchInterface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface = { "bAlwaysShowTouchInterface", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Whether or not to show the console on 4 finger tap, on mobile platforms */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Whether or not to show the console on 4 finger tap, on mobile platforms" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bShowConsoleOnFourFingerTap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap = { "bShowConsoleOnFourFingerTap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Whether or not to use the gesture recognition system to convert touches in to gestures that can be bound and queried */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Whether or not to use the gesture recognition system to convert touches in to gestures that can be bound and queried" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableGestureRecognizer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer = { "bEnableGestureRecognizer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "Comment", "/** If enabled, virtual keyboards will have autocorrect enabled. Currently only supported on mobile devices. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If enabled, virtual keyboards will have autocorrect enabled. Currently only supported on mobile devices." },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bUseAutocorrect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect = { "bUseAutocorrect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_Inner = { "ExcludedAutocorrectOS", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "Comment", "/** \n\x09 * Disables autocorrect for these operating systems, even if autocorrect is enabled. Use the format \"[platform] [osversion]\"\n\x09 * (e.g., \"iOS 11.2\" or \"Android 6\"). More specific versions will disable autocorrect for fewer devices (\"iOS 11\" will disable\n\x09 * autocorrect for all devices running iOS 11, but \"iOS 11.2.2\" will not disable autocorrect for devices running 11.2.1).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Disables autocorrect for these operating systems, even if autocorrect is enabled. Use the format \"[platform] [osversion]\"\n(e.g., \"iOS 11.2\" or \"Android 6\"). More specific versions will disable autocorrect for fewer devices (\"iOS 11\" will disable\nautocorrect for all devices running iOS 11, but \"iOS 11.2.2\" will not disable autocorrect for devices running 11.2.1)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS = { "ExcludedAutocorrectOS", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, ExcludedAutocorrectOS), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_Inner = { "ExcludedAutocorrectCultures", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "Comment", "/** Disables autocorrect for these cultures, even if autocorrect is turned on. These should be ISO-compliant language and country codes, such as \"en\" or \"en-US\". */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Disables autocorrect for these cultures, even if autocorrect is turned on. These should be ISO-compliant language and country codes, such as \"en\" or \"en-US\"." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures = { "ExcludedAutocorrectCultures", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, ExcludedAutocorrectCultures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_Inner = { "ExcludedAutocorrectDeviceModels", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "Comment", "/** \n\x09 * Disables autocorrect for these device models, even if autocorrect is turned in. Model IDs listed here will match against the start of the device's\n\x09 * model (e.g., \"SM-\" will match all device model IDs that start with \"SM-\"). This is currently only supported on Android devices.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Disables autocorrect for these device models, even if autocorrect is turned in. Model IDs listed here will match against the start of the device's\nmodel (e.g., \"SM-\" will match all device model IDs that start with \"SM-\"). This is currently only supported on Android devices." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels = { "ExcludedAutocorrectDeviceModels", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, ExcludedAutocorrectDeviceModels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_MetaData[] = {
		{ "Category", "ViewportProperties" },
		{ "Comment", "/** The default mouse capture mode for the game viewport */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default mouse capture mode for the game viewport" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode = { "DefaultViewportMouseCaptureMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, DefaultViewportMouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_MetaData)) }; // 1275285483
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_MetaData[] = {
		{ "Category", "ViewportProperties" },
		{ "Comment", "/** The default mouse lock state behavior when the viewport acquires capture */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default mouse lock state behavior when the viewport acquires capture" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode = { "DefaultViewportMouseLockMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, DefaultViewportMouseLockMode), Z_Construct_UEnum_Engine_EMouseLockMode, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_MetaData)) }; // 2802207277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "// The scaling value to multiply the field of view by\n" },
		{ "editcondition", "bEnableFOVScaling" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The scaling value to multiply the field of view by" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale = { "FOVScale", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, FOVScale), METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "/** If a key is pressed twice in this amount of time it is considered a \"double click\" */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If a key is pressed twice in this amount of time it is considered a \"double click\"" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime = { "DoubleClickTime", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, DoubleClickTime), METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_Inner = { "ActionMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 1282624095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** List of Action Mappings */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Action Mappings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings = { "ActionMappings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, ActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_MetaData)) }; // 1282624095
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_Inner = { "AxisMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 3112688522
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** List of Axis Mappings */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Axis Mappings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings = { "AxisMappings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, AxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_MetaData)) }; // 3112688522
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings_Inner = { "SpeechMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputActionSpeechMapping, METADATA_PARAMS(nullptr, 0) }; // 2876416946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** List of Speech Mappings */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Speech Mappings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings = { "SpeechMappings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, SpeechMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings_MetaData)) }; // 2876416946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultPlayerInputClass_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Default class type for player input object. May be overridden by player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Default class type for player input object. May be overridden by player controller." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultPlayerInputClass = { "DefaultPlayerInputClass", nullptr, (EPropertyFlags)0x0044000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, DefaultPlayerInputClass), Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultPlayerInputClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultPlayerInputClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultInputComponentClass_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Default class type for pawn input components. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Default class type for pawn input components." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultInputComponentClass = { "DefaultInputComponentClass", nullptr, (EPropertyFlags)0x0044000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, DefaultInputComponentClass), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultInputComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultInputComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.TouchInterface" },
		{ "Category", "Mobile" },
		{ "Comment", "/** The default on-screen touch input interface for the game (can be null to disable the onscreen interface) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default on-screen touch input interface for the game (can be null to disable the onscreen interface)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface = { "DefaultTouchInterface", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, DefaultTouchInterface), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_Inner = { "ConsoleKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_MetaData[] = {
		{ "Category", "Console" },
		{ "Comment", "/** The keys which open the console. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The keys which open the console." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys = { "ConsoleKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputSettings, ConsoleKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_PlatformSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMotionControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bFilterInputByPlatformUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableInputDeviceSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bShouldFlushPressedKeysOnViewportFocusLost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableDynamicComponentInputBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultPlayerInputClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultInputComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputSettings_Statics::ClassParams = {
		&UInputSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputSettings()
	{
		if (!Z_Registration_Info_UClass_UInputSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputSettings.OuterSingleton, Z_Construct_UClass_UInputSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputSettings>()
	{
		return UInputSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSettings);
	UInputSettings::~UInputSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier;
class UScriptStruct* FHardwareDeviceIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHardwareDeviceIdentifier, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HardwareDeviceIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHardwareDeviceIdentifier>()
{
	return FHardwareDeviceIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardwareDeviceIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HardwareDeviceIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* An identifier that can be used to determine what input devices are available based on the FInputDeviceScope.\n* These mappings should match a FInputDeviceScope that is used by an IInputDevice\n*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "An identifier that can be used to determine what input devices are available based on the FInputDeviceScope.\nThese mappings should match a FInputDeviceScope that is used by an IInputDevice" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHardwareDeviceIdentifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_InputClassName_MetaData[] = {
		{ "Category", "Hardware" },
		{ "Comment", "/** \n\x09* The name of the Input Class that uses this hardware device.\n\x09* This should correspond with a FInputDeviceScope that is used by an IInputDevice\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The name of the Input Class that uses this hardware device.\nThis should correspond with a FInputDeviceScope that is used by an IInputDevice" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_InputClassName = { "InputClassName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHardwareDeviceIdentifier, InputClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_InputClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_InputClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_HardwareDeviceIdentifier_MetaData[] = {
		{ "Category", "Hardware" },
		{ "Comment", "/**\n\x09 * The name of this hardware device. \n\x09 * This should correspond with a FInputDeviceScope that is used by an IInputDevice\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The name of this hardware device.\nThis should correspond with a FInputDeviceScope that is used by an IInputDevice" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_HardwareDeviceIdentifier = { "HardwareDeviceIdentifier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHardwareDeviceIdentifier, HardwareDeviceIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_HardwareDeviceIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_HardwareDeviceIdentifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_InputClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewProp_HardwareDeviceIdentifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HardwareDeviceIdentifier",
		sizeof(FHardwareDeviceIdentifier),
		alignof(FHardwareDeviceIdentifier),
		Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHardwareDeviceIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UInputPlatformSettings::execGetAllHardwareDeviceNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UInputPlatformSettings::GetAllHardwareDeviceNames();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UInputPlatformSettings::StaticRegisterNativesUInputPlatformSettings()
	{
#if WITH_EDITOR
		UClass* Class = UInputPlatformSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllHardwareDeviceNames", &UInputPlatformSettings::execGetAllHardwareDeviceNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics
	{
		struct InputPlatformSettings_eventGetAllHardwareDeviceNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputPlatformSettings_eventGetAllHardwareDeviceNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Returns an array of Hardware device names from every registered platform ini.\n\x09* For use in the editor so that you can get a list of all known input devices and \n\x09* make device-specific options. For example, you can map any data type to a specific input \n\x09* device\n\x09* \n\x09* UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(GetOptions=\"Engine.InputPlatformSettings.GetAllHardwareDeviceNames\"))\n\x09* TMap<FString, UFooData> DeviceSpecificMap;\n\x09* \n\x09* and the editor will make a nice drop down for you with all the current options that are in the settings.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Returns an array of Hardware device names from every registered platform ini.\nFor use in the editor so that you can get a list of all known input devices and\nmake device-specific options. For example, you can map any data type to a specific input\ndevice\n\nUPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(GetOptions=\"Engine.InputPlatformSettings.GetAllHardwareDeviceNames\"))\nTMap<FString, UFooData> DeviceSpecificMap;\n\nand the editor will make a nice drop down for you with all the current options that are in the settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputPlatformSettings, nullptr, "GetAllHardwareDeviceNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::InputPlatformSettings_eventGetAllHardwareDeviceNames_Parms), Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputPlatformSettings);
	UClass* Z_Construct_UClass_UInputPlatformSettings_NoRegister()
	{
		return UInputPlatformSettings::StaticClass();
	}
	struct Z_Construct_UClass_UInputPlatformSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriggerFeedbackPosition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriggerFeedbackPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriggerFeedbackStrength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriggerFeedbackStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriggerVibrationTriggerPosition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriggerVibrationTriggerPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriggerVibrationFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriggerVibrationFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriggerVibrationAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriggerVibrationAmplitude;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HardwareDevices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardwareDevices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HardwareDevices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputPlatformSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlatformSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputPlatformSettings_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UInputPlatformSettings_GetAllHardwareDeviceNames, "GetAllHardwareDeviceNames" }, // 35394901
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputPlatformSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Per-Platform input options */" },
		{ "IncludePath", "GameFramework/InputSettings.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Per-Platform input options" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackPosition_MetaData[] = {
		{ "Category", "Device Properties|Trigger Feedback" },
		{ "Comment", "/**\n\x09 * The maximum position that a trigger can be set to\n\x09 * \n\x09 * @see UInputDeviceTriggerFeedbackProperty\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The maximum position that a trigger can be set to\n\n@see UInputDeviceTriggerFeedbackProperty" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackPosition = { "MaxTriggerFeedbackPosition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputPlatformSettings, MaxTriggerFeedbackPosition), METADATA_PARAMS(Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackStrength_MetaData[] = {
		{ "Category", "Device Properties|Trigger Feedback" },
		{ "Comment", "/**\n\x09 * The maximum strength that trigger feedback can be set to\n\x09 * \n\x09 * @see UInputDeviceTriggerFeedbackProperty\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The maximum strength that trigger feedback can be set to\n\n@see UInputDeviceTriggerFeedbackProperty" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackStrength = { "MaxTriggerFeedbackStrength", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputPlatformSettings, MaxTriggerFeedbackStrength), METADATA_PARAMS(Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationTriggerPosition_MetaData[] = {
		{ "Category", "Device Properties|Trigger Vibration" },
		{ "Comment", "/**\n\x09 * The max position that a vibration trigger effect can be set to.\n\x09 * \n\x09 * @see UInputDeviceTriggerVibrationProperty::GetTriggerPositionValue\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The max position that a vibration trigger effect can be set to.\n\n@see UInputDeviceTriggerVibrationProperty::GetTriggerPositionValue" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationTriggerPosition = { "MaxTriggerVibrationTriggerPosition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputPlatformSettings, MaxTriggerVibrationTriggerPosition), METADATA_PARAMS(Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationTriggerPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationTriggerPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationFrequency_MetaData[] = {
		{ "Category", "Device Properties|Trigger Vibration" },
		{ "Comment", "/**\n\x09 * The max frequency that a trigger vibration can occur\n\x09 * \n\x09 * @see UInputDeviceTriggerVibrationProperty::GetVibrationFrequencyValue\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The max frequency that a trigger vibration can occur\n\n@see UInputDeviceTriggerVibrationProperty::GetVibrationFrequencyValue" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationFrequency = { "MaxTriggerVibrationFrequency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputPlatformSettings, MaxTriggerVibrationFrequency), METADATA_PARAMS(Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationAmplitude_MetaData[] = {
		{ "Category", "Device Properties|Trigger Vibration" },
		{ "Comment", "/**\n\x09 * The maximum amplitude that can be set on trigger vibrations\n\x09 * \n\x09 * @see UInputDeviceTriggerVibrationProperty::GetVibrationAmplitudeValue\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The maximum amplitude that can be set on trigger vibrations\n\n@see UInputDeviceTriggerVibrationProperty::GetVibrationAmplitudeValue" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationAmplitude = { "MaxTriggerVibrationAmplitude", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputPlatformSettings, MaxTriggerVibrationAmplitude), METADATA_PARAMS(Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationAmplitude_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_HardwareDevices_Inner = { "HardwareDevices", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHardwareDeviceIdentifier, METADATA_PARAMS(nullptr, 0) }; // 324761513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_HardwareDevices_MetaData[] = {
		{ "Category", "Hardware" },
		{ "Comment", "/** A list of identifiable hardware devices available on this platform */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "A list of identifiable hardware devices available on this platform" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_HardwareDevices = { "HardwareDevices", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputPlatformSettings, HardwareDevices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_HardwareDevices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_HardwareDevices_MetaData)) }; // 324761513
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputPlatformSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerFeedbackStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationTriggerPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_MaxTriggerVibrationAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_HardwareDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputPlatformSettings_Statics::NewProp_HardwareDevices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputPlatformSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputPlatformSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputPlatformSettings_Statics::ClassParams = {
		&UInputPlatformSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UInputPlatformSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputPlatformSettings_Statics::PropPointers),
		0,
		0x001004A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputPlatformSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputPlatformSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputPlatformSettings()
	{
		if (!Z_Registration_Info_UClass_UInputPlatformSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputPlatformSettings.OuterSingleton, Z_Construct_UClass_UInputPlatformSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputPlatformSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputPlatformSettings>()
	{
		return UInputPlatformSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputPlatformSettings);
	UInputPlatformSettings::~UInputPlatformSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::ScriptStructInfo[] = {
		{ FHardwareDeviceIdentifier::StaticStruct, Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics::NewStructOps, TEXT("HardwareDeviceIdentifier"), &Z_Registration_Info_UScriptStruct_HardwareDeviceIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHardwareDeviceIdentifier), 324761513U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputSettings, UInputSettings::StaticClass, TEXT("UInputSettings"), &Z_Registration_Info_UClass_UInputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputSettings), 2279923017U) },
		{ Z_Construct_UClass_UInputPlatformSettings, UInputPlatformSettings::StaticClass, TEXT("UInputPlatformSettings"), &Z_Registration_Info_UClass_UInputPlatformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputPlatformSettings), 3847048712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_760407533(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
