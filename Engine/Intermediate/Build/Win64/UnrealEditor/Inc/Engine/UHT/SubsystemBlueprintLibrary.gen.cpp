// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Subsystems/SubsystemBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubsystemBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioEngineSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USubsystemBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USubsystemBlueprintLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(USubsystemBlueprintLibrary::execGetLocalPlayerSubSystemFromPlayerController)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULocalPlayerSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetLocalPlayerSubSystemFromPlayerController(Z_Param_PlayerController,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubsystemBlueprintLibrary::execGetAudioEngineSubsystem)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioEngineSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetAudioEngineSubsystem(Z_Param_ContextObject,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubsystemBlueprintLibrary::execGetWorldSubsystem)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorldSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetWorldSubsystem(Z_Param_ContextObject,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubsystemBlueprintLibrary::execGetLocalPlayerSubsystem)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULocalPlayerSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetLocalPlayerSubsystem(Z_Param_ContextObject,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubsystemBlueprintLibrary::execGetGameInstanceSubsystem)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameInstanceSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetGameInstanceSubsystem(Z_Param_ContextObject,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubsystemBlueprintLibrary::execGetEngineSubsystem)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEngineSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetEngineSubsystem(Z_Param_Class);
		P_NATIVE_END;
	}
	void USubsystemBlueprintLibrary::StaticRegisterNativesUSubsystemBlueprintLibrary()
	{
		UClass* Class = USubsystemBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAudioEngineSubsystem", &USubsystemBlueprintLibrary::execGetAudioEngineSubsystem },
			{ "GetEngineSubsystem", &USubsystemBlueprintLibrary::execGetEngineSubsystem },
			{ "GetGameInstanceSubsystem", &USubsystemBlueprintLibrary::execGetGameInstanceSubsystem },
			{ "GetLocalPlayerSubsystem", &USubsystemBlueprintLibrary::execGetLocalPlayerSubsystem },
			{ "GetLocalPlayerSubSystemFromPlayerController", &USubsystemBlueprintLibrary::execGetLocalPlayerSubSystemFromPlayerController },
			{ "GetWorldSubsystem", &USubsystemBlueprintLibrary::execGetWorldSubsystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics
	{
		struct SubsystemBlueprintLibrary_eventGetAudioEngineSubsystem_Parms
		{
			UObject* ContextObject;
			TSubclassOf<UAudioEngineSubsystem>  Class;
			UAudioEngineSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetAudioEngineSubsystem_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetAudioEngineSubsystem_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UAudioEngineSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetAudioEngineSubsystem_Parms, ReturnValue), Z_Construct_UClass_UAudioEngineSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AudioEngine Subsystems" },
		{ "Comment", "/** Get an AudioEngine Subsystem from the AudioDevice associated with the provided context */" },
		{ "ModuleRelativePath", "Public/Subsystems/SubsystemBlueprintLibrary.h" },
		{ "ToolTip", "Get an AudioEngine Subsystem from the AudioDevice associated with the provided context" },
		{ "WorldContext", "ContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystemBlueprintLibrary, nullptr, "GetAudioEngineSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::SubsystemBlueprintLibrary_eventGetAudioEngineSubsystem_Parms), Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics
	{
		struct SubsystemBlueprintLibrary_eventGetEngineSubsystem_Parms
		{
			TSubclassOf<UEngineSubsystem>  Class;
			UEngineSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetEngineSubsystem_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UEngineSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetEngineSubsystem_Parms, ReturnValue), Z_Construct_UClass_UEngineSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Engine Subsystems" },
		{ "Comment", "/** Get a Game Instance Subsystem from the Game Instance associated with the provided context */" },
		{ "ModuleRelativePath", "Public/Subsystems/SubsystemBlueprintLibrary.h" },
		{ "ToolTip", "Get a Game Instance Subsystem from the Game Instance associated with the provided context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystemBlueprintLibrary, nullptr, "GetEngineSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::SubsystemBlueprintLibrary_eventGetEngineSubsystem_Parms), Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics
	{
		struct SubsystemBlueprintLibrary_eventGetGameInstanceSubsystem_Parms
		{
			UObject* ContextObject;
			TSubclassOf<UGameInstanceSubsystem>  Class;
			UGameInstanceSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetGameInstanceSubsystem_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetGameInstanceSubsystem_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameInstanceSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetGameInstanceSubsystem_Parms, ReturnValue), Z_Construct_UClass_UGameInstanceSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GameInstance Subsystems" },
		{ "Comment", "/** Get a Game Instance Subsystem from the Game Instance associated with the provided context */" },
		{ "ModuleRelativePath", "Public/Subsystems/SubsystemBlueprintLibrary.h" },
		{ "ToolTip", "Get a Game Instance Subsystem from the Game Instance associated with the provided context" },
		{ "WorldContext", "ContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystemBlueprintLibrary, nullptr, "GetGameInstanceSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::SubsystemBlueprintLibrary_eventGetGameInstanceSubsystem_Parms), Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics
	{
		struct SubsystemBlueprintLibrary_eventGetLocalPlayerSubsystem_Parms
		{
			UObject* ContextObject;
			TSubclassOf<ULocalPlayerSubsystem>  Class;
			ULocalPlayerSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetLocalPlayerSubsystem_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetLocalPlayerSubsystem_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetLocalPlayerSubsystem_Parms, ReturnValue), Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LocalPlayer Subsystems" },
		{ "Comment", "/** Get a Local Player Subsystem from the Local Player associated with the provided context */" },
		{ "ModuleRelativePath", "Public/Subsystems/SubsystemBlueprintLibrary.h" },
		{ "ToolTip", "Get a Local Player Subsystem from the Local Player associated with the provided context" },
		{ "WorldContext", "ContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystemBlueprintLibrary, nullptr, "GetLocalPlayerSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::SubsystemBlueprintLibrary_eventGetLocalPlayerSubsystem_Parms), Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics
	{
		struct SubsystemBlueprintLibrary_eventGetLocalPlayerSubSystemFromPlayerController_Parms
		{
			APlayerController* PlayerController;
			TSubclassOf<ULocalPlayerSubsystem>  Class;
			ULocalPlayerSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetLocalPlayerSubSystemFromPlayerController_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetLocalPlayerSubSystemFromPlayerController_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetLocalPlayerSubSystemFromPlayerController_Parms, ReturnValue), Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LocalPlayer Subsystems" },
		{ "Comment", "/** \n\x09 * Get a Local Player Subsystem from the LocalPlayer associated with the provided context\n\x09 * If the player controller isn't associated to a LocalPlayer nullptr is returned\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SubsystemBlueprintLibrary.h" },
		{ "ToolTip", "Get a Local Player Subsystem from the LocalPlayer associated with the provided context\nIf the player controller isn't associated to a LocalPlayer nullptr is returned" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystemBlueprintLibrary, nullptr, "GetLocalPlayerSubSystemFromPlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::SubsystemBlueprintLibrary_eventGetLocalPlayerSubSystemFromPlayerController_Parms), Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics
	{
		struct SubsystemBlueprintLibrary_eventGetWorldSubsystem_Parms
		{
			UObject* ContextObject;
			TSubclassOf<UWorldSubsystem>  Class;
			UWorldSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetWorldSubsystem_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetWorldSubsystem_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetWorldSubsystem_Parms, ReturnValue), Z_Construct_UClass_UWorldSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GameInstance Subsystems" },
		{ "Comment", "/** Get a World Subsystem from the World associated with the provided context */" },
		{ "ModuleRelativePath", "Public/Subsystems/SubsystemBlueprintLibrary.h" },
		{ "ToolTip", "Get a World Subsystem from the World associated with the provided context" },
		{ "WorldContext", "ContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystemBlueprintLibrary, nullptr, "GetWorldSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::SubsystemBlueprintLibrary_eventGetWorldSubsystem_Parms), Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubsystemBlueprintLibrary);
	UClass* Z_Construct_UClass_USubsystemBlueprintLibrary_NoRegister()
	{
		return USubsystemBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USubsystemBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubsystemBlueprintLibrary_GetAudioEngineSubsystem, "GetAudioEngineSubsystem" }, // 81505248
		{ &Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem, "GetEngineSubsystem" }, // 628236745
		{ &Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem, "GetGameInstanceSubsystem" }, // 54019422
		{ &Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem, "GetLocalPlayerSubsystem" }, // 349719901
		{ &Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController, "GetLocalPlayerSubSystemFromPlayerController" }, // 3190051565
		{ &Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem, "GetWorldSubsystem" }, // 3592868221
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/SubsystemBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SubsystemBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubsystemBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::ClassParams = {
		&USubsystemBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubsystemBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_USubsystemBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubsystemBlueprintLibrary.OuterSingleton, Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubsystemBlueprintLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USubsystemBlueprintLibrary>()
	{
		return USubsystemBlueprintLibrary::StaticClass();
	}
	USubsystemBlueprintLibrary::USubsystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubsystemBlueprintLibrary);
	USubsystemBlueprintLibrary::~USubsystemBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubsystemBlueprintLibrary, USubsystemBlueprintLibrary::StaticClass, TEXT("USubsystemBlueprintLibrary"), &Z_Registration_Info_UClass_USubsystemBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubsystemBlueprintLibrary), 3071725899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_2987916794(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
