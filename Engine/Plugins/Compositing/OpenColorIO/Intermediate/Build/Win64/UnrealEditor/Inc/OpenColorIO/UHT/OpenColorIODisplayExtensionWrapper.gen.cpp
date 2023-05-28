// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenColorIODisplayExtensionWrapper.h"
#include "../../Source/Runtime/Engine/Public/SceneViewExtensionContext.h"
#include "OpenColorIOColorSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenColorIODisplayExtensionWrapper() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor();
	OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper();
	OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_NoRegister();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration();
	UPackage* Z_Construct_UPackage__Script_OpenColorIO();
// End Cross Module References
	DEFINE_FUNCTION(UOpenColorIODisplayExtensionWrapper::execCreateInGameOpenColorIODisplayExtension)
	{
		P_GET_STRUCT(FOpenColorIODisplayConfiguration,Z_Param_InDisplayConfiguration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOpenColorIODisplayExtensionWrapper**)Z_Param__Result=UOpenColorIODisplayExtensionWrapper::CreateInGameOpenColorIODisplayExtension(Z_Param_InDisplayConfiguration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenColorIODisplayExtensionWrapper::execCreateOpenColorIODisplayExtension)
	{
		P_GET_STRUCT(FOpenColorIODisplayConfiguration,Z_Param_InDisplayConfiguration);
		P_GET_STRUCT_REF(FSceneViewExtensionIsActiveFunctor,Z_Param_Out_IsActiveFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOpenColorIODisplayExtensionWrapper**)Z_Param__Result=UOpenColorIODisplayExtensionWrapper::CreateOpenColorIODisplayExtension(Z_Param_InDisplayConfiguration,Z_Param_Out_IsActiveFunction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenColorIODisplayExtensionWrapper::execRemoveSceneExtension)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSceneExtension();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenColorIODisplayExtensionWrapper::execSetSceneExtensionIsActiveFunctions)
	{
		P_GET_TARRAY_REF(FSceneViewExtensionIsActiveFunctor,Z_Param_Out_IsActiveFunctions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSceneExtensionIsActiveFunctions(Z_Param_Out_IsActiveFunctions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenColorIODisplayExtensionWrapper::execSetSceneExtensionIsActiveFunction)
	{
		P_GET_STRUCT_REF(FSceneViewExtensionIsActiveFunctor,Z_Param_Out_IsActiveFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSceneExtensionIsActiveFunction(Z_Param_Out_IsActiveFunction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenColorIODisplayExtensionWrapper::execSetOpenColorIOConfiguration)
	{
		P_GET_STRUCT(FOpenColorIODisplayConfiguration,Z_Param_InDisplayConfiguration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOpenColorIOConfiguration(Z_Param_InDisplayConfiguration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenColorIODisplayExtensionWrapper::execGetOpenColorIOConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOpenColorIODisplayConfiguration*)Z_Param__Result=P_THIS->GetOpenColorIOConfiguration();
		P_NATIVE_END;
	}
	void UOpenColorIODisplayExtensionWrapper::StaticRegisterNativesUOpenColorIODisplayExtensionWrapper()
	{
		UClass* Class = UOpenColorIODisplayExtensionWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateInGameOpenColorIODisplayExtension", &UOpenColorIODisplayExtensionWrapper::execCreateInGameOpenColorIODisplayExtension },
			{ "CreateOpenColorIODisplayExtension", &UOpenColorIODisplayExtensionWrapper::execCreateOpenColorIODisplayExtension },
			{ "GetOpenColorIOConfiguration", &UOpenColorIODisplayExtensionWrapper::execGetOpenColorIOConfiguration },
			{ "RemoveSceneExtension", &UOpenColorIODisplayExtensionWrapper::execRemoveSceneExtension },
			{ "SetOpenColorIOConfiguration", &UOpenColorIODisplayExtensionWrapper::execSetOpenColorIOConfiguration },
			{ "SetSceneExtensionIsActiveFunction", &UOpenColorIODisplayExtensionWrapper::execSetSceneExtensionIsActiveFunction },
			{ "SetSceneExtensionIsActiveFunctions", &UOpenColorIODisplayExtensionWrapper::execSetSceneExtensionIsActiveFunctions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics
	{
		struct OpenColorIODisplayExtensionWrapper_eventCreateInGameOpenColorIODisplayExtension_Parms
		{
			FOpenColorIODisplayConfiguration InDisplayConfiguration;
			UOpenColorIODisplayExtensionWrapper* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDisplayConfiguration;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics::NewProp_InDisplayConfiguration = { "InDisplayConfiguration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenColorIODisplayExtensionWrapper_eventCreateInGameOpenColorIODisplayExtension_Parms, InDisplayConfiguration), Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration, METADATA_PARAMS(nullptr, 0) }; // 2343336179
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenColorIODisplayExtensionWrapper_eventCreateInGameOpenColorIODisplayExtension_Parms, ReturnValue), Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics::NewProp_InDisplayConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenColorIO" },
		{ "Comment", "// Creates an instance of this object, configured for use in game with the given OCIO configuration.\n" },
		{ "DisplayName", "Create In-Game OpenColorIO Display Extension" },
		{ "ModuleRelativePath", "Public/OpenColorIODisplayExtensionWrapper.h" },
		{ "ToolTip", "Creates an instance of this object, configured for use in game with the given OCIO configuration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper, nullptr, "CreateInGameOpenColorIODisplayExtension", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics::OpenColorIODisplayExtensionWrapper_eventCreateInGameOpenColorIODisplayExtension_Parms), Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics
	{
		struct OpenColorIODisplayExtensionWrapper_eventCreateOpenColorIODisplayExtension_Parms
		{
			FOpenColorIODisplayConfiguration InDisplayConfiguration;
			FSceneViewExtensionIsActiveFunctor IsActiveFunction;
			UOpenColorIODisplayExtensionWrapper* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDisplayConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActiveFunction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IsActiveFunction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::NewProp_InDisplayConfiguration = { "InDisplayConfiguration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenColorIODisplayExtensionWrapper_eventCreateOpenColorIODisplayExtension_Parms, InDisplayConfiguration), Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration, METADATA_PARAMS(nullptr, 0) }; // 2343336179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::NewProp_IsActiveFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::NewProp_IsActiveFunction = { "IsActiveFunction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenColorIODisplayExtensionWrapper_eventCreateOpenColorIODisplayExtension_Parms, IsActiveFunction), Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::NewProp_IsActiveFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::NewProp_IsActiveFunction_MetaData)) }; // 2087551378
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenColorIODisplayExtensionWrapper_eventCreateOpenColorIODisplayExtension_Parms, ReturnValue), Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::NewProp_InDisplayConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::NewProp_IsActiveFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenColorIO" },
		{ "Comment", "// Creates an instance of this object, configured with the given arguments (OCIO and activation function).\n" },
		{ "DisplayName", "Create OpenColorIO Display Extension" },
		{ "ModuleRelativePath", "Public/OpenColorIODisplayExtensionWrapper.h" },
		{ "ToolTip", "Creates an instance of this object, configured with the given arguments (OCIO and activation function)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper, nullptr, "CreateOpenColorIODisplayExtension", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::OpenColorIODisplayExtensionWrapper_eventCreateOpenColorIODisplayExtension_Parms), Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Statics
	{
		struct OpenColorIODisplayExtensionWrapper_eventGetOpenColorIOConfiguration_Parms
		{
			FOpenColorIODisplayConfiguration ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenColorIODisplayExtensionWrapper_eventGetOpenColorIOConfiguration_Parms, ReturnValue), Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration, METADATA_PARAMS(nullptr, 0) }; // 2343336179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenColorIO" },
		{ "Comment", "// Gets the display extension OCIO configuration.\n" },
		{ "DisplayName", "Get OpenColorIO Configuration" },
		{ "ModuleRelativePath", "Public/OpenColorIODisplayExtensionWrapper.h" },
		{ "ToolTip", "Gets the display extension OCIO configuration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper, nullptr, "GetOpenColorIOConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Statics::OpenColorIODisplayExtensionWrapper_eventGetOpenColorIOConfiguration_Parms), Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenColorIO" },
		{ "Comment", "// Removes the extension.\n" },
		{ "ModuleRelativePath", "Public/OpenColorIODisplayExtensionWrapper.h" },
		{ "ToolTip", "Removes the extension." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper, nullptr, "RemoveSceneExtension", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Statics
	{
		struct OpenColorIODisplayExtensionWrapper_eventSetOpenColorIOConfiguration_Parms
		{
			FOpenColorIODisplayConfiguration InDisplayConfiguration;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDisplayConfiguration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Statics::NewProp_InDisplayConfiguration = { "InDisplayConfiguration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenColorIODisplayExtensionWrapper_eventSetOpenColorIOConfiguration_Parms, InDisplayConfiguration), Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration, METADATA_PARAMS(nullptr, 0) }; // 2343336179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Statics::NewProp_InDisplayConfiguration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenColorIO" },
		{ "Comment", "// Sets the display extension OCIO configuration.\n" },
		{ "DisplayName", "Set OpenColorIO Configuration" },
		{ "ModuleRelativePath", "Public/OpenColorIODisplayExtensionWrapper.h" },
		{ "ToolTip", "Sets the display extension OCIO configuration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper, nullptr, "SetOpenColorIOConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Statics::OpenColorIODisplayExtensionWrapper_eventSetOpenColorIOConfiguration_Parms), Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics
	{
		struct OpenColorIODisplayExtensionWrapper_eventSetSceneExtensionIsActiveFunction_Parms
		{
			FSceneViewExtensionIsActiveFunctor IsActiveFunction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActiveFunction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IsActiveFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::NewProp_IsActiveFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::NewProp_IsActiveFunction = { "IsActiveFunction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenColorIODisplayExtensionWrapper_eventSetSceneExtensionIsActiveFunction_Parms, IsActiveFunction), Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::NewProp_IsActiveFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::NewProp_IsActiveFunction_MetaData)) }; // 2087551378
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::NewProp_IsActiveFunction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenColorIO" },
		{ "Comment", "// Sets a single activation function. Will remove any others.\n" },
		{ "ModuleRelativePath", "Public/OpenColorIODisplayExtensionWrapper.h" },
		{ "ToolTip", "Sets a single activation function. Will remove any others." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper, nullptr, "SetSceneExtensionIsActiveFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::OpenColorIODisplayExtensionWrapper_eventSetSceneExtensionIsActiveFunction_Parms), Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics
	{
		struct OpenColorIODisplayExtensionWrapper_eventSetSceneExtensionIsActiveFunctions_Parms
		{
			TArray<FSceneViewExtensionIsActiveFunctor> IsActiveFunctions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IsActiveFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActiveFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IsActiveFunctions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::NewProp_IsActiveFunctions_Inner = { "IsActiveFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor, METADATA_PARAMS(nullptr, 0) }; // 2087551378
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::NewProp_IsActiveFunctions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::NewProp_IsActiveFunctions = { "IsActiveFunctions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenColorIODisplayExtensionWrapper_eventSetSceneExtensionIsActiveFunctions_Parms, IsActiveFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::NewProp_IsActiveFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::NewProp_IsActiveFunctions_MetaData)) }; // 2087551378
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::NewProp_IsActiveFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::NewProp_IsActiveFunctions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenColorIO" },
		{ "Comment", "// Sets an array of activation functions. Will remove any others.\n" },
		{ "ModuleRelativePath", "Public/OpenColorIODisplayExtensionWrapper.h" },
		{ "ToolTip", "Sets an array of activation functions. Will remove any others." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper, nullptr, "SetSceneExtensionIsActiveFunctions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::OpenColorIODisplayExtensionWrapper_eventSetSceneExtensionIsActiveFunctions_Parms), Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenColorIODisplayExtensionWrapper);
	UClass* Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_NoRegister()
	{
		return UOpenColorIODisplayExtensionWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension, "CreateInGameOpenColorIODisplayExtension" }, // 3597584122
		{ &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension, "CreateOpenColorIODisplayExtension" }, // 4269039672
		{ &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration, "GetOpenColorIOConfiguration" }, // 1738676128
		{ &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension, "RemoveSceneExtension" }, // 112563057
		{ &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration, "SetOpenColorIOConfiguration" }, // 2639384816
		{ &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction, "SetSceneExtensionIsActiveFunction" }, // 906104142
		{ &Z_Construct_UFunction_UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions, "SetSceneExtensionIsActiveFunctions" }, // 2883039490
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * This Blueprintable object can hold an OCIO Scene View Extension. \n * You can change its OCIO config, and specify the context in which you want it to be active on.\n */" },
		{ "IncludePath", "OpenColorIODisplayExtensionWrapper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenColorIODisplayExtensionWrapper.h" },
		{ "ToolTip", "This Blueprintable object can hold an OCIO Scene View Extension.\nYou can change its OCIO config, and specify the context in which you want it to be active on." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenColorIODisplayExtensionWrapper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_Statics::ClassParams = {
		&UOpenColorIODisplayExtensionWrapper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper()
	{
		if (!Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.OuterSingleton, Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.OuterSingleton;
	}
	template<> OPENCOLORIO_API UClass* StaticClass<UOpenColorIODisplayExtensionWrapper>()
	{
		return UOpenColorIODisplayExtensionWrapper::StaticClass();
	}
	UOpenColorIODisplayExtensionWrapper::UOpenColorIODisplayExtensionWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenColorIODisplayExtensionWrapper);
	UOpenColorIODisplayExtensionWrapper::~UOpenColorIODisplayExtensionWrapper() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper, UOpenColorIODisplayExtensionWrapper::StaticClass, TEXT("UOpenColorIODisplayExtensionWrapper"), &Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenColorIODisplayExtensionWrapper), 281468056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h_840445581(TEXT("/Script/OpenColorIO"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
