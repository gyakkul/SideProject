// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportTestFunctions/ActorImportTestFunctions.h"
#include "InterchangeTestFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorImportTestFunctions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UActorImportTestFunctions();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UActorImportTestFunctions_NoRegister();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	DEFINE_FUNCTION(UActorImportTestFunctions::execCheckComponentPropertyValue)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_ComponentName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_UBOOL(Z_Param_bUseRegexToMatchValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UActorImportTestFunctions::CheckComponentPropertyValue(Z_Param_Actor,Z_Param_ComponentName,Z_Param_PropertyName,Z_Param_bUseRegexToMatchValue,Z_Param_ExpectedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorImportTestFunctions::execCheckActorPropertyValue)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_UBOOL(Z_Param_bUseRegexToMatchValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UActorImportTestFunctions::CheckActorPropertyValue(Z_Param_Actor,Z_Param_PropertyName,Z_Param_bUseRegexToMatchValue,Z_Param_ExpectedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorImportTestFunctions::execCheckActorClass)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UClass,Z_Param_ExpectedClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UActorImportTestFunctions::CheckActorClass(Z_Param_Actor,Z_Param_ExpectedClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorImportTestFunctions::execCheckActorClassCount)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UActorImportTestFunctions::CheckActorClassCount(Z_Param_Out_Actors,Z_Param_Class,Z_Param_ExpectedNumberOfActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorImportTestFunctions::execCheckImportedActorCount)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfImportedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UActorImportTestFunctions::CheckImportedActorCount(Z_Param_Out_Actors,Z_Param_ExpectedNumberOfImportedActors);
		P_NATIVE_END;
	}
	void UActorImportTestFunctions::StaticRegisterNativesUActorImportTestFunctions()
	{
		UClass* Class = UActorImportTestFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckActorClass", &UActorImportTestFunctions::execCheckActorClass },
			{ "CheckActorClassCount", &UActorImportTestFunctions::execCheckActorClassCount },
			{ "CheckActorPropertyValue", &UActorImportTestFunctions::execCheckActorPropertyValue },
			{ "CheckComponentPropertyValue", &UActorImportTestFunctions::execCheckComponentPropertyValue },
			{ "CheckImportedActorCount", &UActorImportTestFunctions::execCheckImportedActorCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics
	{
		struct ActorImportTestFunctions_eventCheckActorClass_Parms
		{
			const AActor* Actor;
			TSubclassOf<AActor>  ExpectedClass;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExpectedClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckActorClass_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::NewProp_Actor_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::NewProp_ExpectedClass = { "ExpectedClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckActorClass_Parms, ExpectedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckActorClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::NewProp_ExpectedClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported actor has the expected class */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/ActorImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported actor has the expected class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorImportTestFunctions, nullptr, "CheckActorClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::ActorImportTestFunctions_eventCheckActorClass_Parms), Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics
	{
		struct ActorImportTestFunctions_eventCheckActorClassCount_Parms
		{
			TArray<AActor*> Actors;
			TSubclassOf<AActor>  Class;
			int32 ExpectedNumberOfActors;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckActorClassCount_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckActorClassCount_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::NewProp_ExpectedNumberOfActors = { "ExpectedNumberOfActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckActorClassCount_Parms, ExpectedNumberOfActors), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckActorClassCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::NewProp_ExpectedNumberOfActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the expected number of actors with a given class are imported */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/ActorImportTestFunctions.h" },
		{ "ToolTip", "Check whether the expected number of actors with a given class are imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorImportTestFunctions, nullptr, "CheckActorClassCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::ActorImportTestFunctions_eventCheckActorClassCount_Parms), Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics
	{
		struct ActorImportTestFunctions_eventCheckActorPropertyValue_Parms
		{
			const AActor* Actor;
			FString PropertyName;
			bool bUseRegexToMatchValue;
			FString ExpectedValue;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static void NewProp_bUseRegexToMatchValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRegexToMatchValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpectedValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckActorPropertyValue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckActorPropertyValue_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_PropertyName_MetaData)) };
	void Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_bUseRegexToMatchValue_SetBit(void* Obj)
	{
		((ActorImportTestFunctions_eventCheckActorPropertyValue_Parms*)Obj)->bUseRegexToMatchValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_bUseRegexToMatchValue = { "bUseRegexToMatchValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorImportTestFunctions_eventCheckActorPropertyValue_Parms), &Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_bUseRegexToMatchValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_ExpectedValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_ExpectedValue = { "ExpectedValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckActorPropertyValue_Parms, ExpectedValue), METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_ExpectedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_ExpectedValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckActorPropertyValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_bUseRegexToMatchValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_ExpectedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the generic property (with a given name) in the imported actor has the expected value (or matches with it using regex) */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/ActorImportTestFunctions.h" },
		{ "ToolTip", "Check whether the generic property (with a given name) in the imported actor has the expected value (or matches with it using regex)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorImportTestFunctions, nullptr, "CheckActorPropertyValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::ActorImportTestFunctions_eventCheckActorPropertyValue_Parms), Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics
	{
		struct ActorImportTestFunctions_eventCheckComponentPropertyValue_Parms
		{
			const AActor* Actor;
			FString ComponentName;
			FString PropertyName;
			bool bUseRegexToMatchValue;
			FString ExpectedValue;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static void NewProp_bUseRegexToMatchValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRegexToMatchValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpectedValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckComponentPropertyValue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_ComponentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckComponentPropertyValue_Parms, ComponentName), METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckComponentPropertyValue_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_PropertyName_MetaData)) };
	void Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_bUseRegexToMatchValue_SetBit(void* Obj)
	{
		((ActorImportTestFunctions_eventCheckComponentPropertyValue_Parms*)Obj)->bUseRegexToMatchValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_bUseRegexToMatchValue = { "bUseRegexToMatchValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorImportTestFunctions_eventCheckComponentPropertyValue_Parms), &Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_bUseRegexToMatchValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_ExpectedValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_ExpectedValue = { "ExpectedValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckComponentPropertyValue_Parms, ExpectedValue), METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_ExpectedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_ExpectedValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckComponentPropertyValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_bUseRegexToMatchValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_ExpectedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the generic property (with a given name) in the imported actor component (with the given name) has the expected value (or matches with it using regex) */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/ActorImportTestFunctions.h" },
		{ "ToolTip", "Check whether the generic property (with a given name) in the imported actor component (with the given name) has the expected value (or matches with it using regex)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorImportTestFunctions, nullptr, "CheckComponentPropertyValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::ActorImportTestFunctions_eventCheckComponentPropertyValue_Parms), Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics
	{
		struct ActorImportTestFunctions_eventCheckImportedActorCount_Parms
		{
			TArray<AActor*> Actors;
			int32 ExpectedNumberOfImportedActors;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfImportedActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckImportedActorCount_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::NewProp_ExpectedNumberOfImportedActors = { "ExpectedNumberOfImportedActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckImportedActorCount_Parms, ExpectedNumberOfImportedActors), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorImportTestFunctions_eventCheckImportedActorCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::NewProp_ExpectedNumberOfImportedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the expected number of actors are imported */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/ActorImportTestFunctions.h" },
		{ "ToolTip", "Check whether the expected number of actors are imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorImportTestFunctions, nullptr, "CheckImportedActorCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::ActorImportTestFunctions_eventCheckImportedActorCount_Parms), Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorImportTestFunctions);
	UClass* Z_Construct_UClass_UActorImportTestFunctions_NoRegister()
	{
		return UActorImportTestFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UActorImportTestFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorImportTestFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImportTestFunctionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorImportTestFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClass, "CheckActorClass" }, // 1272615120
		{ &Z_Construct_UFunction_UActorImportTestFunctions_CheckActorClassCount, "CheckActorClassCount" }, // 3736066534
		{ &Z_Construct_UFunction_UActorImportTestFunctions_CheckActorPropertyValue, "CheckActorPropertyValue" }, // 578061616
		{ &Z_Construct_UFunction_UActorImportTestFunctions_CheckComponentPropertyValue, "CheckComponentPropertyValue" }, // 1307078666
		{ &Z_Construct_UFunction_UActorImportTestFunctions_CheckImportedActorCount, "CheckImportedActorCount" }, // 220473570
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorImportTestFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImportTestFunctions/ActorImportTestFunctions.h" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/ActorImportTestFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorImportTestFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorImportTestFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorImportTestFunctions_Statics::ClassParams = {
		&UActorImportTestFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorImportTestFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorImportTestFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorImportTestFunctions()
	{
		if (!Z_Registration_Info_UClass_UActorImportTestFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorImportTestFunctions.OuterSingleton, Z_Construct_UClass_UActorImportTestFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorImportTestFunctions.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UActorImportTestFunctions>()
	{
		return UActorImportTestFunctions::StaticClass();
	}
	UActorImportTestFunctions::UActorImportTestFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorImportTestFunctions);
	UActorImportTestFunctions::~UActorImportTestFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorImportTestFunctions, UActorImportTestFunctions::StaticClass, TEXT("UActorImportTestFunctions"), &Z_Registration_Info_UClass_UActorImportTestFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorImportTestFunctions), 3989545620U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h_361726746(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_ActorImportTestFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
