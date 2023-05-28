// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCueFunctionLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueFunctionLibrary();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueFunctionLibrary_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayCueFunctionLibrary::execRemoveGameplayCueOnActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayCueFunctionLibrary::RemoveGameplayCueOnActor(Z_Param_Target,Z_Param_GameplayCueTag,Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayCueFunctionLibrary::execAddGameplayCueOnActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayCueFunctionLibrary::AddGameplayCueOnActor(Z_Param_Target,Z_Param_GameplayCueTag,Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayCueFunctionLibrary::execExecuteGameplayCueOnActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameplayCueFunctionLibrary::ExecuteGameplayCueOnActor(Z_Param_Target,Z_Param_GameplayCueTag,Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayCueFunctionLibrary::execMakeGameplayCueParametersFromHitResult)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayCueParameters*)Z_Param__Result=UGameplayCueFunctionLibrary::MakeGameplayCueParametersFromHitResult(Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	void UGameplayCueFunctionLibrary::StaticRegisterNativesUGameplayCueFunctionLibrary()
	{
		UClass* Class = UGameplayCueFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGameplayCueOnActor", &UGameplayCueFunctionLibrary::execAddGameplayCueOnActor },
			{ "ExecuteGameplayCueOnActor", &UGameplayCueFunctionLibrary::execExecuteGameplayCueOnActor },
			{ "MakeGameplayCueParametersFromHitResult", &UGameplayCueFunctionLibrary::execMakeGameplayCueParametersFromHitResult },
			{ "RemoveGameplayCueOnActor", &UGameplayCueFunctionLibrary::execRemoveGameplayCueOnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics
	{
		struct GameplayCueFunctionLibrary_eventAddGameplayCueOnActor_Parms
		{
			AActor* Target;
			FGameplayTag GameplayCueTag;
			FGameplayCueParameters Parameters;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventAddGameplayCueOnActor_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventAddGameplayCueOnActor_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_GameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_GameplayCueTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventAddGameplayCueOnActor_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_Parameters_MetaData)) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "// Invoke the added event for a gameplay cue on the target actor. This should be paired with a RemoveGameplayCueOnActor call.\n// * If the actor has an ability system, the event will fire on authority only and will be replicated.\n// * If the actor does not have an ability system, the event will only be fired locally.\n" },
		{ "DisplayName", "Add GameplayCue On Actor (Looping)" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueFunctionLibrary.h" },
		{ "ToolTip", "Invoke the added event for a gameplay cue on the target actor. This should be paired with a RemoveGameplayCueOnActor call.\n* If the actor has an ability system, the event will fire on authority only and will be replicated.\n* If the actor does not have an ability system, the event will only be fired locally." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueFunctionLibrary, nullptr, "AddGameplayCueOnActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::GameplayCueFunctionLibrary_eventAddGameplayCueOnActor_Parms), Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics
	{
		struct GameplayCueFunctionLibrary_eventExecuteGameplayCueOnActor_Parms
		{
			AActor* Target;
			FGameplayTag GameplayCueTag;
			FGameplayCueParameters Parameters;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventExecuteGameplayCueOnActor_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventExecuteGameplayCueOnActor_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_GameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_GameplayCueTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventExecuteGameplayCueOnActor_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_Parameters_MetaData)) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "// Invoke a one time \"instant\" execute event for a gameplay cue on the target actor.\n// * If the actor has an ability system, the event will fire on authority only and will be replicated.\n// * If the actor does not have an ability system, the event will only be fired locally.\n" },
		{ "DisplayName", "Execute GameplayCue On Actor (Burst)" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueFunctionLibrary.h" },
		{ "ToolTip", "Invoke a one time \"instant\" execute event for a gameplay cue on the target actor.\n* If the actor has an ability system, the event will fire on authority only and will be replicated.\n* If the actor does not have an ability system, the event will only be fired locally." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueFunctionLibrary, nullptr, "ExecuteGameplayCueOnActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::GameplayCueFunctionLibrary_eventExecuteGameplayCueOnActor_Parms), Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics
	{
		struct GameplayCueFunctionLibrary_eventMakeGameplayCueParametersFromHitResult_Parms
		{
			FHitResult HitResult;
			FGameplayCueParameters ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventMakeGameplayCueParametersFromHitResult_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventMakeGameplayCueParametersFromHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(nullptr, 0) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "// Builds gameplay cue parameters using data from a hit result.\n" },
		{ "ModuleRelativePath", "Public/GameplayCueFunctionLibrary.h" },
		{ "ToolTip", "Builds gameplay cue parameters using data from a hit result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueFunctionLibrary, nullptr, "MakeGameplayCueParametersFromHitResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::GameplayCueFunctionLibrary_eventMakeGameplayCueParametersFromHitResult_Parms), Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics
	{
		struct GameplayCueFunctionLibrary_eventRemoveGameplayCueOnActor_Parms
		{
			AActor* Target;
			FGameplayTag GameplayCueTag;
			FGameplayCueParameters Parameters;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventRemoveGameplayCueOnActor_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventRemoveGameplayCueOnActor_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_GameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_GameplayCueTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueFunctionLibrary_eventRemoveGameplayCueOnActor_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_Parameters_MetaData)) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "// Invoke the removed event for a gameplay cue on the target actor. This should be paired with an AddGameplayCueOnActor call.\n// * If the actor has an ability system, the event will fire on authority only and will be replicated.\n// * If the actor does not have an ability system, the event will only be fired locally.\n" },
		{ "DisplayName", "Remove GameplayCue On Actor (Looping)" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueFunctionLibrary.h" },
		{ "ToolTip", "Invoke the removed event for a gameplay cue on the target actor. This should be paired with an AddGameplayCueOnActor call.\n* If the actor has an ability system, the event will fire on authority only and will be replicated.\n* If the actor does not have an ability system, the event will only be fired locally." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueFunctionLibrary, nullptr, "RemoveGameplayCueOnActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::GameplayCueFunctionLibrary_eventRemoveGameplayCueOnActor_Parms), Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueFunctionLibrary);
	UClass* Z_Construct_UClass_UGameplayCueFunctionLibrary_NoRegister()
	{
		return UGameplayCueFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayCueFunctionLibrary_AddGameplayCueOnActor, "AddGameplayCueOnActor" }, // 3556088575
		{ &Z_Construct_UFunction_UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor, "ExecuteGameplayCueOnActor" }, // 1803827340
		{ &Z_Construct_UFunction_UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult, "MakeGameplayCueParametersFromHitResult" }, // 2809851579
		{ &Z_Construct_UFunction_UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor, "RemoveGameplayCueOnActor" }, // 1550006028
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGameplayCueFunctionLibrary\n *\n *\x09Helpful utility function for working with gameplay cues.\n */" },
		{ "IncludePath", "GameplayCueFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GameplayCueFunctionLibrary.h" },
		{ "ToolTip", "UGameplayCueFunctionLibrary\n\n    Helpful utility function for working with gameplay cues." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::ClassParams = {
		&UGameplayCueFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayCueFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UGameplayCueFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayCueFunctionLibrary.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueFunctionLibrary>()
	{
		return UGameplayCueFunctionLibrary::StaticClass();
	}
	UGameplayCueFunctionLibrary::UGameplayCueFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueFunctionLibrary);
	UGameplayCueFunctionLibrary::~UGameplayCueFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueFunctionLibrary, UGameplayCueFunctionLibrary::StaticClass, TEXT("UGameplayCueFunctionLibrary"), &Z_Registration_Info_UClass_UGameplayCueFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueFunctionLibrary), 704446087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_1923763208(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
