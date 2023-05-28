// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/PluginBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePluginBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPluginBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPluginBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UPluginBlueprintLibrary::execIsPluginMounted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PluginName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPluginBlueprintLibrary::IsPluginMounted(Z_Param_PluginName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPluginBlueprintLibrary::execGetPluginEditorCustomVirtualPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PluginName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutVirtualPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPluginBlueprintLibrary::GetPluginEditorCustomVirtualPath(Z_Param_PluginName,Z_Param_Out_OutVirtualPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPluginBlueprintLibrary::execGetPluginDescription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PluginName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPluginBlueprintLibrary::GetPluginDescription(Z_Param_PluginName,Z_Param_Out_OutDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPluginBlueprintLibrary::execGetPluginVersionName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PluginName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutVersionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPluginBlueprintLibrary::GetPluginVersionName(Z_Param_PluginName,Z_Param_Out_OutVersionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPluginBlueprintLibrary::execGetPluginVersion)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PluginName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPluginBlueprintLibrary::GetPluginVersion(Z_Param_PluginName,Z_Param_Out_OutVersion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPluginBlueprintLibrary::execGetPluginMountedAssetPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PluginName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPluginBlueprintLibrary::GetPluginMountedAssetPath(Z_Param_PluginName,Z_Param_Out_OutAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPluginBlueprintLibrary::execGetPluginContentDir)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PluginName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutContentDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPluginBlueprintLibrary::GetPluginContentDir(Z_Param_PluginName,Z_Param_Out_OutContentDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPluginBlueprintLibrary::execGetPluginBaseDir)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PluginName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutBaseDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPluginBlueprintLibrary::GetPluginBaseDir(Z_Param_PluginName,Z_Param_Out_OutBaseDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPluginBlueprintLibrary::execGetPluginDescriptorFilePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PluginName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPluginBlueprintLibrary::GetPluginDescriptorFilePath(Z_Param_PluginName,Z_Param_Out_OutFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPluginBlueprintLibrary::execGetPluginNameForObjectPath)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_ObjectPath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPluginName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPluginBlueprintLibrary::GetPluginNameForObjectPath(Z_Param_Out_ObjectPath,Z_Param_Out_OutPluginName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPluginBlueprintLibrary::execGetEnabledPluginNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UPluginBlueprintLibrary::GetEnabledPluginNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPluginBlueprintLibrary::execGetAdditionalProjectPluginSearchPaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UPluginBlueprintLibrary::GetAdditionalProjectPluginSearchPaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPluginBlueprintLibrary::execGetAdditionalPluginSearchPaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UPluginBlueprintLibrary::GetAdditionalPluginSearchPaths();
		P_NATIVE_END;
	}
	void UPluginBlueprintLibrary::StaticRegisterNativesUPluginBlueprintLibrary()
	{
		UClass* Class = UPluginBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAdditionalPluginSearchPaths", &UPluginBlueprintLibrary::execGetAdditionalPluginSearchPaths },
			{ "GetAdditionalProjectPluginSearchPaths", &UPluginBlueprintLibrary::execGetAdditionalProjectPluginSearchPaths },
			{ "GetEnabledPluginNames", &UPluginBlueprintLibrary::execGetEnabledPluginNames },
			{ "GetPluginBaseDir", &UPluginBlueprintLibrary::execGetPluginBaseDir },
			{ "GetPluginContentDir", &UPluginBlueprintLibrary::execGetPluginContentDir },
			{ "GetPluginDescription", &UPluginBlueprintLibrary::execGetPluginDescription },
			{ "GetPluginDescriptorFilePath", &UPluginBlueprintLibrary::execGetPluginDescriptorFilePath },
			{ "GetPluginEditorCustomVirtualPath", &UPluginBlueprintLibrary::execGetPluginEditorCustomVirtualPath },
			{ "GetPluginMountedAssetPath", &UPluginBlueprintLibrary::execGetPluginMountedAssetPath },
			{ "GetPluginNameForObjectPath", &UPluginBlueprintLibrary::execGetPluginNameForObjectPath },
			{ "GetPluginVersion", &UPluginBlueprintLibrary::execGetPluginVersion },
			{ "GetPluginVersionName", &UPluginBlueprintLibrary::execGetPluginVersionName },
			{ "IsPluginMounted", &UPluginBlueprintLibrary::execIsPluginMounted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics
	{
		struct PluginBlueprintLibrary_eventGetAdditionalPluginSearchPaths_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetAdditionalPluginSearchPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine Scripting | Plugin Utilities" },
		{ "Comment", "/**\n\x09 * Get the list of extra directories that are recursively searched for\n\x09 * plugins (aside from the engine and project plugin directories).\n\x09 *\n\x09 * @return The additional filesystem plugin search paths.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "Get the list of extra directories that are recursively searched for\nplugins (aside from the engine and project plugin directories).\n\n@return The additional filesystem plugin search paths." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginBlueprintLibrary, nullptr, "GetAdditionalPluginSearchPaths", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics::PluginBlueprintLibrary_eventGetAdditionalPluginSearchPaths_Parms), Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics
	{
		struct PluginBlueprintLibrary_eventGetAdditionalProjectPluginSearchPaths_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetAdditionalProjectPluginSearchPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine Scripting | Plugin Utilities" },
		{ "Comment", "/**\n\x09 * Get the list of extra directories added by the project that are\n\x09 * recursively searched for plugins.\n\x09 *\n\x09 * @return The additional project filesystem plugin search paths.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "Get the list of extra directories added by the project that are\nrecursively searched for plugins.\n\n@return The additional project filesystem plugin search paths." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginBlueprintLibrary, nullptr, "GetAdditionalProjectPluginSearchPaths", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::PluginBlueprintLibrary_eventGetAdditionalProjectPluginSearchPaths_Parms), Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics
	{
		struct PluginBlueprintLibrary_eventGetEnabledPluginNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetEnabledPluginNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine Scripting | Plugin Utilities" },
		{ "Comment", "/**\n\x09 * Get the names of all enabled plugins.\n\x09 *\n\x09 * @return The names of all enabled plugins.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "Get the names of all enabled plugins.\n\n@return The names of all enabled plugins." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginBlueprintLibrary, nullptr, "GetEnabledPluginNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics::PluginBlueprintLibrary_eventGetEnabledPluginNames_Parms), Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics
	{
		struct PluginBlueprintLibrary_eventGetPluginBaseDir_Parms
		{
			FString PluginName;
			FString OutBaseDir;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutBaseDir;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginBaseDir_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::NewProp_PluginName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::NewProp_OutBaseDir = { "OutBaseDir", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginBaseDir_Parms, OutBaseDir), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PluginBlueprintLibrary_eventGetPluginBaseDir_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PluginBlueprintLibrary_eventGetPluginBaseDir_Parms), &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::NewProp_PluginName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::NewProp_OutBaseDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine Scripting | Plugin Utilities" },
		{ "Comment", "/**\n\x09 * Get the filesystem path to a plugin's base directory.\n\x09 *\n\x09 * @param PluginName - Name of the plugin\n\x09 * @param OutBaseDir - Filesystem path to the plugin's base directory, if found\n\x09 *\n\x09 * @return true if the named plugin was found and the plugin base directory\n\x09 *         filesystem path was stored in OutBaseDir, or false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "Get the filesystem path to a plugin's base directory.\n\n@param PluginName - Name of the plugin\n@param OutBaseDir - Filesystem path to the plugin's base directory, if found\n\n@return true if the named plugin was found and the plugin base directory\n        filesystem path was stored in OutBaseDir, or false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginBlueprintLibrary, nullptr, "GetPluginBaseDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::PluginBlueprintLibrary_eventGetPluginBaseDir_Parms), Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics
	{
		struct PluginBlueprintLibrary_eventGetPluginContentDir_Parms
		{
			FString PluginName;
			FString OutContentDir;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutContentDir;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginContentDir_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::NewProp_PluginName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::NewProp_OutContentDir = { "OutContentDir", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginContentDir_Parms, OutContentDir), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PluginBlueprintLibrary_eventGetPluginContentDir_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PluginBlueprintLibrary_eventGetPluginContentDir_Parms), &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::NewProp_PluginName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::NewProp_OutContentDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine Scripting | Plugin Utilities" },
		{ "Comment", "/**\n\x09 * Get the filesystem path to a plugin's content directory.\n\x09 *\n\x09 * @param PluginName - Name of the plugin\n\x09 * @param OutContentDir - Filesystem path to the plugin's content directory, if found\n\x09 *\n\x09 * @return true if the named plugin was found and the plugin content\n\x09 *         directory filesystem path was stored in OutContentDir, or false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "Get the filesystem path to a plugin's content directory.\n\n@param PluginName - Name of the plugin\n@param OutContentDir - Filesystem path to the plugin's content directory, if found\n\n@return true if the named plugin was found and the plugin content\n        directory filesystem path was stored in OutContentDir, or false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginBlueprintLibrary, nullptr, "GetPluginContentDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::PluginBlueprintLibrary_eventGetPluginContentDir_Parms), Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics
	{
		struct PluginBlueprintLibrary_eventGetPluginDescription_Parms
		{
			FString PluginName;
			FString OutDescription;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutDescription;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginDescription_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::NewProp_PluginName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::NewProp_OutDescription = { "OutDescription", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginDescription_Parms, OutDescription), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PluginBlueprintLibrary_eventGetPluginDescription_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PluginBlueprintLibrary_eventGetPluginDescription_Parms), &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::NewProp_PluginName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::NewProp_OutDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine Scripting | Plugin Utilities" },
		{ "Comment", "/**\n\x09 * Get the description of a plugin.\n\x09 *\n\x09 * @param PluginName - Name of the plugin\n\x09 * @param OutDescription - Description of the plugin, if found\n\x09 *\n\x09 * @return true if the named plugin was found and the plugin's description\n\x09 *         was stored in OutDescription, or false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "Get the description of a plugin.\n\n@param PluginName - Name of the plugin\n@param OutDescription - Description of the plugin, if found\n\n@return true if the named plugin was found and the plugin's description\n        was stored in OutDescription, or false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginBlueprintLibrary, nullptr, "GetPluginDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::PluginBlueprintLibrary_eventGetPluginDescription_Parms), Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics
	{
		struct PluginBlueprintLibrary_eventGetPluginDescriptorFilePath_Parms
		{
			FString PluginName;
			FString OutFilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginDescriptorFilePath_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::NewProp_PluginName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::NewProp_OutFilePath = { "OutFilePath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginDescriptorFilePath_Parms, OutFilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PluginBlueprintLibrary_eventGetPluginDescriptorFilePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PluginBlueprintLibrary_eventGetPluginDescriptorFilePath_Parms), &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::NewProp_PluginName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::NewProp_OutFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine Scripting | Plugin Utilities" },
		{ "Comment", "/**\n\x09 * Get the filesystem path to a plugin's descriptor.\n\x09 *\n\x09 * @param PluginName - Name of the plugin\n\x09 * @param OutFilePath - Filesystem path to the plugin's descriptor, if found\n\x09 *\n\x09 * @return true if the named plugin was found and the plugin descriptor\n\x09 *         filesystem path was stored in OutFilePath, or false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "Get the filesystem path to a plugin's descriptor.\n\n@param PluginName - Name of the plugin\n@param OutFilePath - Filesystem path to the plugin's descriptor, if found\n\n@return true if the named plugin was found and the plugin descriptor\n        filesystem path was stored in OutFilePath, or false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginBlueprintLibrary, nullptr, "GetPluginDescriptorFilePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::PluginBlueprintLibrary_eventGetPluginDescriptorFilePath_Parms), Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics
	{
		struct PluginBlueprintLibrary_eventGetPluginEditorCustomVirtualPath_Parms
		{
			FString PluginName;
			FString OutVirtualPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutVirtualPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginEditorCustomVirtualPath_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::NewProp_PluginName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::NewProp_OutVirtualPath = { "OutVirtualPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginEditorCustomVirtualPath_Parms, OutVirtualPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PluginBlueprintLibrary_eventGetPluginEditorCustomVirtualPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PluginBlueprintLibrary_eventGetPluginEditorCustomVirtualPath_Parms), &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::NewProp_PluginName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::NewProp_OutVirtualPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine Scripting | Plugin Utilities" },
		{ "Comment", "/**\n\x09 * Get the editor custom virtual path of a plugin.\n\x09 *\n\x09 * @param PluginName - Name of the plugin\n\x09 * @param OutVirtualPath - Editor custom virtual path of the plugin, if found\n\x09 *\n\x09 * @return true if the named plugin was found and the plugin's editor\n\x09 *         custom virtual path was stored in OutVirtualPath, or false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "Get the editor custom virtual path of a plugin.\n\n@param PluginName - Name of the plugin\n@param OutVirtualPath - Editor custom virtual path of the plugin, if found\n\n@return true if the named plugin was found and the plugin's editor\n        custom virtual path was stored in OutVirtualPath, or false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginBlueprintLibrary, nullptr, "GetPluginEditorCustomVirtualPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::PluginBlueprintLibrary_eventGetPluginEditorCustomVirtualPath_Parms), Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics
	{
		struct PluginBlueprintLibrary_eventGetPluginMountedAssetPath_Parms
		{
			FString PluginName;
			FString OutAssetPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutAssetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginMountedAssetPath_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::NewProp_PluginName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::NewProp_OutAssetPath = { "OutAssetPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginMountedAssetPath_Parms, OutAssetPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PluginBlueprintLibrary_eventGetPluginMountedAssetPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PluginBlueprintLibrary_eventGetPluginMountedAssetPath_Parms), &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::NewProp_PluginName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::NewProp_OutAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine Scripting | Plugin Utilities" },
		{ "Comment", "/**\n\x09 * Get the virtual root path for assets in a plugin.\n\x09 *\n\x09 * @param PluginName - Name of the plugin\n\x09 * @param OutAssetPath - Virtual root path for the plugin's assets, if found\n\x09 *\n\x09 * @return true if the named plugin was found and the plugin's virtual\n\x09 *         root path was stored in OutAssetPath, or false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "Get the virtual root path for assets in a plugin.\n\n@param PluginName - Name of the plugin\n@param OutAssetPath - Virtual root path for the plugin's assets, if found\n\n@return true if the named plugin was found and the plugin's virtual\n        root path was stored in OutAssetPath, or false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginBlueprintLibrary, nullptr, "GetPluginMountedAssetPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::PluginBlueprintLibrary_eventGetPluginMountedAssetPath_Parms), Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct PluginBlueprintLibrary_eventGetPluginNameForObjectPath_Parms
		{
			FSoftObjectPath ObjectPath;
			FString OutPluginName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPluginName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginNameForObjectPath_Parms, ObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::NewProp_ObjectPath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::NewProp_OutPluginName = { "OutPluginName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginNameForObjectPath_Parms, OutPluginName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PluginBlueprintLibrary_eventGetPluginNameForObjectPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PluginBlueprintLibrary_eventGetPluginNameForObjectPath_Parms), &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::NewProp_ObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::NewProp_OutPluginName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine Scripting | Plugin Utilities" },
		{ "Comment", "/**\n\x09 * Get the name of the plugin containing an object.\n\x09 *\n\x09 * @param ObjectPath - Path to the object\n\x09 * @param OutPluginName - Name of the plugin containing the object, if found\n\x09 *\n\x09 * @return true if the object is contained within a plugin and the plugin\n\x09 *         name was stored in OutPluginName, or false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "Get the name of the plugin containing an object.\n\n@param ObjectPath - Path to the object\n@param OutPluginName - Name of the plugin containing the object, if found\n\n@return true if the object is contained within a plugin and the plugin\n        name was stored in OutPluginName, or false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginBlueprintLibrary, nullptr, "GetPluginNameForObjectPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::PluginBlueprintLibrary_eventGetPluginNameForObjectPath_Parms), Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics
	{
		struct PluginBlueprintLibrary_eventGetPluginVersion_Parms
		{
			FString PluginName;
			int32 OutVersion;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutVersion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginVersion_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::NewProp_PluginName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::NewProp_OutVersion = { "OutVersion", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginVersion_Parms, OutVersion), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PluginBlueprintLibrary_eventGetPluginVersion_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PluginBlueprintLibrary_eventGetPluginVersion_Parms), &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::NewProp_PluginName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::NewProp_OutVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine Scripting | Plugin Utilities" },
		{ "Comment", "/**\n\x09 * Get the version number of a plugin.\n\x09 *\n\x09 * @param PluginName - Name of the plugin\n\x09 * @param OutVersion - Version number of the plugin, if found\n\x09 *\n\x09 * @return true if the named plugin was found and the plugin's version\n\x09 *         number was stored in OutVersion, or false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "Get the version number of a plugin.\n\n@param PluginName - Name of the plugin\n@param OutVersion - Version number of the plugin, if found\n\n@return true if the named plugin was found and the plugin's version\n        number was stored in OutVersion, or false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginBlueprintLibrary, nullptr, "GetPluginVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::PluginBlueprintLibrary_eventGetPluginVersion_Parms), Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics
	{
		struct PluginBlueprintLibrary_eventGetPluginVersionName_Parms
		{
			FString PluginName;
			FString OutVersionName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutVersionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginVersionName_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::NewProp_PluginName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::NewProp_OutVersionName = { "OutVersionName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventGetPluginVersionName_Parms, OutVersionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PluginBlueprintLibrary_eventGetPluginVersionName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PluginBlueprintLibrary_eventGetPluginVersionName_Parms), &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::NewProp_PluginName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::NewProp_OutVersionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine Scripting | Plugin Utilities" },
		{ "Comment", "/**\n\x09 * Get the version name of a plugin.\n\x09 *\n\x09 * @param PluginName - Name of the plugin\n\x09 * @param OutVersionName - Version name of the plugin, if found\n\x09 *\n\x09 * @return true if the named plugin was found and the plugin's version\n\x09 *         name was stored in OutVersionName, or false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "Get the version name of a plugin.\n\n@param PluginName - Name of the plugin\n@param OutVersionName - Version name of the plugin, if found\n\n@return true if the named plugin was found and the plugin's version\n        name was stored in OutVersionName, or false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginBlueprintLibrary, nullptr, "GetPluginVersionName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::PluginBlueprintLibrary_eventGetPluginVersionName_Parms), Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics
	{
		struct PluginBlueprintLibrary_eventIsPluginMounted_Parms
		{
			FString PluginName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::NewProp_PluginName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginBlueprintLibrary_eventIsPluginMounted_Parms, PluginName), METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::NewProp_PluginName_MetaData)) };
	void Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PluginBlueprintLibrary_eventIsPluginMounted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PluginBlueprintLibrary_eventIsPluginMounted_Parms), &Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::NewProp_PluginName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine Scripting | Plugin Utilities" },
		{ "Comment", "/**\n\x09 * Determine whether a plugin is mounted.\n\x09 *\n\x09 * @param PluginName - Name of the plugin\n\x09 *\n\x09 * @return true if the named plugin is mounted, or false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "Determine whether a plugin is mounted.\n\n@param PluginName - Name of the plugin\n\n@return true if the named plugin is mounted, or false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginBlueprintLibrary, nullptr, "IsPluginMounted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::PluginBlueprintLibrary_eventIsPluginMounted_Parms), Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPluginBlueprintLibrary);
	UClass* Z_Construct_UClass_UPluginBlueprintLibrary_NoRegister()
	{
		return UPluginBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPluginBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPluginBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPluginBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalPluginSearchPaths, "GetAdditionalPluginSearchPaths" }, // 3053693174
		{ &Z_Construct_UFunction_UPluginBlueprintLibrary_GetAdditionalProjectPluginSearchPaths, "GetAdditionalProjectPluginSearchPaths" }, // 3704228561
		{ &Z_Construct_UFunction_UPluginBlueprintLibrary_GetEnabledPluginNames, "GetEnabledPluginNames" }, // 345559282
		{ &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginBaseDir, "GetPluginBaseDir" }, // 2944909567
		{ &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginContentDir, "GetPluginContentDir" }, // 3301081209
		{ &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescription, "GetPluginDescription" }, // 2342144272
		{ &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginDescriptorFilePath, "GetPluginDescriptorFilePath" }, // 749903661
		{ &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginEditorCustomVirtualPath, "GetPluginEditorCustomVirtualPath" }, // 4102978060
		{ &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginMountedAssetPath, "GetPluginMountedAssetPath" }, // 3267626972
		{ &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginNameForObjectPath, "GetPluginNameForObjectPath" }, // 2519254863
		{ &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersion, "GetPluginVersion" }, // 3460486970
		{ &Z_Construct_UFunction_UPluginBlueprintLibrary_GetPluginVersionName, "GetPluginVersionName" }, // 2839246381
		{ &Z_Construct_UFunction_UPluginBlueprintLibrary_IsPluginMounted, "IsPluginMounted" }, // 721326090
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A function library of utilities for querying information about plugins.\n */" },
		{ "IncludePath", "PluginBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/PluginBlueprintLibrary.h" },
		{ "ToolTip", "A function library of utilities for querying information about plugins." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPluginBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPluginBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPluginBlueprintLibrary_Statics::ClassParams = {
		&UPluginBlueprintLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPluginBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPluginBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UPluginBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPluginBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UPluginBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPluginBlueprintLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPluginBlueprintLibrary>()
	{
		return UPluginBlueprintLibrary::StaticClass();
	}
	UPluginBlueprintLibrary::UPluginBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPluginBlueprintLibrary);
	UPluginBlueprintLibrary::~UPluginBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPluginBlueprintLibrary, UPluginBlueprintLibrary::StaticClass, TEXT("UPluginBlueprintLibrary"), &Z_Registration_Info_UClass_UPluginBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPluginBlueprintLibrary), 3132123041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_3840884946(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
