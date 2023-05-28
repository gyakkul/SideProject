// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Elements/Framework/TypedElementListLibrary.h"
#include "Elements/Framework/TypedElementHandle.h"
#include "Elements/Framework/TypedElementListProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementListLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementListLibrary();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementListLibrary_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementRegistry_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementListProxy();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References
	DEFINE_FUNCTION(UTypedElementListLibrary::execRemove)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_ElementHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTypedElementListLibrary::Remove(Z_Param_ElementList,Z_Param_Out_ElementHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execAppendList)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_OtherElementList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTypedElementListLibrary::AppendList(Z_Param_ElementList,Z_Param_OtherElementList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execAppend)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_TARRAY_REF(FScriptTypedElementHandle,Z_Param_Out_ElementHandles);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTypedElementListLibrary::Append(Z_Param_ElementList,Z_Param_Out_ElementHandles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execAdd)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_ElementHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTypedElementListLibrary::Add(Z_Param_ElementList,Z_Param_Out_ElementHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execContains)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_ElementHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTypedElementListLibrary::Contains(Z_Param_ElementList,Z_Param_Out_ElementHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execReset)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTypedElementListLibrary::Reset(Z_Param_ElementList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execEmpty)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slack);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTypedElementListLibrary::Empty(Z_Param_ElementList,Z_Param_Slack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execReserve)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTypedElementListLibrary::Reserve(Z_Param_ElementList,Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execShrink)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTypedElementListLibrary::Shrink(Z_Param_ElementList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execNum)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UTypedElementListLibrary::Num(Z_Param_ElementList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execIsValidIndex)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTypedElementListLibrary::IsValidIndex(Z_Param_ElementList,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execGetElementHandles)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_OBJECT(UClass,Z_Param_BaseInterfaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FScriptTypedElementHandle>*)Z_Param__Result=UTypedElementListLibrary::GetElementHandles(Z_Param_ElementList,Z_Param_BaseInterfaceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execCountElementsOfType)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_PROPERTY(FNameProperty,Z_Param_ElementTypeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UTypedElementListLibrary::CountElementsOfType(Z_Param_ElementList,Z_Param_ElementTypeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execHasElementsOfType)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_PROPERTY(FNameProperty,Z_Param_ElementTypeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTypedElementListLibrary::HasElementsOfType(Z_Param_ElementList,Z_Param_ElementTypeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execCountElements)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_OBJECT(UClass,Z_Param_BaseInterfaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UTypedElementListLibrary::CountElements(Z_Param_ElementList,Z_Param_BaseInterfaceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execHasElements)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_OBJECT(UClass,Z_Param_BaseInterfaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTypedElementListLibrary::HasElements(Z_Param_ElementList,Z_Param_BaseInterfaceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execGetElementInterface)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_ElementHandle);
		P_GET_OBJECT(UClass,Z_Param_BaseInterfaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UTypedElementListLibrary::GetElementInterface(Z_Param_ElementList,Z_Param_Out_ElementHandle,Z_Param_BaseInterfaceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execGetElementHandleAt)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScriptTypedElementHandle*)Z_Param__Result=UTypedElementListLibrary::GetElementHandleAt(Z_Param_ElementList,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execClone)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScriptTypedElementListProxy*)Z_Param__Result=UTypedElementListLibrary::Clone(Z_Param_ElementList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementListLibrary::execCreateScriptElementList)
	{
		P_GET_OBJECT(UTypedElementRegistry,Z_Param_Registry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScriptTypedElementListProxy*)Z_Param__Result=UTypedElementListLibrary::CreateScriptElementList(Z_Param_Registry);
		P_NATIVE_END;
	}
	void UTypedElementListLibrary::StaticRegisterNativesUTypedElementListLibrary()
	{
		UClass* Class = UTypedElementListLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &UTypedElementListLibrary::execAdd },
			{ "Append", &UTypedElementListLibrary::execAppend },
			{ "AppendList", &UTypedElementListLibrary::execAppendList },
			{ "Clone", &UTypedElementListLibrary::execClone },
			{ "Contains", &UTypedElementListLibrary::execContains },
			{ "CountElements", &UTypedElementListLibrary::execCountElements },
			{ "CountElementsOfType", &UTypedElementListLibrary::execCountElementsOfType },
			{ "CreateScriptElementList", &UTypedElementListLibrary::execCreateScriptElementList },
			{ "Empty", &UTypedElementListLibrary::execEmpty },
			{ "GetElementHandleAt", &UTypedElementListLibrary::execGetElementHandleAt },
			{ "GetElementHandles", &UTypedElementListLibrary::execGetElementHandles },
			{ "GetElementInterface", &UTypedElementListLibrary::execGetElementInterface },
			{ "HasElements", &UTypedElementListLibrary::execHasElements },
			{ "HasElementsOfType", &UTypedElementListLibrary::execHasElementsOfType },
			{ "IsValidIndex", &UTypedElementListLibrary::execIsValidIndex },
			{ "Num", &UTypedElementListLibrary::execNum },
			{ "Remove", &UTypedElementListLibrary::execRemove },
			{ "Reserve", &UTypedElementListLibrary::execReserve },
			{ "Reset", &UTypedElementListLibrary::execReset },
			{ "Shrink", &UTypedElementListLibrary::execShrink },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics
	{
		struct TypedElementListLibrary_eventAdd_Parms
		{
			FScriptTypedElementListProxy ElementList;
			FScriptTypedElementHandle ElementHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventAdd_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(nullptr, 0) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::NewProp_ElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::NewProp_ElementHandle = { "ElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventAdd_Parms, ElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::NewProp_ElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::NewProp_ElementHandle_MetaData)) }; // 915069018
	void Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementListLibrary_eventAdd_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementListLibrary_eventAdd_Parms), &Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::NewProp_ElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Add the given element handle to this element list, if it isn't already in the list.\n\x09 * @return True if the element handle was added, false if it is already in the list.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add the given element handle to this element list, if it isn't already in the list.\n@return True if the element handle was added, false if it is already in the list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "Add", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::TypedElementListLibrary_eventAdd_Parms), Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics
	{
		struct TypedElementListLibrary_eventAppend_Parms
		{
			FScriptTypedElementListProxy ElementList;
			TArray<FScriptTypedElementHandle> ElementHandles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ElementHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventAppend_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(nullptr, 0) }; // 1625917635
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::NewProp_ElementHandles_Inner = { "ElementHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::NewProp_ElementHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::NewProp_ElementHandles = { "ElementHandles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventAppend_Parms, ElementHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::NewProp_ElementHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::NewProp_ElementHandles_MetaData)) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::NewProp_ElementHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::NewProp_ElementHandles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Append the given element handles to this element list.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Append the given element handles to this element list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "Append", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::TypedElementListLibrary_eventAppend_Parms), Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_Append()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_Append_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics
	{
		struct TypedElementListLibrary_eventAppendList_Parms
		{
			FScriptTypedElementListProxy ElementList;
			FScriptTypedElementListProxy OtherElementList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherElementList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventAppendList_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(nullptr, 0) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::NewProp_OtherElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::NewProp_OtherElementList = { "OtherElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventAppendList_Parms, OtherElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::NewProp_OtherElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::NewProp_OtherElementList_MetaData)) }; // 1625917635
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::NewProp_OtherElementList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Append the another element list to this element list.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Append the another element list to this element list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "AppendList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::TypedElementListLibrary_eventAppendList_Parms), Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_AppendList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_AppendList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics
	{
		struct TypedElementListLibrary_eventClone_Parms
		{
			FScriptTypedElementListProxy ElementList;
			FScriptTypedElementListProxy ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventClone_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventClone_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(nullptr, 0) }; // 1625917635
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Clone this list instance.\n\x09 * @note Only copies elements; does not copy any bindings!\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Clone this list instance.\n@note Only copies elements; does not copy any bindings!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "Clone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::TypedElementListLibrary_eventClone_Parms), Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_Clone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_Clone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics
	{
		struct TypedElementListLibrary_eventContains_Parms
		{
			FScriptTypedElementListProxy ElementList;
			FScriptTypedElementHandle ElementHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventContains_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ElementHandle = { "ElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventContains_Parms, ElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ElementHandle_MetaData)) }; // 915069018
	void Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementListLibrary_eventContains_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementListLibrary_eventContains_Parms), &Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Does this element list contain an entry for the given element handle?\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Does this element list contain an entry for the given element handle?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "Contains", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::TypedElementListLibrary_eventContains_Parms), Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_Contains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_Contains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics
	{
		struct TypedElementListLibrary_eventCountElements_Parms
		{
			FScriptTypedElementListProxy ElementList;
			const TSubclassOf<UInterface>  BaseInterfaceType;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseInterfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BaseInterfaceType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventCountElements_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::NewProp_BaseInterfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::NewProp_BaseInterfaceType = { "BaseInterfaceType", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventCountElements_Parms, BaseInterfaceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::NewProp_BaseInterfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::NewProp_BaseInterfaceType_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventCountElements_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::NewProp_BaseInterfaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Count the number of elements in this list, optionally filtering to elements that implement the given interface.\n\x09 */" },
		{ "CPP_Default_BaseInterfaceType", "None" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Count the number of elements in this list, optionally filtering to elements that implement the given interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "CountElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::TypedElementListLibrary_eventCountElements_Parms), Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_CountElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_CountElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics
	{
		struct TypedElementListLibrary_eventCountElementsOfType_Parms
		{
			FScriptTypedElementListProxy ElementList;
			FName ElementTypeName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementTypeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ElementTypeName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventCountElementsOfType_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::NewProp_ElementTypeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::NewProp_ElementTypeName = { "ElementTypeName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventCountElementsOfType_Parms, ElementTypeName), METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::NewProp_ElementTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::NewProp_ElementTypeName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventCountElementsOfType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::NewProp_ElementTypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Count the number of elements in this list of the given type.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Count the number of elements in this list of the given type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "CountElementsOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::TypedElementListLibrary_eventCountElementsOfType_Parms), Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics
	{
		struct TypedElementListLibrary_eventCreateScriptElementList_Parms
		{
			UTypedElementRegistry* Registry;
			FScriptTypedElementListProxy ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Registry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics::NewProp_Registry = { "Registry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventCreateScriptElementList_Parms, Registry), Z_Construct_UClass_UTypedElementRegistry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventCreateScriptElementList_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(nullptr, 0) }; // 1625917635
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics::NewProp_Registry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Registry" },
		{ "Comment", "/**\n\x09 * Create an empty list of elements associated with the given registry.\n\x09 */" },
		{ "DisplayName", "Create Element List" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ScriptName", "CreateElementList" },
		{ "ToolTip", "Create an empty list of elements associated with the given registry." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "CreateScriptElementList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics::TypedElementListLibrary_eventCreateScriptElementList_Parms), Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics
	{
		struct TypedElementListLibrary_eventEmpty_Parms
		{
			FScriptTypedElementListProxy ElementList;
			int32 Slack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slack_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventEmpty_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(nullptr, 0) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::NewProp_Slack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::NewProp_Slack = { "Slack", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventEmpty_Parms, Slack), METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::NewProp_Slack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::NewProp_Slack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::NewProp_Slack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Remove all entries from this element list, potentially leaving space allocated for the given number of entries.\n\x09 */" },
		{ "CPP_Default_Slack", "0" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove all entries from this element list, potentially leaving space allocated for the given number of entries." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "Empty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::TypedElementListLibrary_eventEmpty_Parms), Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_Empty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_Empty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics
	{
		struct TypedElementListLibrary_eventGetElementHandleAt_Parms
		{
			FScriptTypedElementListProxy ElementList;
			int32 Index;
			FScriptTypedElementHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventGetElementHandleAt_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventGetElementHandleAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventGetElementHandleAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Get the element handle at the given index.\n\x09 * @note Use IsValidIndex to test for validity.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the element handle at the given index.\n@note Use IsValidIndex to test for validity." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "GetElementHandleAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::TypedElementListLibrary_eventGetElementHandleAt_Parms), Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics
	{
		struct TypedElementListLibrary_eventGetElementHandles_Parms
		{
			FScriptTypedElementListProxy ElementList;
			const TSubclassOf<UInterface>  BaseInterfaceType;
			TArray<FScriptTypedElementHandle> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseInterfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BaseInterfaceType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventGetElementHandles_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_BaseInterfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_BaseInterfaceType = { "BaseInterfaceType", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventGetElementHandles_Parms, BaseInterfaceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_BaseInterfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_BaseInterfaceType_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventGetElementHandles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_BaseInterfaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Get the handle of every element in this list, optionally filtering to elements that implement the given interface.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the handle of every element in this list, optionally filtering to elements that implement the given interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "GetElementHandles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::TypedElementListLibrary_eventGetElementHandles_Parms), Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics
	{
		struct TypedElementListLibrary_eventGetElementInterface_Parms
		{
			FScriptTypedElementListProxy ElementList;
			FScriptTypedElementHandle ElementHandle;
			const TSubclassOf<UInterface>  BaseInterfaceType;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseInterfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BaseInterfaceType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventGetElementInterface_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_ElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_ElementHandle = { "ElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventGetElementInterface_Parms, ElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_ElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_ElementHandle_MetaData)) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_BaseInterfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_BaseInterfaceType = { "BaseInterfaceType", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventGetElementInterface_Parms, BaseInterfaceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_BaseInterfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_BaseInterfaceType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventGetElementInterface_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_ElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_BaseInterfaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Get the element interface from the given handle.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the element interface from the given handle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "GetElementInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::TypedElementListLibrary_eventGetElementInterface_Parms), Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics
	{
		struct TypedElementListLibrary_eventHasElements_Parms
		{
			FScriptTypedElementListProxy ElementList;
			const TSubclassOf<UInterface>  BaseInterfaceType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseInterfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BaseInterfaceType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventHasElements_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_BaseInterfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_BaseInterfaceType = { "BaseInterfaceType", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventHasElements_Parms, BaseInterfaceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_BaseInterfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_BaseInterfaceType_MetaData)) };
	void Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementListLibrary_eventHasElements_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementListLibrary_eventHasElements_Parms), &Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_BaseInterfaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Test whether there are elements in this list, optionally filtering to elements that implement the given interface.\n\x09 */" },
		{ "CPP_Default_BaseInterfaceType", "None" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Test whether there are elements in this list, optionally filtering to elements that implement the given interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "HasElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::TypedElementListLibrary_eventHasElements_Parms), Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_HasElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_HasElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics
	{
		struct TypedElementListLibrary_eventHasElementsOfType_Parms
		{
			FScriptTypedElementListProxy ElementList;
			FName ElementTypeName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementTypeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ElementTypeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventHasElementsOfType_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ElementTypeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ElementTypeName = { "ElementTypeName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventHasElementsOfType_Parms, ElementTypeName), METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ElementTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ElementTypeName_MetaData)) };
	void Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementListLibrary_eventHasElementsOfType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementListLibrary_eventHasElementsOfType_Parms), &Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ElementTypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Test whether there are elements in this list of the given type.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Test whether there are elements in this list of the given type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "HasElementsOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::TypedElementListLibrary_eventHasElementsOfType_Parms), Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics
	{
		struct TypedElementListLibrary_eventIsValidIndex_Parms
		{
			FScriptTypedElementListProxy ElementList;
			int32 Index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventIsValidIndex_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventIsValidIndex_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_Index_MetaData)) };
	void Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementListLibrary_eventIsValidIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementListLibrary_eventIsValidIndex_Parms), &Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Is the given index a valid entry within this element list?\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Is the given index a valid entry within this element list?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "IsValidIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::TypedElementListLibrary_eventIsValidIndex_Parms), Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics
	{
		struct TypedElementListLibrary_eventNum_Parms
		{
			FScriptTypedElementListProxy ElementList;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventNum_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Get the number of entries within this element list.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the number of entries within this element list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "Num", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::TypedElementListLibrary_eventNum_Parms), Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_Num()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_Num_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics
	{
		struct TypedElementListLibrary_eventRemove_Parms
		{
			FScriptTypedElementListProxy ElementList;
			FScriptTypedElementHandle ElementHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventRemove_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(nullptr, 0) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::NewProp_ElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::NewProp_ElementHandle = { "ElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventRemove_Parms, ElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::NewProp_ElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::NewProp_ElementHandle_MetaData)) }; // 915069018
	void Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementListLibrary_eventRemove_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementListLibrary_eventRemove_Parms), &Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::NewProp_ElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Remove the given element handle from this element list, if it is in the list.\n\x09 * @return True if the element handle was removed, false if it isn't in the list.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove the given element handle from this element list, if it is in the list.\n@return True if the element handle was removed, false if it isn't in the list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "Remove", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::TypedElementListLibrary_eventRemove_Parms), Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics
	{
		struct TypedElementListLibrary_eventReserve_Parms
		{
			FScriptTypedElementListProxy ElementList;
			int32 Size;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventReserve_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(nullptr, 0) }; // 1625917635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventReserve_Parms, Size), METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Pre-allocate enough memory in this element list to store the given number of entries.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Pre-allocate enough memory in this element list to store the given number of entries." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "Reserve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::TypedElementListLibrary_eventReserve_Parms), Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_Reserve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_Reserve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_Reset_Statics
	{
		struct TypedElementListLibrary_eventReset_Parms
		{
			FScriptTypedElementListProxy ElementList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Reset_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventReset_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(nullptr, 0) }; // 1625917635
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_Reset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Reset_Statics::NewProp_ElementList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Remove all entries from this element list, preserving existing allocations.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove all entries from this element list, preserving existing allocations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "Reset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_Reset_Statics::TypedElementListLibrary_eventReset_Parms), Z_Construct_UFunction_UTypedElementListLibrary_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementListLibrary_Shrink_Statics
	{
		struct TypedElementListLibrary_eventShrink_Parms
		{
			FScriptTypedElementListProxy ElementList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementListLibrary_Shrink_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementListLibrary_eventShrink_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(nullptr, 0) }; // 1625917635
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementListLibrary_Shrink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementListLibrary_Shrink_Statics::NewProp_ElementList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementListLibrary_Shrink_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|List" },
		{ "Comment", "/**\n\x09 * Shrink this element list storage to avoid slack.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Shrink this element list storage to avoid slack." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementListLibrary_Shrink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementListLibrary, nullptr, "Shrink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementListLibrary_Shrink_Statics::TypedElementListLibrary_eventShrink_Parms), Z_Construct_UFunction_UTypedElementListLibrary_Shrink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Shrink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementListLibrary_Shrink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementListLibrary_Shrink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementListLibrary_Shrink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementListLibrary_Shrink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementListLibrary);
	UClass* Z_Construct_UClass_UTypedElementListLibrary_NoRegister()
	{
		return UTypedElementListLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementListLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementListLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTypedElementListLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementListLibrary_Add, "Add" }, // 3561865883
		{ &Z_Construct_UFunction_UTypedElementListLibrary_Append, "Append" }, // 1873248774
		{ &Z_Construct_UFunction_UTypedElementListLibrary_AppendList, "AppendList" }, // 4127343453
		{ &Z_Construct_UFunction_UTypedElementListLibrary_Clone, "Clone" }, // 2528004992
		{ &Z_Construct_UFunction_UTypedElementListLibrary_Contains, "Contains" }, // 2633742476
		{ &Z_Construct_UFunction_UTypedElementListLibrary_CountElements, "CountElements" }, // 507495848
		{ &Z_Construct_UFunction_UTypedElementListLibrary_CountElementsOfType, "CountElementsOfType" }, // 4132042056
		{ &Z_Construct_UFunction_UTypedElementListLibrary_CreateScriptElementList, "CreateScriptElementList" }, // 931575482
		{ &Z_Construct_UFunction_UTypedElementListLibrary_Empty, "Empty" }, // 4201123885
		{ &Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandleAt, "GetElementHandleAt" }, // 2972210301
		{ &Z_Construct_UFunction_UTypedElementListLibrary_GetElementHandles, "GetElementHandles" }, // 2692576365
		{ &Z_Construct_UFunction_UTypedElementListLibrary_GetElementInterface, "GetElementInterface" }, // 1801035088
		{ &Z_Construct_UFunction_UTypedElementListLibrary_HasElements, "HasElements" }, // 4219088267
		{ &Z_Construct_UFunction_UTypedElementListLibrary_HasElementsOfType, "HasElementsOfType" }, // 54650804
		{ &Z_Construct_UFunction_UTypedElementListLibrary_IsValidIndex, "IsValidIndex" }, // 3205596601
		{ &Z_Construct_UFunction_UTypedElementListLibrary_Num, "Num" }, // 3181388431
		{ &Z_Construct_UFunction_UTypedElementListLibrary_Remove, "Remove" }, // 1582021323
		{ &Z_Construct_UFunction_UTypedElementListLibrary_Reserve, "Reserve" }, // 1044504421
		{ &Z_Construct_UFunction_UTypedElementListLibrary_Reset, "Reset" }, // 1679336816
		{ &Z_Construct_UFunction_UTypedElementListLibrary_Shrink, "Shrink" }, // 2053583471
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementListLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Framework/TypedElementListLibrary.h" },
		{ "ModuleRelativePath", "Private/Elements/Framework/TypedElementListLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementListLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementListLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementListLibrary_Statics::ClassParams = {
		&UTypedElementListLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementListLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementListLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementListLibrary()
	{
		if (!Z_Registration_Info_UClass_UTypedElementListLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementListLibrary.OuterSingleton, Z_Construct_UClass_UTypedElementListLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementListLibrary.OuterSingleton;
	}
	template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTypedElementListLibrary>()
	{
		return UTypedElementListLibrary::StaticClass();
	}
	UTypedElementListLibrary::UTypedElementListLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementListLibrary);
	UTypedElementListLibrary::~UTypedElementListLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementListLibrary, UTypedElementListLibrary::StaticClass, TEXT("UTypedElementListLibrary"), &Z_Registration_Info_UClass_UTypedElementListLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementListLibrary), 3530802747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h_3169260471(TEXT("/Script/TypedElementFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Private_Elements_Framework_TypedElementListLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
