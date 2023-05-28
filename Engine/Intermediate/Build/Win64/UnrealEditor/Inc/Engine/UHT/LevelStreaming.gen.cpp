// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "../../Source/Runtime/Engine/Classes/Engine/World.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreaming() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelStreamingVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegate signatures\n" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Delegate signatures" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "LevelStreamingLoadedStatus__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLevelStreamingLoadedStatus_DelegateWrapper(const FMulticastScriptDelegate& LevelStreamingLoadedStatus)
{
	LevelStreamingLoadedStatus.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "LevelStreamingVisibilityStatus__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLevelStreamingVisibilityStatus_DelegateWrapper(const FMulticastScriptDelegate& LevelStreamingVisibilityStatus)
{
	LevelStreamingVisibilityStatus.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ULevelStreaming::execGetLevelScriptActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALevelScriptActor**)Z_Param__Result=P_THIS->GetLevelScriptActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreaming::execCreateInstance)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UniqueInstanceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelStreaming**)Z_Param__Result=P_THIS->CreateInstance(Z_Param_UniqueInstanceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreaming::execIsStreamingStatePending)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStreamingStatePending();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreaming::execIsLevelLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLevelLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreaming::execIsLevelVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLevelVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreaming::execGetLoadedLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevel**)Z_Param__Result=P_THIS->GetLoadedLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreaming::execShouldBeLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldBeLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreaming::execGetWorldAssetPackageFName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetWorldAssetPackageFName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreaming::execSetIsRequestingUnloadAndRemoval)
	{
		P_GET_UBOOL(Z_Param_bInIsRequestingUnloadAndRemoval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsRequestingUnloadAndRemoval(Z_Param_bInIsRequestingUnloadAndRemoval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreaming::execGetIsRequestingUnloadAndRemoval)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsRequestingUnloadAndRemoval();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreaming::execSetPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_NewPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreaming::execSetLevelLODIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevelLODIndex(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreaming::execSetShouldBeLoaded)
	{
		P_GET_UBOOL(Z_Param_bInShouldBeLoaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldBeLoaded(Z_Param_bInShouldBeLoaded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreaming::execSetShouldBeVisible)
	{
		P_GET_UBOOL(Z_Param_bInShouldBeVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldBeVisible(Z_Param_bInShouldBeVisible);
		P_NATIVE_END;
	}
	void ULevelStreaming::StaticRegisterNativesULevelStreaming()
	{
		UClass* Class = ULevelStreaming::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateInstance", &ULevelStreaming::execCreateInstance },
			{ "GetIsRequestingUnloadAndRemoval", &ULevelStreaming::execGetIsRequestingUnloadAndRemoval },
			{ "GetLevelScriptActor", &ULevelStreaming::execGetLevelScriptActor },
			{ "GetLoadedLevel", &ULevelStreaming::execGetLoadedLevel },
			{ "GetWorldAssetPackageFName", &ULevelStreaming::execGetWorldAssetPackageFName },
			{ "IsLevelLoaded", &ULevelStreaming::execIsLevelLoaded },
			{ "IsLevelVisible", &ULevelStreaming::execIsLevelVisible },
			{ "IsStreamingStatePending", &ULevelStreaming::execIsStreamingStatePending },
			{ "SetIsRequestingUnloadAndRemoval", &ULevelStreaming::execSetIsRequestingUnloadAndRemoval },
			{ "SetLevelLODIndex", &ULevelStreaming::execSetLevelLODIndex },
			{ "SetPriority", &ULevelStreaming::execSetPriority },
			{ "SetShouldBeLoaded", &ULevelStreaming::execSetShouldBeLoaded },
			{ "SetShouldBeVisible", &ULevelStreaming::execSetShouldBeVisible },
			{ "ShouldBeLoaded", &ULevelStreaming::execShouldBeLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics
	{
		struct LevelStreaming_eventCreateInstance_Parms
		{
			FString UniqueInstanceName;
			ULevelStreaming* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueInstanceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueInstanceName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_UniqueInstanceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_UniqueInstanceName = { "UniqueInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelStreaming_eventCreateInstance_Parms, UniqueInstanceName), METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_UniqueInstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_UniqueInstanceName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelStreaming_eventCreateInstance_Parms, ReturnValue), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_UniqueInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Creates a new instance of this streaming level with a provided unique instance name */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Creates a new instance of this streaming level with a provided unique instance name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "CreateInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::LevelStreaming_eventCreateInstance_Parms), Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_CreateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics
	{
		struct LevelStreaming_eventGetIsRequestingUnloadAndRemoval_Parms
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
	void Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelStreaming_eventGetIsRequestingUnloadAndRemoval_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelStreaming_eventGetIsRequestingUnloadAndRemoval_Parms), &Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** Returns if the streaming level has requested to be unloaded and removed. */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Returns if the streaming level has requested to be unloaded and removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "GetIsRequestingUnloadAndRemoval", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::LevelStreaming_eventGetIsRequestingUnloadAndRemoval_Parms), Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics
	{
		struct LevelStreaming_eventGetLevelScriptActor_Parms
		{
			ALevelScriptActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelStreaming_eventGetLevelScriptActor_Parms, ReturnValue), Z_Construct_UClass_ALevelScriptActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** Returns the Level Script Actor of the level if the level is loaded and valid */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Returns the Level Script Actor of the level if the level is loaded and valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "GetLevelScriptActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::LevelStreaming_eventGetLevelScriptActor_Parms), Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel_Statics
	{
		struct LevelStreaming_eventGetLoadedLevel_Parms
		{
			ULevel* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelStreaming_eventGetLoadedLevel_Parms, ReturnValue), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Gets a pointer to the LoadedLevel value */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Gets a pointer to the LoadedLevel value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "GetLoadedLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel_Statics::LevelStreaming_eventGetLoadedLevel_Parms), Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics
	{
		struct LevelStreaming_eventGetWorldAssetPackageFName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelStreaming_eventGetWorldAssetPackageFName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Gets the package name for the world asset referred to by this level streaming as an FName */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Gets the package name for the world asset referred to by this level streaming as an FName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "GetWorldAssetPackageFName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::LevelStreaming_eventGetWorldAssetPackageFName_Parms), Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics
	{
		struct LevelStreaming_eventIsLevelLoaded_Parms
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
	void Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelStreaming_eventIsLevelLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelStreaming_eventIsLevelLoaded_Parms), &Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns whether streaming level is loaded */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Returns whether streaming level is loaded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "IsLevelLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::LevelStreaming_eventIsLevelLoaded_Parms), Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics
	{
		struct LevelStreaming_eventIsLevelVisible_Parms
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
	void Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelStreaming_eventIsLevelVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelStreaming_eventIsLevelVisible_Parms), &Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns whether streaming level is visible */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Returns whether streaming level is visible" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "IsLevelVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::LevelStreaming_eventIsLevelVisible_Parms), Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_IsLevelVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics
	{
		struct LevelStreaming_eventIsStreamingStatePending_Parms
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
	void Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelStreaming_eventIsStreamingStatePending_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelStreaming_eventIsStreamingStatePending_Parms), &Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns whether level has streaming state change pending */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Returns whether level has streaming state change pending" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "IsStreamingStatePending", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::LevelStreaming_eventIsStreamingStatePending_Parms), Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics
	{
		struct LevelStreaming_eventSetIsRequestingUnloadAndRemoval_Parms
		{
			bool bInIsRequestingUnloadAndRemoval;
		};
		static void NewProp_bInIsRequestingUnloadAndRemoval_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsRequestingUnloadAndRemoval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::NewProp_bInIsRequestingUnloadAndRemoval_SetBit(void* Obj)
	{
		((LevelStreaming_eventSetIsRequestingUnloadAndRemoval_Parms*)Obj)->bInIsRequestingUnloadAndRemoval = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::NewProp_bInIsRequestingUnloadAndRemoval = { "bInIsRequestingUnloadAndRemoval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelStreaming_eventSetIsRequestingUnloadAndRemoval_Parms), &Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::NewProp_bInIsRequestingUnloadAndRemoval_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::NewProp_bInIsRequestingUnloadAndRemoval,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** Sets if the streaming level should be unloaded and removed. */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Sets if the streaming level should be unloaded and removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "SetIsRequestingUnloadAndRemoval", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::LevelStreaming_eventSetIsRequestingUnloadAndRemoval_Parms), Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics
	{
		struct LevelStreaming_eventSetLevelLODIndex_Parms
		{
			int32 LODIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelStreaming_eventSetLevelLODIndex_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Sets the world composition level LOD index and marks the streaming level as requiring consideration. */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Sets the world composition level LOD index and marks the streaming level as requiring consideration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "SetLevelLODIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::LevelStreaming_eventSetLevelLODIndex_Parms), Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_SetPriority_Statics
	{
		struct LevelStreaming_eventSetPriority_Parms
		{
			int32 NewPriority;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelStreaming_SetPriority_Statics::NewProp_NewPriority = { "NewPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelStreaming_eventSetPriority_Parms, NewPriority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_SetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_SetPriority_Statics::NewProp_NewPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Sets the relative priority of considering the streaming level. Changing the priority will not interrupt the currently considered level, but will affect the next time a level is being selected for evaluation. */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Sets the relative priority of considering the streaming level. Changing the priority will not interrupt the currently considered level, but will affect the next time a level is being selected for evaluation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "SetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_SetPriority_Statics::LevelStreaming_eventSetPriority_Parms), Z_Construct_UFunction_ULevelStreaming_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics
	{
		struct LevelStreaming_eventSetShouldBeLoaded_Parms
		{
			bool bInShouldBeLoaded;
		};
		static void NewProp_bInShouldBeLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInShouldBeLoaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::NewProp_bInShouldBeLoaded_SetBit(void* Obj)
	{
		((LevelStreaming_eventSetShouldBeLoaded_Parms*)Obj)->bInShouldBeLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::NewProp_bInShouldBeLoaded = { "bInShouldBeLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelStreaming_eventSetShouldBeLoaded_Parms), &Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::NewProp_bInShouldBeLoaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::NewProp_bInShouldBeLoaded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** \n\x09 * Virtual that can be overridden to change whether a streaming level should be loaded.\n\x09 * Doesn't do anything at the base level as should be loaded defaults to true \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Virtual that can be overridden to change whether a streaming level should be loaded.\nDoesn't do anything at the base level as should be loaded defaults to true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "SetShouldBeLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::LevelStreaming_eventSetShouldBeLoaded_Parms), Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics
	{
		struct LevelStreaming_eventSetShouldBeVisible_Parms
		{
			bool bInShouldBeVisible;
		};
		static void NewProp_bInShouldBeVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInShouldBeVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::NewProp_bInShouldBeVisible_SetBit(void* Obj)
	{
		((LevelStreaming_eventSetShouldBeVisible_Parms*)Obj)->bInShouldBeVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::NewProp_bInShouldBeVisible = { "bInShouldBeVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelStreaming_eventSetShouldBeVisible_Parms), &Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::NewProp_bInShouldBeVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::NewProp_bInShouldBeVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Sets the should be visible flag and marks the streaming level as requiring consideration. */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Sets the should be visible flag and marks the streaming level as requiring consideration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "SetShouldBeVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::LevelStreaming_eventSetShouldBeVisible_Parms), Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics
	{
		struct LevelStreaming_eventShouldBeLoaded_Parms
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
	void Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelStreaming_eventShouldBeLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelStreaming_eventShouldBeLoaded_Parms), &Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/**\n\x09 * Return whether this level should be present in memory which in turn tells the \n\x09 * streaming code to stream it in. Please note that a change in value from false \n\x09 * to true only tells the streaming code that it needs to START streaming it in \n\x09 * so the code needs to return true an appropriate amount of time before it is \n\x09 * needed.\n\x09 *\n\x09 * @return true if level should be loaded/ streamed in, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Return whether this level should be present in memory which in turn tells the\nstreaming code to stream it in. Please note that a change in value from false\nto true only tells the streaming code that it needs to START streaming it in\nso the code needs to return true an appropriate amount of time before it is\nneeded.\n\n@return true if level should be loaded/ streamed in, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, nullptr, "ShouldBeLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::LevelStreaming_eventShouldBeLoaded_Parms), Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreaming);
	UClass* Z_Construct_UClass_ULevelStreaming_NoRegister()
	{
		return ULevelStreaming::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreaming_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WorldAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StreamingPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageNameToLoad_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageNameToLoad;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LODPackageNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODPackageNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODPackageNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientOnlyVisible_MetaData[];
#endif
		static void NewProp_bClientOnlyVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientOnlyVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelLODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelLODIndex;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisibleInEditor_MetaData[];
#endif
		static void NewProp_bShouldBeVisibleInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisibleInEditor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisible_MetaData[];
#endif
		static void NewProp_bShouldBeVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeLoaded_MetaData[];
#endif
		static void NewProp_bShouldBeLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStatic_MetaData[];
#endif
		static void NewProp_bIsStatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStatic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBlockOnLoad_MetaData[];
#endif
		static void NewProp_bShouldBlockOnLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBlockOnLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBlockOnUnload_MetaData[];
#endif
		static void NewProp_bShouldBlockOnUnload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBlockOnUnload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDistanceStreaming_MetaData[];
#endif
		static void NewProp_bDisableDistanceStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDistanceStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawOnLevelStatusMap_MetaData[];
#endif
		static void NewProp_bDrawOnLevelStatusMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawOnLevelStatusMap;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelColor;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorStreamingVolumes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorStreamingVolumes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorStreamingVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTimeBetweenVolumeUnloadRequests_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTimeBetweenVolumeUnloadRequests;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStrPropertyParams NewProp_Keywords_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keywords;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelUnloaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelUnloaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelShown_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelShown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelHidden_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LoadedLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingUnloadLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PendingUnloadLevel;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FolderPath;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreaming_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelStreaming_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelStreaming_CreateInstance, "CreateInstance" }, // 3795189717
		{ &Z_Construct_UFunction_ULevelStreaming_GetIsRequestingUnloadAndRemoval, "GetIsRequestingUnloadAndRemoval" }, // 3202227799
		{ &Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor, "GetLevelScriptActor" }, // 2434568471
		{ &Z_Construct_UFunction_ULevelStreaming_GetLoadedLevel, "GetLoadedLevel" }, // 3972201311
		{ &Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName, "GetWorldAssetPackageFName" }, // 3312954832
		{ &Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded, "IsLevelLoaded" }, // 3363526278
		{ &Z_Construct_UFunction_ULevelStreaming_IsLevelVisible, "IsLevelVisible" }, // 414025379
		{ &Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending, "IsStreamingStatePending" }, // 838340222
		{ &Z_Construct_UFunction_ULevelStreaming_SetIsRequestingUnloadAndRemoval, "SetIsRequestingUnloadAndRemoval" }, // 4014437182
		{ &Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex, "SetLevelLODIndex" }, // 147128759
		{ &Z_Construct_UFunction_ULevelStreaming_SetPriority, "SetPriority" }, // 1448540605
		{ &Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded, "SetShouldBeLoaded" }, // 1037918047
		{ &Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible, "SetShouldBeVisible" }, // 2554000231
		{ &Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded, "ShouldBeLoaded" }, // 793082069
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract base class of container object encapsulating data required for streaming and providing \n * interface for when a level should be streamed in and out of memory.\n *\n */" },
		{ "IncludePath", "Engine/LevelStreaming.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Abstract base class of container object encapsulating data required for streaming and providing\ninterface for when a level should be streamed in and out of memory." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageName_MetaData[] = {
		{ "Comment", "/** Deprecated name of the package containing the level to load. Use GetWorldAsset() or GetWorldAssetPackageFName() instead.\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Deprecated name of the package containing the level to load. Use GetWorldAsset() or GetWorldAssetPackageFName() instead." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, PackageName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_WorldAsset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** The reference to the world containing the level to load\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "The reference to the world containing the level to load" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_WorldAsset = { "WorldAsset", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, WorldAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_WorldAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_WorldAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_StreamingPriority_MetaData[] = {
		{ "BlueprintSetter", "SetPriority" },
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** The relative priority of considering the streaming level. Changing the priority will not interrupt the currently considered level, but will affect the next time a level is being selected for evaluation. */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "The relative priority of considering the streaming level. Changing the priority will not interrupt the currently considered level, but will affect the next time a level is being selected for evaluation." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_StreamingPriority = { "StreamingPriority", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, StreamingPriority), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_StreamingPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_StreamingPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageNameToLoad_MetaData[] = {
		{ "Comment", "/** If this isn't Name_None, then we load from this package on disk to the new package named PackageName\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "If this isn't Name_None, then we load from this package on disk to the new package named PackageName" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageNameToLoad = { "PackageNameToLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, PackageNameToLoad), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageNameToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageNameToLoad_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames_Inner = { "LODPackageNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames_MetaData[] = {
		{ "Comment", "/** LOD versions of this level\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "LOD versions of this level" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames = { "LODPackageNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, LODPackageNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelTransform_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** Transform applied to actors after loading.                                                                              */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Transform applied to actors after loading." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelTransform = { "LevelTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, LevelTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bClientOnlyVisible_MetaData[] = {
		{ "Comment", "/** Applied to LoadedLevel\x09\x09\x09\x09\x09\x09                                                                            */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Applied to LoadedLevel" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bClientOnlyVisible_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bClientOnlyVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bClientOnlyVisible = { "bClientOnlyVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bClientOnlyVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bClientOnlyVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bClientOnlyVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelLODIndex_MetaData[] = {
		{ "BlueprintSetter", "SetLevelLODIndex" },
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** Requested LOD. Non LOD sub-levels have Index = -1  */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Requested LOD. Non LOD sub-levels have Index = -1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelLODIndex = { "LevelLODIndex", nullptr, (EPropertyFlags)0x0040000000002004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, LevelLODIndex), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelLODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelLODIndex_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor_MetaData[] = {
		{ "Comment", "/** Whether this level should be visible in the Editor\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether this level should be visible in the Editor" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bShouldBeVisibleInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor = { "bShouldBeVisibleInEditor", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible_MetaData[] = {
		{ "BlueprintSetter", "SetShouldBeVisible" },
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** Whether the level should be visible if it is loaded\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether the level should be visible if it is loaded" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bShouldBeVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible = { "bShouldBeVisible", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded_MetaData[] = {
		{ "BlueprintGetter", "ShouldBeLoaded" },
		{ "BlueprintSetter", "SetShouldBeLoaded" },
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** Whether the level should be loaded\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether the level should be loaded" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bShouldBeLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded = { "bShouldBeLoaded", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked_MetaData[] = {
		{ "Comment", "/** Whether this level is locked; that is, its actors are read-only. */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether this level is locked; that is, its actors are read-only." },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/**\n\x09 * Whether this level only contains static actors that aren't affected by gameplay or replication.\n\x09 * If true, the engine can make certain optimizations and will add this level to the StaticLevels collection.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether this level only contains static actors that aren't affected by gameplay or replication.\nIf true, the engine can make certain optimizations and will add this level to the StaticLevels collection." },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bIsStatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic = { "bIsStatic", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** Whether we want to force a blocking load\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether we want to force a blocking load" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bShouldBlockOnLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad = { "bShouldBlockOnLoad", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** Whether we want to force a blocking unload\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether we want to force a blocking unload" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bShouldBlockOnUnload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload = { "bShouldBlockOnUnload", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** \n\x09 *  Whether this level streaming object should be ignored by world composition distance streaming, \n\x09 *  so streaming state can be controlled by other systems (ex: in blueprints)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether this level streaming object should be ignored by world composition distance streaming,\nso streaming state can be controlled by other systems (ex: in blueprints)" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bDisableDistanceStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming = { "bDisableDistanceStreaming", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** If true, will be drawn on the 'level streaming status' map (STAT LEVELMAP console command) */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "If true, will be drawn on the 'level streaming status' map (STAT LEVELMAP console command)" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bDrawOnLevelStatusMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap = { "bDrawOnLevelStatusMap", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_DrawColor_MetaData[] = {
		{ "Comment", "/** Deprecated level color used for visualization. */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Deprecated level color used for visualization." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_DrawColor = { "DrawColor", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, DrawColor_DEPRECATED), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_DrawColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_DrawColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelColor_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** The level color used for visualization. (Show -> Advanced -> Level Coloration) */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "The level color used for visualization. (Show -> Advanced -> Level Coloration)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelColor = { "LevelColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, LevelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelColor_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes_Inner = { "EditorStreamingVolumes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ALevelStreamingVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** The level streaming volumes bound to this level. */" },
		{ "DisplayName", "Streaming Volumes" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "NoElementDuplicate", "" },
		{ "ToolTip", "The level streaming volumes bound to this level." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes = { "EditorStreamingVolumes", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, EditorStreamingVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_MinTimeBetweenVolumeUnloadRequests_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Cooldown time in seconds between volume-based unload requests.  Used in preventing spurious unload requests. */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Cooldown time in seconds between volume-based unload requests.  Used in preventing spurious unload requests." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_MinTimeBetweenVolumeUnloadRequests = { "MinTimeBetweenVolumeUnloadRequests", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, MinTimeBetweenVolumeUnloadRequests), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_MinTimeBetweenVolumeUnloadRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_MinTimeBetweenVolumeUnloadRequests_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords_Inner = { "Keywords", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords_MetaData[] = {
		{ "Comment", "/** List of keywords to filter on in the level browser */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "List of keywords to filter on in the level browser" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, Keywords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelLoaded_MetaData[] = {
		{ "Comment", "/** Called when level is streamed in  */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Called when level is streamed in" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelLoaded = { "OnLevelLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, OnLevelLoaded), Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelLoaded_MetaData)) }; // 954613532
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelUnloaded_MetaData[] = {
		{ "Comment", "/** Called when level is streamed out  */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Called when level is streamed out" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelUnloaded = { "OnLevelUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, OnLevelUnloaded), Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelUnloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelUnloaded_MetaData)) }; // 954613532
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelShown_MetaData[] = {
		{ "Comment", "/** Called when level is added to the world and is visible  */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Called when level is added to the world and is visible" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelShown = { "OnLevelShown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, OnLevelShown), Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelShown_MetaData)) }; // 181638207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelHidden_MetaData[] = {
		{ "Comment", "/** Called when level is no longer visible, may not be removed from world yet  */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Called when level is no longer visible, may not be removed from world yet" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelHidden = { "OnLevelHidden", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, OnLevelHidden), Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelHidden_MetaData)) }; // 181638207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LoadedLevel_MetaData[] = {
		{ "Comment", "/** Pointer to Level object if currently loaded/ streamed in.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Pointer to Level object if currently loaded/ streamed in." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LoadedLevel = { "LoadedLevel", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, LoadedLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LoadedLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LoadedLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PendingUnloadLevel_MetaData[] = {
		{ "Comment", "/** Pointer to a Level object that was previously active and was replaced with a new LoadedLevel (for LOD switching) */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Pointer to a Level object that was previously active and was replaced with a new LoadedLevel (for LOD switching)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PendingUnloadLevel = { "PendingUnloadLevel", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, PendingUnloadLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PendingUnloadLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PendingUnloadLevel_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_FolderPath_MetaData[] = {
		{ "Comment", "/** The folder path for this level within the world browser. This is only available in editor builds. \n\x09\x09""A NONE path indicates that it exists at the root. It is '/' separated. */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "The folder path for this level within the world browser. This is only available in editor builds.\n              A NONE path indicates that it exists at the root. It is '/' separated." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelStreaming, FolderPath), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_FolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_FolderPath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelStreaming_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_WorldAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_StreamingPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageNameToLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bClientOnlyVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelLODIndex,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_DrawColor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_MinTimeBetweenVolumeUnloadRequests,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelUnloaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelShown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LoadedLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PendingUnloadLevel,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_FolderPath,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreaming_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreaming>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreaming_Statics::ClassParams = {
		&ULevelStreaming::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelStreaming_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelStreaming()
	{
		if (!Z_Registration_Info_UClass_ULevelStreaming.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreaming.OuterSingleton, Z_Construct_UClass_ULevelStreaming_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelStreaming.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULevelStreaming>()
	{
		return ULevelStreaming::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreaming);
	ULevelStreaming::~ULevelStreaming() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULevelStreaming)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreaming, ULevelStreaming::StaticClass, TEXT("ULevelStreaming"), &Z_Registration_Info_UClass_ULevelStreaming, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreaming), 1871999819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_463713572(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
