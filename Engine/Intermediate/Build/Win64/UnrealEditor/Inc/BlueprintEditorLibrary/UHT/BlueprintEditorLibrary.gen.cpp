// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintEditorLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintEditorLibrary() {}
// Cross Module References
	BLUEPRINTEDITORLIBRARY_API UClass* Z_Construct_UClass_UBlueprintEditorLibrary();
	BLUEPRINTEDITORLIBRARY_API UClass* Z_Construct_UClass_UBlueprintEditorLibrary_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintEditorLibrary();
// End Cross Module References
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execSetBlueprintVariableInstanceEditable)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_VariableName);
		P_GET_UBOOL(Z_Param_bInstanceEditable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintEditorLibrary::SetBlueprintVariableInstanceEditable(Z_Param_Blueprint,Z_Param_Out_VariableName,Z_Param_bInstanceEditable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execSetBlueprintVariableExposeToCinematics)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_VariableName);
		P_GET_UBOOL(Z_Param_bExposeToCinematics);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintEditorLibrary::SetBlueprintVariableExposeToCinematics(Z_Param_Blueprint,Z_Param_Out_VariableName,Z_Param_bExposeToCinematics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execSetBlueprintVariableExposeOnSpawn)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_VariableName);
		P_GET_UBOOL(Z_Param_bExposeOnSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintEditorLibrary::SetBlueprintVariableExposeOnSpawn(Z_Param_Blueprint,Z_Param_Out_VariableName,Z_Param_bExposeOnSpawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execGeneratedClass)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_BlueprintObj);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=UBlueprintEditorLibrary::GeneratedClass(Z_Param_BlueprintObj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execRemoveUnusedVariables)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBlueprintEditorLibrary::RemoveUnusedVariables(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execReparentBlueprint)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_OBJECT(UClass,Z_Param_NewParentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintEditorLibrary::ReparentBlueprint(Z_Param_Blueprint,Z_Param_NewParentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execRefreshAllOpenBlueprintEditors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintEditorLibrary::RefreshAllOpenBlueprintEditors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execRefreshOpenEditorsForBlueprint)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_BP);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintEditorLibrary::RefreshOpenEditorsForBlueprint(Z_Param_BP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execGetBlueprintAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlueprint**)Z_Param__Result=UBlueprintEditorLibrary::GetBlueprintAsset(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execRenameGraph)
	{
		P_GET_OBJECT(UEdGraph,Z_Param_Graph);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewNameStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintEditorLibrary::RenameGraph(Z_Param_Graph,Z_Param_NewNameStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execRemoveGraph)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_OBJECT(UEdGraph,Z_Param_Graph);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintEditorLibrary::RemoveGraph(Z_Param_Blueprint,Z_Param_Graph);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execRemoveUnusedNodes)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintEditorLibrary::RemoveUnusedNodes(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execRemoveFunctionGraph)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY(FNameProperty,Z_Param_FuncName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintEditorLibrary::RemoveFunctionGraph(Z_Param_Blueprint,Z_Param_FuncName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execAddFunctionGraph)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY(FStrProperty,Z_Param_FuncName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEdGraph**)Z_Param__Result=UBlueprintEditorLibrary::AddFunctionGraph(Z_Param_Blueprint,Z_Param_FuncName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execCompileBlueprint)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintEditorLibrary::CompileBlueprint(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execUpgradeOperatorNodes)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintEditorLibrary::UpgradeOperatorNodes(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execFindGraph)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY(FNameProperty,Z_Param_GraphName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEdGraph**)Z_Param__Result=UBlueprintEditorLibrary::FindGraph(Z_Param_Blueprint,Z_Param_GraphName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execFindEventGraph)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEdGraph**)Z_Param__Result=UBlueprintEditorLibrary::FindEventGraph(Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintEditorLibrary::execReplaceVariableReferences)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_GET_PROPERTY(FNameProperty,Z_Param_OldVarName);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewVarName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintEditorLibrary::ReplaceVariableReferences(Z_Param_Blueprint,Z_Param_OldVarName,Z_Param_NewVarName);
		P_NATIVE_END;
	}
	void UBlueprintEditorLibrary::StaticRegisterNativesUBlueprintEditorLibrary()
	{
		UClass* Class = UBlueprintEditorLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFunctionGraph", &UBlueprintEditorLibrary::execAddFunctionGraph },
			{ "CompileBlueprint", &UBlueprintEditorLibrary::execCompileBlueprint },
			{ "FindEventGraph", &UBlueprintEditorLibrary::execFindEventGraph },
			{ "FindGraph", &UBlueprintEditorLibrary::execFindGraph },
			{ "GeneratedClass", &UBlueprintEditorLibrary::execGeneratedClass },
			{ "GetBlueprintAsset", &UBlueprintEditorLibrary::execGetBlueprintAsset },
			{ "RefreshAllOpenBlueprintEditors", &UBlueprintEditorLibrary::execRefreshAllOpenBlueprintEditors },
			{ "RefreshOpenEditorsForBlueprint", &UBlueprintEditorLibrary::execRefreshOpenEditorsForBlueprint },
			{ "RemoveFunctionGraph", &UBlueprintEditorLibrary::execRemoveFunctionGraph },
			{ "RemoveGraph", &UBlueprintEditorLibrary::execRemoveGraph },
			{ "RemoveUnusedNodes", &UBlueprintEditorLibrary::execRemoveUnusedNodes },
			{ "RemoveUnusedVariables", &UBlueprintEditorLibrary::execRemoveUnusedVariables },
			{ "RenameGraph", &UBlueprintEditorLibrary::execRenameGraph },
			{ "ReparentBlueprint", &UBlueprintEditorLibrary::execReparentBlueprint },
			{ "ReplaceVariableReferences", &UBlueprintEditorLibrary::execReplaceVariableReferences },
			{ "SetBlueprintVariableExposeOnSpawn", &UBlueprintEditorLibrary::execSetBlueprintVariableExposeOnSpawn },
			{ "SetBlueprintVariableExposeToCinematics", &UBlueprintEditorLibrary::execSetBlueprintVariableExposeToCinematics },
			{ "SetBlueprintVariableInstanceEditable", &UBlueprintEditorLibrary::execSetBlueprintVariableInstanceEditable },
			{ "UpgradeOperatorNodes", &UBlueprintEditorLibrary::execUpgradeOperatorNodes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics
	{
		struct BlueprintEditorLibrary_eventAddFunctionGraph_Parms
		{
			UBlueprint* Blueprint;
			FString FuncName;
			UEdGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FuncName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FuncName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventAddFunctionGraph_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::NewProp_FuncName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::NewProp_FuncName = { "FuncName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventAddFunctionGraph_Parms, FuncName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::NewProp_FuncName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::NewProp_FuncName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventAddFunctionGraph_Parms, ReturnValue), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::NewProp_FuncName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Upgrade Tools" },
		{ "Comment", "/**\n\x09* Adds a function to the given blueprint\n\x09*\n\x09* @param Blueprint\x09The blueprint to add the function to\n\x09* @param FuncName\x09Name of the function to add\n\x09*\n\x09* @return UEdGraph*\n\x09*/" },
		{ "CPP_Default_FuncName", "NewFunction" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Adds a function to the given blueprint\n\n@param Blueprint      The blueprint to add the function to\n@param FuncName       Name of the function to add\n\n@return UEdGraph*" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "AddFunctionGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::BlueprintEditorLibrary_eventAddFunctionGraph_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint_Statics
	{
		struct BlueprintEditorLibrary_eventCompileBlueprint_Parms
		{
			UBlueprint* Blueprint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventCompileBlueprint_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Upgrade Tools" },
		{ "Comment", "/**\n\x09* Compiles the given blueprint. \n\x09*\n\x09* @param Blueprint\x09""Blueprint to compile\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Compiles the given blueprint.\n\n@param Blueprint      Blueprint to compile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "CompileBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint_Statics::BlueprintEditorLibrary_eventCompileBlueprint_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics
	{
		struct BlueprintEditorLibrary_eventFindEventGraph_Parms
		{
			UBlueprint* Blueprint;
			UEdGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventFindEventGraph_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventFindEventGraph_Parms, ReturnValue), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Upgrade Tools" },
		{ "Comment", "/**\n\x09* Finds the event graph of the given blueprint. Null if it doesn't have one. This will only return\n\x09* the primary event graph of the blueprint (the graph named \"EventGraph\").\n\x09*\n\x09* @param Blueprint\x09\x09""Blueprint to search for the event graph on\n\x09*\n\x09* @return UEdGraph*\x09\x09""Event graph of the blueprint if it has one, null if it doesn't have one\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Finds the event graph of the given blueprint. Null if it doesn't have one. This will only return\nthe primary event graph of the blueprint (the graph named \"EventGraph\").\n\n@param Blueprint              Blueprint to search for the event graph on\n\n@return UEdGraph*             Event graph of the blueprint if it has one, null if it doesn't have one" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "FindEventGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics::BlueprintEditorLibrary_eventFindEventGraph_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics
	{
		struct BlueprintEditorLibrary_eventFindGraph_Parms
		{
			UBlueprint* Blueprint;
			FName GraphName;
			UEdGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GraphName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventFindGraph_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventFindGraph_Parms, GraphName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventFindGraph_Parms, ReturnValue), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::NewProp_GraphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Upgrade Tools" },
		{ "Comment", "/**\n\x09* Finds the graph with the given name on the blueprint. Null if it doesn't have one. \n\x09*\n\x09* @param Blueprint\x09\x09""Blueprint to search\n\x09* @param GraphName\x09\x09The name of the graph to search for \n\x09*\n\x09* @return UEdGraph*\x09\x09Pointer to the graph with the given name, null if not found\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Finds the graph with the given name on the blueprint. Null if it doesn't have one.\n\n@param Blueprint              Blueprint to search\n@param GraphName              The name of the graph to search for\n\n@return UEdGraph*             Pointer to the graph with the given name, null if not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "FindGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::BlueprintEditorLibrary_eventFindGraph_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics
	{
		struct BlueprintEditorLibrary_eventGeneratedClass_Parms
		{
			UBlueprint* BlueprintObj;
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintObj;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics::NewProp_BlueprintObj = { "BlueprintObj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventGeneratedClass_Parms, BlueprintObj), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventGeneratedClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics::NewProp_BlueprintObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting" },
		{ "Comment", "/**\n\x09 * Gets the class generated when this blueprint is compiled\n\x09 *\n\x09 * @param BlueprintObj\x09\x09The blueprint object\n\x09 * @return UClass*\x09\x09\x09The generated class\n\x09 */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets the class generated when this blueprint is compiled\n\n@param BlueprintObj          The blueprint object\n@return UClass*                      The generated class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "GeneratedClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics::BlueprintEditorLibrary_eventGeneratedClass_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics
	{
		struct BlueprintEditorLibrary_eventGetBlueprintAsset_Parms
		{
			UObject* Object;
			UBlueprint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventGetBlueprintAsset_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventGetBlueprintAsset_Parms, ReturnValue), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Upgrade Tools" },
		{ "Comment", "/**\n\x09* Gets the UBlueprint version of the given object if possible.\n\x09*\n\x09* @param Object\x09\x09\x09The object we need to get the UBlueprint from\n\x09*\n\x09* @return UBlueprint*\x09The blueprint type of the given object, nullptr if the object is not a blueprint.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Gets the UBlueprint version of the given object if possible.\n\n@param Object                 The object we need to get the UBlueprint from\n\n@return UBlueprint*   The blueprint type of the given object, nullptr if the object is not a blueprint." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "GetBlueprintAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics::BlueprintEditorLibrary_eventGetBlueprintAsset_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshAllOpenBlueprintEditors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshAllOpenBlueprintEditors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Editor" },
		{ "Comment", "/** Refresh any open blueprint editors */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Refresh any open blueprint editors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshAllOpenBlueprintEditors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "RefreshAllOpenBlueprintEditors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshAllOpenBlueprintEditors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshAllOpenBlueprintEditors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshAllOpenBlueprintEditors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshAllOpenBlueprintEditors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics
	{
		struct BlueprintEditorLibrary_eventRefreshOpenEditorsForBlueprint_Parms
		{
			const UBlueprint* BP;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::NewProp_BP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::NewProp_BP = { "BP", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventRefreshOpenEditorsForBlueprint_Parms, BP), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::NewProp_BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::NewProp_BP_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::NewProp_BP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Editor" },
		{ "Comment", "/** Attempt to refresh any open blueprint editors for the given asset */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Attempt to refresh any open blueprint editors for the given asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "RefreshOpenEditorsForBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::BlueprintEditorLibrary_eventRefreshOpenEditorsForBlueprint_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics
	{
		struct BlueprintEditorLibrary_eventRemoveFunctionGraph_Parms
		{
			UBlueprint* Blueprint;
			FName FuncName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FuncName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventRemoveFunctionGraph_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics::NewProp_FuncName = { "FuncName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventRemoveFunctionGraph_Parms, FuncName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics::NewProp_FuncName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Upgrade Tools" },
		{ "Comment", "/** \n\x09* Deletes the function of the given name on this blueprint. Does NOT replace function call sites. \n\x09*\n\x09* @param Blueprint\x09\x09The blueprint to remove the function from\n\x09* @param FuncName\x09\x09The name of the function to remove\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Deletes the function of the given name on this blueprint. Does NOT replace function call sites.\n\n@param Blueprint              The blueprint to remove the function from\n@param FuncName               The name of the function to remove" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "RemoveFunctionGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics::BlueprintEditorLibrary_eventRemoveFunctionGraph_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics
	{
		struct BlueprintEditorLibrary_eventRemoveGraph_Parms
		{
			UBlueprint* Blueprint;
			UEdGraph* Graph;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventRemoveGraph_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventRemoveGraph_Parms, Graph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics::NewProp_Graph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Upgrade Tools" },
		{ "Comment", "/** \n\x09* Removes the given graph from the blueprint if possible \n\x09* \n\x09* @param Blueprint\x09The blueprint the graph will be removed from\n\x09* @param Graph\x09\x09The graph to remove\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Removes the given graph from the blueprint if possible\n\n@param Blueprint      The blueprint the graph will be removed from\n@param Graph          The graph to remove" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "RemoveGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics::BlueprintEditorLibrary_eventRemoveGraph_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes_Statics
	{
		struct BlueprintEditorLibrary_eventRemoveUnusedNodes_Parms
		{
			UBlueprint* Blueprint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventRemoveUnusedNodes_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Upgrade Tools" },
		{ "Comment", "/**\n\x09* Remove any nodes in this blueprint that have no connections made to them.\n\x09*\n\x09* @param Blueprint\x09\x09The blueprint to remove the nodes from\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Remove any nodes in this blueprint that have no connections made to them.\n\n@param Blueprint              The blueprint to remove the nodes from" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "RemoveUnusedNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes_Statics::BlueprintEditorLibrary_eventRemoveUnusedNodes_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics
	{
		struct BlueprintEditorLibrary_eventRemoveUnusedVariables_Parms
		{
			UBlueprint* Blueprint;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventRemoveUnusedVariables_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventRemoveUnusedVariables_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Upgrade Tools" },
		{ "Comment", "/**\n\x09* Deletes any unused blueprint created variables the given blueprint.\n\x09* An Unused variable is any BP variable that is not referenced in any \n\x09* blueprint graphs\n\x09* \n\x09* @param Blueprint\x09\x09\x09""Blueprint that you would like to remove variables from\n\x09*\n\x09* @return\x09\x09\x09\x09\x09Number of variables removed\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Deletes any unused blueprint created variables the given blueprint.\nAn Unused variable is any BP variable that is not referenced in any\nblueprint graphs\n\n@param Blueprint                      Blueprint that you would like to remove variables from\n\n@return                                       Number of variables removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "RemoveUnusedVariables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics::BlueprintEditorLibrary_eventRemoveUnusedVariables_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics
	{
		struct BlueprintEditorLibrary_eventRenameGraph_Parms
		{
			UEdGraph* Graph;
			FString NewNameStr;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewNameStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewNameStr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventRenameGraph_Parms, Graph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::NewProp_NewNameStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::NewProp_NewNameStr = { "NewNameStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventRenameGraph_Parms, NewNameStr), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::NewProp_NewNameStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::NewProp_NewNameStr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::NewProp_NewNameStr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Upgrade Tools" },
		{ "Comment", "/**\n\x09* Attempts to rename the given graph with a new name\n\x09*\n\x09* @param Graph\x09\x09\x09The graph to rename\n\x09* @param NewNameStr\x09\x09The new name of the graph\n\x09*/" },
		{ "CPP_Default_NewNameStr", "NewGraph" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Attempts to rename the given graph with a new name\n\n@param Graph                  The graph to rename\n@param NewNameStr             The new name of the graph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "RenameGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::BlueprintEditorLibrary_eventRenameGraph_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics
	{
		struct BlueprintEditorLibrary_eventReparentBlueprint_Parms
		{
			UBlueprint* Blueprint;
			UClass* NewParentClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventReparentBlueprint_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics::NewProp_NewParentClass = { "NewParentClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventReparentBlueprint_Parms, NewParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics::NewProp_NewParentClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Upgrade Tools" },
		{ "Comment", "/**\n\x09* Attempts to reparent the given blueprint to the new chosen parent class. \n\x09*\n\x09* @param Blueprint\x09\x09\x09""Blueprint that you would like to reparent\n\x09* @param NewParentClass\x09\x09The new parent class to use\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Attempts to reparent the given blueprint to the new chosen parent class.\n\n@param Blueprint                      Blueprint that you would like to reparent\n@param NewParentClass         The new parent class to use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "ReparentBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics::BlueprintEditorLibrary_eventReparentBlueprint_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics
	{
		struct BlueprintEditorLibrary_eventReplaceVariableReferences_Parms
		{
			UBlueprint* Blueprint;
			FName OldVarName;
			FName NewVarName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldVarName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OldVarName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewVarName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewVarName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventReplaceVariableReferences_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::NewProp_OldVarName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::NewProp_OldVarName = { "OldVarName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventReplaceVariableReferences_Parms, OldVarName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::NewProp_OldVarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::NewProp_OldVarName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::NewProp_NewVarName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::NewProp_NewVarName = { "NewVarName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventReplaceVariableReferences_Parms, NewVarName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::NewProp_NewVarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::NewProp_NewVarName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::NewProp_OldVarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::NewProp_NewVarName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Upgrade Tools" },
		{ "Comment", "/**\n\x09* Replace any references of variables with the OldVarName to references of those with the NewVarName if possible\n\x09*\n\x09* @param Blueprint\x09\x09""Blueprint to replace the variable references on\n\x09* @param OldVarName\x09\x09The variable you want replaced\n\x09* @param NewVarName\x09\x09The new variable that will be used in the old one's place\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Replace any references of variables with the OldVarName to references of those with the NewVarName if possible\n\n@param Blueprint              Blueprint to replace the variable references on\n@param OldVarName             The variable you want replaced\n@param NewVarName             The new variable that will be used in the old one's place" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "ReplaceVariableReferences", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::BlueprintEditorLibrary_eventReplaceVariableReferences_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics
	{
		struct BlueprintEditorLibrary_eventSetBlueprintVariableExposeOnSpawn_Parms
		{
			UBlueprint* Blueprint;
			FName VariableName;
			bool bExposeOnSpawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
		static void NewProp_bExposeOnSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeOnSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventSetBlueprintVariableExposeOnSpawn_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventSetBlueprintVariableExposeOnSpawn_Parms, VariableName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::NewProp_VariableName_MetaData)) };
	void Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::NewProp_bExposeOnSpawn_SetBit(void* Obj)
	{
		((BlueprintEditorLibrary_eventSetBlueprintVariableExposeOnSpawn_Parms*)Obj)->bExposeOnSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::NewProp_bExposeOnSpawn = { "bExposeOnSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintEditorLibrary_eventSetBlueprintVariableExposeOnSpawn_Parms), &Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::NewProp_bExposeOnSpawn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::NewProp_bExposeOnSpawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting" },
		{ "Comment", "/**\n\x09 * Sets \"Expose On Spawn\" to true/false on a Blueprint variable\n\x09 *\n\x09 * @param Blueprint\x09\x09\x09The blueprint object\n\x09 * @param VariableName\x09\x09The variable name\n\x09 * @param bExposeOnSpawn\x09Set to true to expose on spawn\n\x09 */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Sets \"Expose On Spawn\" to true/false on a Blueprint variable\n\n@param Blueprint                     The blueprint object\n@param VariableName          The variable name\n@param bExposeOnSpawn        Set to true to expose on spawn" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "SetBlueprintVariableExposeOnSpawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::BlueprintEditorLibrary_eventSetBlueprintVariableExposeOnSpawn_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics
	{
		struct BlueprintEditorLibrary_eventSetBlueprintVariableExposeToCinematics_Parms
		{
			UBlueprint* Blueprint;
			FName VariableName;
			bool bExposeToCinematics;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
		static void NewProp_bExposeToCinematics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeToCinematics;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventSetBlueprintVariableExposeToCinematics_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventSetBlueprintVariableExposeToCinematics_Parms, VariableName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::NewProp_VariableName_MetaData)) };
	void Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::NewProp_bExposeToCinematics_SetBit(void* Obj)
	{
		((BlueprintEditorLibrary_eventSetBlueprintVariableExposeToCinematics_Parms*)Obj)->bExposeToCinematics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::NewProp_bExposeToCinematics = { "bExposeToCinematics", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintEditorLibrary_eventSetBlueprintVariableExposeToCinematics_Parms), &Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::NewProp_bExposeToCinematics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::NewProp_bExposeToCinematics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting" },
		{ "Comment", "/**\n\x09 * Sets \"Expose To Cinematics\" to true/false on a Blueprint variable\n\x09 *\n\x09 * @param Blueprint\x09\x09\x09\x09The blueprint object\n\x09 * @param VariableName\x09\x09\x09The variable name\n\x09 * @param bExposeToCinematics\x09Set to true to expose to cinematics\n\x09 */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Sets \"Expose To Cinematics\" to true/false on a Blueprint variable\n\n@param Blueprint                             The blueprint object\n@param VariableName                  The variable name\n@param bExposeToCinematics   Set to true to expose to cinematics" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "SetBlueprintVariableExposeToCinematics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::BlueprintEditorLibrary_eventSetBlueprintVariableExposeToCinematics_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics
	{
		struct BlueprintEditorLibrary_eventSetBlueprintVariableInstanceEditable_Parms
		{
			UBlueprint* Blueprint;
			FName VariableName;
			bool bInstanceEditable;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
		static void NewProp_bInstanceEditable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstanceEditable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventSetBlueprintVariableInstanceEditable_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::NewProp_VariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventSetBlueprintVariableInstanceEditable_Parms, VariableName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::NewProp_VariableName_MetaData)) };
	void Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::NewProp_bInstanceEditable_SetBit(void* Obj)
	{
		((BlueprintEditorLibrary_eventSetBlueprintVariableInstanceEditable_Parms*)Obj)->bInstanceEditable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::NewProp_bInstanceEditable = { "bInstanceEditable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintEditorLibrary_eventSetBlueprintVariableInstanceEditable_Parms), &Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::NewProp_bInstanceEditable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::NewProp_bInstanceEditable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting" },
		{ "Comment", "/**\n\x09 * Sets \"Instance Editable\" to true/false on a Blueprint variable\n\x09 *\n\x09 * @param Blueprint\x09\x09\x09\x09The blueprint object\n\x09 * @param VariableName\x09\x09\x09The variable name\n\x09 * @param bInstanceEditable\x09\x09Toggle InstanceEditable\n\x09 */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Sets \"Instance Editable\" to true/false on a Blueprint variable\n\n@param Blueprint                             The blueprint object\n@param VariableName                  The variable name\n@param bInstanceEditable             Toggle InstanceEditable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "SetBlueprintVariableInstanceEditable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::BlueprintEditorLibrary_eventSetBlueprintVariableInstanceEditable_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes_Statics
	{
		struct BlueprintEditorLibrary_eventUpgradeOperatorNodes_Parms
		{
			UBlueprint* Blueprint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintEditorLibrary_eventUpgradeOperatorNodes_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes_Statics::NewProp_Blueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint Upgrade Tools" },
		{ "Comment", "/**\n\x09* Replace any old operator nodes (float + float, vector + float, int + vector, etc)\n\x09* with the newer Promotable Operator version of the node. Preserve any connections the\n\x09* original node had to the newer version of the node. \n\x09*\n\x09* @param Blueprint\x09""Blueprint to upgrade\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
		{ "ToolTip", "Replace any old operator nodes (float + float, vector + float, int + vector, etc)\nwith the newer Promotable Operator version of the node. Preserve any connections the\noriginal node had to the newer version of the node.\n\n@param Blueprint      Blueprint to upgrade" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintEditorLibrary, nullptr, "UpgradeOperatorNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes_Statics::BlueprintEditorLibrary_eventUpgradeOperatorNodes_Parms), Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintEditorLibrary);
	UClass* Z_Construct_UClass_UBlueprintEditorLibrary_NoRegister()
	{
		return UBlueprintEditorLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintEditorLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintEditorLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintEditorLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintEditorLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_AddFunctionGraph, "AddFunctionGraph" }, // 3183593389
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_CompileBlueprint, "CompileBlueprint" }, // 2889876872
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_FindEventGraph, "FindEventGraph" }, // 846219646
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_FindGraph, "FindGraph" }, // 1396992392
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_GeneratedClass, "GeneratedClass" }, // 2978772179
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_GetBlueprintAsset, "GetBlueprintAsset" }, // 1057600656
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshAllOpenBlueprintEditors, "RefreshAllOpenBlueprintEditors" }, // 2689651182
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_RefreshOpenEditorsForBlueprint, "RefreshOpenEditorsForBlueprint" }, // 216666400
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveFunctionGraph, "RemoveFunctionGraph" }, // 3027340123
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveGraph, "RemoveGraph" }, // 2904004508
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedNodes, "RemoveUnusedNodes" }, // 2857255811
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_RemoveUnusedVariables, "RemoveUnusedVariables" }, // 1630723776
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_RenameGraph, "RenameGraph" }, // 475728425
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_ReparentBlueprint, "ReparentBlueprint" }, // 3262982554
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_ReplaceVariableReferences, "ReplaceVariableReferences" }, // 1255375880
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeOnSpawn, "SetBlueprintVariableExposeOnSpawn" }, // 3447640495
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableExposeToCinematics, "SetBlueprintVariableExposeToCinematics" }, // 2522215752
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_SetBlueprintVariableInstanceEditable, "SetBlueprintVariableInstanceEditable" }, // 557272515
		{ &Z_Construct_UFunction_UBlueprintEditorLibrary_UpgradeOperatorNodes, "UpgradeOperatorNodes" }, // 733687710
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintEditorLibrary.h" },
		{ "ModuleRelativePath", "Public/BlueprintEditorLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintEditorLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintEditorLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintEditorLibrary_Statics::ClassParams = {
		&UBlueprintEditorLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintEditorLibrary()
	{
		if (!Z_Registration_Info_UClass_UBlueprintEditorLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintEditorLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintEditorLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintEditorLibrary.OuterSingleton;
	}
	template<> BLUEPRINTEDITORLIBRARY_API UClass* StaticClass<UBlueprintEditorLibrary>()
	{
		return UBlueprintEditorLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintEditorLibrary);
	UBlueprintEditorLibrary::~UBlueprintEditorLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintEditorLibrary, UBlueprintEditorLibrary::StaticClass, TEXT("UBlueprintEditorLibrary"), &Z_Registration_Info_UClass_UBlueprintEditorLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintEditorLibrary), 3027086882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_562692746(TEXT("/Script/BlueprintEditorLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
