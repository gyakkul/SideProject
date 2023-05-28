// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorAssetLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorAssetLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorAssetLibrary();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorAssetLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UEditorAssetLibrary::execSyncBrowserToObjects)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorAssetLibrary::SyncBrowserToObjects(Z_Param_Out_AssetPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execRemoveMetadataTag)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorAssetLibrary::RemoveMetadataTag(Z_Param_Object,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execSetMetadataTag)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorAssetLibrary::SetMetadataTag(Z_Param_Object,Z_Param_Tag,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execGetMetadataTag)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEditorAssetLibrary::GetMetadataTag(Z_Param_Object,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execGetMetadataTagValues)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FString>*)Z_Param__Result=UEditorAssetLibrary::GetMetadataTagValues(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execGetTagValues)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FString>*)Z_Param__Result=UEditorAssetLibrary::GetTagValues(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execListAssetByTagValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TagValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UEditorAssetLibrary::ListAssetByTagValue(Z_Param_TagName,Z_Param_TagValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execListAssets)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_GET_UBOOL(Z_Param_bIncludeFolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UEditorAssetLibrary::ListAssets(Z_Param_DirectoryPath,Z_Param_bRecursive,Z_Param_bIncludeFolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execMakeDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::MakeDirectory(Z_Param_DirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execDoesDirectoryHaveAssets)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DoesDirectoryHaveAssets(Z_Param_DirectoryPath,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execDoesDirectoryExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DoesDirectoryExist(Z_Param_DirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execSaveDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::SaveDirectory(Z_Param_DirectoryPath,Z_Param_bOnlyIfIsDirty,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execSaveAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetToSave);
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::SaveAsset(Z_Param_AssetToSave,Z_Param_bOnlyIfIsDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execSaveLoadedAssets)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToSave);
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::SaveLoadedAssets(Z_Param_Out_AssetsToSave,Z_Param_bOnlyIfIsDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execSaveLoadedAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_AssetToSave);
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::SaveLoadedAsset(Z_Param_AssetToSave,Z_Param_bOnlyIfIsDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execCheckoutDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::CheckoutDirectory(Z_Param_DirectoryPath,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execCheckoutAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetToCheckout);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::CheckoutAsset(Z_Param_AssetToCheckout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execCheckoutLoadedAssets)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToCheckout);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::CheckoutLoadedAssets(Z_Param_Out_AssetsToCheckout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execCheckoutLoadedAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_AssetToCheckout);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::CheckoutLoadedAsset(Z_Param_AssetToCheckout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execRenameDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceDirectoryPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationDirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::RenameDirectory(Z_Param_SourceDirectoryPath,Z_Param_DestinationDirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execRenameAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceAssetPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::RenameAsset(Z_Param_SourceAssetPath,Z_Param_DestinationAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execRenameLoadedAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_SourceAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::RenameLoadedAsset(Z_Param_SourceAsset,Z_Param_DestinationAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execDuplicateDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceDirectoryPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationDirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DuplicateDirectory(Z_Param_SourceDirectoryPath,Z_Param_DestinationDirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execDuplicateAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceAssetPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UEditorAssetLibrary::DuplicateAsset(Z_Param_SourceAssetPath,Z_Param_DestinationAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execDuplicateLoadedAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_SourceAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UEditorAssetLibrary::DuplicateLoadedAsset(Z_Param_SourceAsset,Z_Param_DestinationAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execDeleteDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DeleteDirectory(Z_Param_DirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execDeleteAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPathToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DeleteAsset(Z_Param_AssetPathToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execDeleteLoadedAssets)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DeleteLoadedAssets(Z_Param_Out_AssetsToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execDeleteLoadedAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_AssetToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DeleteLoadedAsset(Z_Param_AssetToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execConsolidateAssets)
	{
		P_GET_OBJECT(UObject,Z_Param_AssetToConsolidateTo);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToConsolidate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::ConsolidateAssets(Z_Param_AssetToConsolidateTo,Z_Param_Out_AssetsToConsolidate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execFindPackageReferencersForAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_GET_UBOOL(Z_Param_bLoadAssetsToConfirm);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UEditorAssetLibrary::FindPackageReferencersForAsset(Z_Param_AssetPath,Z_Param_bLoadAssetsToConfirm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execDoAssetsExist)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DoAssetsExist(Z_Param_Out_AssetPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execDoesAssetExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorAssetLibrary::DoesAssetExist(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execFindAssetData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAssetData*)Z_Param__Result=UEditorAssetLibrary::FindAssetData(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execGetPathNameForLoadedAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_LoadedAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEditorAssetLibrary::GetPathNameForLoadedAsset(Z_Param_LoadedAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execLoadBlueprintClass)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=UEditorAssetLibrary::LoadBlueprintClass(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetLibrary::execLoadAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UEditorAssetLibrary::LoadAsset(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	void UEditorAssetLibrary::StaticRegisterNativesUEditorAssetLibrary()
	{
		UClass* Class = UEditorAssetLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckoutAsset", &UEditorAssetLibrary::execCheckoutAsset },
			{ "CheckoutDirectory", &UEditorAssetLibrary::execCheckoutDirectory },
			{ "CheckoutLoadedAsset", &UEditorAssetLibrary::execCheckoutLoadedAsset },
			{ "CheckoutLoadedAssets", &UEditorAssetLibrary::execCheckoutLoadedAssets },
			{ "ConsolidateAssets", &UEditorAssetLibrary::execConsolidateAssets },
			{ "DeleteAsset", &UEditorAssetLibrary::execDeleteAsset },
			{ "DeleteDirectory", &UEditorAssetLibrary::execDeleteDirectory },
			{ "DeleteLoadedAsset", &UEditorAssetLibrary::execDeleteLoadedAsset },
			{ "DeleteLoadedAssets", &UEditorAssetLibrary::execDeleteLoadedAssets },
			{ "DoAssetsExist", &UEditorAssetLibrary::execDoAssetsExist },
			{ "DoesAssetExist", &UEditorAssetLibrary::execDoesAssetExist },
			{ "DoesDirectoryExist", &UEditorAssetLibrary::execDoesDirectoryExist },
			{ "DoesDirectoryHaveAssets", &UEditorAssetLibrary::execDoesDirectoryHaveAssets },
			{ "DuplicateAsset", &UEditorAssetLibrary::execDuplicateAsset },
			{ "DuplicateDirectory", &UEditorAssetLibrary::execDuplicateDirectory },
			{ "DuplicateLoadedAsset", &UEditorAssetLibrary::execDuplicateLoadedAsset },
			{ "FindAssetData", &UEditorAssetLibrary::execFindAssetData },
			{ "FindPackageReferencersForAsset", &UEditorAssetLibrary::execFindPackageReferencersForAsset },
			{ "GetMetadataTag", &UEditorAssetLibrary::execGetMetadataTag },
			{ "GetMetadataTagValues", &UEditorAssetLibrary::execGetMetadataTagValues },
			{ "GetPathNameForLoadedAsset", &UEditorAssetLibrary::execGetPathNameForLoadedAsset },
			{ "GetTagValues", &UEditorAssetLibrary::execGetTagValues },
			{ "ListAssetByTagValue", &UEditorAssetLibrary::execListAssetByTagValue },
			{ "ListAssets", &UEditorAssetLibrary::execListAssets },
			{ "LoadAsset", &UEditorAssetLibrary::execLoadAsset },
			{ "LoadBlueprintClass", &UEditorAssetLibrary::execLoadBlueprintClass },
			{ "MakeDirectory", &UEditorAssetLibrary::execMakeDirectory },
			{ "RemoveMetadataTag", &UEditorAssetLibrary::execRemoveMetadataTag },
			{ "RenameAsset", &UEditorAssetLibrary::execRenameAsset },
			{ "RenameDirectory", &UEditorAssetLibrary::execRenameDirectory },
			{ "RenameLoadedAsset", &UEditorAssetLibrary::execRenameLoadedAsset },
			{ "SaveAsset", &UEditorAssetLibrary::execSaveAsset },
			{ "SaveDirectory", &UEditorAssetLibrary::execSaveDirectory },
			{ "SaveLoadedAsset", &UEditorAssetLibrary::execSaveLoadedAsset },
			{ "SaveLoadedAssets", &UEditorAssetLibrary::execSaveLoadedAssets },
			{ "SetMetadataTag", &UEditorAssetLibrary::execSetMetadataTag },
			{ "SyncBrowserToObjects", &UEditorAssetLibrary::execSyncBrowserToObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics
	{
		struct EditorAssetLibrary_eventCheckoutAsset_Parms
		{
			FString AssetToCheckout;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetToCheckout_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetToCheckout;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_AssetToCheckout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_AssetToCheckout = { "AssetToCheckout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventCheckoutAsset_Parms, AssetToCheckout), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_AssetToCheckout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_AssetToCheckout_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventCheckoutAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventCheckoutAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_AssetToCheckout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Checkout the asset from the Content Browser.\n\x09 * @param\x09""AssetToCheckout\x09\x09""Asset Path of the asset that we want to checkout.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Checkout the asset from the Content Browser.\n@param       AssetToCheckout         Asset Path of the asset that we want to checkout.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "CheckoutAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::EditorAssetLibrary_eventCheckoutAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics
	{
		struct EditorAssetLibrary_eventCheckoutDirectory_Parms
		{
			FString DirectoryPath;
			bool bRecursive;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventCheckoutDirectory_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventCheckoutDirectory_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventCheckoutDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventCheckoutDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventCheckoutDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Checkout assets from the Content Browser. It will load the assets if needed.\n\x09 * All objects that are in the directory will be checkout. Assets will be loaded before being checkout.\n\x09 * @param\x09""DirectoryPath\x09\x09""Directory of the assets that to checkout.\n\x09 * @param\x09""bRecursive\x09\x09\x09If the AssetPath is a folder, the search will be recursive and will checkout the asset in the sub folders.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "CPP_Default_bRecursive", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Checkout assets from the Content Browser. It will load the assets if needed.\nAll objects that are in the directory will be checkout. Assets will be loaded before being checkout.\n@param       DirectoryPath           Directory of the assets that to checkout.\n@param       bRecursive                      If the AssetPath is a folder, the search will be recursive and will checkout the asset in the sub folders.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "CheckoutDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::EditorAssetLibrary_eventCheckoutDirectory_Parms), Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics
	{
		struct EditorAssetLibrary_eventCheckoutLoadedAsset_Parms
		{
			UObject* AssetToCheckout;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetToCheckout;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::NewProp_AssetToCheckout = { "AssetToCheckout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventCheckoutLoadedAsset_Parms, AssetToCheckout), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventCheckoutLoadedAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventCheckoutLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::NewProp_AssetToCheckout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Checkout the asset from the Content Browser.\n\x09 * @param\x09""AssetToCheckout\x09\x09""Asset to checkout.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Checkout the asset from the Content Browser.\n@param       AssetToCheckout         Asset to checkout.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "CheckoutLoadedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::EditorAssetLibrary_eventCheckoutLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics
	{
		struct EditorAssetLibrary_eventCheckoutLoadedAssets_Parms
		{
			TArray<UObject*> AssetsToCheckout;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetsToCheckout_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsToCheckout_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsToCheckout;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_Inner = { "AssetsToCheckout", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout = { "AssetsToCheckout", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventCheckoutLoadedAssets_Parms, AssetsToCheckout), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventCheckoutLoadedAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventCheckoutLoadedAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Checkout the assets from the Content Browser.\n\x09 * @param\x09""AssetToCheckout\x09\x09""Assets to checkout.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Checkout the assets from the Content Browser.\n@param       AssetToCheckout         Assets to checkout.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "CheckoutLoadedAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::EditorAssetLibrary_eventCheckoutLoadedAssets_Parms), Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics
	{
		struct EditorAssetLibrary_eventConsolidateAssets_Parms
		{
			UObject* AssetToConsolidateTo;
			TArray<UObject*> AssetsToConsolidate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetToConsolidateTo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetsToConsolidate_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsToConsolidate_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsToConsolidate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetToConsolidateTo = { "AssetToConsolidateTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventConsolidateAssets_Parms, AssetToConsolidateTo), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_Inner = { "AssetsToConsolidate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate = { "AssetsToConsolidate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventConsolidateAssets_Parms, AssetsToConsolidate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventConsolidateAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventConsolidateAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetToConsolidateTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Consolidates an asset by replacing all references/uses of the provided AssetsToConsolidate with references to AssetToConsolidateTo.\n\x09 * This is useful when you want all references of assets to be replaced by a single asset.\n\x09 * The function first attempts to directly replace all relevant references located within objects that are already loaded and in memory.\n\x09 * Next, it deletes the AssetsToConsolidate, leaving behind object redirectors to AssetToConsolidateTo.\n\x09 * @param\x09""AssetToConsolidateTo\x09""Asset to which all references of the AssetsToConsolidate will instead refer to after this operation completes.\n\x09 * @param\x09""AssetsToConsolidate\x09\x09""All references to these assets will be modified to reference AssetToConsolidateTo instead.\n\x09 * @note\x09The AssetsToConsolidate are DELETED by this function.\n\x09 * @note\x09Modified objects will be saved if the operation succeeds.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Consolidates an asset by replacing all references/uses of the provided AssetsToConsolidate with references to AssetToConsolidateTo.\nThis is useful when you want all references of assets to be replaced by a single asset.\nThe function first attempts to directly replace all relevant references located within objects that are already loaded and in memory.\nNext, it deletes the AssetsToConsolidate, leaving behind object redirectors to AssetToConsolidateTo.\n@param       AssetToConsolidateTo    Asset to which all references of the AssetsToConsolidate will instead refer to after this operation completes.\n@param       AssetsToConsolidate             All references to these assets will be modified to reference AssetToConsolidateTo instead.\n@note        The AssetsToConsolidate are DELETED by this function.\n@note        Modified objects will be saved if the operation succeeds.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "ConsolidateAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::EditorAssetLibrary_eventConsolidateAssets_Parms), Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics
	{
		struct EditorAssetLibrary_eventDeleteAsset_Parms
		{
			FString AssetPathToDelete;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathToDelete_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPathToDelete;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_AssetPathToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_AssetPathToDelete = { "AssetPathToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDeleteAsset_Parms, AssetPathToDelete), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_AssetPathToDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_AssetPathToDelete_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDeleteAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventDeleteAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_AssetPathToDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Delete the package the assets live in. All objects that live in the package will be deleted.\n\x09 * This is a Force Delete. It doesn't check if the asset has references in other Levels or by Actors.\n\x09 * It will close all the asset editors and may clear the Transaction buffer (Undo History).\n\x09 * Will try to mark the file as deleted. The Asset will be loaded before being deleted.\n\x09 * @param\x09""AssetPathToDelete\x09\x09""Asset Path of the asset that we want to delete.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Delete the package the assets live in. All objects that live in the package will be deleted.\nThis is a Force Delete. It doesn't check if the asset has references in other Levels or by Actors.\nIt will close all the asset editors and may clear the Transaction buffer (Undo History).\nWill try to mark the file as deleted. The Asset will be loaded before being deleted.\n@param       AssetPathToDelete               Asset Path of the asset that we want to delete.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DeleteAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::EditorAssetLibrary_eventDeleteAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics
	{
		struct EditorAssetLibrary_eventDeleteDirectory_Parms
		{
			FString DirectoryPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDeleteDirectory_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDeleteDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventDeleteDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Delete the packages inside a directory. If the directory is then empty, delete the directory.\n\x09 * This is a Force Delete. It doesn't check if the assets have references in other Levels or by Actors.\n\x09 * It will close all the asset editors and may clear the Transaction buffer (Undo History).\n\x09 * Will try to mark the file as deleted. Assets will be loaded before being deleted.\n\x09 * The search is always recursive. It will try to delete the sub folders.\n\x09 * @param\x09""DirectoryPath\x09\x09""Directory that will be mark for delete and deleted.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Delete the packages inside a directory. If the directory is then empty, delete the directory.\nThis is a Force Delete. It doesn't check if the assets have references in other Levels or by Actors.\nIt will close all the asset editors and may clear the Transaction buffer (Undo History).\nWill try to mark the file as deleted. Assets will be loaded before being deleted.\nThe search is always recursive. It will try to delete the sub folders.\n@param       DirectoryPath           Directory that will be mark for delete and deleted.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DeleteDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::EditorAssetLibrary_eventDeleteDirectory_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics
	{
		struct EditorAssetLibrary_eventDeleteLoadedAsset_Parms
		{
			UObject* AssetToDelete;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetToDelete;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::NewProp_AssetToDelete = { "AssetToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDeleteLoadedAsset_Parms, AssetToDelete), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDeleteLoadedAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventDeleteLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::NewProp_AssetToDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Delete an asset from the Content Browser that is already loaded.\n\x09 * This is a Force Delete. It doesn't check if the asset has references in other Levels or by Actors.\n\x09 * It will close all the asset editors and may clear the Transaction buffer (Undo History).\n\x09 * Will try to mark the file as deleted.\n\x09 * @param\x09""AssetToDelete\x09\x09\x09""Asset that we want to delete.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Delete an asset from the Content Browser that is already loaded.\nThis is a Force Delete. It doesn't check if the asset has references in other Levels or by Actors.\nIt will close all the asset editors and may clear the Transaction buffer (Undo History).\nWill try to mark the file as deleted.\n@param       AssetToDelete                   Asset that we want to delete.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DeleteLoadedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::EditorAssetLibrary_eventDeleteLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics
	{
		struct EditorAssetLibrary_eventDeleteLoadedAssets_Parms
		{
			TArray<UObject*> AssetsToDelete;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetsToDelete_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsToDelete_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsToDelete;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_Inner = { "AssetsToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete = { "AssetsToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDeleteLoadedAssets_Parms, AssetsToDelete), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDeleteLoadedAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventDeleteLoadedAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Delete assets from the Content Browser that are already loaded.\n\x09 * This is a Force Delete. It doesn't check if the assets have references in other Levels or by Actors.\n\x09 * It will close all the asset editors and may clear the Transaction buffer (Undo History).\n\x09 * Will try to mark the files as deleted.\n\x09 * @param\x09""AssetsToDelete\x09\x09\x09""Assets that we want to delete.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Delete assets from the Content Browser that are already loaded.\nThis is a Force Delete. It doesn't check if the assets have references in other Levels or by Actors.\nIt will close all the asset editors and may clear the Transaction buffer (Undo History).\nWill try to mark the files as deleted.\n@param       AssetsToDelete                  Assets that we want to delete.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DeleteLoadedAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::EditorAssetLibrary_eventDeleteLoadedAssets_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics
	{
		struct EditorAssetLibrary_eventDoAssetsExist_Parms
		{
			TArray<FString> AssetPaths;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetPaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths_Inner = { "AssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths = { "AssetPaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDoAssetsExist_Parms, AssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDoAssetsExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventDoAssetsExist_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_AssetPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Check if the assets exist in the Content Browser.\n\x09 * @param\x09""AssetPaths\x09\x09""Asset Path of the assets (that are not a level).\n\x09 * @return\x09True if they exist and it is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Check if the assets exist in the Content Browser.\n@param       AssetPaths              Asset Path of the assets (that are not a level).\n@return      True if they exist and it is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DoAssetsExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::EditorAssetLibrary_eventDoAssetsExist_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics
	{
		struct EditorAssetLibrary_eventDoesAssetExist_Parms
		{
			FString AssetPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDoesAssetExist_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_AssetPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDoesAssetExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventDoesAssetExist_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Check if the asset exists in the Content Browser.\n\x09 * @param\x09""AssetPath\x09\x09""Asset Path of the asset (that is not a level).\n\x09 * @return\x09True if it does exist and it is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Check if the asset exists in the Content Browser.\n@param       AssetPath               Asset Path of the asset (that is not a level).\n@return      True if it does exist and it is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DoesAssetExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::EditorAssetLibrary_eventDoesAssetExist_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics
	{
		struct EditorAssetLibrary_eventDoesDirectoryExist_Parms
		{
			FString DirectoryPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDoesDirectoryExist_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDoesDirectoryExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventDoesDirectoryExist_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09* Check is the directory exist in the Content Browser.\n\x09* @param\x09""DirectoryPath\x09\x09Long Path Name of the directory.\n\x09* @return\x09True if it does exist and it is valid.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Check is the directory exist in the Content Browser.\n@param        DirectoryPath           Long Path Name of the directory.\n@return       True if it does exist and it is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DoesDirectoryExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::EditorAssetLibrary_eventDoesDirectoryExist_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics
	{
		struct EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms
		{
			FString DirectoryPath;
			bool bRecursive;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Check if there any asset that exist in the directory.\n\x09 * @param\x09""DirectoryPath\x09\x09Long Path Name of the directory.\n\x09 * @return\x09True if there is any assets.\n\x09 */" },
		{ "CPP_Default_bRecursive", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Check if there any asset that exist in the directory.\n@param       DirectoryPath           Long Path Name of the directory.\n@return      True if there is any assets." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DoesDirectoryHaveAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::EditorAssetLibrary_eventDoesDirectoryHaveAssets_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics
	{
		struct EditorAssetLibrary_eventDuplicateAsset_Parms
		{
			FString SourceAssetPath;
			FString DestinationAssetPath;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceAssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationAssetPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_SourceAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_SourceAssetPath = { "SourceAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateAsset_Parms, SourceAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_SourceAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_SourceAssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_DestinationAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_DestinationAssetPath = { "DestinationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateAsset_Parms, DestinationAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_DestinationAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_DestinationAssetPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_SourceAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_DestinationAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Duplicate an asset from the Content Browser. Will try to checkout the file. The Asset will be loaded before being duplicated.\n\x09 * @param\x09SourceAssetPath\x09\x09\x09""Asset Path of the asset that we want to copy from.\n\x09 * @param\x09""DestinationAssetPath\x09""Asset Path of the duplicated asset.\n\x09 * @return\x09The duplicated object if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Duplicate an asset from the Content Browser. Will try to checkout the file. The Asset will be loaded before being duplicated.\n@param       SourceAssetPath                 Asset Path of the asset that we want to copy from.\n@param       DestinationAssetPath    Asset Path of the duplicated asset.\n@return      The duplicated object if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DuplicateAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::EditorAssetLibrary_eventDuplicateAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics
	{
		struct EditorAssetLibrary_eventDuplicateDirectory_Parms
		{
			FString SourceDirectoryPath;
			FString DestinationDirectoryPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceDirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceDirectoryPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationDirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationDirectoryPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath = { "SourceDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateDirectory_Parms, SourceDirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath = { "DestinationDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateDirectory_Parms, DestinationDirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventDuplicateDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventDuplicateDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Duplicate asset from the Content Browser that are in the folder.\n\x09 * Will try to checkout the files. The Assets will be loaded before being duplicated.\n\x09 * @param\x09SourceDirectoryPath\x09\x09\x09""Directory of the assets that we want to duplicate from.\n\x09 * @param\x09""DestinationDirectoryPath\x09""Directory of the duplicated asset.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Duplicate asset from the Content Browser that are in the folder.\nWill try to checkout the files. The Assets will be loaded before being duplicated.\n@param       SourceDirectoryPath                     Directory of the assets that we want to duplicate from.\n@param       DestinationDirectoryPath        Directory of the duplicated asset.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DuplicateDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::EditorAssetLibrary_eventDuplicateDirectory_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics
	{
		struct EditorAssetLibrary_eventDuplicateLoadedAsset_Parms
		{
			UObject* SourceAsset;
			FString DestinationAssetPath;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationAssetPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateLoadedAsset_Parms, SourceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath = { "DestinationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateLoadedAsset_Parms, DestinationAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventDuplicateLoadedAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_SourceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Duplicate an asset from the Content Browser that is already loaded. Will try to checkout the file.\n\x09 * @param\x09SourceAsset\x09\x09\x09\x09""Asset that we want to copy from.\n\x09 * @param\x09""DestinationAssetPath\x09""Asset Path of the duplicated asset.\n\x09 * @return\x09The duplicated object if the operation succeeds\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Duplicate an asset from the Content Browser that is already loaded. Will try to checkout the file.\n@param       SourceAsset                             Asset that we want to copy from.\n@param       DestinationAssetPath    Asset Path of the duplicated asset.\n@return      The duplicated object if the operation succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "DuplicateLoadedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::EditorAssetLibrary_eventDuplicateLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct EditorAssetLibrary_eventFindAssetData_Parms
		{
			FString AssetPath;
			FAssetData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventFindAssetData_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_AssetPath_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventFindAssetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Return the AssetData for the Asset that can then be used with the more complex lib AssetRegistryHelpers.\n\x09 * @param\x09""AssetPath\x09""Asset Path we are trying to find.\n\x09 * @return\x09The AssetData found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Return the AssetData for the Asset that can then be used with the more complex lib AssetRegistryHelpers.\n@param       AssetPath       Asset Path we are trying to find.\n@return      The AssetData found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "FindAssetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::EditorAssetLibrary_eventFindAssetData_Parms), Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics
	{
		struct EditorAssetLibrary_eventFindPackageReferencersForAsset_Parms
		{
			FString AssetPath;
			bool bLoadAssetsToConfirm;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static void NewProp_bLoadAssetsToConfirm_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadAssetsToConfirm;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventFindPackageReferencersForAsset_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_AssetPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_bLoadAssetsToConfirm_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventFindPackageReferencersForAsset_Parms*)Obj)->bLoadAssetsToConfirm = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_bLoadAssetsToConfirm = { "bLoadAssetsToConfirm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventFindPackageReferencersForAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_bLoadAssetsToConfirm_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventFindPackageReferencersForAsset_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_bLoadAssetsToConfirm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Find Package Referencers for an asset. Only Soft and Hard dependencies would be looked for.\n\x09 * Soft are dependencies which don't need to be loaded for the object to be used.\n\x09 * Had are dependencies which are required for correct usage of the source asset and must be loaded at the same time.\n\x09 * Other references may exist. The asset may be currently used in memory by another asset, by the editor or by code.\n\x09 * Package dependencies are cached with the asset. False positive can happen until all the assets are loaded and re-saved.\n\x09 * @param\x09""AssetPath\x09\x09\x09\x09""Asset Path of the asset that we are looking for (that is not a level).\n\x09 * @param\x09""bLoadAssetsToConfirm\x09The asset and the referencers will be loaded (if not a level) to confirm the dependencies.\n\x09 * @return\x09The package path of the referencers.\n\x09 */" },
		{ "CPP_Default_bLoadAssetsToConfirm", "false" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Find Package Referencers for an asset. Only Soft and Hard dependencies would be looked for.\nSoft are dependencies which don't need to be loaded for the object to be used.\nHad are dependencies which are required for correct usage of the source asset and must be loaded at the same time.\nOther references may exist. The asset may be currently used in memory by another asset, by the editor or by code.\nPackage dependencies are cached with the asset. False positive can happen until all the assets are loaded and re-saved.\n@param       AssetPath                               Asset Path of the asset that we are looking for (that is not a level).\n@param       bLoadAssetsToConfirm    The asset and the referencers will be loaded (if not a level) to confirm the dependencies.\n@return      The package path of the referencers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "FindPackageReferencersForAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::EditorAssetLibrary_eventFindPackageReferencersForAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics
	{
		struct EditorAssetLibrary_eventGetMetadataTag_Parms
		{
			UObject* Object;
			FName Tag;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventGetMetadataTag_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventGetMetadataTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventGetMetadataTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Metadata" },
		{ "Comment", "/**\n\x09 * Get the value associated with the given tag of a loaded asset's metadata.\n\x09 * @param\x09Object\x09\x09The object from which to retrieve the metadata.\n\x09 * @param\x09Tag\x09\x09\x09The tag to find in the metadata.\n\x09 * @return\x09The string value associated with the tag.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Get the value associated with the given tag of a loaded asset's metadata.\n@param       Object          The object from which to retrieve the metadata.\n@param       Tag                     The tag to find in the metadata.\n@return      The string value associated with the tag." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "GetMetadataTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::EditorAssetLibrary_eventGetMetadataTag_Parms), Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics
	{
		struct EditorAssetLibrary_eventGetMetadataTagValues_Parms
		{
			UObject* Object;
			TMap<FName,FString> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventGetMetadataTagValues_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventGetMetadataTagValues_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Metadata" },
		{ "Comment", "/**\n\x09 * Get all tags/values of a loaded asset's metadata.\n\x09 * @param\x09Object\x09\x09The object from which to retrieve the metadata.\n\x09 * @return\x09The list of all Tags and Values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Get all tags/values of a loaded asset's metadata.\n@param       Object          The object from which to retrieve the metadata.\n@return      The list of all Tags and Values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "GetMetadataTagValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::EditorAssetLibrary_eventGetMetadataTagValues_Parms), Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics
	{
		struct EditorAssetLibrary_eventGetPathNameForLoadedAsset_Parms
		{
			UObject* LoadedAsset;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedAsset;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::NewProp_LoadedAsset = { "LoadedAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventGetPathNameForLoadedAsset_Parms, LoadedAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventGetPathNameForLoadedAsset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::NewProp_LoadedAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Return a valid AssetPath for a loaded asset. The asset need to be a valid asset in the Content Browser.\n\x09 * Similar to GetPathName(). The format will be: /Game/MyFolder/MyAsset.MyAsset\n\x09 * @param\x09LoadedAsset\x09\x09Loaded Asset that exist in the Content Browser.\n\x09 * @return\x09If valid, the asset Path of the loaded asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Return a valid AssetPath for a loaded asset. The asset need to be a valid asset in the Content Browser.\nSimilar to GetPathName(). The format will be: /Game/MyFolder/MyAsset.MyAsset\n@param       LoadedAsset             Loaded Asset that exist in the Content Browser.\n@return      If valid, the asset Path of the loaded asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "GetPathNameForLoadedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::EditorAssetLibrary_eventGetPathNameForLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics
	{
		struct EditorAssetLibrary_eventGetTagValues_Parms
		{
			FString AssetPath;
			TMap<FName,FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventGetTagValues_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_AssetPath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventGetTagValues_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Gets all TagValues (from Asset Registry) associated with an (unloaded) asset as strings value.\n\x09 * @param\x09""AssetPath\x09\x09""Asset Path we are trying to find.\n\x09 * @return\x09The list of all TagName & TagValue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Gets all TagValues (from Asset Registry) associated with an (unloaded) asset as strings value.\n@param       AssetPath               Asset Path we are trying to find.\n@return      The list of all TagName & TagValue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "GetTagValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::EditorAssetLibrary_eventGetTagValues_Parms), Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics
	{
		struct EditorAssetLibrary_eventListAssetByTagValue_Parms
		{
			FName TagName;
			FString TagValue;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TagValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventListAssetByTagValue_Parms, TagName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagValue = { "TagValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventListAssetByTagValue_Parms, TagValue), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventListAssetByTagValue_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_TagValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Return the list of all the assets that have the pair of Tag/Value.\n\x09 * @param TagName\x09The tag associated with the assets requested.\n\x09 * @param TagValue\x09The value associated with the assets requested.\n\x09 * @return\x09The list of asset found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Return the list of all the assets that have the pair of Tag/Value.\n@param TagName       The tag associated with the assets requested.\n@param TagValue      The value associated with the assets requested.\n@return      The list of asset found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "ListAssetByTagValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::EditorAssetLibrary_eventListAssetByTagValue_Parms), Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics
	{
		struct EditorAssetLibrary_eventListAssets_Parms
		{
			FString DirectoryPath;
			bool bRecursive;
			bool bIncludeFolder;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static void NewProp_bIncludeFolder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFolder;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventListAssets_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventListAssets_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventListAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bIncludeFolder_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventListAssets_Parms*)Obj)->bIncludeFolder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bIncludeFolder = { "bIncludeFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventListAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bIncludeFolder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventListAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_bIncludeFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Return the list of all the assets found in the DirectoryPath.\n\x09 * @param\x09""DirectoryPath\x09\x09""Directory path of the asset we want the list from.\n\x09 * @param\x09""bRecursive\x09\x09\x09The search will be recursive and will look in sub folders.\n\x09 * @param\x09""bIncludeFolder\x09\x09The result will include folders name.\n\x09 * @return\x09The list of asset found.\n\x09 */" },
		{ "CPP_Default_bIncludeFolder", "false" },
		{ "CPP_Default_bRecursive", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Return the list of all the assets found in the DirectoryPath.\n@param       DirectoryPath           Directory path of the asset we want the list from.\n@param       bRecursive                      The search will be recursive and will look in sub folders.\n@param       bIncludeFolder          The result will include folders name.\n@return      The list of asset found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "ListAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::EditorAssetLibrary_eventListAssets_Parms), Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_ListAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_ListAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics
	{
		struct EditorAssetLibrary_eventLoadAsset_Parms
		{
			FString AssetPath;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventLoadAsset_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_AssetPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventLoadAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Load an asset from the Content Browser. It will verify if the object is already loaded and only load it if it's necessary.\n\x09 * @param\x09""AssetPath\x09\x09""Asset Path of the asset (that is not a level).\n\x09 * @return\x09""Found or loaded asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Load an asset from the Content Browser. It will verify if the object is already loaded and only load it if it's necessary.\n@param       AssetPath               Asset Path of the asset (that is not a level).\n@return      Found or loaded asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "LoadAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::EditorAssetLibrary_eventLoadAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics
	{
		struct EditorAssetLibrary_eventLoadBlueprintClass_Parms
		{
			FString AssetPath;
			UClass* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventLoadBlueprintClass_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_AssetPath_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventLoadBlueprintClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Load a Blueprint asset from the Content Browser and return its generated class. It will verify if the object is already loaded and only load it if it's necessary.\n\x09 * @param\x09""AssetPath\x09\x09""Asset Path of the Blueprint asset.\n\x09 * @return\x09""Found or loaded class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Load a Blueprint asset from the Content Browser and return its generated class. It will verify if the object is already loaded and only load it if it's necessary.\n@param       AssetPath               Asset Path of the Blueprint asset.\n@return      Found or loaded class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "LoadBlueprintClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::EditorAssetLibrary_eventLoadBlueprintClass_Parms), Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics
	{
		struct EditorAssetLibrary_eventMakeDirectory_Parms
		{
			FString DirectoryPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventMakeDirectory_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventMakeDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventMakeDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Create the directory on disk and in the Content Browser.\n\x09 * @param\x09""DirectoryPath\x09\x09Long Path Name of the directory.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Create the directory on disk and in the Content Browser.\n@param       DirectoryPath           Long Path Name of the directory.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "MakeDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::EditorAssetLibrary_eventMakeDirectory_Parms), Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics
	{
		struct EditorAssetLibrary_eventRemoveMetadataTag_Parms
		{
			UObject* Object;
			FName Tag;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventRemoveMetadataTag_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventRemoveMetadataTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Metadata" },
		{ "Comment", "/**\n\x09 * Remove the given tag from a loaded asset's metadata.\n\x09 * @param\x09Object\x09\x09The object from which to retrieve the metadata.\n\x09 * @param\x09Tag\x09\x09\x09The tag to remove from the metadata.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Remove the given tag from a loaded asset's metadata.\n@param       Object          The object from which to retrieve the metadata.\n@param       Tag                     The tag to remove from the metadata." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "RemoveMetadataTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::EditorAssetLibrary_eventRemoveMetadataTag_Parms), Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics
	{
		struct EditorAssetLibrary_eventRenameAsset_Parms
		{
			FString SourceAssetPath;
			FString DestinationAssetPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceAssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationAssetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_SourceAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_SourceAssetPath = { "SourceAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventRenameAsset_Parms, SourceAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_SourceAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_SourceAssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_DestinationAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_DestinationAssetPath = { "DestinationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventRenameAsset_Parms, DestinationAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_DestinationAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_DestinationAssetPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventRenameAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventRenameAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_SourceAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_DestinationAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Rename an asset from the Content Browser. Equivalent to a Move operation.\n\x09 * Will try to checkout the file. The Asset will be loaded before being renamed.\n\x09 * @param\x09SourceAssetPath\x09\x09\x09""Asset Path of the asset that we want to copy from.\n\x09 * @param\x09""DestinationAssetPath\x09""Asset Path of the renamed asset.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Rename an asset from the Content Browser. Equivalent to a Move operation.\nWill try to checkout the file. The Asset will be loaded before being renamed.\n@param       SourceAssetPath                 Asset Path of the asset that we want to copy from.\n@param       DestinationAssetPath    Asset Path of the renamed asset.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "RenameAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::EditorAssetLibrary_eventRenameAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics
	{
		struct EditorAssetLibrary_eventRenameDirectory_Parms
		{
			FString SourceDirectoryPath;
			FString DestinationDirectoryPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceDirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceDirectoryPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationDirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationDirectoryPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_SourceDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_SourceDirectoryPath = { "SourceDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventRenameDirectory_Parms, SourceDirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_SourceDirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_SourceDirectoryPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_DestinationDirectoryPath = { "DestinationDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventRenameDirectory_Parms, DestinationDirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventRenameDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventRenameDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_SourceDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_DestinationDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Rename assets from the Content Browser that are in the folder.\n\x09 * Equivalent to a Move operation. Will try to checkout the files. The Assets will be loaded before being renamed.\n\x09 * @param\x09SourceDirectoryPath\x09\x09\x09""Directory of the assets that we want to rename from.\n\x09 * @param\x09""DestinationDirectoryPath\x09""Directory of the renamed asset.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Rename assets from the Content Browser that are in the folder.\nEquivalent to a Move operation. Will try to checkout the files. The Assets will be loaded before being renamed.\n@param       SourceDirectoryPath                     Directory of the assets that we want to rename from.\n@param       DestinationDirectoryPath        Directory of the renamed asset.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "RenameDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::EditorAssetLibrary_eventRenameDirectory_Parms), Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics
	{
		struct EditorAssetLibrary_eventRenameLoadedAsset_Parms
		{
			UObject* SourceAsset;
			FString DestinationAssetPath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationAssetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventRenameLoadedAsset_Parms, SourceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath = { "DestinationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventRenameLoadedAsset_Parms, DestinationAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventRenameLoadedAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventRenameLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_SourceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Rename an asset from the Content Browser that is already loaded.\n\x09 * Equivalent to a Move operation. Will try to checkout the files.\n\x09 * @param\x09SourceAsset\x09\x09\x09\x09""Asset that we want to copy from.\n\x09 * @param\x09""DestinationAssetPath\x09""Asset Path of the duplicated asset.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Rename an asset from the Content Browser that is already loaded.\nEquivalent to a Move operation. Will try to checkout the files.\n@param       SourceAsset                             Asset that we want to copy from.\n@param       DestinationAssetPath    Asset Path of the duplicated asset.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "RenameLoadedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::EditorAssetLibrary_eventRenameLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics
	{
		struct EditorAssetLibrary_eventSaveAsset_Parms
		{
			FString AssetToSave;
			bool bOnlyIfIsDirty;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetToSave_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetToSave;
		static void NewProp_bOnlyIfIsDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIfIsDirty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_AssetToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_AssetToSave = { "AssetToSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventSaveAsset_Parms, AssetToSave), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_AssetToSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_AssetToSave_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_bOnlyIfIsDirty_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveAsset_Parms*)Obj)->bOnlyIfIsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_bOnlyIfIsDirty = { "bOnlyIfIsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_bOnlyIfIsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_AssetToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_bOnlyIfIsDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Save the packages the assets live in. All objects that live in the package will be saved.\n\x09 * Will try to checkout the file first. The Asset will be loaded before being saved.\n\x09 * @param\x09""AssetsToSave\x09\x09""Asset Path of the asset that we want to save.\n\x09 * @param\x09""bOnlyIfIsDirty\x09\x09Only checkout/save the asset if it's dirty.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "CPP_Default_bOnlyIfIsDirty", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Save the packages the assets live in. All objects that live in the package will be saved.\nWill try to checkout the file first. The Asset will be loaded before being saved.\n@param       AssetsToSave            Asset Path of the asset that we want to save.\n@param       bOnlyIfIsDirty          Only checkout/save the asset if it's dirty.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "SaveAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::EditorAssetLibrary_eventSaveAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics
	{
		struct EditorAssetLibrary_eventSaveDirectory_Parms
		{
			FString DirectoryPath;
			bool bOnlyIfIsDirty;
			bool bRecursive;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static void NewProp_bOnlyIfIsDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIfIsDirty;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventSaveDirectory_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bOnlyIfIsDirty_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveDirectory_Parms*)Obj)->bOnlyIfIsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bOnlyIfIsDirty = { "bOnlyIfIsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bOnlyIfIsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveDirectory_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveDirectory_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bOnlyIfIsDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Save the packages the assets live in inside the directory. All objects that are in the directory will be saved.\n\x09 * Will try to checkout the file first. Assets will be loaded before being saved.\n\x09 * @param\x09""DirectoryPath\x09\x09""Directory that will be checked out and saved.\n\x09 * @param\x09""bOnlyIfIsDirty\x09\x09Only checkout asset that are dirty.\n\x09 * @param\x09""bRecursive\x09\x09\x09The search will be recursive and it will save the asset in the sub folders.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "CPP_Default_bOnlyIfIsDirty", "true" },
		{ "CPP_Default_bRecursive", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Save the packages the assets live in inside the directory. All objects that are in the directory will be saved.\nWill try to checkout the file first. Assets will be loaded before being saved.\n@param       DirectoryPath           Directory that will be checked out and saved.\n@param       bOnlyIfIsDirty          Only checkout asset that are dirty.\n@param       bRecursive                      The search will be recursive and it will save the asset in the sub folders.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "SaveDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::EditorAssetLibrary_eventSaveDirectory_Parms), Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics
	{
		struct EditorAssetLibrary_eventSaveLoadedAsset_Parms
		{
			UObject* AssetToSave;
			bool bOnlyIfIsDirty;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetToSave;
		static void NewProp_bOnlyIfIsDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIfIsDirty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_AssetToSave = { "AssetToSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventSaveLoadedAsset_Parms, AssetToSave), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_bOnlyIfIsDirty_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveLoadedAsset_Parms*)Obj)->bOnlyIfIsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_bOnlyIfIsDirty = { "bOnlyIfIsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_bOnlyIfIsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveLoadedAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_AssetToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_bOnlyIfIsDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Save the packages the assets live in. All objects that live in the package will be saved. Will try to checkout the file.\n\x09 * @param\x09""AssetToSave\x09\x09\x09""Asset that we want to save.\n\x09 * @param\x09""bOnlyIfIsDirty\x09\x09Only checkout asset that are dirty.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "CPP_Default_bOnlyIfIsDirty", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Save the packages the assets live in. All objects that live in the package will be saved. Will try to checkout the file.\n@param       AssetToSave                     Asset that we want to save.\n@param       bOnlyIfIsDirty          Only checkout asset that are dirty.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "SaveLoadedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::EditorAssetLibrary_eventSaveLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics
	{
		struct EditorAssetLibrary_eventSaveLoadedAssets_Parms
		{
			TArray<UObject*> AssetsToSave;
			bool bOnlyIfIsDirty;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetsToSave_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsToSave_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsToSave;
		static void NewProp_bOnlyIfIsDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIfIsDirty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave_Inner = { "AssetsToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave = { "AssetsToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventSaveLoadedAssets_Parms, AssetsToSave), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_bOnlyIfIsDirty_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveLoadedAssets_Parms*)Obj)->bOnlyIfIsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_bOnlyIfIsDirty = { "bOnlyIfIsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveLoadedAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_bOnlyIfIsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetLibrary_eventSaveLoadedAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetLibrary_eventSaveLoadedAssets_Parms), &Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_AssetsToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_bOnlyIfIsDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Save the packages the assets live in. All objects that live in the package will be saved. Will try to checkout the files.\n\x09 * @param\x09""AssetToSaves\x09\x09""Assets that we want to save.\n\x09 * @param\x09""bOnlyIfIsDirty\x09\x09Only checkout asset that are dirty.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "CPP_Default_bOnlyIfIsDirty", "true" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Save the packages the assets live in. All objects that live in the package will be saved. Will try to checkout the files.\n@param       AssetToSaves            Assets that we want to save.\n@param       bOnlyIfIsDirty          Only checkout asset that are dirty.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "SaveLoadedAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::EditorAssetLibrary_eventSaveLoadedAssets_Parms), Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics
	{
		struct EditorAssetLibrary_eventSetMetadataTag_Parms
		{
			UObject* Object;
			FName Tag;
			FString Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventSetMetadataTag_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventSetMetadataTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventSetMetadataTag_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Metadata" },
		{ "Comment", "/**\n\x09 * Set the value associated with a given tag of a loaded asset's metadata.\n\x09 * @param\x09Object\x09\x09The object from which to retrieve the metadata.\n\x09 * @param\x09Tag\x09\x09\x09The tag to set in the metadata.\n\x09 * @param\x09Value\x09\x09The string value to associate with the tag.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Set the value associated with a given tag of a loaded asset's metadata.\n@param       Object          The object from which to retrieve the metadata.\n@param       Tag                     The tag to set in the metadata.\n@param       Value           The string value to associate with the tag." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "SetMetadataTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::EditorAssetLibrary_eventSetMetadataTag_Parms), Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics
	{
		struct EditorAssetLibrary_eventSyncBrowserToObjects_Parms
		{
			TArray<FString> AssetPaths;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetPaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths_Inner = { "AssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths = { "AssetPaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetLibrary_eventSyncBrowserToObjects_Parms, AssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::NewProp_AssetPaths,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Content Browser" },
		{ "Comment", "/**\n\x09 * Sync the Content Browser to the given asset(s)\n\x09 * @param\x09""AssetPaths\x09The list of asset paths to sync to in the Content Browser\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Sync the Content Browser to the given asset(s)\n@param       AssetPaths      The list of asset paths to sync to in the Content Browser" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetLibrary, nullptr, "SyncBrowserToObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::EditorAssetLibrary_eventSyncBrowserToObjects_Parms), Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorAssetLibrary);
	UClass* Z_Construct_UClass_UEditorAssetLibrary_NoRegister()
	{
		return UEditorAssetLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorAssetLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorAssetLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorAssetLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutAsset, "CheckoutAsset" }, // 588411624
		{ &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutDirectory, "CheckoutDirectory" }, // 1231531000
		{ &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAsset, "CheckoutLoadedAsset" }, // 339283295
		{ &Z_Construct_UFunction_UEditorAssetLibrary_CheckoutLoadedAssets, "CheckoutLoadedAssets" }, // 2285451729
		{ &Z_Construct_UFunction_UEditorAssetLibrary_ConsolidateAssets, "ConsolidateAssets" }, // 1506304526
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DeleteAsset, "DeleteAsset" }, // 273910675
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DeleteDirectory, "DeleteDirectory" }, // 4218559887
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAsset, "DeleteLoadedAsset" }, // 2788097936
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DeleteLoadedAssets, "DeleteLoadedAssets" }, // 1750536612
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DoAssetsExist, "DoAssetsExist" }, // 806613241
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DoesAssetExist, "DoesAssetExist" }, // 672530170
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryExist, "DoesDirectoryExist" }, // 775323375
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DoesDirectoryHaveAssets, "DoesDirectoryHaveAssets" }, // 3483902569
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DuplicateAsset, "DuplicateAsset" }, // 3710255227
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DuplicateDirectory, "DuplicateDirectory" }, // 4214709963
		{ &Z_Construct_UFunction_UEditorAssetLibrary_DuplicateLoadedAsset, "DuplicateLoadedAsset" }, // 4245512866
		{ &Z_Construct_UFunction_UEditorAssetLibrary_FindAssetData, "FindAssetData" }, // 3727373024
		{ &Z_Construct_UFunction_UEditorAssetLibrary_FindPackageReferencersForAsset, "FindPackageReferencersForAsset" }, // 2363696034
		{ &Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTag, "GetMetadataTag" }, // 3767293963
		{ &Z_Construct_UFunction_UEditorAssetLibrary_GetMetadataTagValues, "GetMetadataTagValues" }, // 1854768124
		{ &Z_Construct_UFunction_UEditorAssetLibrary_GetPathNameForLoadedAsset, "GetPathNameForLoadedAsset" }, // 2094654806
		{ &Z_Construct_UFunction_UEditorAssetLibrary_GetTagValues, "GetTagValues" }, // 16181493
		{ &Z_Construct_UFunction_UEditorAssetLibrary_ListAssetByTagValue, "ListAssetByTagValue" }, // 1040810853
		{ &Z_Construct_UFunction_UEditorAssetLibrary_ListAssets, "ListAssets" }, // 2228287156
		{ &Z_Construct_UFunction_UEditorAssetLibrary_LoadAsset, "LoadAsset" }, // 1634952034
		{ &Z_Construct_UFunction_UEditorAssetLibrary_LoadBlueprintClass, "LoadBlueprintClass" }, // 3836881964
		{ &Z_Construct_UFunction_UEditorAssetLibrary_MakeDirectory, "MakeDirectory" }, // 1148171091
		{ &Z_Construct_UFunction_UEditorAssetLibrary_RemoveMetadataTag, "RemoveMetadataTag" }, // 4181621838
		{ &Z_Construct_UFunction_UEditorAssetLibrary_RenameAsset, "RenameAsset" }, // 2603283011
		{ &Z_Construct_UFunction_UEditorAssetLibrary_RenameDirectory, "RenameDirectory" }, // 1313334904
		{ &Z_Construct_UFunction_UEditorAssetLibrary_RenameLoadedAsset, "RenameLoadedAsset" }, // 2789559585
		{ &Z_Construct_UFunction_UEditorAssetLibrary_SaveAsset, "SaveAsset" }, // 2102227022
		{ &Z_Construct_UFunction_UEditorAssetLibrary_SaveDirectory, "SaveDirectory" }, // 4206753610
		{ &Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAsset, "SaveLoadedAsset" }, // 4092562122
		{ &Z_Construct_UFunction_UEditorAssetLibrary_SaveLoadedAssets, "SaveLoadedAssets" }, // 776884954
		{ &Z_Construct_UFunction_UEditorAssetLibrary_SetMetadataTag, "SetMetadataTag" }, // 3298154252
		{ &Z_Construct_UFunction_UEditorAssetLibrary_SyncBrowserToObjects, "SyncBrowserToObjects" }, // 1823954792
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAssetLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility class to do most of the common functionalities with the ContentBrowser.\n * The AssetRegistryHelpers class has more complex utilities. Use FindAssetData to get a FAssetData from an Asset Path.\n * The Asset Path can be represented by \n *\x09\x09ie. (Reference/Text Path)\x09StaticMesh'/Game/MyFolder/MyAsset.MyAsset'\n *\x09\x09ie. (Full Name)\x09\x09\x09\x09StaticMesh /Game/MyFolder/MyAsset.MyAsset\n *\x09\x09ie. (Path Name)\x09\x09\x09\x09/Game/MyFolder/MyAsset.MyAsset\n *\x09\x09ie. (Package Name)\x09\x09\x09/Game/MyFolder/MyAsset\n * The Directory Path can be represented by\n *\x09\x09ie. /Game/MyNewFolder/\n *\x09\x09ie. /Game/MyNewFolder\n * All operations can be slow. The editor should not be in play in editor mode. It will not work on assets of the type level.\n */" },
		{ "IncludePath", "EditorAssetLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorAssetLibrary.h" },
		{ "ToolTip", "Utility class to do most of the common functionalities with the ContentBrowser.\nThe AssetRegistryHelpers class has more complex utilities. Use FindAssetData to get a FAssetData from an Asset Path.\nThe Asset Path can be represented by\n            ie. (Reference/Text Path)       StaticMesh'/Game/MyFolder/MyAsset.MyAsset'\n            ie. (Full Name)                         StaticMesh /Game/MyFolder/MyAsset.MyAsset\n            ie. (Path Name)                         /Game/MyFolder/MyAsset.MyAsset\n            ie. (Package Name)                      /Game/MyFolder/MyAsset\nThe Directory Path can be represented by\n            ie. /Game/MyNewFolder/\n            ie. /Game/MyNewFolder\nAll operations can be slow. The editor should not be in play in editor mode. It will not work on assets of the type level." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorAssetLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorAssetLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorAssetLibrary_Statics::ClassParams = {
		&UEditorAssetLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorAssetLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAssetLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorAssetLibrary()
	{
		if (!Z_Registration_Info_UClass_UEditorAssetLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorAssetLibrary.OuterSingleton, Z_Construct_UClass_UEditorAssetLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorAssetLibrary.OuterSingleton;
	}
	template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<UEditorAssetLibrary>()
	{
		return UEditorAssetLibrary::StaticClass();
	}
	UEditorAssetLibrary::UEditorAssetLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorAssetLibrary);
	UEditorAssetLibrary::~UEditorAssetLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorAssetLibrary, UEditorAssetLibrary::StaticClass, TEXT("UEditorAssetLibrary"), &Z_Registration_Info_UClass_UEditorAssetLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorAssetLibrary), 3822016471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_1481648498(TEXT("/Script/EditorScriptingUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
