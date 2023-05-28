// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowserMenuContexts.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserMenuContexts() {}
// Cross Module References
	ASSETDEFINITION_API UClass* Z_Construct_UClass_UAssetDefinition_NoRegister();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserAddNewContextMenuContext();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserAddNewContextMenuContext_NoRegister();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserAssetContextMenuContext();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserAssetContextMenuContext_NoRegister();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserAssetViewContextMenuContext();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserAssetViewContextMenuContext_NoRegister();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserFilterListContext();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserFilterListContext_NoRegister();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserFolderContext();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserFolderContext_NoRegister();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserMenuContext();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserMenuContext_NoRegister();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserToolbarMenuContext();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserToolbarMenuContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	UPackage* Z_Construct_UPackage__Script_ContentBrowser();
// End Cross Module References
	DEFINE_FUNCTION(UContentBrowserAssetContextMenuContext::execLoadSelectedObjects)
	{
		P_GET_TSET(FName,Z_Param_LoadTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->LoadSelectedObjects(Z_Param_LoadTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserAssetContextMenuContext::execLoadSelectedObjectsIfNeeded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->LoadSelectedObjectsIfNeeded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserAssetContextMenuContext::execGetSelectedObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetSelectedObjects();
		P_NATIVE_END;
	}
	void UContentBrowserAssetContextMenuContext::StaticRegisterNativesUContentBrowserAssetContextMenuContext()
	{
		UClass* Class = UContentBrowserAssetContextMenuContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectedObjects", &UContentBrowserAssetContextMenuContext::execGetSelectedObjects },
			{ "LoadSelectedObjects", &UContentBrowserAssetContextMenuContext::execLoadSelectedObjects },
			{ "LoadSelectedObjectsIfNeeded", &UContentBrowserAssetContextMenuContext::execLoadSelectedObjectsIfNeeded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics
	{
		struct ContentBrowserAssetContextMenuContext_eventGetSelectedObjects_Parms
		{
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserAssetContextMenuContext_eventGetSelectedObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "//UE_DEPRECATED(5.2, \"GetSelectedObjects has been deprecated.  We no longer automatically load assets on right click.  Please use SelectedAssets and determine whatever you need for your context menu options without actually loading the assets.  When you finally need all or a subset of the selected assets use LoadSelectedAssets or LoadSelectedAssetsIf\")\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetSelectedObjects has been deprecated.  We no longer automatically load assets on right click.  If you can work without loading the assets, please use SelectedAssets.  Otherwise call LoadSelectedObjects" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
		{ "ToolTip", "UE_DEPRECATED(5.2, \"GetSelectedObjects has been deprecated.  We no longer automatically load assets on right click.  Please use SelectedAssets and determine whatever you need for your context menu options without actually loading the assets.  When you finally need all or a subset of the selected assets use LoadSelectedAssets or LoadSelectedAssetsIf\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserAssetContextMenuContext, nullptr, "GetSelectedObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics::ContentBrowserAssetContextMenuContext_eventGetSelectedObjects_Parms), Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics
	{
		struct ContentBrowserAssetContextMenuContext_eventLoadSelectedObjects_Parms
		{
			TSet<FName> LoadTags;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LoadTags_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_LoadTags;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::NewProp_LoadTags_ElementProp = { "LoadTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::NewProp_LoadTags = { "LoadTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserAssetContextMenuContext_eventLoadSelectedObjects_Parms, LoadTags), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserAssetContextMenuContext_eventLoadSelectedObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::NewProp_LoadTags_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::NewProp_LoadTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/**\n\x09 * Loads all the selected assets and returns an array of the objects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
		{ "ToolTip", "Loads all the selected assets and returns an array of the objects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserAssetContextMenuContext, nullptr, "LoadSelectedObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::ContentBrowserAssetContextMenuContext_eventLoadSelectedObjects_Parms), Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics
	{
		struct ContentBrowserAssetContextMenuContext_eventLoadSelectedObjectsIfNeeded_Parms
		{
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserAssetContextMenuContext_eventLoadSelectedObjectsIfNeeded_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/**\n\x09 * Loads the selected assets (if needed) which is based on AssetViewUtils::LoadAssetsIfNeeded, this exists primarily\n\x09 * for backwards compatability.  Reliance on a black box to determine 'neededness' is not recommended, this function\n\x09 * will likely be deprecated a few versions after GetSelectedObjects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
		{ "ToolTip", "Loads the selected assets (if needed) which is based on AssetViewUtils::LoadAssetsIfNeeded, this exists primarily\nfor backwards compatability.  Reliance on a black box to determine 'neededness' is not recommended, this function\nwill likely be deprecated a few versions after GetSelectedObjects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserAssetContextMenuContext, nullptr, "LoadSelectedObjectsIfNeeded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics::ContentBrowserAssetContextMenuContext_eventLoadSelectedObjectsIfNeeded_Parms), Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserAssetContextMenuContext);
	UClass* Z_Construct_UClass_UContentBrowserAssetContextMenuContext_NoRegister()
	{
		return UContentBrowserAssetContextMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonAssetDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CommonAssetDefinition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_CommonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeModified_MetaData[];
#endif
		static void NewProp_bCanBeModified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeModified;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_GetSelectedObjects, "GetSelectedObjects" }, // 2485670634
		{ &Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjects, "LoadSelectedObjects" }, // 524717700
		{ &Z_Construct_UFunction_UContentBrowserAssetContextMenuContext_LoadSelectedObjectsIfNeeded, "LoadSelectedObjectsIfNeeded" }, // 1508232956
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserMenuContexts.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_CommonAssetDefinition_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_CommonAssetDefinition = { "CommonAssetDefinition", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserAssetContextMenuContext, CommonAssetDefinition), Z_Construct_UClass_UAssetDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_CommonAssetDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_CommonAssetDefinition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_SelectedAssets_Inner = { "SelectedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_SelectedAssets_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/**\n\x09 * The currently selected assets in the content browser.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
		{ "ToolTip", "The currently selected assets in the content browser." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_SelectedAssets = { "SelectedAssets", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserAssetContextMenuContext, SelectedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_SelectedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_SelectedAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_CommonClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_CommonClass = { "CommonClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserAssetContextMenuContext, CommonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_CommonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_CommonClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_bCanBeModified_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
	void Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_bCanBeModified_SetBit(void* Obj)
	{
		((UContentBrowserAssetContextMenuContext*)Obj)->bCanBeModified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_bCanBeModified = { "bCanBeModified", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContentBrowserAssetContextMenuContext), &Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_bCanBeModified_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_bCanBeModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_bCanBeModified_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_CommonAssetDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_SelectedAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_SelectedAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_CommonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::NewProp_bCanBeModified,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserAssetContextMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::ClassParams = {
		&UContentBrowserAssetContextMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserAssetContextMenuContext()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserAssetContextMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserAssetContextMenuContext.OuterSingleton, Z_Construct_UClass_UContentBrowserAssetContextMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserAssetContextMenuContext.OuterSingleton;
	}
	template<> CONTENTBROWSER_API UClass* StaticClass<UContentBrowserAssetContextMenuContext>()
	{
		return UContentBrowserAssetContextMenuContext::StaticClass();
	}
	UContentBrowserAssetContextMenuContext::UContentBrowserAssetContextMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserAssetContextMenuContext);
	UContentBrowserAssetContextMenuContext::~UContentBrowserAssetContextMenuContext() {}
	void UContentBrowserAssetViewContextMenuContext::StaticRegisterNativesUContentBrowserAssetViewContextMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserAssetViewContextMenuContext);
	UClass* Z_Construct_UClass_UContentBrowserAssetViewContextMenuContext_NoRegister()
	{
		return UContentBrowserAssetViewContextMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserAssetViewContextMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserAssetViewContextMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserAssetViewContextMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserMenuContexts.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserAssetViewContextMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserAssetViewContextMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserAssetViewContextMenuContext_Statics::ClassParams = {
		&UContentBrowserAssetViewContextMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserAssetViewContextMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserAssetViewContextMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserAssetViewContextMenuContext()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserAssetViewContextMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserAssetViewContextMenuContext.OuterSingleton, Z_Construct_UClass_UContentBrowserAssetViewContextMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserAssetViewContextMenuContext.OuterSingleton;
	}
	template<> CONTENTBROWSER_API UClass* StaticClass<UContentBrowserAssetViewContextMenuContext>()
	{
		return UContentBrowserAssetViewContextMenuContext::StaticClass();
	}
	UContentBrowserAssetViewContextMenuContext::UContentBrowserAssetViewContextMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserAssetViewContextMenuContext);
	UContentBrowserAssetViewContextMenuContext::~UContentBrowserAssetViewContextMenuContext() {}
	void UContentBrowserMenuContext::StaticRegisterNativesUContentBrowserMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserMenuContext);
	UClass* Z_Construct_UClass_UContentBrowserMenuContext_NoRegister()
	{
		return UContentBrowserMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserMenuContexts.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserMenuContext_Statics::ClassParams = {
		&UContentBrowserMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserMenuContext()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserMenuContext.OuterSingleton, Z_Construct_UClass_UContentBrowserMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserMenuContext.OuterSingleton;
	}
	template<> CONTENTBROWSER_API UClass* StaticClass<UContentBrowserMenuContext>()
	{
		return UContentBrowserMenuContext::StaticClass();
	}
	UContentBrowserMenuContext::UContentBrowserMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserMenuContext);
	UContentBrowserMenuContext::~UContentBrowserMenuContext() {}
	void UContentBrowserFolderContext::StaticRegisterNativesUContentBrowserFolderContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserFolderContext);
	UClass* Z_Construct_UClass_UContentBrowserFolderContext_NoRegister()
	{
		return UContentBrowserFolderContext::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserFolderContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeModified_MetaData[];
#endif
		static void NewProp_bCanBeModified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeModified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoFolderOnDisk_MetaData[];
#endif
		static void NewProp_bNoFolderOnDisk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoFolderOnDisk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumAssetPaths_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumAssetPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumClassPaths_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumClassPaths;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedPackagePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPackagePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedPackagePaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserFolderContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentBrowserMenuContext,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserFolderContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserMenuContexts.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bCanBeModified_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
	void Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bCanBeModified_SetBit(void* Obj)
	{
		((UContentBrowserFolderContext*)Obj)->bCanBeModified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bCanBeModified = { "bCanBeModified", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContentBrowserFolderContext), &Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bCanBeModified_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bCanBeModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bCanBeModified_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bNoFolderOnDisk_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
	void Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bNoFolderOnDisk_SetBit(void* Obj)
	{
		((UContentBrowserFolderContext*)Obj)->bNoFolderOnDisk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bNoFolderOnDisk = { "bNoFolderOnDisk", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContentBrowserFolderContext), &Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bNoFolderOnDisk_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bNoFolderOnDisk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bNoFolderOnDisk_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_NumAssetPaths_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_NumAssetPaths = { "NumAssetPaths", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserFolderContext, NumAssetPaths), METADATA_PARAMS(Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_NumAssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_NumAssetPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_NumClassPaths_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_NumClassPaths = { "NumClassPaths", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserFolderContext, NumClassPaths), METADATA_PARAMS(Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_NumClassPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_NumClassPaths_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_SelectedPackagePaths_Inner = { "SelectedPackagePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_SelectedPackagePaths_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_SelectedPackagePaths = { "SelectedPackagePaths", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserFolderContext, SelectedPackagePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_SelectedPackagePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_SelectedPackagePaths_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBrowserFolderContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bCanBeModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_bNoFolderOnDisk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_NumAssetPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_NumClassPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_SelectedPackagePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserFolderContext_Statics::NewProp_SelectedPackagePaths,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserFolderContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserFolderContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserFolderContext_Statics::ClassParams = {
		&UContentBrowserFolderContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContentBrowserFolderContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserFolderContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserFolderContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserFolderContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserFolderContext()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserFolderContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserFolderContext.OuterSingleton, Z_Construct_UClass_UContentBrowserFolderContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserFolderContext.OuterSingleton;
	}
	template<> CONTENTBROWSER_API UClass* StaticClass<UContentBrowserFolderContext>()
	{
		return UContentBrowserFolderContext::StaticClass();
	}
	UContentBrowserFolderContext::UContentBrowserFolderContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserFolderContext);
	UContentBrowserFolderContext::~UContentBrowserFolderContext() {}
	void UContentBrowserFilterListContext::StaticRegisterNativesUContentBrowserFilterListContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserFilterListContext);
	UClass* Z_Construct_UClass_UContentBrowserFilterListContext_NoRegister()
	{
		return UContentBrowserFilterListContext::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserFilterListContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserFilterListContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserFilterListContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserMenuContexts.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserFilterListContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserFilterListContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserFilterListContext_Statics::ClassParams = {
		&UContentBrowserFilterListContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserFilterListContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserFilterListContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserFilterListContext()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserFilterListContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserFilterListContext.OuterSingleton, Z_Construct_UClass_UContentBrowserFilterListContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserFilterListContext.OuterSingleton;
	}
	template<> CONTENTBROWSER_API UClass* StaticClass<UContentBrowserFilterListContext>()
	{
		return UContentBrowserFilterListContext::StaticClass();
	}
	UContentBrowserFilterListContext::UContentBrowserFilterListContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserFilterListContext);
	UContentBrowserFilterListContext::~UContentBrowserFilterListContext() {}
	void UContentBrowserAddNewContextMenuContext::StaticRegisterNativesUContentBrowserAddNewContextMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserAddNewContextMenuContext);
	UClass* Z_Construct_UClass_UContentBrowserAddNewContextMenuContext_NoRegister()
	{
		return UContentBrowserAddNewContextMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserAddNewContextMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserAddNewContextMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserAddNewContextMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserMenuContexts.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserAddNewContextMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserAddNewContextMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserAddNewContextMenuContext_Statics::ClassParams = {
		&UContentBrowserAddNewContextMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserAddNewContextMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserAddNewContextMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserAddNewContextMenuContext()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserAddNewContextMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserAddNewContextMenuContext.OuterSingleton, Z_Construct_UClass_UContentBrowserAddNewContextMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserAddNewContextMenuContext.OuterSingleton;
	}
	template<> CONTENTBROWSER_API UClass* StaticClass<UContentBrowserAddNewContextMenuContext>()
	{
		return UContentBrowserAddNewContextMenuContext::StaticClass();
	}
	UContentBrowserAddNewContextMenuContext::UContentBrowserAddNewContextMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserAddNewContextMenuContext);
	UContentBrowserAddNewContextMenuContext::~UContentBrowserAddNewContextMenuContext() {}
	void UContentBrowserToolbarMenuContext::StaticRegisterNativesUContentBrowserToolbarMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserToolbarMenuContext);
	UClass* Z_Construct_UClass_UContentBrowserToolbarMenuContext_NoRegister()
	{
		return UContentBrowserToolbarMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserToolbarMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserToolbarMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserToolbarMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserMenuContexts.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserMenuContexts.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserToolbarMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserToolbarMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserToolbarMenuContext_Statics::ClassParams = {
		&UContentBrowserToolbarMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserToolbarMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserToolbarMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserToolbarMenuContext()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserToolbarMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserToolbarMenuContext.OuterSingleton, Z_Construct_UClass_UContentBrowserToolbarMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserToolbarMenuContext.OuterSingleton;
	}
	template<> CONTENTBROWSER_API UClass* StaticClass<UContentBrowserToolbarMenuContext>()
	{
		return UContentBrowserToolbarMenuContext::StaticClass();
	}
	UContentBrowserToolbarMenuContext::UContentBrowserToolbarMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserToolbarMenuContext);
	UContentBrowserToolbarMenuContext::~UContentBrowserToolbarMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserMenuContexts_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserMenuContexts_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBrowserAssetContextMenuContext, UContentBrowserAssetContextMenuContext::StaticClass, TEXT("UContentBrowserAssetContextMenuContext"), &Z_Registration_Info_UClass_UContentBrowserAssetContextMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserAssetContextMenuContext), 1212803870U) },
		{ Z_Construct_UClass_UContentBrowserAssetViewContextMenuContext, UContentBrowserAssetViewContextMenuContext::StaticClass, TEXT("UContentBrowserAssetViewContextMenuContext"), &Z_Registration_Info_UClass_UContentBrowserAssetViewContextMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserAssetViewContextMenuContext), 2868867977U) },
		{ Z_Construct_UClass_UContentBrowserMenuContext, UContentBrowserMenuContext::StaticClass, TEXT("UContentBrowserMenuContext"), &Z_Registration_Info_UClass_UContentBrowserMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserMenuContext), 1285134832U) },
		{ Z_Construct_UClass_UContentBrowserFolderContext, UContentBrowserFolderContext::StaticClass, TEXT("UContentBrowserFolderContext"), &Z_Registration_Info_UClass_UContentBrowserFolderContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserFolderContext), 2071994341U) },
		{ Z_Construct_UClass_UContentBrowserFilterListContext, UContentBrowserFilterListContext::StaticClass, TEXT("UContentBrowserFilterListContext"), &Z_Registration_Info_UClass_UContentBrowserFilterListContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserFilterListContext), 2580232431U) },
		{ Z_Construct_UClass_UContentBrowserAddNewContextMenuContext, UContentBrowserAddNewContextMenuContext::StaticClass, TEXT("UContentBrowserAddNewContextMenuContext"), &Z_Registration_Info_UClass_UContentBrowserAddNewContextMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserAddNewContextMenuContext), 803636857U) },
		{ Z_Construct_UClass_UContentBrowserToolbarMenuContext, UContentBrowserToolbarMenuContext::StaticClass, TEXT("UContentBrowserToolbarMenuContext"), &Z_Registration_Info_UClass_UContentBrowserToolbarMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserToolbarMenuContext), 1980966755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserMenuContexts_h_3564286494(TEXT("/Script/ContentBrowser"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserMenuContexts_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserMenuContexts_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
