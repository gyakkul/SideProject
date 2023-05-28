// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetTagsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetTagsSubsystem() {}
// Cross Module References
	ASSETTAGS_API UClass* Z_Construct_UClass_UAssetTagsSubsystem();
	ASSETTAGS_API UClass* Z_Construct_UClass_UAssetTagsSubsystem_NoRegister();
	ASSETTAGS_API UEnum* Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_AssetTags();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollectionScriptingShareType;
	static UEnum* ECollectionScriptingShareType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollectionScriptingShareType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECollectionScriptingShareType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType, (UObject*)Z_Construct_UPackage__Script_AssetTags(), TEXT("ECollectionScriptingShareType"));
		}
		return Z_Registration_Info_UEnum_ECollectionScriptingShareType.OuterSingleton;
	}
	template<> ASSETTAGS_API UEnum* StaticEnum<ECollectionScriptingShareType>()
	{
		return ECollectionScriptingShareType_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType_Statics::Enumerators[] = {
		{ "ECollectionScriptingShareType::Local", (int64)ECollectionScriptingShareType::Local },
		{ "ECollectionScriptingShareType::Private", (int64)ECollectionScriptingShareType::Private },
		{ "ECollectionScriptingShareType::Shared", (int64)ECollectionScriptingShareType::Shared },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType_Statics::Enum_MetaDataParams[] = {
		{ "DisplayName", "Collection Share Type" },
		{ "Local.Comment", "/** This collection is only visible to you and is not in source control. */" },
		{ "Local.Name", "ECollectionScriptingShareType::Local" },
		{ "Local.ToolTip", "This collection is only visible to you and is not in source control." },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "Private.Comment", "/** This collection is only visible to you. */" },
		{ "Private.Name", "ECollectionScriptingShareType::Private" },
		{ "Private.ToolTip", "This collection is only visible to you." },
		{ "ScriptName", "CollectionShareType" },
		{ "Shared.Comment", "/** This collection is visible to everyone. */" },
		{ "Shared.Name", "ECollectionScriptingShareType::Shared" },
		{ "Shared.ToolTip", "This collection is visible to everyone." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetTags,
		nullptr,
		"ECollectionScriptingShareType",
		"ECollectionScriptingShareType",
		Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType()
	{
		if (!Z_Registration_Info_UEnum_ECollectionScriptingShareType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollectionScriptingShareType.InnerSingleton, Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECollectionScriptingShareType.InnerSingleton;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execGetCollectionsContainingAssetPtr)
	{
		P_GET_OBJECT(UObject,Z_Param_AssetPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetCollectionsContainingAssetPtr(Z_Param_AssetPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execGetCollectionsContainingAssetData)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetCollectionsContainingAssetData(Z_Param_Out_AssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execGetCollectionsContainingAsset)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AssetPathName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetCollectionsContainingAsset(Z_Param_AssetPathName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execK2_GetCollectionsContainingAsset)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->K2_GetCollectionsContainingAsset(Z_Param_Out_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execGetAssetsInCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAssetData>*)Z_Param__Result=P_THIS->GetAssetsInCollection(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execGetCollections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetCollections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execCollectionExists)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CollectionExists(Z_Param_Name);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRemoveAssetPtrsFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetPtrs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAssetPtrsFromCollection(Z_Param_Name,Z_Param_Out_AssetPtrs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRemoveAssetDatasFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAssetDatasFromCollection(Z_Param_Name,Z_Param_Out_AssetDatas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRemoveAssetsFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FName,Z_Param_Out_AssetPathNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAssetsFromCollection(Z_Param_Name,Z_Param_Out_AssetPathNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execK2_RemoveAssetsFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FSoftObjectPath,Z_Param_Out_AssetPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_RemoveAssetsFromCollection(Z_Param_Name,Z_Param_Out_AssetPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRemoveAssetPtrFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UObject,Z_Param_AssetPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAssetPtrFromCollection(Z_Param_Name,Z_Param_AssetPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRemoveAssetDataFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAssetDataFromCollection(Z_Param_Name,Z_Param_Out_AssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRemoveAssetFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FNameProperty,Z_Param_AssetPathName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAssetFromCollection(Z_Param_Name,Z_Param_AssetPathName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execK2_RemoveAssetFromCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_RemoveAssetFromCollection(Z_Param_Name,Z_Param_Out_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execAddAssetPtrsToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetPtrs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAssetPtrsToCollection(Z_Param_Name,Z_Param_Out_AssetPtrs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execAddAssetDatasToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAssetDatasToCollection(Z_Param_Name,Z_Param_Out_AssetDatas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execAddAssetsToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FName,Z_Param_Out_AssetPathNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAssetsToCollection(Z_Param_Name,Z_Param_Out_AssetPathNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execK2_AddAssetsToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_TARRAY_REF(FSoftObjectPath,Z_Param_Out_AssetPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_AddAssetsToCollection(Z_Param_Name,Z_Param_Out_AssetPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execAddAssetPtrToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UObject,Z_Param_AssetPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAssetPtrToCollection(Z_Param_Name,Z_Param_AssetPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execAddAssetDataToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAssetDataToCollection(Z_Param_Name,Z_Param_Out_AssetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execAddAssetToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FNameProperty,Z_Param_AssetPathName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAssetToCollection(Z_Param_Name,Z_Param_AssetPathName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execK2_AddAssetToCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_AddAssetToCollection(Z_Param_Name,Z_Param_Out_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execEmptyCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EmptyCollection(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execReparentCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewParentName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReparentCollection(Z_Param_Name,Z_Param_NewParentName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execRenameCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameCollection(Z_Param_Name,Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execDestroyCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DestroyCollection(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetTagsSubsystem::execCreateCollection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_ENUM(ECollectionScriptingShareType,Z_Param_ShareType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateCollection(Z_Param_Name,ECollectionScriptingShareType(Z_Param_ShareType));
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAssetTagsSubsystem::StaticRegisterNativesUAssetTagsSubsystem()
	{
		UClass* Class = UAssetTagsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "AddAssetDatasToCollection", &UAssetTagsSubsystem::execAddAssetDatasToCollection },
			{ "AddAssetDataToCollection", &UAssetTagsSubsystem::execAddAssetDataToCollection },
			{ "AddAssetPtrsToCollection", &UAssetTagsSubsystem::execAddAssetPtrsToCollection },
			{ "AddAssetPtrToCollection", &UAssetTagsSubsystem::execAddAssetPtrToCollection },
			{ "AddAssetsToCollection", &UAssetTagsSubsystem::execAddAssetsToCollection },
			{ "AddAssetToCollection", &UAssetTagsSubsystem::execAddAssetToCollection },
#endif // WITH_EDITOR
			{ "CollectionExists", &UAssetTagsSubsystem::execCollectionExists },
#if WITH_EDITOR
			{ "CreateCollection", &UAssetTagsSubsystem::execCreateCollection },
			{ "DestroyCollection", &UAssetTagsSubsystem::execDestroyCollection },
			{ "EmptyCollection", &UAssetTagsSubsystem::execEmptyCollection },
#endif // WITH_EDITOR
			{ "GetAssetsInCollection", &UAssetTagsSubsystem::execGetAssetsInCollection },
			{ "GetCollections", &UAssetTagsSubsystem::execGetCollections },
			{ "GetCollectionsContainingAsset", &UAssetTagsSubsystem::execGetCollectionsContainingAsset },
			{ "GetCollectionsContainingAssetData", &UAssetTagsSubsystem::execGetCollectionsContainingAssetData },
			{ "GetCollectionsContainingAssetPtr", &UAssetTagsSubsystem::execGetCollectionsContainingAssetPtr },
#if WITH_EDITOR
			{ "K2_AddAssetsToCollection", &UAssetTagsSubsystem::execK2_AddAssetsToCollection },
			{ "K2_AddAssetToCollection", &UAssetTagsSubsystem::execK2_AddAssetToCollection },
#endif // WITH_EDITOR
			{ "K2_GetCollectionsContainingAsset", &UAssetTagsSubsystem::execK2_GetCollectionsContainingAsset },
#if WITH_EDITOR
			{ "K2_RemoveAssetFromCollection", &UAssetTagsSubsystem::execK2_RemoveAssetFromCollection },
			{ "K2_RemoveAssetsFromCollection", &UAssetTagsSubsystem::execK2_RemoveAssetsFromCollection },
			{ "RemoveAssetDataFromCollection", &UAssetTagsSubsystem::execRemoveAssetDataFromCollection },
			{ "RemoveAssetDatasFromCollection", &UAssetTagsSubsystem::execRemoveAssetDatasFromCollection },
			{ "RemoveAssetFromCollection", &UAssetTagsSubsystem::execRemoveAssetFromCollection },
			{ "RemoveAssetPtrFromCollection", &UAssetTagsSubsystem::execRemoveAssetPtrFromCollection },
			{ "RemoveAssetPtrsFromCollection", &UAssetTagsSubsystem::execRemoveAssetPtrsFromCollection },
			{ "RemoveAssetsFromCollection", &UAssetTagsSubsystem::execRemoveAssetsFromCollection },
			{ "RenameCollection", &UAssetTagsSubsystem::execRenameCollection },
			{ "ReparentCollection", &UAssetTagsSubsystem::execReparentCollection },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetTagsSubsystem_eventAddAssetDatasToCollection_Parms
		{
			FName Name;
			TArray<FAssetData> AssetDatas;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetDatas;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetDatasToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas_Inner = { "AssetDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas = { "AssetDatas", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetDatasToCollection_Parms, AssetDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventAddAssetDatasToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventAddAssetDatasToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_AssetDatas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Add the given assets to the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetDatas Assets to add.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Add the given assets to the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetDatas Assets to add.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "AddAssetDatasToCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::AssetTagsSubsystem_eventAddAssetDatasToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetTagsSubsystem_eventAddAssetDataToCollection_Parms
		{
			FName Name;
			FAssetData AssetData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetDataToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetDataToCollection_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_AssetData_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventAddAssetDataToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventAddAssetDataToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_AssetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Add the given asset to the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetData Asset to add.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Add the given asset to the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetData Asset to add.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "AddAssetDataToCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::AssetTagsSubsystem_eventAddAssetDataToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics
	{
		struct AssetTagsSubsystem_eventAddAssetPtrsToCollection_Parms
		{
			FName Name;
			TArray<UObject*> AssetPtrs;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetPtrs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPtrs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetPtrs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetPtrsToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs_Inner = { "AssetPtrs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs = { "AssetPtrs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetPtrsToCollection_Parms, AssetPtrs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventAddAssetPtrsToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventAddAssetPtrsToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_AssetPtrs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Add the given assets to the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPtrs Assets to add.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Add the given assets to the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPtrs Assets to add.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "AddAssetPtrsToCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::AssetTagsSubsystem_eventAddAssetPtrsToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics
	{
		struct AssetTagsSubsystem_eventAddAssetPtrToCollection_Parms
		{
			FName Name;
			const UObject* AssetPtr;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetPtr;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetPtrToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_AssetPtr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_AssetPtr = { "AssetPtr", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetPtrToCollection_Parms, AssetPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_AssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_AssetPtr_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventAddAssetPtrToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventAddAssetPtrToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_AssetPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Add the given asset to the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPtr Asset to add.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Add the given asset to the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPtr Asset to add.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "AddAssetPtrToCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::AssetTagsSubsystem_eventAddAssetPtrToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics
	{
		struct AssetTagsSubsystem_eventAddAssetsToCollection_Parms
		{
			FName Name;
			TArray<FName> AssetPathNames;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AssetPathNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetPathNames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetsToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames_Inner = { "AssetPathNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames = { "AssetPathNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetsToCollection_Parms, AssetPathNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventAddAssetsToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventAddAssetsToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_AssetPathNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "AddAssetsToCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::AssetTagsSubsystem_eventAddAssetsToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics
	{
		struct AssetTagsSubsystem_eventAddAssetToCollection_Parms
		{
			FName Name;
			FName AssetPathName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AssetPathName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_AssetPathName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_AssetPathName = { "AssetPathName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventAddAssetToCollection_Parms, AssetPathName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_AssetPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_AssetPathName_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventAddAssetToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventAddAssetToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_AssetPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "AddAssetToCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::AssetTagsSubsystem_eventAddAssetToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics
	{
		struct AssetTagsSubsystem_eventCollectionExists_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventCollectionExists_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventCollectionExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventCollectionExists_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Check whether the given collection exists.\n\x09 *\n\x09 * @param Name Name of the collection to test.\n\x09 *\n\x09 * @return True if the collection exists, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Check whether the given collection exists.\n\n@param Name Name of the collection to test.\n\n@return True if the collection exists, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "CollectionExists", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::AssetTagsSubsystem_eventCollectionExists_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics
	{
		struct AssetTagsSubsystem_eventCreateCollection_Parms
		{
			FName Name;
			ECollectionScriptingShareType ShareType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShareType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShareType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShareType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventCreateCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType = { "ShareType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventCreateCollection_Parms, ShareType), Z_Construct_UEnum_AssetTags_ECollectionScriptingShareType, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType_MetaData)) }; // 681992034
	void Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventCreateCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventCreateCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ShareType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Create a new collection with the given name and share type.\n\x09 *\n\x09 * @param Name Name to give to the collection.\n\x09 * @param ShareType Whether the collection should be local, private, or shared?\n\x09 *\n\x09 * @return True if the collection was created, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Create a new collection with the given name and share type.\n\n@param Name Name to give to the collection.\n@param ShareType Whether the collection should be local, private, or shared?\n\n@return True if the collection was created, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "CreateCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::AssetTagsSubsystem_eventCreateCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics
	{
		struct AssetTagsSubsystem_eventDestroyCollection_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventDestroyCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventDestroyCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventDestroyCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Destroy the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to destroy.\n\x09 *\n\x09 * @return True if the collection was destroyed, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Destroy the given collection.\n\n@param Name Name of the collection to destroy.\n\n@return True if the collection was destroyed, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "DestroyCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::AssetTagsSubsystem_eventDestroyCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics
	{
		struct AssetTagsSubsystem_eventEmptyCollection_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventEmptyCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventEmptyCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventEmptyCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove all assets from the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove all assets from the given collection.\n\n@param Name Name of the collection to modify.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "EmptyCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::AssetTagsSubsystem_eventEmptyCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetTagsSubsystem_eventGetAssetsInCollection_Parms
		{
			FName Name;
			TArray<FAssetData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventGetAssetsInCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventGetAssetsInCollection_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Get the assets in the given collection.\n\x09 * \n\x09 * @param Name Name of the collection to test.\n\x09 *\n\x09 * @return Assets in the given collection.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Get the assets in the given collection.\n\n@param Name Name of the collection to test.\n\n@return Assets in the given collection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "GetAssetsInCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::AssetTagsSubsystem_eventGetAssetsInCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics
	{
		struct AssetTagsSubsystem_eventGetCollections_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Get the names of all available collections.\n\x09 *\n\x09 * @return Names of all available collections.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Get the names of all available collections.\n\n@return Names of all available collections." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "GetCollections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::AssetTagsSubsystem_eventGetCollections_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics
	{
		struct AssetTagsSubsystem_eventGetCollectionsContainingAsset_Parms
		{
			FName AssetPathName;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AssetPathName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_AssetPathName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_AssetPathName = { "AssetPathName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollectionsContainingAsset_Parms, AssetPathName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_AssetPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_AssetPathName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollectionsContainingAsset_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_AssetPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "GetCollectionsContainingAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::AssetTagsSubsystem_eventGetCollectionsContainingAsset_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetTagsSubsystem_eventGetCollectionsContainingAssetData_Parms
		{
			FAssetData AssetData;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollectionsContainingAssetData_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_AssetData_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollectionsContainingAssetData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_AssetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Get the names of the collections that contain the given asset.\n\x09 * \n\x09 * @param AssetData Asset to test.\n\x09 *\n\x09 * @return Names of the collections that contain the asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Get the names of the collections that contain the given asset.\n\n@param AssetData Asset to test.\n\n@return Names of the collections that contain the asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "GetCollectionsContainingAssetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::AssetTagsSubsystem_eventGetCollectionsContainingAssetData_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics
	{
		struct AssetTagsSubsystem_eventGetCollectionsContainingAssetPtr_Parms
		{
			const UObject* AssetPtr;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetPtr;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_AssetPtr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_AssetPtr = { "AssetPtr", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollectionsContainingAssetPtr_Parms, AssetPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_AssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_AssetPtr_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventGetCollectionsContainingAssetPtr_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_AssetPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Get the names of the collections that contain the given asset.\n\x09 * \n\x09 * @param AssetPtr Asset to test.\n\x09 *\n\x09 * @return Names of the collections that contain the asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Get the names of the collections that contain the given asset.\n\n@param AssetPtr Asset to test.\n\n@return Names of the collections that contain the asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "GetCollectionsContainingAssetPtr", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::AssetTagsSubsystem_eventGetCollectionsContainingAssetPtr_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetTagsSubsystem_eventK2_AddAssetsToCollection_Parms
		{
			FName Name;
			TArray<FSoftObjectPath> AssetPaths;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPaths_Inner;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventK2_AddAssetsToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_AssetPaths_Inner = { "AssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_AssetPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_AssetPaths = { "AssetPaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventK2_AddAssetsToCollection_Parms, AssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_AssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_AssetPaths_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventK2_AddAssetsToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventK2_AddAssetsToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_AssetPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_AssetPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Add the given assets to the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPathNames Assets to add (their path names, eg) /Game/MyFolder/MyAsset.MyAsset).\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "DisplayName", "Add Assets To Collection" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Add the given assets to the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPathNames Assets to add (their path names, eg) /Game/MyFolder/MyAsset.MyAsset).\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "K2_AddAssetsToCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::AssetTagsSubsystem_eventK2_AddAssetsToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetTagsSubsystem_eventK2_AddAssetToCollection_Parms
		{
			FName Name;
			FSoftObjectPath AssetPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventK2_AddAssetToCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventK2_AddAssetToCollection_Parms, AssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_AssetPath_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventK2_AddAssetToCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventK2_AddAssetToCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Add the given asset to the given collection.\n\x09 * \n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPathName Asset to add (its path name, eg) /Game/MyFolder/MyAsset.MyAsset).\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "DisplayName", "Add Asset To Collection" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Add the given asset to the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPathName Asset to add (its path name, eg) /Game/MyFolder/MyAsset.MyAsset).\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "K2_AddAssetToCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::AssetTagsSubsystem_eventK2_AddAssetToCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetTagsSubsystem_eventK2_GetCollectionsContainingAsset_Parms
		{
			FSoftObjectPath AssetPath;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventK2_GetCollectionsContainingAsset_Parms, AssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::NewProp_AssetPath_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventK2_GetCollectionsContainingAsset_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Get the names of the collections that contain the given asset.\n\x09 * \n\x09 * @param AssetPathName Asset to test (its path name, eg) /Game/MyFolder/MyAsset.MyAsset).\n\x09 *\n\x09 * @return Names of the collections that contain the asset.\n\x09 */" },
		{ "DisplayName", "Get Collections Containing Asset" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Get the names of the collections that contain the given asset.\n\n@param AssetPathName Asset to test (its path name, eg) /Game/MyFolder/MyAsset.MyAsset).\n\n@return Names of the collections that contain the asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "K2_GetCollectionsContainingAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::AssetTagsSubsystem_eventK2_GetCollectionsContainingAsset_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetTagsSubsystem_eventK2_RemoveAssetFromCollection_Parms
		{
			FName Name;
			FSoftObjectPath AssetPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventK2_RemoveAssetFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventK2_RemoveAssetFromCollection_Parms, AssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_AssetPath_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventK2_RemoveAssetFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventK2_RemoveAssetFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove the given asset from the given collection.\n\x09 * \n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPath Asset to remove (its path, eg) /Game/MyFolder/MyAsset.MyAsset).\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "DisplayName", "Remove Asset From Collection" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove the given asset from the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPath Asset to remove (its path, eg) /Game/MyFolder/MyAsset.MyAsset).\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "K2_RemoveAssetFromCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::AssetTagsSubsystem_eventK2_RemoveAssetFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetTagsSubsystem_eventK2_RemoveAssetsFromCollection_Parms
		{
			FName Name;
			TArray<FSoftObjectPath> AssetPaths;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPaths_Inner;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventK2_RemoveAssetsFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_AssetPaths_Inner = { "AssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_AssetPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_AssetPaths = { "AssetPaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventK2_RemoveAssetsFromCollection_Parms, AssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_AssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_AssetPaths_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventK2_RemoveAssetsFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventK2_RemoveAssetsFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_AssetPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_AssetPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove the given assets from the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPathNames Assets to remove (their path names, eg) /Game/MyFolder/MyAsset.MyAsset).\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "DisplayName", "Remove Assets From Collection" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove the given assets from the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPathNames Assets to remove (their path names, eg) /Game/MyFolder/MyAsset.MyAsset).\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "K2_RemoveAssetsFromCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::AssetTagsSubsystem_eventK2_RemoveAssetsFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetTagsSubsystem_eventRemoveAssetDataFromCollection_Parms
		{
			FName Name;
			FAssetData AssetData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetDataFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetDataFromCollection_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_AssetData_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRemoveAssetDataFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventRemoveAssetDataFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_AssetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove the given asset from the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetData Asset to remove.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove the given asset from the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetData Asset to remove.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RemoveAssetDataFromCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::AssetTagsSubsystem_eventRemoveAssetDataFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetTagsSubsystem_eventRemoveAssetDatasFromCollection_Parms
		{
			FName Name;
			TArray<FAssetData> AssetDatas;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetDatas;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetDatasFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas_Inner = { "AssetDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas = { "AssetDatas", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetDatasFromCollection_Parms, AssetDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRemoveAssetDatasFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventRemoveAssetDatasFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_AssetDatas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove the given assets from the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetDatas Assets to remove.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove the given assets from the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetDatas Assets to remove.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RemoveAssetDatasFromCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::AssetTagsSubsystem_eventRemoveAssetDatasFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics
	{
		struct AssetTagsSubsystem_eventRemoveAssetFromCollection_Parms
		{
			FName Name;
			FName AssetPathName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AssetPathName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_AssetPathName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_AssetPathName = { "AssetPathName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetFromCollection_Parms, AssetPathName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_AssetPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_AssetPathName_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRemoveAssetFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventRemoveAssetFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_AssetPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RemoveAssetFromCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::AssetTagsSubsystem_eventRemoveAssetFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics
	{
		struct AssetTagsSubsystem_eventRemoveAssetPtrFromCollection_Parms
		{
			FName Name;
			const UObject* AssetPtr;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetPtr;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetPtrFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_AssetPtr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_AssetPtr = { "AssetPtr", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetPtrFromCollection_Parms, AssetPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_AssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_AssetPtr_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRemoveAssetPtrFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventRemoveAssetPtrFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_AssetPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove the given asset from the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPtr Asset to remove.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove the given asset from the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPtr Asset to remove.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RemoveAssetPtrFromCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::AssetTagsSubsystem_eventRemoveAssetPtrFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics
	{
		struct AssetTagsSubsystem_eventRemoveAssetPtrsFromCollection_Parms
		{
			FName Name;
			TArray<UObject*> AssetPtrs;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetPtrs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPtrs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetPtrs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetPtrsFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs_Inner = { "AssetPtrs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs = { "AssetPtrs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetPtrsFromCollection_Parms, AssetPtrs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRemoveAssetPtrsFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventRemoveAssetPtrsFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_AssetPtrs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Remove the given assets from the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to modify.\n\x09 * @param AssetPtrs Assets to remove.\n\x09 *\n\x09 * @return True if the collection was modified, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Remove the given assets from the given collection.\n\n@param Name Name of the collection to modify.\n@param AssetPtrs Assets to remove.\n\n@return True if the collection was modified, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RemoveAssetPtrsFromCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::AssetTagsSubsystem_eventRemoveAssetPtrsFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics
	{
		struct AssetTagsSubsystem_eventRemoveAssetsFromCollection_Parms
		{
			FName Name;
			TArray<FName> AssetPathNames;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AssetPathNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetPathNames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetsFromCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames_Inner = { "AssetPathNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames = { "AssetPathNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRemoveAssetsFromCollection_Parms, AssetPathNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRemoveAssetsFromCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventRemoveAssetsFromCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_AssetPathNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RemoveAssetsFromCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::AssetTagsSubsystem_eventRemoveAssetsFromCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics
	{
		struct AssetTagsSubsystem_eventRenameCollection_Parms
		{
			FName Name;
			FName NewName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRenameCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventRenameCollection_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_NewName_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventRenameCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventRenameCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_NewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Rename the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to rename.\n\x09 * @param NewName Name to give to the collection.\n\x09 *\n\x09 * @return True if the collection was renamed, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Rename the given collection.\n\n@param Name Name of the collection to rename.\n@param NewName Name to give to the collection.\n\n@return True if the collection was renamed, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "RenameCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::AssetTagsSubsystem_eventRenameCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics
	{
		struct AssetTagsSubsystem_eventReparentCollection_Parms
		{
			FName Name;
			FName NewParentName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewParentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewParentName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventReparentCollection_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_NewParentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_NewParentName = { "NewParentName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTagsSubsystem_eventReparentCollection_Parms, NewParentName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_NewParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_NewParentName_MetaData)) };
	void Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTagsSubsystem_eventReparentCollection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTagsSubsystem_eventReparentCollection_Parms), &Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_NewParentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetTags" },
		{ "Comment", "/**\n\x09 * Re-parent the given collection.\n\x09 *\n\x09 * @param Name Name of the collection to re-parent.\n\x09 * @param NewParentName Name of the new parent collection, or None to have the collection become a root collection.\n\x09 *\n\x09 * @return True if the collection was renamed, false otherwise (see the output log for details on error).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
		{ "ToolTip", "Re-parent the given collection.\n\n@param Name Name of the collection to re-parent.\n@param NewParentName Name of the new parent collection, or None to have the collection become a root collection.\n\n@return True if the collection was renamed, false otherwise (see the output log for details on error)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTagsSubsystem, nullptr, "ReparentCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::AssetTagsSubsystem_eventReparentCollection_Parms), Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetTagsSubsystem);
	UClass* Z_Construct_UClass_UAssetTagsSubsystem_NoRegister()
	{
		return UAssetTagsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAssetTagsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetTagsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTags,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetTagsSubsystem_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDatasToCollection, "AddAssetDatasToCollection" }, // 1382644979
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetDataToCollection, "AddAssetDataToCollection" }, // 1151723048
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrsToCollection, "AddAssetPtrsToCollection" }, // 2239713545
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetPtrToCollection, "AddAssetPtrToCollection" }, // 2260773686
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetsToCollection, "AddAssetsToCollection" }, // 2992615907
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_AddAssetToCollection, "AddAssetToCollection" }, // 4206731326
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_CollectionExists, "CollectionExists" }, // 2528185786
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_CreateCollection, "CreateCollection" }, // 1865151422
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_DestroyCollection, "DestroyCollection" }, // 2892797523
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_EmptyCollection, "EmptyCollection" }, // 2020247499
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_GetAssetsInCollection, "GetAssetsInCollection" }, // 2403375662
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_GetCollections, "GetCollections" }, // 444917535
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAsset, "GetCollectionsContainingAsset" }, // 3843974712
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetData, "GetCollectionsContainingAssetData" }, // 539381142
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_GetCollectionsContainingAssetPtr, "GetCollectionsContainingAssetPtr" }, // 1950514605
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetsToCollection, "K2_AddAssetsToCollection" }, // 2126815614
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_K2_AddAssetToCollection, "K2_AddAssetToCollection" }, // 4289593447
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_K2_GetCollectionsContainingAsset, "K2_GetCollectionsContainingAsset" }, // 4042558565
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetFromCollection, "K2_RemoveAssetFromCollection" }, // 2818156056
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_K2_RemoveAssetsFromCollection, "K2_RemoveAssetsFromCollection" }, // 2229800021
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDataFromCollection, "RemoveAssetDataFromCollection" }, // 618432363
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetDatasFromCollection, "RemoveAssetDatasFromCollection" }, // 2947022042
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetFromCollection, "RemoveAssetFromCollection" }, // 2873883398
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrFromCollection, "RemoveAssetPtrFromCollection" }, // 1532020203
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetPtrsFromCollection, "RemoveAssetPtrsFromCollection" }, // 2747834988
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RemoveAssetsFromCollection, "RemoveAssetsFromCollection" }, // 2535824038
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_RenameCollection, "RenameCollection" }, // 4098257911
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetTagsSubsystem_ReparentCollection, "ReparentCollection" }, // 1778411305
#endif //WITH_EDITOR
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetTagsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTagsSubsystem.h" },
		{ "ModuleRelativePath", "Public/AssetTagsSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetTagsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetTagsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetTagsSubsystem_Statics::ClassParams = {
		&UAssetTagsSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetTagsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTagsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetTagsSubsystem()
	{
		if (!Z_Registration_Info_UClass_UAssetTagsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetTagsSubsystem.OuterSingleton, Z_Construct_UClass_UAssetTagsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetTagsSubsystem.OuterSingleton;
	}
	template<> ASSETTAGS_API UClass* StaticClass<UAssetTagsSubsystem>()
	{
		return UAssetTagsSubsystem::StaticClass();
	}
	UAssetTagsSubsystem::UAssetTagsSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetTagsSubsystem);
	UAssetTagsSubsystem::~UAssetTagsSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_Statics::EnumInfo[] = {
		{ ECollectionScriptingShareType_StaticEnum, TEXT("ECollectionScriptingShareType"), &Z_Registration_Info_UEnum_ECollectionScriptingShareType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 681992034U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetTagsSubsystem, UAssetTagsSubsystem::StaticClass, TEXT("UAssetTagsSubsystem"), &Z_Registration_Info_UClass_UAssetTagsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetTagsSubsystem), 3603704823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_2344060333(TEXT("/Script/AssetTags"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AssetTags_Source_AssetTags_Public_AssetTagsSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
