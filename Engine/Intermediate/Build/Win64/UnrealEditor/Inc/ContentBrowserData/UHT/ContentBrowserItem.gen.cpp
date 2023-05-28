// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowserItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserItem() {}
// Cross Module References
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserItemLibrary();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserItemLibrary_NoRegister();
	CONTENTBROWSERDATA_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserItem();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ContentBrowserData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserItem;
class UScriptStruct* FContentBrowserItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserItem, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("ContentBrowserItem"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserItem.OuterSingleton;
}
template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<FContentBrowserItem>()
{
	return FContentBrowserItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Representation of a Content Browser item.\n *\n * FContentBrowserItem is potentially a composite of multiple internal items (eg, combining equivalent folder items from different data sources),\n * and defers back to these internal items to provide its functionality (via the data source that owns each internal item).\n */" },
		{ "ModuleRelativePath", "Public/ContentBrowserItem.h" },
		{ "ToolTip", "Representation of a Content Browser item.\n\nFContentBrowserItem is potentially a composite of multiple internal items (eg, combining equivalent folder items from different data sources),\nand defers back to these internal items to provide its functionality (via the data source that owns each internal item)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserItem>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		&NewStructOps,
		"ContentBrowserItem",
		sizeof(FContentBrowserItem),
		alignof(FContentBrowserItem),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserItem()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserItem.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserItem.InnerSingleton;
	}
	DEFINE_FUNCTION(UContentBrowserItemLibrary::execGetDisplayName)
	{
		P_GET_STRUCT_REF(FContentBrowserItem,Z_Param_Out_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UContentBrowserItemLibrary::GetDisplayName(Z_Param_Out_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserItemLibrary::execGetVirtualPath)
	{
		P_GET_STRUCT_REF(FContentBrowserItem,Z_Param_Out_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UContentBrowserItemLibrary::GetVirtualPath(Z_Param_Out_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserItemLibrary::execIsFile)
	{
		P_GET_STRUCT_REF(FContentBrowserItem,Z_Param_Out_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UContentBrowserItemLibrary::IsFile(Z_Param_Out_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserItemLibrary::execIsFolder)
	{
		P_GET_STRUCT_REF(FContentBrowserItem,Z_Param_Out_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UContentBrowserItemLibrary::IsFolder(Z_Param_Out_Item);
		P_NATIVE_END;
	}
	void UContentBrowserItemLibrary::StaticRegisterNativesUContentBrowserItemLibrary()
	{
		UClass* Class = UContentBrowserItemLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayName", &UContentBrowserItemLibrary::execGetDisplayName },
			{ "GetVirtualPath", &UContentBrowserItemLibrary::execGetVirtualPath },
			{ "IsFile", &UContentBrowserItemLibrary::execIsFile },
			{ "IsFolder", &UContentBrowserItemLibrary::execIsFolder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics
	{
		struct ContentBrowserItemLibrary_eventGetDisplayName_Parms
		{
			FContentBrowserItem Item;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemLibrary_eventGetDisplayName_Parms, Item), Z_Construct_UScriptStruct_FContentBrowserItem, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::NewProp_Item_MetaData)) }; // 804007509
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemLibrary_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserItem.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserItemLibrary, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::ContentBrowserItemLibrary_eventGetDisplayName_Parms), Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics
	{
		struct ContentBrowserItemLibrary_eventGetVirtualPath_Parms
		{
			FContentBrowserItem Item;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemLibrary_eventGetVirtualPath_Parms, Item), Z_Construct_UScriptStruct_FContentBrowserItem, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::NewProp_Item_MetaData)) }; // 804007509
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemLibrary_eventGetVirtualPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserItem.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserItemLibrary, nullptr, "GetVirtualPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::ContentBrowserItemLibrary_eventGetVirtualPath_Parms), Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics
	{
		struct ContentBrowserItemLibrary_eventIsFile_Parms
		{
			FContentBrowserItem Item;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemLibrary_eventIsFile_Parms, Item), Z_Construct_UScriptStruct_FContentBrowserItem, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::NewProp_Item_MetaData)) }; // 804007509
	void Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContentBrowserItemLibrary_eventIsFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContentBrowserItemLibrary_eventIsFile_Parms), &Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserItem.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserItemLibrary, nullptr, "IsFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::ContentBrowserItemLibrary_eventIsFile_Parms), Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics
	{
		struct ContentBrowserItemLibrary_eventIsFolder_Parms
		{
			FContentBrowserItem Item;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemLibrary_eventIsFolder_Parms, Item), Z_Construct_UScriptStruct_FContentBrowserItem, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::NewProp_Item_MetaData)) }; // 804007509
	void Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContentBrowserItemLibrary_eventIsFolder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContentBrowserItemLibrary_eventIsFolder_Parms), &Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserItem.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserItemLibrary, nullptr, "IsFolder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::ContentBrowserItemLibrary_eventIsFolder_Parms), Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserItemLibrary);
	UClass* Z_Construct_UClass_UContentBrowserItemLibrary_NoRegister()
	{
		return UContentBrowserItemLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserItemLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserItemLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContentBrowserItemLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContentBrowserItemLibrary_GetDisplayName, "GetDisplayName" }, // 4045353709
		{ &Z_Construct_UFunction_UContentBrowserItemLibrary_GetVirtualPath, "GetVirtualPath" }, // 345509811
		{ &Z_Construct_UFunction_UContentBrowserItemLibrary_IsFile, "IsFile" }, // 1422756530
		{ &Z_Construct_UFunction_UContentBrowserItemLibrary_IsFolder, "IsFolder" }, // 1329387003
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserItemLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// TODO: Script API exposure\n" },
		{ "IncludePath", "ContentBrowserItem.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserItem.h" },
		{ "ToolTip", "TODO: Script API exposure" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserItemLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserItemLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserItemLibrary_Statics::ClassParams = {
		&UContentBrowserItemLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserItemLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserItemLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserItemLibrary()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserItemLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserItemLibrary.OuterSingleton, Z_Construct_UClass_UContentBrowserItemLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserItemLibrary.OuterSingleton;
	}
	template<> CONTENTBROWSERDATA_API UClass* StaticClass<UContentBrowserItemLibrary>()
	{
		return UContentBrowserItemLibrary::StaticClass();
	}
	UContentBrowserItemLibrary::UContentBrowserItemLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserItemLibrary);
	UContentBrowserItemLibrary::~UContentBrowserItemLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_Statics::ScriptStructInfo[] = {
		{ FContentBrowserItem::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserItem_Statics::NewStructOps, TEXT("ContentBrowserItem"), &Z_Registration_Info_UScriptStruct_ContentBrowserItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserItem), 804007509U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBrowserItemLibrary, UContentBrowserItemLibrary::StaticClass, TEXT("UContentBrowserItemLibrary"), &Z_Registration_Info_UClass_UContentBrowserItemLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserItemLibrary), 379324541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_2923390133(TEXT("/Script/ContentBrowserData"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
