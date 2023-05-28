// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerMappableInputConfig.h"
#include "EnhancedActionKeyMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMappableInputConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerMappableInputConfig::execGetMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMappableInputConfig::execIsDeprecated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDeprecated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMappableInputConfig::execGetDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMappableInputConfig::execGetConfigName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetConfigName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMappableInputConfig::execGetMappingContexts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<TObjectPtr<UInputMappingContext> ,int32>*)Z_Param__Result=P_THIS->GetMappingContexts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMappableInputConfig::execResetToDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMappableInputConfig::execGetKeysBoundToAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_InAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FEnhancedActionKeyMapping>*)Z_Param__Result=P_THIS->GetKeysBoundToAction(Z_Param_InAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMappableInputConfig::execGetMappingByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEnhancedActionKeyMapping*)Z_Param__Result=P_THIS->GetMappingByName(Z_Param_MappingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerMappableInputConfig::execGetPlayerMappableKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FEnhancedActionKeyMapping>*)Z_Param__Result=P_THIS->GetPlayerMappableKeys();
		P_NATIVE_END;
	}
	void UPlayerMappableInputConfig::StaticRegisterNativesUPlayerMappableInputConfig()
	{
		UClass* Class = UPlayerMappableInputConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConfigName", &UPlayerMappableInputConfig::execGetConfigName },
			{ "GetDisplayName", &UPlayerMappableInputConfig::execGetDisplayName },
			{ "GetKeysBoundToAction", &UPlayerMappableInputConfig::execGetKeysBoundToAction },
			{ "GetMappingByName", &UPlayerMappableInputConfig::execGetMappingByName },
			{ "GetMappingContexts", &UPlayerMappableInputConfig::execGetMappingContexts },
			{ "GetMetadata", &UPlayerMappableInputConfig::execGetMetadata },
			{ "GetPlayerMappableKeys", &UPlayerMappableInputConfig::execGetPlayerMappableKeys },
			{ "IsDeprecated", &UPlayerMappableInputConfig::execIsDeprecated },
			{ "ResetToDefault", &UPlayerMappableInputConfig::execResetToDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics
	{
		struct PlayerMappableInputConfig_eventGetConfigName_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerMappableInputConfig_eventGetConfigName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMappableInputConfig, nullptr, "GetConfigName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::PlayerMappableInputConfig_eventGetConfigName_Parms), Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics
	{
		struct PlayerMappableInputConfig_eventGetDisplayName_Parms
		{
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerMappableInputConfig_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMappableInputConfig, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::PlayerMappableInputConfig_eventGetDisplayName_Parms), Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics
	{
		struct PlayerMappableInputConfig_eventGetKeysBoundToAction_Parms
		{
			const UInputAction* InAction;
			TArray<FEnhancedActionKeyMapping> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::NewProp_InAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::NewProp_InAction = { "InAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerMappableInputConfig_eventGetKeysBoundToAction_Parms, InAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::NewProp_InAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::NewProp_InAction_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 2762654059
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerMappableInputConfig_eventGetKeysBoundToAction_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2762654059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::NewProp_InAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** Returns all the keys mapped to a specific Input Action in this mapping config. */" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
		{ "ToolTip", "Returns all the keys mapped to a specific Input Action in this mapping config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMappableInputConfig, nullptr, "GetKeysBoundToAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::PlayerMappableInputConfig_eventGetKeysBoundToAction_Parms), Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics
	{
		struct PlayerMappableInputConfig_eventGetMappingByName_Parms
		{
			FName MappingName;
			FEnhancedActionKeyMapping ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerMappableInputConfig_eventGetMappingByName_Parms, MappingName), METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::NewProp_MappingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::NewProp_MappingName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerMappableInputConfig_eventGetMappingByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 2762654059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** Returns the action key mapping for the mapping that matches the given name */" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
		{ "ToolTip", "Returns the action key mapping for the mapping that matches the given name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMappableInputConfig, nullptr, "GetMappingByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::PlayerMappableInputConfig_eventGetMappingByName_Parms), Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics
	{
		struct PlayerMappableInputConfig_eventGetMappingContexts_Parms
		{
			TMap<TObjectPtr<UInputMappingContext> ,int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReturnValue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerMappableInputConfig_eventGetMappingContexts_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** Return all the Input Mapping contexts that  */" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
		{ "ToolTip", "Return all the Input Mapping contexts that" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMappableInputConfig, nullptr, "GetMappingContexts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::PlayerMappableInputConfig_eventGetMappingContexts_Parms), Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata_Statics
	{
		struct PlayerMappableInputConfig_eventGetMetadata_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerMappableInputConfig_eventGetMetadata_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** Get all the player mappable keys in this config. */" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
		{ "ToolTip", "Get all the player mappable keys in this config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMappableInputConfig, nullptr, "GetMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata_Statics::PlayerMappableInputConfig_eventGetMetadata_Parms), Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics
	{
		struct PlayerMappableInputConfig_eventGetPlayerMappableKeys_Parms
		{
			TArray<FEnhancedActionKeyMapping> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 2762654059
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerMappableInputConfig_eventGetPlayerMappableKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2762654059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** Get all the player mappable keys in this config. */" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
		{ "ToolTip", "Get all the player mappable keys in this config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMappableInputConfig, nullptr, "GetPlayerMappableKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics::PlayerMappableInputConfig_eventGetPlayerMappableKeys_Parms), Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics
	{
		struct PlayerMappableInputConfig_eventIsDeprecated_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerMappableInputConfig_eventIsDeprecated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerMappableInputConfig_eventIsDeprecated_Parms), &Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMappableInputConfig, nullptr, "IsDeprecated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::PlayerMappableInputConfig_eventIsDeprecated_Parms), Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerMappableInputConfig_ResetToDefault_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerMappableInputConfig_ResetToDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** Resets this mappable config to use the keys  */" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
		{ "ToolTip", "Resets this mappable config to use the keys" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMappableInputConfig_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMappableInputConfig, nullptr, "ResetToDefault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerMappableInputConfig_ResetToDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableInputConfig_ResetToDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerMappableInputConfig_ResetToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMappableInputConfig_ResetToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMappableInputConfig);
	UClass* Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister()
	{
		return UPlayerMappableInputConfig::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMappableInputConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConfigName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ConfigDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDeprecated_MetaData[];
#endif
		static void NewProp_bIsDeprecated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDeprecated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Contexts_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Contexts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contexts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Contexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerMappableInputConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerMappableInputConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerMappableInputConfig_GetConfigName, "GetConfigName" }, // 4070291518
		{ &Z_Construct_UFunction_UPlayerMappableInputConfig_GetDisplayName, "GetDisplayName" }, // 3608921465
		{ &Z_Construct_UFunction_UPlayerMappableInputConfig_GetKeysBoundToAction, "GetKeysBoundToAction" }, // 699895507
		{ &Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingByName, "GetMappingByName" }, // 903238352
		{ &Z_Construct_UFunction_UPlayerMappableInputConfig_GetMappingContexts, "GetMappingContexts" }, // 4176549810
		{ &Z_Construct_UFunction_UPlayerMappableInputConfig_GetMetadata, "GetMetadata" }, // 4025900068
		{ &Z_Construct_UFunction_UPlayerMappableInputConfig_GetPlayerMappableKeys, "GetPlayerMappableKeys" }, // 614084882
		{ &Z_Construct_UFunction_UPlayerMappableInputConfig_IsDeprecated, "IsDeprecated" }, // 4002626498
		{ &Z_Construct_UFunction_UPlayerMappableInputConfig_ResetToDefault, "ResetToDefault" }, // 888682447
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMappableInputConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UPlayerMappableInputConfig\n * \n * This represents one set of Player Mappable controller/keymappings. You can use this input config to create\n * the default mappings for your player to start with in your game. It provides an easy way to get only the player\n * mappable key actions, and it can be used to add multiple UInputMappingContext's at once to the player.\n *\n * Populate this data asset with Input Mapping Contexts that have player mappable actions in them. \n */" },
		{ "DisplayName", "Player Mappable Input Config" },
		{ "IncludePath", "PlayerMappableInputConfig.h" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "Data asset used to define a set of player mappable controller/keyboard mappings." },
		{ "ToolTip", "UPlayerMappableInputConfig\n\nThis represents one set of Player Mappable controller/keymappings. You can use this input config to create\nthe default mappings for your player to start with in your game. It provides an easy way to get only the player\nmappable key actions, and it can be used to add multiple UInputMappingContext's at once to the player.\n\nPopulate this data asset with Input Mapping Contexts that have player mappable actions in them." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_ConfigName_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** The unique name of this config that can be used when saving it */" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
		{ "ToolTip", "The unique name of this config that can be used when saving it" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_ConfigName = { "ConfigName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerMappableInputConfig, ConfigName), METADATA_PARAMS(Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_ConfigName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_ConfigName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_ConfigDisplayName_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** The display name that can be used  */" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
		{ "ToolTip", "The display name that can be used" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_ConfigDisplayName = { "ConfigDisplayName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerMappableInputConfig, ConfigDisplayName), METADATA_PARAMS(Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_ConfigDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_ConfigDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_bIsDeprecated_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** A flag that can be used to mark this Input Config as deprecated to your player/designers. */" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
		{ "ToolTip", "A flag that can be used to mark this Input Config as deprecated to your player/designers." },
	};
#endif
	void Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_bIsDeprecated_SetBit(void* Obj)
	{
		((UPlayerMappableInputConfig*)Obj)->bIsDeprecated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_bIsDeprecated = { "bIsDeprecated", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPlayerMappableInputConfig), &Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_bIsDeprecated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_bIsDeprecated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_bIsDeprecated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** Metadata that can used to store any other related items to your key mapping such as icons, ability assets, etc. */" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
		{ "ToolTip", "Metadata that can used to store any other related items to your key mapping such as icons, ability assets, etc." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerMappableInputConfig, Metadata), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Contexts_ValueProp = { "Contexts", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Contexts_Key_KeyProp = { "Contexts_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Contexts_MetaData[] = {
		{ "Category", "Input|PlayerMappable" },
		{ "Comment", "/** Mapping contexts that make up this Input Config with their associated priority. */" },
		{ "ModuleRelativePath", "Public/PlayerMappableInputConfig.h" },
		{ "ToolTip", "Mapping contexts that make up this Input Config with their associated priority." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerMappableInputConfig, Contexts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Contexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Contexts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMappableInputConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_ConfigName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_ConfigDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_bIsDeprecated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Contexts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Contexts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableInputConfig_Statics::NewProp_Contexts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMappableInputConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMappableInputConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMappableInputConfig_Statics::ClassParams = {
		&UPlayerMappableInputConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerMappableInputConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableInputConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerMappableInputConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableInputConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerMappableInputConfig()
	{
		if (!Z_Registration_Info_UClass_UPlayerMappableInputConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMappableInputConfig.OuterSingleton, Z_Construct_UClass_UPlayerMappableInputConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerMappableInputConfig.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UPlayerMappableInputConfig>()
	{
		return UPlayerMappableInputConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMappableInputConfig);
	UPlayerMappableInputConfig::~UPlayerMappableInputConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMappableInputConfig, UPlayerMappableInputConfig::StaticClass, TEXT("UPlayerMappableInputConfig"), &Z_Registration_Info_UClass_UPlayerMappableInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMappableInputConfig), 74272914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_4186440322(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
