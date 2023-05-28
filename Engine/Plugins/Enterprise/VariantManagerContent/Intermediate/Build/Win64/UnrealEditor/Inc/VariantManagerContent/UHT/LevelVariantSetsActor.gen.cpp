// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelVariantSetsActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelVariantSetsActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ALevelVariantSetsActor();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ALevelVariantSetsActor_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALevelVariantSetsActor::execSwitchOnVariantByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VariantSetIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_VariantIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchOnVariantByIndex(Z_Param_VariantSetIndex,Z_Param_VariantIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelVariantSetsActor::execSwitchOnVariantByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantSetName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchOnVariantByName(Z_Param_VariantSetName,Z_Param_VariantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelVariantSetsActor::execSetLevelVariantSets)
	{
		P_GET_OBJECT(ULevelVariantSets,Z_Param_InVariantSets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevelVariantSets(Z_Param_InVariantSets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelVariantSetsActor::execGetLevelVariantSets)
	{
		P_GET_UBOOL(Z_Param_bLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelVariantSets**)Z_Param__Result=P_THIS->GetLevelVariantSets(Z_Param_bLoad);
		P_NATIVE_END;
	}
	void ALevelVariantSetsActor::StaticRegisterNativesALevelVariantSetsActor()
	{
		UClass* Class = ALevelVariantSetsActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevelVariantSets", &ALevelVariantSetsActor::execGetLevelVariantSets },
			{ "SetLevelVariantSets", &ALevelVariantSetsActor::execSetLevelVariantSets },
			{ "SwitchOnVariantByIndex", &ALevelVariantSetsActor::execSwitchOnVariantByIndex },
			{ "SwitchOnVariantByName", &ALevelVariantSetsActor::execSwitchOnVariantByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics
	{
		struct LevelVariantSetsActor_eventGetLevelVariantSets_Parms
		{
			bool bLoad;
			ULevelVariantSets* ReturnValue;
		};
		static void NewProp_bLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoad;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_bLoad_SetBit(void* Obj)
	{
		((LevelVariantSetsActor_eventGetLevelVariantSets_Parms*)Obj)->bLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_bLoad = { "bLoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelVariantSetsActor_eventGetLevelVariantSets_Parms), &Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_bLoad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsActor_eventGetLevelVariantSets_Parms, ReturnValue), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_bLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "CPP_Default_bLoad", "false" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
		{ "ToolTip", "Returns the LevelVariantSets asset, optionally loading it if necessary" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelVariantSetsActor, nullptr, "GetLevelVariantSets", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::LevelVariantSetsActor_eventGetLevelVariantSets_Parms), Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics
	{
		struct LevelVariantSetsActor_eventSetLevelVariantSets_Parms
		{
			ULevelVariantSets* InVariantSets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InVariantSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::NewProp_InVariantSets = { "InVariantSets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsActor_eventSetLevelVariantSets_Parms, InVariantSets), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::NewProp_InVariantSets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelVariantSetsActor, nullptr, "SetLevelVariantSets", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::LevelVariantSetsActor_eventSetLevelVariantSets_Parms), Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics
	{
		struct LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms
		{
			int32 VariantSetIndex;
			int32 VariantIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_VariantSetIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VariantIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_VariantSetIndex = { "VariantSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms, VariantSetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_VariantIndex = { "VariantIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms, VariantIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms), &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_VariantSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_VariantIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelVariantSetsActor, nullptr, "SwitchOnVariantByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms), Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics
	{
		struct LevelVariantSetsActor_eventSwitchOnVariantByName_Parms
		{
			FString VariantSetName;
			FString VariantName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantSetName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_VariantSetName = { "VariantSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsActor_eventSwitchOnVariantByName_Parms, VariantSetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_VariantName = { "VariantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSetsActor_eventSwitchOnVariantByName_Parms, VariantName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelVariantSetsActor_eventSwitchOnVariantByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelVariantSetsActor_eventSwitchOnVariantByName_Parms), &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_VariantSetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_VariantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelVariantSetsActor, nullptr, "SwitchOnVariantByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::LevelVariantSetsActor_eventSwitchOnVariantByName_Parms), Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelVariantSetsActor);
	UClass* Z_Construct_UClass_ALevelVariantSetsActor_NoRegister()
	{
		return ALevelVariantSetsActor::StaticClass();
	}
	struct Z_Construct_UClass_ALevelVariantSetsActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelVariantSets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelVariantSets;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DirectorInstances_ValueProp;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_DirectorInstances_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectorInstances_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DirectorInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelVariantSetsActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelVariantSetsActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets, "GetLevelVariantSets" }, // 2226845412
		{ &Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets, "SetLevelVariantSets" }, // 1251495142
		{ &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex, "SwitchOnVariantByIndex" }, // 1543681769
		{ &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName, "SwitchOnVariantByName" }, // 3765561098
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelVariantSetsActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Physics HLOD Activation Input Actor Cooking" },
		{ "IncludePath", "LevelVariantSetsActor.h" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_LevelVariantSets_MetaData[] = {
		{ "AllowedClasses", "/Script/VariantManagerContent.LevelVariantSets" },
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_LevelVariantSets = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelVariantSetsActor, LevelVariantSets), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_LevelVariantSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_LevelVariantSets_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances_ValueProp = { "DirectorInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_ULevelVariantSetsFunctionDirector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances_Key_KeyProp = { "DirectorInstances_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances = { "DirectorInstances", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelVariantSetsActor, DirectorInstances), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelVariantSetsActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_LevelVariantSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelVariantSetsActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelVariantSetsActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelVariantSetsActor_Statics::ClassParams = {
		&ALevelVariantSetsActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelVariantSetsActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelVariantSetsActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelVariantSetsActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelVariantSetsActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelVariantSetsActor()
	{
		if (!Z_Registration_Info_UClass_ALevelVariantSetsActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelVariantSetsActor.OuterSingleton, Z_Construct_UClass_ALevelVariantSetsActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelVariantSetsActor.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<ALevelVariantSetsActor>()
	{
		return ALevelVariantSetsActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelVariantSetsActor);
	ALevelVariantSetsActor::~ALevelVariantSetsActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelVariantSetsActor, ALevelVariantSetsActor::StaticClass, TEXT("ALevelVariantSetsActor"), &Z_Registration_Info_UClass_ALevelVariantSetsActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelVariantSetsActor), 4039053732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_3333008055(TEXT("/Script/VariantManagerContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
