// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Subsystems/EditorAssetSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorAssetSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAssetSubsystem();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAssetSubsystem_NoRegister();
	UNREALED_API UFunction* Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct EditorAssetSubsystem_eventOnExtractAssetFromFileDynamic_Parms
		{
			TArray<FString> Files;
			TArray<FAssetData> AssetDataArray;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Files_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetDataArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetDataArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::NewProp_Files_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventOnExtractAssetFromFileDynamic_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::NewProp_Files_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::NewProp_Files_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::NewProp_AssetDataArray_Inner = { "AssetDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::NewProp_AssetDataArray = { "AssetDataArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventOnExtractAssetFromFileDynamic_Parms, AssetDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::NewProp_AssetDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::NewProp_AssetDataArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Dynamic version of FOnExtractAssetFromFile.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Dynamic version of FOnExtractAssetFromFile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "OnExtractAssetFromFileDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::EditorAssetSubsystem_eventOnExtractAssetFromFileDynamic_Parms), Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UEditorAssetSubsystem::FOnExtractAssetFromFileDynamic_DelegateWrapper(const FScriptDelegate& OnExtractAssetFromFileDynamic, TArray<FString> const& Files, TArray<FAssetData>& AssetDataArray)
{
	struct EditorAssetSubsystem_eventOnExtractAssetFromFileDynamic_Parms
	{
		TArray<FString> Files;
		TArray<FAssetData> AssetDataArray;
	};
	EditorAssetSubsystem_eventOnExtractAssetFromFileDynamic_Parms Parms;
	Parms.Files=Files;
	Parms.AssetDataArray=AssetDataArray;
	OnExtractAssetFromFileDynamic.ProcessDelegate<UObject>(&Parms);
	AssetDataArray=Parms.AssetDataArray;
}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execRemoveOnExtractAssetFromFile)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveOnExtractAssetFromFile(FOnExtractAssetFromFileDynamic(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execAddOnExtractAssetFromFile)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOnExtractAssetFromFile(FOnExtractAssetFromFileDynamic(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execRemoveMetadataTag)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMetadataTag(Z_Param_Object,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execSetMetadataTag)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMetadataTag(Z_Param_Object,Z_Param_Tag,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execGetMetadataTag)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMetadataTag(Z_Param_Object,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execGetMetadataTagValues)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FString>*)Z_Param__Result=P_THIS->GetMetadataTagValues(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execGetTagValues)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,FString>*)Z_Param__Result=P_THIS->GetTagValues(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execListAssetsByTagValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TagValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->ListAssetsByTagValue(Z_Param_TagName,Z_Param_TagValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execListAssets)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_GET_UBOOL(Z_Param_bIncludeFolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->ListAssets(Z_Param_DirectoryPath,Z_Param_bRecursive,Z_Param_bIncludeFolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execMakeDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MakeDirectory(Z_Param_DirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execDoesDirectoryContainAssets)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesDirectoryContainAssets(Z_Param_DirectoryPath,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execDoesDirectoryExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesDirectoryExist(Z_Param_DirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execSaveDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveDirectory(Z_Param_DirectoryPath,Z_Param_bOnlyIfIsDirty,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execSaveAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetToSave);
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveAsset(Z_Param_AssetToSave,Z_Param_bOnlyIfIsDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execSaveLoadedAssets)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToSave);
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveLoadedAssets(Z_Param_Out_AssetsToSave,Z_Param_bOnlyIfIsDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execSaveLoadedAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_AssetToSave);
		P_GET_UBOOL(Z_Param_bOnlyIfIsDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveLoadedAsset(Z_Param_AssetToSave,Z_Param_bOnlyIfIsDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execCheckoutDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckoutDirectory(Z_Param_DirectoryPath,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execCheckoutAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetToCheckout);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckoutAsset(Z_Param_AssetToCheckout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execCheckoutLoadedAssets)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToCheckout);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckoutLoadedAssets(Z_Param_Out_AssetsToCheckout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execCheckoutLoadedAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_AssetToCheckout);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckoutLoadedAsset(Z_Param_AssetToCheckout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execRenameDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceDirectoryPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationDirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameDirectory(Z_Param_SourceDirectoryPath,Z_Param_DestinationDirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execRenameAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceAssetPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameAsset(Z_Param_SourceAssetPath,Z_Param_DestinationAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execRenameLoadedAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_SourceAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameLoadedAsset(Z_Param_SourceAsset,Z_Param_DestinationAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execDuplicateDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceDirectoryPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationDirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DuplicateDirectory(Z_Param_SourceDirectoryPath,Z_Param_DestinationDirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execDuplicateAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceAssetPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->DuplicateAsset(Z_Param_SourceAssetPath,Z_Param_DestinationAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execDuplicateLoadedAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_SourceAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->DuplicateLoadedAsset(Z_Param_SourceAsset,Z_Param_DestinationAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execDeleteDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteDirectory(Z_Param_DirectoryPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execDeleteAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPathToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteAsset(Z_Param_AssetPathToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execDeleteLoadedAssets)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteLoadedAssets(Z_Param_Out_AssetsToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execDeleteLoadedAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_AssetToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteLoadedAsset(Z_Param_AssetToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execConsolidateAssets)
	{
		P_GET_OBJECT(UObject,Z_Param_AssetToConsolidateTo);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetsToConsolidate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConsolidateAssets(Z_Param_AssetToConsolidateTo,Z_Param_Out_AssetsToConsolidate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execFindPackageReferencersForAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_GET_UBOOL(Z_Param_bLoadAssetsToConfirm);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->FindPackageReferencersForAsset(Z_Param_AssetPath,Z_Param_bLoadAssetsToConfirm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execDoAssetsExist)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoAssetsExist(Z_Param_Out_AssetPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execDoesAssetExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesAssetExist(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execFindAssetData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAssetData*)Z_Param__Result=P_THIS->FindAssetData(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execGetPathNameForLoadedAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_LoadedAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPathNameForLoadedAsset(Z_Param_LoadedAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execLoadBlueprintClass)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->LoadBlueprintClass(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorAssetSubsystem::execLoadAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->LoadAsset(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	void UEditorAssetSubsystem::StaticRegisterNativesUEditorAssetSubsystem()
	{
		UClass* Class = UEditorAssetSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOnExtractAssetFromFile", &UEditorAssetSubsystem::execAddOnExtractAssetFromFile },
			{ "CheckoutAsset", &UEditorAssetSubsystem::execCheckoutAsset },
			{ "CheckoutDirectory", &UEditorAssetSubsystem::execCheckoutDirectory },
			{ "CheckoutLoadedAsset", &UEditorAssetSubsystem::execCheckoutLoadedAsset },
			{ "CheckoutLoadedAssets", &UEditorAssetSubsystem::execCheckoutLoadedAssets },
			{ "ConsolidateAssets", &UEditorAssetSubsystem::execConsolidateAssets },
			{ "DeleteAsset", &UEditorAssetSubsystem::execDeleteAsset },
			{ "DeleteDirectory", &UEditorAssetSubsystem::execDeleteDirectory },
			{ "DeleteLoadedAsset", &UEditorAssetSubsystem::execDeleteLoadedAsset },
			{ "DeleteLoadedAssets", &UEditorAssetSubsystem::execDeleteLoadedAssets },
			{ "DoAssetsExist", &UEditorAssetSubsystem::execDoAssetsExist },
			{ "DoesAssetExist", &UEditorAssetSubsystem::execDoesAssetExist },
			{ "DoesDirectoryContainAssets", &UEditorAssetSubsystem::execDoesDirectoryContainAssets },
			{ "DoesDirectoryExist", &UEditorAssetSubsystem::execDoesDirectoryExist },
			{ "DuplicateAsset", &UEditorAssetSubsystem::execDuplicateAsset },
			{ "DuplicateDirectory", &UEditorAssetSubsystem::execDuplicateDirectory },
			{ "DuplicateLoadedAsset", &UEditorAssetSubsystem::execDuplicateLoadedAsset },
			{ "FindAssetData", &UEditorAssetSubsystem::execFindAssetData },
			{ "FindPackageReferencersForAsset", &UEditorAssetSubsystem::execFindPackageReferencersForAsset },
			{ "GetMetadataTag", &UEditorAssetSubsystem::execGetMetadataTag },
			{ "GetMetadataTagValues", &UEditorAssetSubsystem::execGetMetadataTagValues },
			{ "GetPathNameForLoadedAsset", &UEditorAssetSubsystem::execGetPathNameForLoadedAsset },
			{ "GetTagValues", &UEditorAssetSubsystem::execGetTagValues },
			{ "ListAssets", &UEditorAssetSubsystem::execListAssets },
			{ "ListAssetsByTagValue", &UEditorAssetSubsystem::execListAssetsByTagValue },
			{ "LoadAsset", &UEditorAssetSubsystem::execLoadAsset },
			{ "LoadBlueprintClass", &UEditorAssetSubsystem::execLoadBlueprintClass },
			{ "MakeDirectory", &UEditorAssetSubsystem::execMakeDirectory },
			{ "RemoveMetadataTag", &UEditorAssetSubsystem::execRemoveMetadataTag },
			{ "RemoveOnExtractAssetFromFile", &UEditorAssetSubsystem::execRemoveOnExtractAssetFromFile },
			{ "RenameAsset", &UEditorAssetSubsystem::execRenameAsset },
			{ "RenameDirectory", &UEditorAssetSubsystem::execRenameDirectory },
			{ "RenameLoadedAsset", &UEditorAssetSubsystem::execRenameLoadedAsset },
			{ "SaveAsset", &UEditorAssetSubsystem::execSaveAsset },
			{ "SaveDirectory", &UEditorAssetSubsystem::execSaveDirectory },
			{ "SaveLoadedAsset", &UEditorAssetSubsystem::execSaveLoadedAsset },
			{ "SaveLoadedAssets", &UEditorAssetSubsystem::execSaveLoadedAssets },
			{ "SetMetadataTag", &UEditorAssetSubsystem::execSetMetadataTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile_Statics
	{
		struct EditorAssetSubsystem_eventAddOnExtractAssetFromFile_Parms
		{
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventAddOnExtractAssetFromFile_Parms, Delegate), Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3519610957
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Call this to add a callback to extract an asset from a file,\n\x09 * for example from a drag and drop operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Call this to add a callback to extract an asset from a file,\nfor example from a drag and drop operation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "AddOnExtractAssetFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile_Statics::EditorAssetSubsystem_eventAddOnExtractAssetFromFile_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics
	{
		struct EditorAssetSubsystem_eventCheckoutAsset_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::NewProp_AssetToCheckout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::NewProp_AssetToCheckout = { "AssetToCheckout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventCheckoutAsset_Parms, AssetToCheckout), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::NewProp_AssetToCheckout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::NewProp_AssetToCheckout_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventCheckoutAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventCheckoutAsset_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::NewProp_AssetToCheckout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset | Revision Control" },
		{ "Comment", "/**\n\x09 * Checkout an asset.\n\x09 * @param\x09""AssetToCheckout\x09\x09""Asset Path of the asset that we want to checkout.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Checkout an asset.\n@param       AssetToCheckout         Asset Path of the asset that we want to checkout.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "CheckoutAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::EditorAssetSubsystem_eventCheckoutAsset_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics
	{
		struct EditorAssetSubsystem_eventCheckoutDirectory_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventCheckoutDirectory_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventCheckoutDirectory_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventCheckoutDirectory_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventCheckoutDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventCheckoutDirectory_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset | Revision Control" },
		{ "Comment", "/**\n\x09 * Checkout all assets in a directory. It will load the assets if needed.\n\x09 * All objects that are in the directory will be checked out. Assets will be loaded before being checked out.\n\x09 * @param\x09""DirectoryPath\x09\x09""Directory of the assets to be checked out.\n\x09 * @param\x09""bRecursive\x09\x09\x09If the AssetPath is a folder, the search will be recursive and will checkout the assets in the sub folders.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "CPP_Default_bRecursive", "true" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Checkout all assets in a directory. It will load the assets if needed.\nAll objects that are in the directory will be checked out. Assets will be loaded before being checked out.\n@param       DirectoryPath           Directory of the assets to be checked out.\n@param       bRecursive                      If the AssetPath is a folder, the search will be recursive and will checkout the assets in the sub folders.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "CheckoutDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::EditorAssetSubsystem_eventCheckoutDirectory_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics
	{
		struct EditorAssetSubsystem_eventCheckoutLoadedAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::NewProp_AssetToCheckout = { "AssetToCheckout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventCheckoutLoadedAsset_Parms, AssetToCheckout), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventCheckoutLoadedAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventCheckoutLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::NewProp_AssetToCheckout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset | Revision Control" },
		{ "Comment", "/**\n\x09 * Checkout the asset corresponding to an object.\n\x09 * @param\x09""AssetToCheckout\x09\x09""Asset to checkout.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Checkout the asset corresponding to an object.\n@param       AssetToCheckout         Asset to checkout.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "CheckoutLoadedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::EditorAssetSubsystem_eventCheckoutLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics
	{
		struct EditorAssetSubsystem_eventCheckoutLoadedAssets_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_Inner = { "AssetsToCheckout", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout = { "AssetsToCheckout", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventCheckoutLoadedAssets_Parms, AssetsToCheckout), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventCheckoutLoadedAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventCheckoutLoadedAssets_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::NewProp_AssetsToCheckout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset | Revision Control" },
		{ "Comment", "/**\n\x09 * Checkout the assets.\n\x09 * @param\x09""AssetsToCheckout\x09\x09""Assets to checkout.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Checkout the assets.\n@param       AssetsToCheckout                Assets to checkout.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "CheckoutLoadedAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::EditorAssetSubsystem_eventCheckoutLoadedAssets_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics
	{
		struct EditorAssetSubsystem_eventConsolidateAssets_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::NewProp_AssetToConsolidateTo = { "AssetToConsolidateTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventConsolidateAssets_Parms, AssetToConsolidateTo), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_Inner = { "AssetsToConsolidate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate = { "AssetsToConsolidate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventConsolidateAssets_Parms, AssetsToConsolidate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventConsolidateAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventConsolidateAssets_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::NewProp_AssetToConsolidateTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::NewProp_AssetsToConsolidate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Consolidates assets by replacing all references/uses of the provided AssetsToConsolidate with references to AssetToConsolidateTo.\n\x09 * This is useful when you want all references of assets to be replaced by a single asset.\n\x09 * The function first attempts to directly replace all relevant references located within objects that are already loaded and in memory.\n\x09 * Next, it deletes the AssetsToConsolidate, leaving behind object redirectors to AssetToConsolidateTo.\n\x09 * @param\x09""AssetToConsolidateTo\x09""Asset to which all references of the AssetsToConsolidate will instead refer to after this operation completes.\n\x09 * @param\x09""AssetsToConsolidate\x09\x09""All references to these assets will be modified to reference AssetToConsolidateTo instead.\n\x09 * @note\x09The AssetsToConsolidate are DELETED by this function.\n\x09 * @note\x09Modified objects will be saved if the operation succeeds.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Consolidates assets by replacing all references/uses of the provided AssetsToConsolidate with references to AssetToConsolidateTo.\nThis is useful when you want all references of assets to be replaced by a single asset.\nThe function first attempts to directly replace all relevant references located within objects that are already loaded and in memory.\nNext, it deletes the AssetsToConsolidate, leaving behind object redirectors to AssetToConsolidateTo.\n@param       AssetToConsolidateTo    Asset to which all references of the AssetsToConsolidate will instead refer to after this operation completes.\n@param       AssetsToConsolidate             All references to these assets will be modified to reference AssetToConsolidateTo instead.\n@note        The AssetsToConsolidate are DELETED by this function.\n@note        Modified objects will be saved if the operation succeeds.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "ConsolidateAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::EditorAssetSubsystem_eventConsolidateAssets_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics
	{
		struct EditorAssetSubsystem_eventDeleteAsset_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::NewProp_AssetPathToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::NewProp_AssetPathToDelete = { "AssetPathToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDeleteAsset_Parms, AssetPathToDelete), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::NewProp_AssetPathToDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::NewProp_AssetPathToDelete_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventDeleteAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventDeleteAsset_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::NewProp_AssetPathToDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Delete the package an asset is in. All objects in the package will be deleted.\n\x09 * This is a Force Delete. It does not check if the asset has references in other Levels or by Actors.\n\x09 * It will close all the asset editors and may clear the Transaction buffer (Undo History).\n\x09 * Will try to mark the file as deleted. The Asset will be loaded before being deleted.\n\x09 * @param\x09""AssetPathToDelete\x09\x09""Asset Path of the asset to delete.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Delete the package an asset is in. All objects in the package will be deleted.\nThis is a Force Delete. It does not check if the asset has references in other Levels or by Actors.\nIt will close all the asset editors and may clear the Transaction buffer (Undo History).\nWill try to mark the file as deleted. The Asset will be loaded before being deleted.\n@param       AssetPathToDelete               Asset Path of the asset to delete.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "DeleteAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::EditorAssetSubsystem_eventDeleteAsset_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics
	{
		struct EditorAssetSubsystem_eventDeleteDirectory_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDeleteDirectory_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventDeleteDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventDeleteDirectory_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Delete the packages inside a directory. If the directory is then empty, delete the directory.\n\x09 * This is a Force Delete. It does not check if the assets have references in other Levels or by Actors.\n\x09 * It will close all the asset editors and may clear the Transaction buffer (Undo History).\n\x09 * Will try to mark the file as deleted. Assets will be loaded before being deleted.\n\x09 * The search is always recursive. It will try to delete the sub folders.\n\x09 * @param\x09""DirectoryPath\x09\x09""Directory that will be marked for deletion and deleted.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Delete the packages inside a directory. If the directory is then empty, delete the directory.\nThis is a Force Delete. It does not check if the assets have references in other Levels or by Actors.\nIt will close all the asset editors and may clear the Transaction buffer (Undo History).\nWill try to mark the file as deleted. Assets will be loaded before being deleted.\nThe search is always recursive. It will try to delete the sub folders.\n@param       DirectoryPath           Directory that will be marked for deletion and deleted.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "DeleteDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::EditorAssetSubsystem_eventDeleteDirectory_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics
	{
		struct EditorAssetSubsystem_eventDeleteLoadedAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::NewProp_AssetToDelete = { "AssetToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDeleteLoadedAsset_Parms, AssetToDelete), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventDeleteLoadedAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventDeleteLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::NewProp_AssetToDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Delete an asset that is already loaded.\n\x09 * This is a Force Delete. It does not check if the asset has references in other Levels or by Actors.\n\x09 * It will close all the asset editors and may clear the Transaction buffer (Undo History).\n\x09 * Will try to mark the file as deleted.\n\x09 * @param\x09""AssetToDelete\x09\x09\x09""Asset to delete.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Delete an asset that is already loaded.\nThis is a Force Delete. It does not check if the asset has references in other Levels or by Actors.\nIt will close all the asset editors and may clear the Transaction buffer (Undo History).\nWill try to mark the file as deleted.\n@param       AssetToDelete                   Asset to delete.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "DeleteLoadedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::EditorAssetSubsystem_eventDeleteLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics
	{
		struct EditorAssetSubsystem_eventDeleteLoadedAssets_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_Inner = { "AssetsToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete = { "AssetsToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDeleteLoadedAssets_Parms, AssetsToDelete), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventDeleteLoadedAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventDeleteLoadedAssets_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::NewProp_AssetsToDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Delete assets that are already loaded.\n\x09 * This is a Force Delete. It does not check if the assets have references in other Levels or by Actors.\n\x09 * It will close all the asset editors and may clear the Transaction buffer (Undo History).\n\x09 * Will try to mark the files as deleted.\n\x09 * @param\x09""AssetsToDelete\x09\x09\x09Loaded assets to delete.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Delete assets that are already loaded.\nThis is a Force Delete. It does not check if the assets have references in other Levels or by Actors.\nIt will close all the asset editors and may clear the Transaction buffer (Undo History).\nWill try to mark the files as deleted.\n@param       AssetsToDelete                  Loaded assets to delete.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "DeleteLoadedAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::EditorAssetSubsystem_eventDeleteLoadedAssets_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics
	{
		struct EditorAssetSubsystem_eventDoAssetsExist_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::NewProp_AssetPaths_Inner = { "AssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::NewProp_AssetPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::NewProp_AssetPaths = { "AssetPaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDoAssetsExist_Parms, AssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::NewProp_AssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::NewProp_AssetPaths_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventDoAssetsExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventDoAssetsExist_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::NewProp_AssetPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::NewProp_AssetPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Check if assets exist in the Asset Registry.\n\x09 * @param\x09""AssetPaths\x09\x09""Asset Paths of the assets to check for existence.\n\x09 * @return\x09True if all assets exist and are valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Check if assets exist in the Asset Registry.\n@param       AssetPaths              Asset Paths of the assets to check for existence.\n@return      True if all assets exist and are valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "DoAssetsExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::EditorAssetSubsystem_eventDoAssetsExist_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics
	{
		struct EditorAssetSubsystem_eventDoesAssetExist_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDoesAssetExist_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::NewProp_AssetPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventDoesAssetExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventDoesAssetExist_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Check if an asset exists in the Asset Registry.\n\x09 * @param\x09""AssetPath\x09\x09""Asset Path to check for existence.\n\x09 * @return\x09True if the asset exists and is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Check if an asset exists in the Asset Registry.\n@param       AssetPath               Asset Path to check for existence.\n@return      True if the asset exists and is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "DoesAssetExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::EditorAssetSubsystem_eventDoesAssetExist_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics
	{
		struct EditorAssetSubsystem_eventDoesDirectoryContainAssets_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDoesDirectoryContainAssets_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventDoesDirectoryContainAssets_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventDoesDirectoryContainAssets_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventDoesDirectoryContainAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventDoesDirectoryContainAssets_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Check if a directory contains any assets.\n\x09 * @param\x09""DirectoryPath\x09\x09Long Path Name of the directory.\n\x09 * @return\x09True if there is any assets.\n\x09 */" },
		{ "CPP_Default_bRecursive", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Check if a directory contains any assets.\n@param       DirectoryPath           Long Path Name of the directory.\n@return      True if there is any assets." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "DoesDirectoryContainAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::EditorAssetSubsystem_eventDoesDirectoryContainAssets_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics
	{
		struct EditorAssetSubsystem_eventDoesDirectoryExist_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDoesDirectoryExist_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventDoesDirectoryExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventDoesDirectoryExist_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09* Check if a directory exists.\n\x09* @param\x09""DirectoryPath\x09\x09Long Path Name of the directory.\n\x09* @return\x09True if it does exist and it is valid.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Check if a directory exists.\n@param        DirectoryPath           Long Path Name of the directory.\n@return       True if it does exist and it is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "DoesDirectoryExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::EditorAssetSubsystem_eventDoesDirectoryExist_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics
	{
		struct EditorAssetSubsystem_eventDuplicateAsset_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::NewProp_SourceAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::NewProp_SourceAssetPath = { "SourceAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDuplicateAsset_Parms, SourceAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::NewProp_SourceAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::NewProp_SourceAssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::NewProp_DestinationAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::NewProp_DestinationAssetPath = { "DestinationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDuplicateAsset_Parms, DestinationAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::NewProp_DestinationAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::NewProp_DestinationAssetPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDuplicateAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::NewProp_SourceAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::NewProp_DestinationAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Duplicate an asset. Will try to checkout the file. The Asset will be loaded before being duplicated.\n\x09 * @param\x09SourceAssetPath\x09\x09\x09""Asset Path of the asset that we want to copy from.\n\x09 * @param\x09""DestinationAssetPath\x09""Asset Path of the duplicated asset.\n\x09 * @return\x09The duplicated object if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Duplicate an asset. Will try to checkout the file. The Asset will be loaded before being duplicated.\n@param       SourceAssetPath                 Asset Path of the asset that we want to copy from.\n@param       DestinationAssetPath    Asset Path of the duplicated asset.\n@return      The duplicated object if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "DuplicateAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::EditorAssetSubsystem_eventDuplicateAsset_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics
	{
		struct EditorAssetSubsystem_eventDuplicateDirectory_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath = { "SourceDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDuplicateDirectory_Parms, SourceDirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath = { "DestinationDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDuplicateDirectory_Parms, DestinationDirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventDuplicateDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventDuplicateDirectory_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_SourceDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_DestinationDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Duplicate a directory and the assets in it.\n\x09 * Will try to checkout the files. The Assets will be loaded before being duplicated.\n\x09 * @param\x09SourceDirectoryPath\x09\x09\x09""Directory of the assets that we want to duplicate from.\n\x09 * @param\x09""DestinationDirectoryPath\x09""Directory of the duplicated asset.\n\x09 * @return\x09The duplicated object if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Duplicate a directory and the assets in it.\nWill try to checkout the files. The Assets will be loaded before being duplicated.\n@param       SourceDirectoryPath                     Directory of the assets that we want to duplicate from.\n@param       DestinationDirectoryPath        Directory of the duplicated asset.\n@return      The duplicated object if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "DuplicateDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::EditorAssetSubsystem_eventDuplicateDirectory_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics
	{
		struct EditorAssetSubsystem_eventDuplicateLoadedAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDuplicateLoadedAsset_Parms, SourceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath = { "DestinationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDuplicateLoadedAsset_Parms, DestinationAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventDuplicateLoadedAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::NewProp_SourceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::NewProp_DestinationAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Duplicate an asset that is already loaded. Will try to checkout the file.\n\x09 * @param\x09SourceAsset\x09\x09\x09\x09""Asset that we want to copy from.\n\x09 * @param\x09""DestinationAssetPath\x09""Asset Path of the duplicated asset.\n\x09 * @return\x09The duplicated object if the operation succeeds\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Duplicate an asset that is already loaded. Will try to checkout the file.\n@param       SourceAsset                             Asset that we want to copy from.\n@param       DestinationAssetPath    Asset Path of the duplicated asset.\n@return      The duplicated object if the operation succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "DuplicateLoadedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::EditorAssetSubsystem_eventDuplicateLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct EditorAssetSubsystem_eventFindAssetData_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventFindAssetData_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::NewProp_AssetPath_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventFindAssetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Return the AssetData for the Asset that can then be used with AssetRegistryHelpers.\n\x09 * @param\x09""AssetPath\x09""Asset Path to retrieve data from.\n\x09 * @return\x09The AssetData found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Return the AssetData for the Asset that can then be used with AssetRegistryHelpers.\n@param       AssetPath       Asset Path to retrieve data from.\n@return      The AssetData found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "FindAssetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::EditorAssetSubsystem_eventFindAssetData_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics
	{
		struct EditorAssetSubsystem_eventFindPackageReferencersForAsset_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventFindPackageReferencersForAsset_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::NewProp_AssetPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::NewProp_bLoadAssetsToConfirm_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventFindPackageReferencersForAsset_Parms*)Obj)->bLoadAssetsToConfirm = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::NewProp_bLoadAssetsToConfirm = { "bLoadAssetsToConfirm", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventFindPackageReferencersForAsset_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::NewProp_bLoadAssetsToConfirm_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventFindPackageReferencersForAsset_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::NewProp_bLoadAssetsToConfirm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Find Package Referencers for an asset. Only Soft and Hard dependencies will be looked for.\n\x09 * Soft are dependencies which don't need to be loaded for the object to be used.\n\x09 * Hard are dependencies which are required for correct usage of the source asset and must be loaded at the same time.\n\x09 * Other references may exist. The asset may be currently used in memory by another asset, by the editor or by code.\n\x09 * Package dependencies are cached with the asset. False positives can happen until all the assets are loaded and re-saved.\n\x09 * @param\x09""AssetPath\x09\x09\x09\x09""Asset Path of the asset that we are looking for.\n\x09 * @param\x09""bLoadAssetsToConfirm\x09Whether the asset and any potential referencers will be loaded to confirm the dependencies.\n\x09 * @return\x09The package paths of the referencers.\n\x09 */" },
		{ "CPP_Default_bLoadAssetsToConfirm", "false" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Find Package Referencers for an asset. Only Soft and Hard dependencies will be looked for.\nSoft are dependencies which don't need to be loaded for the object to be used.\nHard are dependencies which are required for correct usage of the source asset and must be loaded at the same time.\nOther references may exist. The asset may be currently used in memory by another asset, by the editor or by code.\nPackage dependencies are cached with the asset. False positives can happen until all the assets are loaded and re-saved.\n@param       AssetPath                               Asset Path of the asset that we are looking for.\n@param       bLoadAssetsToConfirm    Whether the asset and any potential referencers will be loaded to confirm the dependencies.\n@return      The package paths of the referencers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "FindPackageReferencersForAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::EditorAssetSubsystem_eventFindPackageReferencersForAsset_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics
	{
		struct EditorAssetSubsystem_eventGetMetadataTag_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventGetMetadataTag_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventGetMetadataTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventGetMetadataTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset | Metadata" },
		{ "Comment", "/**\n     * Get the value associated with the given tag of a loaded asset's metadata.\n     * @param\x09Object\x09\x09The object from which to retrieve the metadata.\n     * @param\x09Tag\x09\x09\x09The tag to find in the metadata.\n     * @return\x09The string value associated with the tag.\n     */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Get the value associated with the given tag of a loaded asset's metadata.\n@param  Object          The object from which to retrieve the metadata.\n@param  Tag                     The tag to find in the metadata.\n@return The string value associated with the tag." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "GetMetadataTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::EditorAssetSubsystem_eventGetMetadataTag_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics
	{
		struct EditorAssetSubsystem_eventGetMetadataTagValues_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventGetMetadataTagValues_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventGetMetadataTagValues_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset | Metadata" },
		{ "Comment", "/**\n     * Get all tags/values of a loaded asset's metadata.\n     * @param\x09Object\x09\x09The object from which to retrieve the metadata.\n     * @return\x09The list of all Tags and Values.\n     */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Get all tags/values of a loaded asset's metadata.\n@param  Object          The object from which to retrieve the metadata.\n@return The list of all Tags and Values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "GetMetadataTagValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::EditorAssetSubsystem_eventGetMetadataTagValues_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics
	{
		struct EditorAssetSubsystem_eventGetPathNameForLoadedAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics::NewProp_LoadedAsset = { "LoadedAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventGetPathNameForLoadedAsset_Parms, LoadedAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventGetPathNameForLoadedAsset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics::NewProp_LoadedAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Return a valid AssetPath for a loaded asset.\n\x09 * Similar to GetPathName(). The format will be: /Game/MyFolder/MyAsset.MyAsset\n\x09 * @param\x09LoadedAsset\x09\x09The loaded asset to get the path of.\n\x09 * @return\x09If valid, the asset Path of the loaded asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Return a valid AssetPath for a loaded asset.\nSimilar to GetPathName(). The format will be: /Game/MyFolder/MyAsset.MyAsset\n@param       LoadedAsset             The loaded asset to get the path of.\n@return      If valid, the asset Path of the loaded asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "GetPathNameForLoadedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics::EditorAssetSubsystem_eventGetPathNameForLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics
	{
		struct EditorAssetSubsystem_eventGetTagValues_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventGetTagValues_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::NewProp_AssetPath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventGetTagValues_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Gets all TagValues (from Asset Registry) associated with an (unloaded) asset as strings value.\n\x09 * @param\x09""AssetPath\x09\x09""Asset Path we are trying to find.\n\x09 * @return\x09The list of all TagNames & TagValues.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Gets all TagValues (from Asset Registry) associated with an (unloaded) asset as strings value.\n@param       AssetPath               Asset Path we are trying to find.\n@return      The list of all TagNames & TagValues." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "GetTagValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::EditorAssetSubsystem_eventGetTagValues_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics
	{
		struct EditorAssetSubsystem_eventListAssets_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventListAssets_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventListAssets_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventListAssets_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_bIncludeFolder_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventListAssets_Parms*)Obj)->bIncludeFolder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_bIncludeFolder = { "bIncludeFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventListAssets_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_bIncludeFolder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventListAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_bIncludeFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Return the list of all the assets found in the DirectoryPath.\n\x09 * @param\x09""DirectoryPath\x09\x09""Directory path of the asset we want the list from.\n\x09 * @param\x09""bRecursive\x09\x09\x09The search will be recursive and will look in sub folders.\n\x09 * @param\x09""bIncludeFolder\x09\x09The result will include folders name.\n\x09 * @return\x09The list of assets found.\n\x09 */" },
		{ "CPP_Default_bIncludeFolder", "false" },
		{ "CPP_Default_bRecursive", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Return the list of all the assets found in the DirectoryPath.\n@param       DirectoryPath           Directory path of the asset we want the list from.\n@param       bRecursive                      The search will be recursive and will look in sub folders.\n@param       bIncludeFolder          The result will include folders name.\n@return      The list of assets found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "ListAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::EditorAssetSubsystem_eventListAssets_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics
	{
		struct EditorAssetSubsystem_eventListAssetsByTagValue_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventListAssetsByTagValue_Parms, TagName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::NewProp_TagValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::NewProp_TagValue = { "TagValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventListAssetsByTagValue_Parms, TagValue), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::NewProp_TagValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::NewProp_TagValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventListAssetsByTagValue_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::NewProp_TagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::NewProp_TagValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Return the list of all the assets that have the pair of Tag/Value.\n\x09 * @param TagName\x09The tag associated with the assets requested.\n\x09 * @param TagValue\x09The value associated with the assets requested.\n\x09 * @return\x09The list of assets found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Return the list of all the assets that have the pair of Tag/Value.\n@param TagName       The tag associated with the assets requested.\n@param TagValue      The value associated with the assets requested.\n@return      The list of assets found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "ListAssetsByTagValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::EditorAssetSubsystem_eventListAssetsByTagValue_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics
	{
		struct EditorAssetSubsystem_eventLoadAsset_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventLoadAsset_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::NewProp_AssetPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventLoadAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Load an asset. It will verify if the object is already loaded and only load it if it's necessary.\n\x09 * @param\x09""AssetPath\x09\x09""Asset Path of the asset to load\n\x09 * @return\x09""Found or loaded asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Load an asset. It will verify if the object is already loaded and only load it if it's necessary.\n@param       AssetPath               Asset Path of the asset to load\n@return      Found or loaded asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "LoadAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::EditorAssetSubsystem_eventLoadAsset_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics
	{
		struct EditorAssetSubsystem_eventLoadBlueprintClass_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventLoadBlueprintClass_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::NewProp_AssetPath_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventLoadBlueprintClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Load a Blueprint asset and return its generated class. It will verify if the object is already loaded and only load it if it's necessary.\n\x09 * @param\x09""AssetPath\x09\x09""Asset Path of the Blueprint asset.\n\x09 * @return\x09""Found or loaded class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Load a Blueprint asset and return its generated class. It will verify if the object is already loaded and only load it if it's necessary.\n@param       AssetPath               Asset Path of the Blueprint asset.\n@return      Found or loaded class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "LoadBlueprintClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::EditorAssetSubsystem_eventLoadBlueprintClass_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics
	{
		struct EditorAssetSubsystem_eventMakeDirectory_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventMakeDirectory_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventMakeDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventMakeDirectory_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Create a directory on disk.\n\x09 * @param\x09""DirectoryPath\x09\x09Long Path Name of the directory.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Create a directory on disk.\n@param       DirectoryPath           Long Path Name of the directory.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "MakeDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::EditorAssetSubsystem_eventMakeDirectory_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics
	{
		struct EditorAssetSubsystem_eventRemoveMetadataTag_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventRemoveMetadataTag_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventRemoveMetadataTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset | Metadata" },
		{ "Comment", "/**\n     * Remove the given tag from a loaded asset's metadata.\n     * @param\x09Object\x09\x09The object from which to retrieve the metadata.\n     * @param\x09Tag\x09\x09\x09The tag to remove from the metadata.\n     */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Remove the given tag from a loaded asset's metadata.\n@param  Object          The object from which to retrieve the metadata.\n@param  Tag                     The tag to remove from the metadata." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "RemoveMetadataTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics::EditorAssetSubsystem_eventRemoveMetadataTag_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile_Statics
	{
		struct EditorAssetSubsystem_eventRemoveOnExtractAssetFromFile_Parms
		{
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventRemoveOnExtractAssetFromFile_Parms, Delegate), Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3519610957
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Call this to remove a callback added with AddOnExtractAssetFromFile.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Call this to remove a callback added with AddOnExtractAssetFromFile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "RemoveOnExtractAssetFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile_Statics::EditorAssetSubsystem_eventRemoveOnExtractAssetFromFile_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics
	{
		struct EditorAssetSubsystem_eventRenameAsset_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_SourceAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_SourceAssetPath = { "SourceAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventRenameAsset_Parms, SourceAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_SourceAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_SourceAssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_DestinationAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_DestinationAssetPath = { "DestinationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventRenameAsset_Parms, DestinationAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_DestinationAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_DestinationAssetPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventRenameAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventRenameAsset_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_SourceAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_DestinationAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Rename an asset. Equivalent to a Move operation.\n\x09 * Will try to checkout the file. The Asset will be loaded before being renamed.\n\x09 * @param\x09SourceAssetPath\x09\x09\x09""Asset Path of the asset that we want to copy from.\n\x09 * @param\x09""DestinationAssetPath\x09""Asset Path of the renamed asset.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Rename an asset. Equivalent to a Move operation.\nWill try to checkout the file. The Asset will be loaded before being renamed.\n@param       SourceAssetPath                 Asset Path of the asset that we want to copy from.\n@param       DestinationAssetPath    Asset Path of the renamed asset.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "RenameAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::EditorAssetSubsystem_eventRenameAsset_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics
	{
		struct EditorAssetSubsystem_eventRenameDirectory_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_SourceDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_SourceDirectoryPath = { "SourceDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventRenameDirectory_Parms, SourceDirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_SourceDirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_SourceDirectoryPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_DestinationDirectoryPath = { "DestinationDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventRenameDirectory_Parms, DestinationDirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_DestinationDirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventRenameDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventRenameDirectory_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_SourceDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_DestinationDirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Rename a directory. Equivalent to a Move operation moving all contained assets.\n\x09 * Will try to checkout the files. The Assets will be loaded before being renamed.\n\x09 * @param\x09SourceDirectoryPath\x09\x09\x09""Directory of the assets that we want to rename from.\n\x09 * @param\x09""DestinationDirectoryPath\x09""Directory of the renamed asset.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Rename a directory. Equivalent to a Move operation moving all contained assets.\nWill try to checkout the files. The Assets will be loaded before being renamed.\n@param       SourceDirectoryPath                     Directory of the assets that we want to rename from.\n@param       DestinationDirectoryPath        Directory of the renamed asset.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "RenameDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::EditorAssetSubsystem_eventRenameDirectory_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics
	{
		struct EditorAssetSubsystem_eventRenameLoadedAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventRenameLoadedAsset_Parms, SourceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath = { "DestinationAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventRenameLoadedAsset_Parms, DestinationAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventRenameLoadedAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventRenameLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::NewProp_SourceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::NewProp_DestinationAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Rename an asset that is already loaded. Equivalent to a Move operation.\n\x09 * Will try to checkout the file.\n\x09 * @param\x09SourceAsset\x09\x09\x09\x09""Asset that we want to copy from.\n\x09 * @param\x09""DestinationAssetPath\x09""Asset Path of the duplicated asset.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Rename an asset that is already loaded. Equivalent to a Move operation.\nWill try to checkout the file.\n@param       SourceAsset                             Asset that we want to copy from.\n@param       DestinationAssetPath    Asset Path of the duplicated asset.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "RenameLoadedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::EditorAssetSubsystem_eventRenameLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics
	{
		struct EditorAssetSubsystem_eventSaveAsset_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::NewProp_AssetToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::NewProp_AssetToSave = { "AssetToSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventSaveAsset_Parms, AssetToSave), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::NewProp_AssetToSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::NewProp_AssetToSave_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::NewProp_bOnlyIfIsDirty_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventSaveAsset_Parms*)Obj)->bOnlyIfIsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::NewProp_bOnlyIfIsDirty = { "bOnlyIfIsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventSaveAsset_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::NewProp_bOnlyIfIsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventSaveAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventSaveAsset_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::NewProp_AssetToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::NewProp_bOnlyIfIsDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Save the packages the assets live in. All objects that live in the package will be saved.\n\x09 * Will try to checkout the file first. The Asset will be loaded before being saved.\n\x09 * @param\x09""AssetToSave\x09\x09""Asset Path of the asset that we want to save.\n\x09 * @param\x09""bOnlyIfIsDirty\x09\x09Only checkout/save the asset if it's dirty.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "CPP_Default_bOnlyIfIsDirty", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Save the packages the assets live in. All objects that live in the package will be saved.\nWill try to checkout the file first. The Asset will be loaded before being saved.\n@param       AssetToSave             Asset Path of the asset that we want to save.\n@param       bOnlyIfIsDirty          Only checkout/save the asset if it's dirty.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "SaveAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::EditorAssetSubsystem_eventSaveAsset_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics
	{
		struct EditorAssetSubsystem_eventSaveDirectory_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventSaveDirectory_Parms, DirectoryPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_DirectoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_DirectoryPath_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_bOnlyIfIsDirty_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventSaveDirectory_Parms*)Obj)->bOnlyIfIsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_bOnlyIfIsDirty = { "bOnlyIfIsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventSaveDirectory_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_bOnlyIfIsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventSaveDirectory_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventSaveDirectory_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventSaveDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventSaveDirectory_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_DirectoryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_bOnlyIfIsDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Save the packages the assets live in inside the directory. All objects that are in the directory will be saved.\n\x09 * Will try to checkout the file first. Assets will be loaded before being saved.\n\x09 * @param\x09""DirectoryPath\x09\x09""Directory that will be checked out and saved.\n\x09 * @param\x09""bOnlyIfIsDirty\x09\x09Only checkout asset that are dirty.\n\x09 * @param\x09""bRecursive\x09\x09\x09The search will be recursive and it will save the asset in the sub folders.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "CPP_Default_bOnlyIfIsDirty", "true" },
		{ "CPP_Default_bRecursive", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Save the packages the assets live in inside the directory. All objects that are in the directory will be saved.\nWill try to checkout the file first. Assets will be loaded before being saved.\n@param       DirectoryPath           Directory that will be checked out and saved.\n@param       bOnlyIfIsDirty          Only checkout asset that are dirty.\n@param       bRecursive                      The search will be recursive and it will save the asset in the sub folders.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "SaveDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::EditorAssetSubsystem_eventSaveDirectory_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics
	{
		struct EditorAssetSubsystem_eventSaveLoadedAsset_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::NewProp_AssetToSave = { "AssetToSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventSaveLoadedAsset_Parms, AssetToSave), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::NewProp_bOnlyIfIsDirty_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventSaveLoadedAsset_Parms*)Obj)->bOnlyIfIsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::NewProp_bOnlyIfIsDirty = { "bOnlyIfIsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventSaveLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::NewProp_bOnlyIfIsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventSaveLoadedAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventSaveLoadedAsset_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::NewProp_AssetToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::NewProp_bOnlyIfIsDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Save the package the asset lives in. All objects that live in the package will be saved. Will try to checkout the file.\n\x09 * @param\x09""AssetToSave\x09\x09\x09""Asset that we want to save.\n\x09 * @param\x09""bOnlyIfIsDirty\x09\x09Only checkout asset that are dirty.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "CPP_Default_bOnlyIfIsDirty", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Save the package the asset lives in. All objects that live in the package will be saved. Will try to checkout the file.\n@param       AssetToSave                     Asset that we want to save.\n@param       bOnlyIfIsDirty          Only checkout asset that are dirty.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "SaveLoadedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::EditorAssetSubsystem_eventSaveLoadedAsset_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics
	{
		struct EditorAssetSubsystem_eventSaveLoadedAssets_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_AssetsToSave_Inner = { "AssetsToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_AssetsToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_AssetsToSave = { "AssetsToSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventSaveLoadedAssets_Parms, AssetsToSave), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_AssetsToSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_AssetsToSave_MetaData)) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_bOnlyIfIsDirty_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventSaveLoadedAssets_Parms*)Obj)->bOnlyIfIsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_bOnlyIfIsDirty = { "bOnlyIfIsDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventSaveLoadedAssets_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_bOnlyIfIsDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorAssetSubsystem_eventSaveLoadedAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorAssetSubsystem_eventSaveLoadedAssets_Parms), &Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_AssetsToSave_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_AssetsToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_bOnlyIfIsDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset" },
		{ "Comment", "/**\n\x09 * Save the packages the assets live in. All objects that live in the packages will be saved. Will try to checkout the files.\n\x09 * @param\x09""AssetsToSave\x09\x09""Assets that we want to save.\n\x09 * @param\x09""bOnlyIfIsDirty\x09\x09Only checkout asset that are dirty.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "CPP_Default_bOnlyIfIsDirty", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Save the packages the assets live in. All objects that live in the packages will be saved. Will try to checkout the files.\n@param       AssetsToSave            Assets that we want to save.\n@param       bOnlyIfIsDirty          Only checkout asset that are dirty.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "SaveLoadedAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::EditorAssetSubsystem_eventSaveLoadedAssets_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics
	{
		struct EditorAssetSubsystem_eventSetMetadataTag_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventSetMetadataTag_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventSetMetadataTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorAssetSubsystem_eventSetMetadataTag_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset | Metadata" },
		{ "Comment", "/**\n     * Set the value associated with a given tag of a loaded asset's metadata.\n     * @param\x09Object\x09\x09The object from which to retrieve the metadata.\n     * @param\x09Tag\x09\x09\x09The tag to set in the metadata.\n     * @param\x09Value\x09\x09The string value to associate with the tag.\n     */" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "Set the value associated with a given tag of a loaded asset's metadata.\n@param  Object          The object from which to retrieve the metadata.\n@param  Tag                     The tag to set in the metadata.\n@param  Value           The string value to associate with the tag." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorAssetSubsystem, nullptr, "SetMetadataTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::EditorAssetSubsystem_eventSetMetadataTag_Parms), Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorAssetSubsystem);
	UClass* Z_Construct_UClass_UEditorAssetSubsystem_NoRegister()
	{
		return UEditorAssetSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEditorAssetSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorAssetSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorAssetSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_AddOnExtractAssetFromFile, "AddOnExtractAssetFromFile" }, // 454683643
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutAsset, "CheckoutAsset" }, // 2872484359
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutDirectory, "CheckoutDirectory" }, // 149518777
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAsset, "CheckoutLoadedAsset" }, // 3648362288
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_CheckoutLoadedAssets, "CheckoutLoadedAssets" }, // 1510626169
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_ConsolidateAssets, "ConsolidateAssets" }, // 517921927
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_DeleteAsset, "DeleteAsset" }, // 3477496649
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_DeleteDirectory, "DeleteDirectory" }, // 1829639383
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAsset, "DeleteLoadedAsset" }, // 2839865779
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_DeleteLoadedAssets, "DeleteLoadedAssets" }, // 4047915891
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_DoAssetsExist, "DoAssetsExist" }, // 1605418700
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_DoesAssetExist, "DoesAssetExist" }, // 2520326156
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryContainAssets, "DoesDirectoryContainAssets" }, // 741455931
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_DoesDirectoryExist, "DoesDirectoryExist" }, // 1922194103
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateAsset, "DuplicateAsset" }, // 2632509952
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateDirectory, "DuplicateDirectory" }, // 811360089
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_DuplicateLoadedAsset, "DuplicateLoadedAsset" }, // 2212040147
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_FindAssetData, "FindAssetData" }, // 2113026780
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_FindPackageReferencersForAsset, "FindPackageReferencersForAsset" }, // 42541309
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTag, "GetMetadataTag" }, // 443153675
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_GetMetadataTagValues, "GetMetadataTagValues" }, // 860950387
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_GetPathNameForLoadedAsset, "GetPathNameForLoadedAsset" }, // 2155684810
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_GetTagValues, "GetTagValues" }, // 2154271278
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_ListAssets, "ListAssets" }, // 2511162736
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_ListAssetsByTagValue, "ListAssetsByTagValue" }, // 847688578
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_LoadAsset, "LoadAsset" }, // 2036977297
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_LoadBlueprintClass, "LoadBlueprintClass" }, // 1358736690
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_MakeDirectory, "MakeDirectory" }, // 3235783152
		{ &Z_Construct_UDelegateFunction_UEditorAssetSubsystem_OnExtractAssetFromFileDynamic__DelegateSignature, "OnExtractAssetFromFileDynamic__DelegateSignature" }, // 3519610957
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_RemoveMetadataTag, "RemoveMetadataTag" }, // 3616686981
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_RemoveOnExtractAssetFromFile, "RemoveOnExtractAssetFromFile" }, // 2322853098
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_RenameAsset, "RenameAsset" }, // 3146265839
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_RenameDirectory, "RenameDirectory" }, // 3186135734
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_RenameLoadedAsset, "RenameLoadedAsset" }, // 2888493921
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_SaveAsset, "SaveAsset" }, // 1168680007
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_SaveDirectory, "SaveDirectory" }, // 1278375975
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAsset, "SaveLoadedAsset" }, // 1357980315
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_SaveLoadedAssets, "SaveLoadedAssets" }, // 125591515
		{ &Z_Construct_UFunction_UEditorAssetSubsystem_SetMetadataTag, "SetMetadataTag" }, // 1824564556
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAssetSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UEditorAssetSubsystem\n* Subsystem for exposing asset related utilities to scripts.\n* Asset Paths can be represented in the following ways:\n*\x09\x09(Reference/Text Path)\x09StaticMesh'/Game/MyFolder/MyAsset.MyAsset'\n*\x09\x09(Full Name)\x09\x09\x09\x09StaticMesh /Game/MyFolder/MyAsset.MyAsset\n*\x09\x09(Path Name)\x09\x09\x09\x09/Game/MyFolder/MyAsset.MyAsset\n*\x09\x09(Package Name)\x09\x09\x09/Game/MyFolder/MyAsset\n* Directory Paths can be represented in the following ways:\n*\x09\x09/Game/MyNewFolder/\n*\x09\x09/Game/MyNewFolder\n*/" },
		{ "IncludePath", "Subsystems/EditorAssetSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorAssetSubsystem.h" },
		{ "ToolTip", "UEditorAssetSubsystem\nSubsystem for exposing asset related utilities to scripts.\nAsset Paths can be represented in the following ways:\n             (Reference/Text Path)   StaticMesh'/Game/MyFolder/MyAsset.MyAsset'\n             (Full Name)                             StaticMesh /Game/MyFolder/MyAsset.MyAsset\n             (Path Name)                             /Game/MyFolder/MyAsset.MyAsset\n             (Package Name)                  /Game/MyFolder/MyAsset\nDirectory Paths can be represented in the following ways:\n             /Game/MyNewFolder/\n             /Game/MyNewFolder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorAssetSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorAssetSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorAssetSubsystem_Statics::ClassParams = {
		&UEditorAssetSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorAssetSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAssetSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorAssetSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEditorAssetSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorAssetSubsystem.OuterSingleton, Z_Construct_UClass_UEditorAssetSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorAssetSubsystem.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorAssetSubsystem>()
	{
		return UEditorAssetSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorAssetSubsystem);
	UEditorAssetSubsystem::~UEditorAssetSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorAssetSubsystem, UEditorAssetSubsystem::StaticClass, TEXT("UEditorAssetSubsystem"), &Z_Registration_Info_UClass_UEditorAssetSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorAssetSubsystem), 1699686455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_102327246(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
