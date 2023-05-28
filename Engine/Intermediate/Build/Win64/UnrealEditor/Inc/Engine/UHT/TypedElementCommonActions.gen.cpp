// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Elements/Framework/TypedElementCommonActions.h"
#include "../../Source/Runtime/Engine/Public/Elements/Interfaces/TypedElementWorldInterface.h"
#include "Elements/Framework/TypedElementHandle.h"
#include "Elements/Framework/TypedElementListProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementCommonActions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTypedElementCommonActions();
	ENGINE_API UClass* Z_Construct_UClass_UTypedElementCommonActions_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDeletionOptions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPasteOptions();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementListProxy();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementPasteOptions;
class UScriptStruct* FTypedElementPasteOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementPasteOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementPasteOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementPasteOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TypedElementPasteOptions"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementPasteOptions.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTypedElementPasteOptions>()
{
	return FTypedElementPasteOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionSetToModify_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionSetToModify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPasteAtLocation_MetaData[];
#endif
		static void NewProp_bPasteAtLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPasteAtLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PasteLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PasteLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementPasteOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_SelectionSetToModify_MetaData[] = {
		{ "Category", "TypedElementInterfaces|World|PasteOptions" },
		{ "Comment", "// If provided the SelectionSet selection will only contains the newly added elements\n" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "If provided the SelectionSet selection will only contains the newly added elements" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_SelectionSetToModify = { "SelectionSetToModify", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTypedElementPasteOptions, SelectionSetToModify), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_SelectionSetToModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_SelectionSetToModify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_bPasteAtLocation_MetaData[] = {
		{ "Category", "TypedElementInterfaces|World|PasteOptions" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_bPasteAtLocation_SetBit(void* Obj)
	{
		((FTypedElementPasteOptions*)Obj)->bPasteAtLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_bPasteAtLocation = { "bPasteAtLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTypedElementPasteOptions), &Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_bPasteAtLocation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_bPasteAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_bPasteAtLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_PasteLocation_MetaData[] = {
		{ "Category", "TypedElementInterfaces|World|PasteOptions" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_PasteLocation = { "PasteLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTypedElementPasteOptions, PasteLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_PasteLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_PasteLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_SelectionSetToModify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_bPasteAtLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewProp_PasteLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TypedElementPasteOptions",
		sizeof(FTypedElementPasteOptions),
		alignof(FTypedElementPasteOptions),
		Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementPasteOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementPasteOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementPasteOptions.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementPasteOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execPasteNormalizedElementsFromString)
	{
		P_GET_STRUCT_REF(FScriptTypedElementListProxy,Z_Param_Out_ElementList);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT_REF(FTypedElementPasteOptions,Z_Param_Out_PasteOption);
		P_GET_PROPERTY(FStrProperty,Z_Param_InputString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FScriptTypedElementHandle>*)Z_Param__Result=P_THIS->PasteNormalizedElementsFromString(Z_Param_Out_ElementList,Z_Param_World,Z_Param_Out_PasteOption,Z_Param_InputString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execK2_PasteNormalizedElements)
	{
		P_GET_STRUCT_REF(FScriptTypedElementListProxy,Z_Param_Out_ElementList);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT_REF(FTypedElementPasteOptions,Z_Param_Out_PasteOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FScriptTypedElementHandle>*)Z_Param__Result=P_THIS->K2_PasteNormalizedElements(Z_Param_Out_ElementList,Z_Param_World,Z_Param_Out_PasteOption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execPasteElementsFromString)
	{
		P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_SelectionSet);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT_REF(FTypedElementPasteOptions,Z_Param_Out_PasteOption);
		P_GET_PROPERTY(FStrProperty,Z_Param_InputString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FScriptTypedElementHandle>*)Z_Param__Result=P_THIS->PasteElementsFromString(Z_Param_SelectionSet,Z_Param_World,Z_Param_Out_PasteOption,Z_Param_InputString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execK2_PasteElements)
	{
		P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_SelectionSet);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT_REF(FTypedElementPasteOptions,Z_Param_Out_PasteOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FScriptTypedElementHandle>*)Z_Param__Result=P_THIS->K2_PasteElements(Z_Param_SelectionSet,Z_Param_World,Z_Param_Out_PasteOption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execCopyNormalizedElementsToString)
	{
		P_GET_STRUCT_REF(FScriptTypedElementListProxy,Z_Param_Out_ElementList);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CopyNormalizedElementsToString(Z_Param_Out_ElementList,Z_Param_Out_OutputString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execCopyNormalizedElements)
	{
		P_GET_STRUCT_REF(FScriptTypedElementListProxy,Z_Param_Out_ElementList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CopyNormalizedElements(Z_Param_Out_ElementList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execDuplicateNormalizedElements)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FScriptTypedElementHandle>*)Z_Param__Result=P_THIS->DuplicateNormalizedElements(Z_Param_ElementList,Z_Param_World,Z_Param_Out_LocationOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execK2_DuplicateSelectedElements)
	{
		P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_SelectionSet);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FScriptTypedElementHandle>*)Z_Param__Result=P_THIS->K2_DuplicateSelectedElements(Z_Param_SelectionSet,Z_Param_World,Z_Param_Out_LocationOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execDeleteNormalizedElements)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_InSelectionSet);
		P_GET_STRUCT_REF(FTypedElementDeletionOptions,Z_Param_Out_DeletionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteNormalizedElements(Z_Param_ElementList,Z_Param_World,Z_Param_InSelectionSet,Z_Param_Out_DeletionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execCopySelectedElementsToString)
	{
		P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_SelectionSet);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CopySelectedElementsToString(Z_Param_SelectionSet,Z_Param_Out_OutputString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execCopySelectedElements)
	{
		P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_SelectionSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CopySelectedElements(Z_Param_SelectionSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execDeleteSelectedElements)
	{
		P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_SelectionSet);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT_REF(FTypedElementDeletionOptions,Z_Param_Out_DeletionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteSelectedElements(Z_Param_SelectionSet,Z_Param_World,Z_Param_Out_DeletionOptions);
		P_NATIVE_END;
	}
	void UTypedElementCommonActions::StaticRegisterNativesUTypedElementCommonActions()
	{
		UClass* Class = UTypedElementCommonActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyNormalizedElements", &UTypedElementCommonActions::execCopyNormalizedElements },
			{ "CopyNormalizedElementsToString", &UTypedElementCommonActions::execCopyNormalizedElementsToString },
			{ "CopySelectedElements", &UTypedElementCommonActions::execCopySelectedElements },
			{ "CopySelectedElementsToString", &UTypedElementCommonActions::execCopySelectedElementsToString },
			{ "DeleteNormalizedElements", &UTypedElementCommonActions::execDeleteNormalizedElements },
			{ "DeleteSelectedElements", &UTypedElementCommonActions::execDeleteSelectedElements },
			{ "DuplicateNormalizedElements", &UTypedElementCommonActions::execDuplicateNormalizedElements },
			{ "K2_DuplicateSelectedElements", &UTypedElementCommonActions::execK2_DuplicateSelectedElements },
			{ "K2_PasteElements", &UTypedElementCommonActions::execK2_PasteElements },
			{ "K2_PasteNormalizedElements", &UTypedElementCommonActions::execK2_PasteNormalizedElements },
			{ "PasteElementsFromString", &UTypedElementCommonActions::execPasteElementsFromString },
			{ "PasteNormalizedElementsFromString", &UTypedElementCommonActions::execPasteNormalizedElementsFromString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics
	{
		struct TypedElementCommonActions_eventCopyNormalizedElements_Parms
		{
			FScriptTypedElementListProxy ElementList;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventCopyNormalizedElements_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
	void Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementCommonActions_eventCopyNormalizedElements_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementCommonActions_eventCopyNormalizedElements_Parms), &Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/*\n\x09 * Copy any elements from the given selection set that can be copied into the clipboard.\n\x09 * @note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "* Copy any elements from the given selection set that can be copied into the clipboard.\n* @note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "CopyNormalizedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::TypedElementCommonActions_eventCopyNormalizedElements_Parms), Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics
	{
		struct TypedElementCommonActions_eventCopyNormalizedElementsToString_Parms
		{
			FScriptTypedElementListProxy ElementList;
			FString OutputString;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventCopyNormalizedElementsToString_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::NewProp_OutputString = { "OutputString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventCopyNormalizedElementsToString_Parms, OutputString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementCommonActions_eventCopyNormalizedElementsToString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementCommonActions_eventCopyNormalizedElementsToString_Parms), &Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::NewProp_OutputString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/*\n\x09 * Copy any elements from the given selection set that can be copied into the clipboard.\n\x09 * @note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "* Copy any elements from the given selection set that can be copied into the clipboard.\n* @note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "CopyNormalizedElementsToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::TypedElementCommonActions_eventCopyNormalizedElementsToString_Parms), Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics
	{
		struct TypedElementCommonActions_eventCopySelectedElements_Parms
		{
			UTypedElementSelectionSet* SelectionSet;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventCopySelectedElements_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementCommonActions_eventCopySelectedElements_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementCommonActions_eventCopySelectedElements_Parms), &Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::NewProp_SelectionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Copy any elements from the given selection set that can be copied into the clipboard\n\x09 * @note Internally this just calls CopyNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "Copy any elements from the given selection set that can be copied into the clipboard\n@note Internally this just calls CopyNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "CopySelectedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::TypedElementCommonActions_eventCopySelectedElements_Parms), Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics
	{
		struct TypedElementCommonActions_eventCopySelectedElementsToString_Parms
		{
			UTypedElementSelectionSet* SelectionSet;
			FString OutputString;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventCopySelectedElementsToString_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::NewProp_OutputString = { "OutputString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventCopySelectedElementsToString_Parms, OutputString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementCommonActions_eventCopySelectedElementsToString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementCommonActions_eventCopySelectedElementsToString_Parms), &Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::NewProp_SelectionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::NewProp_OutputString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Copy any elements from the given selection set that can be copied into the string\n\x09 * @note Internally this just calls CopyNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "Copy any elements from the given selection set that can be copied into the string\n@note Internally this just calls CopyNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "CopySelectedElementsToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::TypedElementCommonActions_eventCopySelectedElementsToString_Parms), Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics
	{
		struct TypedElementCommonActions_eventDeleteNormalizedElements_Parms
		{
			FScriptTypedElementListProxy ElementList;
			UWorld* World;
			UTypedElementSelectionSet* InSelectionSet;
			FTypedElementDeletionOptions DeletionOptions;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSelectionSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeletionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeletionOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteNormalizedElements_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteNormalizedElements_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_InSelectionSet = { "InSelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteNormalizedElements_Parms, InSelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_DeletionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_DeletionOptions = { "DeletionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteNormalizedElements_Parms, DeletionOptions), Z_Construct_UScriptStruct_FTypedElementDeletionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_DeletionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_DeletionOptions_MetaData)) }; // 2808055591
	void Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementCommonActions_eventDeleteNormalizedElements_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementCommonActions_eventDeleteNormalizedElements_Parms), &Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_InSelectionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_DeletionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Delete any elements from the given list that can be deleted.\n\x09 * @note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "Delete any elements from the given list that can be deleted.\n@note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "DeleteNormalizedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::TypedElementCommonActions_eventDeleteNormalizedElements_Parms), Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics
	{
		struct TypedElementCommonActions_eventDeleteSelectedElements_Parms
		{
			UTypedElementSelectionSet* SelectionSet;
			UWorld* World;
			FTypedElementDeletionOptions DeletionOptions;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeletionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeletionOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteSelectedElements_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteSelectedElements_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_DeletionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_DeletionOptions = { "DeletionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteSelectedElements_Parms, DeletionOptions), Z_Construct_UScriptStruct_FTypedElementDeletionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_DeletionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_DeletionOptions_MetaData)) }; // 2808055591
	void Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementCommonActions_eventDeleteSelectedElements_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementCommonActions_eventDeleteSelectedElements_Parms), &Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_SelectionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_DeletionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Delete any elements from the given selection set that can be deleted.\n\x09 * @note Internally this just calls DeleteNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "Delete any elements from the given selection set that can be deleted.\n@note Internally this just calls DeleteNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "DeleteSelectedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::TypedElementCommonActions_eventDeleteSelectedElements_Parms), Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics
	{
		struct TypedElementCommonActions_eventDuplicateNormalizedElements_Parms
		{
			FScriptTypedElementListProxy ElementList;
			UWorld* World;
			FVector LocationOffset;
			TArray<FScriptTypedElementHandle> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventDuplicateNormalizedElements_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventDuplicateNormalizedElements_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventDuplicateNormalizedElements_Parms, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_LocationOffset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventDuplicateNormalizedElements_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Duplicate any elements from the given list that can be duplicated.\n\x09 * @note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "Duplicate any elements from the given list that can be duplicated.\n@note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "DuplicateNormalizedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::TypedElementCommonActions_eventDuplicateNormalizedElements_Parms), Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics
	{
		struct TypedElementCommonActions_eventK2_DuplicateSelectedElements_Parms
		{
			const UTypedElementSelectionSet* SelectionSet;
			UWorld* World;
			FVector LocationOffset;
			TArray<FScriptTypedElementHandle> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_SelectionSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventK2_DuplicateSelectedElements_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_SelectionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_SelectionSet_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventK2_DuplicateSelectedElements_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventK2_DuplicateSelectedElements_Parms, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_LocationOffset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventK2_DuplicateSelectedElements_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_SelectionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Duplicate any elements from the given selection set that can be duplicated.\n\x09 * @note Internally this just calls DuplicateNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection.\n\x09 */" },
		{ "DisplayName", "Duplicate Selected Elements" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ScriptName", "DuplicateSelectedElements" },
		{ "ToolTip", "Duplicate any elements from the given selection set that can be duplicated.\n@note Internally this just calls DuplicateNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "K2_DuplicateSelectedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::TypedElementCommonActions_eventK2_DuplicateSelectedElements_Parms), Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics
	{
		struct TypedElementCommonActions_eventK2_PasteElements_Parms
		{
			UTypedElementSelectionSet* SelectionSet;
			UWorld* World;
			FTypedElementPasteOptions PasteOption;
			TArray<FScriptTypedElementHandle> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PasteOption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PasteOption;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventK2_PasteElements_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventK2_PasteElements_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::NewProp_PasteOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::NewProp_PasteOption = { "PasteOption", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventK2_PasteElements_Parms, PasteOption), Z_Construct_UScriptStruct_FTypedElementPasteOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::NewProp_PasteOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::NewProp_PasteOption_MetaData)) }; // 3029040425
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventK2_PasteElements_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::NewProp_SelectionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::NewProp_PasteOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Paste any elements from the clipboard\n\x09 * @note Internally this just calls PasteNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection.\n\x09 */" },
		{ "DisplayName", "Paste Elements" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ScriptName", "PasteElements" },
		{ "ToolTip", "Paste any elements from the clipboard\n@note Internally this just calls PasteNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "K2_PasteElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::TypedElementCommonActions_eventK2_PasteElements_Parms), Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics
	{
		struct TypedElementCommonActions_eventK2_PasteNormalizedElements_Parms
		{
			FScriptTypedElementListProxy ElementList;
			UWorld* World;
			FTypedElementPasteOptions PasteOption;
			TArray<FScriptTypedElementHandle> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PasteOption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PasteOption;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventK2_PasteNormalizedElements_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventK2_PasteNormalizedElements_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_PasteOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_PasteOption = { "PasteOption", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventK2_PasteNormalizedElements_Parms, PasteOption), Z_Construct_UScriptStruct_FTypedElementPasteOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_PasteOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_PasteOption_MetaData)) }; // 3029040425
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventK2_PasteNormalizedElements_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_PasteOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Paste any elements from the clipboard\n\x09  * @note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList.\n\x09 */" },
		{ "DisplayName", "Paste Normalized Elements" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ScriptName", "PasteNormalizedElements" },
		{ "ToolTip", "Paste any elements from the clipboard\n@note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "K2_PasteNormalizedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::TypedElementCommonActions_eventK2_PasteNormalizedElements_Parms), Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics
	{
		struct TypedElementCommonActions_eventPasteElementsFromString_Parms
		{
			UTypedElementSelectionSet* SelectionSet;
			UWorld* World;
			FTypedElementPasteOptions PasteOption;
			FString InputString;
			TArray<FScriptTypedElementHandle> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PasteOption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PasteOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventPasteElementsFromString_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventPasteElementsFromString_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_PasteOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_PasteOption = { "PasteOption", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventPasteElementsFromString_Parms, PasteOption), Z_Construct_UScriptStruct_FTypedElementPasteOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_PasteOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_PasteOption_MetaData)) }; // 3029040425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_InputString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_InputString = { "InputString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventPasteElementsFromString_Parms, InputString), METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_InputString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_InputString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventPasteElementsFromString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_SelectionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_PasteOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_InputString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Paste any elements from the given string\n\x09 * @note Internally this just calls PasteNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "Paste any elements from the given string\n@note Internally this just calls PasteNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "PasteElementsFromString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::TypedElementCommonActions_eventPasteElementsFromString_Parms), Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics
	{
		struct TypedElementCommonActions_eventPasteNormalizedElementsFromString_Parms
		{
			FScriptTypedElementListProxy ElementList;
			UWorld* World;
			FTypedElementPasteOptions PasteOption;
			FString InputString;
			TArray<FScriptTypedElementHandle> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PasteOption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PasteOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventPasteNormalizedElementsFromString_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventPasteNormalizedElementsFromString_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_PasteOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_PasteOption = { "PasteOption", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventPasteNormalizedElementsFromString_Parms, PasteOption), Z_Construct_UScriptStruct_FTypedElementPasteOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_PasteOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_PasteOption_MetaData)) }; // 3029040425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_InputString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_InputString = { "InputString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventPasteNormalizedElementsFromString_Parms, InputString), METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_InputString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_InputString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementCommonActions_eventPasteNormalizedElementsFromString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_PasteOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_InputString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Paste any elements from the given string\n\x09  * @note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "Paste any elements from the given string\n@note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "PasteNormalizedElementsFromString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::TypedElementCommonActions_eventPasteNormalizedElementsFromString_Parms), Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementCommonActions);
	UClass* Z_Construct_UClass_UTypedElementCommonActions_NoRegister()
	{
		return UTypedElementCommonActions::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementCommonActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementCommonActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTypedElementCommonActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElements, "CopyNormalizedElements" }, // 1941146785
		{ &Z_Construct_UFunction_UTypedElementCommonActions_CopyNormalizedElementsToString, "CopyNormalizedElementsToString" }, // 449188520
		{ &Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElements, "CopySelectedElements" }, // 280099184
		{ &Z_Construct_UFunction_UTypedElementCommonActions_CopySelectedElementsToString, "CopySelectedElementsToString" }, // 3316151008
		{ &Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements, "DeleteNormalizedElements" }, // 1763805212
		{ &Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements, "DeleteSelectedElements" }, // 1263166151
		{ &Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements, "DuplicateNormalizedElements" }, // 1295902987
		{ &Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements, "K2_DuplicateSelectedElements" }, // 2868997225
		{ &Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteElements, "K2_PasteElements" }, // 2082036210
		{ &Z_Construct_UFunction_UTypedElementCommonActions_K2_PasteNormalizedElements, "K2_PasteNormalizedElements" }, // 619239475
		{ &Z_Construct_UFunction_UTypedElementCommonActions_PasteElementsFromString, "PasteElementsFromString" }, // 1780947847
		{ &Z_Construct_UFunction_UTypedElementCommonActions_PasteNormalizedElementsFromString, "PasteNormalizedElementsFromString" }, // 3379458514
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementCommonActions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A utility to handle higher-level common actions, but default via UTypedElementWorldInterface,\n * but asset editors can customize this behavior via FTypedElementCommonActionsCustomization.\n */" },
		{ "IncludePath", "Elements/Framework/TypedElementCommonActions.h" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "A utility to handle higher-level common actions, but default via UTypedElementWorldInterface,\nbut asset editors can customize this behavior via FTypedElementCommonActionsCustomization." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementCommonActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementCommonActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementCommonActions_Statics::ClassParams = {
		&UTypedElementCommonActions::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementCommonActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementCommonActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementCommonActions()
	{
		if (!Z_Registration_Info_UClass_UTypedElementCommonActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementCommonActions.OuterSingleton, Z_Construct_UClass_UTypedElementCommonActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementCommonActions.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTypedElementCommonActions>()
	{
		return UTypedElementCommonActions::StaticClass();
	}
	UTypedElementCommonActions::UTypedElementCommonActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementCommonActions);
	UTypedElementCommonActions::~UTypedElementCommonActions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementPasteOptions::StaticStruct, Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics::NewStructOps, TEXT("TypedElementPasteOptions"), &Z_Registration_Info_UScriptStruct_TypedElementPasteOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementPasteOptions), 3029040425U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementCommonActions, UTypedElementCommonActions::StaticClass, TEXT("UTypedElementCommonActions"), &Z_Registration_Info_UClass_UTypedElementCommonActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementCommonActions), 2760733026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_3903877148(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
