// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/RigVMFunctionLibrary.h"
#include "RigVMModel/RigVMBuildData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunctionLibrary() {}
// Cross Module References
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionLibrary();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionLibrary_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionReferenceNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLibraryNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URigVMFunctionLibrary::execGetReferencePathsForFunction)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InFunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetReferencePathsForFunction(Z_Param_Out_InFunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMFunctionLibrary::execGetReferencesForFunction)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InFunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSoftObjectPtr<URigVMFunctionReferenceNode> >*)Z_Param__Result=P_THIS->GetReferencesForFunction(Z_Param_Out_InFunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMFunctionLibrary::execFindFunctionForNode)
	{
		P_GET_OBJECT(URigVMNode,Z_Param_InNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMLibraryNode**)Z_Param__Result=P_THIS->FindFunctionForNode(Z_Param_InNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMFunctionLibrary::execFindFunction)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InFunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMLibraryNode**)Z_Param__Result=P_THIS->FindFunction(Z_Param_Out_InFunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMFunctionLibrary::execGetFunctions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMLibraryNode*>*)Z_Param__Result=P_THIS->GetFunctions();
		P_NATIVE_END;
	}
	void URigVMFunctionLibrary::StaticRegisterNativesURigVMFunctionLibrary()
	{
		UClass* Class = URigVMFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindFunction", &URigVMFunctionLibrary::execFindFunction },
			{ "FindFunctionForNode", &URigVMFunctionLibrary::execFindFunctionForNode },
			{ "GetFunctions", &URigVMFunctionLibrary::execGetFunctions },
			{ "GetReferencePathsForFunction", &URigVMFunctionLibrary::execGetReferencePathsForFunction },
			{ "GetReferencesForFunction", &URigVMFunctionLibrary::execGetReferencesForFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics
	{
		struct RigVMFunctionLibrary_eventFindFunction_Parms
		{
			FName InFunctionName;
			URigVMLibraryNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InFunctionName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::NewProp_InFunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::NewProp_InFunctionName = { "InFunctionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMFunctionLibrary_eventFindFunction_Parms, InFunctionName), METADATA_PARAMS(Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::NewProp_InFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::NewProp_InFunctionName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMFunctionLibrary_eventFindFunction_Parms, ReturnValue), Z_Construct_UClass_URigVMLibraryNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::NewProp_InFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Finds a function by name\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMFunctionLibrary.h" },
		{ "ToolTip", "Finds a function by name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMFunctionLibrary, nullptr, "FindFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::RigVMFunctionLibrary_eventFindFunction_Parms), Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics
	{
		struct RigVMFunctionLibrary_eventFindFunctionForNode_Parms
		{
			URigVMNode* InNode;
			URigVMLibraryNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMFunctionLibrary_eventFindFunctionForNode_Parms, InNode), Z_Construct_UClass_URigVMNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMFunctionLibrary_eventFindFunctionForNode_Parms, ReturnValue), Z_Construct_UClass_URigVMLibraryNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Finds a function by a node within a function (or a sub graph of that)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMFunctionLibrary.h" },
		{ "ToolTip", "Finds a function by a node within a function (or a sub graph of that)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMFunctionLibrary, nullptr, "FindFunctionForNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics::RigVMFunctionLibrary_eventFindFunctionForNode_Parms), Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics
	{
		struct RigVMFunctionLibrary_eventGetFunctions_Parms
		{
			TArray<URigVMLibraryNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMLibraryNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMFunctionLibrary_eventGetFunctions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns all of the stored functions\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMFunctionLibrary.h" },
		{ "ToolTip", "Returns all of the stored functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMFunctionLibrary, nullptr, "GetFunctions", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics::RigVMFunctionLibrary_eventGetFunctions_Parms), Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics
	{
		struct RigVMFunctionLibrary_eventGetReferencePathsForFunction_Parms
		{
			FName InFunctionName;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InFunctionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::NewProp_InFunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::NewProp_InFunctionName = { "InFunctionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMFunctionLibrary_eventGetReferencePathsForFunction_Parms, InFunctionName), METADATA_PARAMS(Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::NewProp_InFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::NewProp_InFunctionName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMFunctionLibrary_eventGetReferencePathsForFunction_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::NewProp_InFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns all references for a given function name\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMFunctionLibrary.h" },
		{ "ToolTip", "Returns all references for a given function name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMFunctionLibrary, nullptr, "GetReferencePathsForFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::RigVMFunctionLibrary_eventGetReferencePathsForFunction_Parms), Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics
	{
		struct RigVMFunctionLibrary_eventGetReferencesForFunction_Parms
		{
			FName InFunctionName;
			TArray<TSoftObjectPtr<URigVMFunctionReferenceNode> > ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InFunctionName;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::NewProp_InFunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::NewProp_InFunctionName = { "InFunctionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMFunctionLibrary_eventGetReferencesForFunction_Parms, InFunctionName), METADATA_PARAMS(Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::NewProp_InFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::NewProp_InFunctionName_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMFunctionReferenceNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMFunctionLibrary_eventGetReferencesForFunction_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::NewProp_InFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns all references for a given function name\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMFunctionLibrary.h" },
		{ "ToolTip", "Returns all references for a given function name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMFunctionLibrary, nullptr, "GetReferencesForFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::RigVMFunctionLibrary_eventGetReferencesForFunction_Parms), Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMFunctionLibrary);
	UClass* Z_Construct_UClass_URigVMFunctionLibrary_NoRegister()
	{
		return URigVMFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URigVMFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PublicFunctionNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublicFunctionNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublicFunctionNames;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionReferences_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionReferences_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionReferences_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FunctionReferences;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalizedFunctions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizedFunctions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizedFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LocalizedFunctions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMFunctionLibrary_FindFunction, "FindFunction" }, // 912894256
		{ &Z_Construct_UFunction_URigVMFunctionLibrary_FindFunctionForNode, "FindFunctionForNode" }, // 4285806520
		{ &Z_Construct_UFunction_URigVMFunctionLibrary_GetFunctions, "GetFunctions" }, // 618169056
		{ &Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencePathsForFunction, "GetReferencePathsForFunction" }, // 411876622
		{ &Z_Construct_UFunction_URigVMFunctionLibrary_GetReferencesForFunction, "GetReferencesForFunction" }, // 225892475
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Function Library is a graph used only to store\n * the sub graphs used for functions.\n */" },
		{ "IncludePath", "RigVMModel/RigVMFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMFunctionLibrary.h" },
		{ "ToolTip", "The Function Library is a graph used only to store\nthe sub graphs used for functions." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_PublicFunctionNames_Inner = { "PublicFunctionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_PublicFunctionNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_PublicFunctionNames = { "PublicFunctionNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMFunctionLibrary, PublicFunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_PublicFunctionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_PublicFunctionNames_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_FunctionReferences_ValueProp = { "FunctionReferences", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRigVMFunctionReferenceArray, METADATA_PARAMS(nullptr, 0) }; // 2407139918
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_FunctionReferences_Key_KeyProp = { "FunctionReferences_Key", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMLibraryNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_FunctionReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_FunctionReferences = { "FunctionReferences", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMFunctionLibrary, FunctionReferences_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_FunctionReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_FunctionReferences_MetaData)) }; // 2407139918
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_LocalizedFunctions_ValueProp = { "LocalizedFunctions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_URigVMLibraryNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_LocalizedFunctions_Key_KeyProp = { "LocalizedFunctions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_LocalizedFunctions_MetaData[] = {
		{ "Comment", "// A map which stores a library node per original pathname.\n// The source pathname is the full path of the source function that was localized\n// to the local copy stored in the value of the pair.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMFunctionLibrary.h" },
		{ "ToolTip", "A map which stores a library node per original pathname.\nThe source pathname is the full path of the source function that was localized\nto the local copy stored in the value of the pair." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_LocalizedFunctions = { "LocalizedFunctions", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMFunctionLibrary, LocalizedFunctions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_LocalizedFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_LocalizedFunctions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMFunctionLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_PublicFunctionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_PublicFunctionNames,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_FunctionReferences_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_FunctionReferences_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_FunctionReferences,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_LocalizedFunctions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_LocalizedFunctions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMFunctionLibrary_Statics::NewProp_LocalizedFunctions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMFunctionLibrary_Statics::ClassParams = {
		&URigVMFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVMFunctionLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMFunctionLibrary_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_URigVMFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMFunctionLibrary.OuterSingleton, Z_Construct_UClass_URigVMFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMFunctionLibrary.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMFunctionLibrary>()
	{
		return URigVMFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMFunctionLibrary);
	URigVMFunctionLibrary::~URigVMFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMFunctionLibrary, URigVMFunctionLibrary::StaticClass, TEXT("URigVMFunctionLibrary"), &Z_Registration_Info_UClass_URigVMFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMFunctionLibrary), 2084558004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_3273212279(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
