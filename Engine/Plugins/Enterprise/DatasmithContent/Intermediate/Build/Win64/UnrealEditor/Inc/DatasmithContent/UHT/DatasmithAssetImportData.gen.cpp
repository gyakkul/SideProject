// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithAssetImportData.h"
#include "DatasmithImportOptions.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithAssetImportData() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAdditionalData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAssetImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAssetImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCADImportSceneData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCADImportSceneData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDeltaGenAssetImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDeltaGenSceneImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithFBXSceneImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithFBXSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithGLTFSceneImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithGLTFSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithIFCSceneImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithIFCSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithMDLSceneImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithMDLSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSceneImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshCADImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshCADImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshIFCImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithTranslatedSceneImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithTranslatedSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithVREDAssetImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithVREDAssetImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithVREDSceneImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithVREDSceneImportData_NoRegister();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithAssetImportOptions();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithImportBaseOptions();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithImportInfo();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithTessellationOptions();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithImportInfo;
class UScriptStruct* FDatasmithImportInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithImportInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithImportInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithImportInfo, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithImportInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithImportInfo.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithImportInfo>()
{
	return FDatasmithImportInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceUri_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceUri;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceHash_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that fill the same role as FAssetImportInfo, but for SourceUri.\n * Eventually, the SourceUri should be directly added to FAssetImportInfo and replace the \"RelativeFilename\".\n */" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "Structure that fill the same role as FAssetImportInfo, but for SourceUri.\nEventually, the SourceUri should be directly added to FAssetImportInfo and replace the \"RelativeFilename\"." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithImportInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceUri_MetaData[] = {
		{ "Comment", "/** The Uri of to the source that this asset was imported from. */" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "The Uri of to the source that this asset was imported from." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceUri = { "SourceUri", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithImportInfo, SourceUri), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceUri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceUri_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceHash_MetaData[] = {
		{ "Comment", "/**\n\x09 * The MD5 hash of the source when it was imported. Should be updated alongside the SourceUri\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "The MD5 hash of the source when it was imported. Should be updated alongside the SourceUri" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceHash = { "SourceHash", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithImportInfo, SourceHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceHash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceUri,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewProp_SourceHash,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithImportInfo",
		sizeof(FDatasmithImportInfo),
		alignof(FDatasmithImportInfo),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithImportInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DatasmithImportInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithImportInfo.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DatasmithImportInfo.InnerSingleton;
	}
	void UDatasmithAssetImportData::StaticRegisterNativesUDatasmithAssetImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithAssetImportData);
	UClass* Z_Construct_UClass_UDatasmithAssetImportData_NoRegister()
	{
		return UDatasmithAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetImportOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdditionalData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatasmithImportInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DatasmithImportInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AssetImportOptions_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AssetImportOptions = { "AssetImportOptions", nullptr, (EPropertyFlags)0x0010000800000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithAssetImportData, AssetImportOptions), Z_Construct_UScriptStruct_FDatasmithAssetImportOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AssetImportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AssetImportOptions_MetaData)) }; // 2798835075
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_Inner_MetaData[] = {
		{ "Category", "Asset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_Inner = { "AdditionalData", nullptr, (EPropertyFlags)0x0006000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithAdditionalData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_MetaData[] = {
		{ "Category", "Asset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0014008800000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithAssetImportData, AdditionalData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_DatasmithImportInfo_MetaData[] = {
		{ "Category", "External Source" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_DatasmithImportInfo = { "DatasmithImportInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithAssetImportData, DatasmithImportInfo), Z_Construct_UScriptStruct_FDatasmithImportInfo, METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_DatasmithImportInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_DatasmithImportInfo_MetaData)) }; // 4009325863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithAssetImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AssetImportOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_DatasmithImportInfo,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::ClassParams = {
		&UDatasmithAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithAssetImportData_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::PropPointers), 0),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithAssetImportData.OuterSingleton, Z_Construct_UClass_UDatasmithAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithAssetImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithAssetImportData>()
	{
		return UDatasmithAssetImportData::StaticClass();
	}
	UDatasmithAssetImportData::UDatasmithAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithAssetImportData);
	UDatasmithAssetImportData::~UDatasmithAssetImportData() {}
	void UDatasmithStaticMeshImportData::StaticRegisterNativesUDatasmithStaticMeshImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithStaticMeshImportData);
	UClass* Z_Construct_UClass_UDatasmithStaticMeshImportData_NoRegister()
	{
		return UDatasmithStaticMeshImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::NewProp_ImportOptions_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::NewProp_ImportOptions = { "ImportOptions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithStaticMeshImportData, ImportOptions), Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::NewProp_ImportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::NewProp_ImportOptions_MetaData)) }; // 4292395546
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::NewProp_ImportOptions,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::ClassParams = {
		&UDatasmithStaticMeshImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::PropPointers), 0),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithStaticMeshImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.OuterSingleton, Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshImportData>()
	{
		return UDatasmithStaticMeshImportData::StaticClass();
	}
	UDatasmithStaticMeshImportData::UDatasmithStaticMeshImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshImportData);
	UDatasmithStaticMeshImportData::~UDatasmithStaticMeshImportData() {}
	void UDatasmithStaticMeshCADImportData::StaticRegisterNativesUDatasmithStaticMeshCADImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithStaticMeshCADImportData);
	UClass* Z_Construct_UClass_UDatasmithStaticMeshCADImportData_NoRegister()
	{
		return UDatasmithStaticMeshCADImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TessellationOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TessellationOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelUnit_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ModelUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ModelTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResourcePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResourceFilename;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AuxiliaryFilenames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxiliaryFilenames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AuxiliaryFilenames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithStaticMeshImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "InternalProperty" },
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_TessellationOptions_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_TessellationOptions = { "TessellationOptions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, TessellationOptions), Z_Construct_UScriptStruct_FDatasmithTessellationOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_TessellationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_TessellationOptions_MetaData)) }; // 2392613072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelUnit_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelUnit = { "ModelUnit", nullptr, (EPropertyFlags)0x0010000800030001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, ModelUnit), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelUnit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelTolerance_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelTolerance = { "ModelTolerance", nullptr, (EPropertyFlags)0x0010000800030001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, ModelTolerance), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourcePath_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourcePath = { "ResourcePath", nullptr, (EPropertyFlags)0x0020080800030001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, ResourcePath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourcePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourcePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourceFilename_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourceFilename = { "ResourceFilename", nullptr, (EPropertyFlags)0x0020080800030001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, ResourceFilename), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourceFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourceFilename_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames_Inner = { "AuxiliaryFilenames", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames = { "AuxiliaryFilenames", nullptr, (EPropertyFlags)0x0020080800030001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, AuxiliaryFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_TessellationOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourceFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshCADImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::ClassParams = {
		&UDatasmithStaticMeshCADImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::PropPointers), 0),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithStaticMeshCADImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.OuterSingleton, Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshCADImportData>()
	{
		return UDatasmithStaticMeshCADImportData::StaticClass();
	}
	UDatasmithStaticMeshCADImportData::UDatasmithStaticMeshCADImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshCADImportData);
	UDatasmithStaticMeshCADImportData::~UDatasmithStaticMeshCADImportData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDatasmithStaticMeshCADImportData)
	void UDatasmithSceneImportData::StaticRegisterNativesUDatasmithSceneImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithSceneImportData);
	UClass* Z_Construct_UClass_UDatasmithSceneImportData_NoRegister()
	{
		return UDatasmithSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatasmithImportInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DatasmithImportInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for import data and options used when importing any asset from Datasmith\n */" },
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "Base class for import data and options used when importing any asset from Datasmith" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_BaseOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_BaseOptions = { "BaseOptions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithSceneImportData, BaseOptions), Z_Construct_UScriptStruct_FDatasmithImportBaseOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_BaseOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_BaseOptions_MetaData)) }; // 1497088544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_DatasmithImportInfo_MetaData[] = {
		{ "Category", "External Source" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_DatasmithImportInfo = { "DatasmithImportInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithSceneImportData, DatasmithImportInfo), Z_Construct_UScriptStruct_FDatasmithImportInfo, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_DatasmithImportInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_DatasmithImportInfo_MetaData)) }; // 4009325863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithSceneImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_BaseOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_DatasmithImportInfo,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithSceneImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithSceneImportData_Statics::ClassParams = {
		&UDatasmithSceneImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithSceneImportData_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneImportData_Statics::PropPointers), 0),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithSceneImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithSceneImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithSceneImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithSceneImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithSceneImportData>()
	{
		return UDatasmithSceneImportData::StaticClass();
	}
	UDatasmithSceneImportData::UDatasmithSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithSceneImportData);
	UDatasmithSceneImportData::~UDatasmithSceneImportData() {}
	void UDatasmithTranslatedSceneImportData::StaticRegisterNativesUDatasmithTranslatedSceneImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithTranslatedSceneImportData);
	UClass* Z_Construct_UClass_UDatasmithTranslatedSceneImportData_NoRegister()
	{
		return UDatasmithTranslatedSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdditionalOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Import data and options specific to Datasmith scenes imported through the translator system\n */" },
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "Import data and options specific to Datasmith scenes imported through the translator system" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_AdditionalOptions_Inner = { "AdditionalOptions", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithOptionsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_AdditionalOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_AdditionalOptions = { "AdditionalOptions", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithTranslatedSceneImportData, AdditionalOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_AdditionalOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_AdditionalOptions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_AdditionalOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_AdditionalOptions,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithTranslatedSceneImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::ClassParams = {
		&UDatasmithTranslatedSceneImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::PropPointers), 0),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithTranslatedSceneImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithTranslatedSceneImportData>()
	{
		return UDatasmithTranslatedSceneImportData::StaticClass();
	}
	UDatasmithTranslatedSceneImportData::UDatasmithTranslatedSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithTranslatedSceneImportData);
	UDatasmithTranslatedSceneImportData::~UDatasmithTranslatedSceneImportData() {}
	void UDatasmithCADImportSceneData::StaticRegisterNativesUDatasmithCADImportSceneData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithCADImportSceneData);
	UClass* Z_Construct_UClass_UDatasmithCADImportSceneData_NoRegister()
	{
		return UDatasmithCADImportSceneData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithCADImportSceneData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TessellationOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TessellationOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Import data and options specific to tessellated Datasmith scenes\n */" },
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "Import data and options specific to tessellated Datasmith scenes" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::NewProp_TessellationOptions_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::NewProp_TessellationOptions = { "TessellationOptions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithCADImportSceneData, TessellationOptions), Z_Construct_UScriptStruct_FDatasmithTessellationOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::NewProp_TessellationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::NewProp_TessellationOptions_MetaData)) }; // 2392613072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::NewProp_TessellationOptions,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCADImportSceneData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::ClassParams = {
		&UDatasmithCADImportSceneData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::PropPointers), 0),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithCADImportSceneData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithCADImportSceneData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithCADImportSceneData.OuterSingleton, Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithCADImportSceneData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithCADImportSceneData>()
	{
		return UDatasmithCADImportSceneData::StaticClass();
	}
	UDatasmithCADImportSceneData::UDatasmithCADImportSceneData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCADImportSceneData);
	UDatasmithCADImportSceneData::~UDatasmithCADImportSceneData() {}
	void UDatasmithMDLSceneImportData::StaticRegisterNativesUDatasmithMDLSceneImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithMDLSceneImportData);
	UClass* Z_Construct_UClass_UDatasmithMDLSceneImportData_NoRegister()
	{
		return UDatasmithMDLSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithMDLSceneImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::ClassParams = {
		&UDatasmithMDLSceneImportData::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithMDLSceneImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithMDLSceneImportData>()
	{
		return UDatasmithMDLSceneImportData::StaticClass();
	}
	UDatasmithMDLSceneImportData::UDatasmithMDLSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithMDLSceneImportData);
	UDatasmithMDLSceneImportData::~UDatasmithMDLSceneImportData() {}
	void UDatasmithGLTFSceneImportData::StaticRegisterNativesUDatasmithGLTFSceneImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithGLTFSceneImportData);
	UClass* Z_Construct_UClass_UDatasmithGLTFSceneImportData_NoRegister()
	{
		return UDatasmithGLTFSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Generator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_License_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_License;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "Generator Name" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, Generator), METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Generator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "Version" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, Version), METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Author_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "Author" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, Author), METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Author_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Author_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_License_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "License" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_License = { "License", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, License), METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_License_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_License_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "Source" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, Source), METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Source_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Generator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Author,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_License,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Source,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithGLTFSceneImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::ClassParams = {
		&UDatasmithGLTFSceneImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithGLTFSceneImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithGLTFSceneImportData>()
	{
		return UDatasmithGLTFSceneImportData::StaticClass();
	}
	UDatasmithGLTFSceneImportData::UDatasmithGLTFSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithGLTFSceneImportData);
	UDatasmithGLTFSceneImportData::~UDatasmithGLTFSceneImportData() {}
	void UDatasmithStaticMeshGLTFImportData::StaticRegisterNativesUDatasmithStaticMeshGLTFImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithStaticMeshGLTFImportData);
	UClass* Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_NoRegister()
	{
		return UDatasmithStaticMeshGLTFImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceMeshName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithStaticMeshImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::NewProp_SourceMeshName_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::NewProp_SourceMeshName = { "SourceMeshName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithStaticMeshGLTFImportData, SourceMeshName), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::NewProp_SourceMeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::NewProp_SourceMeshName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::NewProp_SourceMeshName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshGLTFImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::ClassParams = {
		&UDatasmithStaticMeshGLTFImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.OuterSingleton, Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshGLTFImportData>()
	{
		return UDatasmithStaticMeshGLTFImportData::StaticClass();
	}
	UDatasmithStaticMeshGLTFImportData::UDatasmithStaticMeshGLTFImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshGLTFImportData);
	UDatasmithStaticMeshGLTFImportData::~UDatasmithStaticMeshGLTFImportData() {}
	void UDatasmithFBXSceneImportData::StaticRegisterNativesUDatasmithFBXSceneImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithFBXSceneImportData);
	UClass* Z_Construct_UClass_UDatasmithFBXSceneImportData_NoRegister()
	{
		return UDatasmithFBXSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexturesDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TexturesDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateSerialization_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_IntermediateSerialization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bColorizeMaterials_MetaData[];
#endif
		static void NewProp_bColorizeMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bColorizeMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((UDatasmithFBXSceneImportData*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithFBXSceneImportData), &Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bGenerateLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_TexturesDir_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_TexturesDir = { "TexturesDir", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithFBXSceneImportData, TexturesDir), METADATA_PARAMS(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_TexturesDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_TexturesDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_IntermediateSerialization_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "// Corresponds to a EDatasmithFBXIntermediateSerializationType\n" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "Corresponds to a EDatasmithFBXIntermediateSerializationType" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_IntermediateSerialization = { "IntermediateSerialization", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithFBXSceneImportData, IntermediateSerialization), nullptr, METADATA_PARAMS(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_IntermediateSerialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_IntermediateSerialization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bColorizeMaterials_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bColorizeMaterials_SetBit(void* Obj)
	{
		((UDatasmithFBXSceneImportData*)Obj)->bColorizeMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bColorizeMaterials = { "bColorizeMaterials", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithFBXSceneImportData), &Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bColorizeMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bColorizeMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bColorizeMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_TexturesDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_IntermediateSerialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::NewProp_bColorizeMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithFBXSceneImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::ClassParams = {
		&UDatasmithFBXSceneImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithFBXSceneImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithFBXSceneImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithFBXSceneImportData>()
	{
		return UDatasmithFBXSceneImportData::StaticClass();
	}
	UDatasmithFBXSceneImportData::UDatasmithFBXSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithFBXSceneImportData);
	UDatasmithFBXSceneImportData::~UDatasmithFBXSceneImportData() {}
	void UDatasmithDeltaGenAssetImportData::StaticRegisterNativesUDatasmithDeltaGenAssetImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithDeltaGenAssetImportData);
	UClass* Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_NoRegister()
	{
		return UDatasmithDeltaGenAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithDeltaGenAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::ClassParams = {
		&UDatasmithDeltaGenAssetImportData::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithDeltaGenAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.OuterSingleton, Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithDeltaGenAssetImportData>()
	{
		return UDatasmithDeltaGenAssetImportData::StaticClass();
	}
	UDatasmithDeltaGenAssetImportData::UDatasmithDeltaGenAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithDeltaGenAssetImportData);
	UDatasmithDeltaGenAssetImportData::~UDatasmithDeltaGenAssetImportData() {}
	void UDatasmithDeltaGenSceneImportData::StaticRegisterNativesUDatasmithDeltaGenSceneImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithDeltaGenSceneImportData);
	UClass* Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_NoRegister()
	{
		return UDatasmithDeltaGenSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeNodes_MetaData[];
#endif
		static void NewProp_bMergeNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeDuplicatedNodes_MetaData[];
#endif
		static void NewProp_bOptimizeDuplicatedNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeDuplicatedNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveInvisibleNodes_MetaData[];
#endif
		static void NewProp_bRemoveInvisibleNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveInvisibleNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyNodeHierarchy_MetaData[];
#endif
		static void NewProp_bSimplifyNodeHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyNodeHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportVar_MetaData[];
#endif
		static void NewProp_bImportVar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportPos_MetaData[];
#endif
		static void NewProp_bImportPos_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PosPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportTml_MetaData[];
#endif
		static void NewProp_bImportTml_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportTml;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TmlPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TmlPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithFBXSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bMergeNodes_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bMergeNodes_SetBit(void* Obj)
	{
		((UDatasmithDeltaGenSceneImportData*)Obj)->bMergeNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bMergeNodes = { "bMergeNodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bMergeNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bMergeNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bMergeNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_SetBit(void* Obj)
	{
		((UDatasmithDeltaGenSceneImportData*)Obj)->bOptimizeDuplicatedNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes = { "bOptimizeDuplicatedNodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bRemoveInvisibleNodes_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bRemoveInvisibleNodes_SetBit(void* Obj)
	{
		((UDatasmithDeltaGenSceneImportData*)Obj)->bRemoveInvisibleNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bRemoveInvisibleNodes = { "bRemoveInvisibleNodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bRemoveInvisibleNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bRemoveInvisibleNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bRemoveInvisibleNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bSimplifyNodeHierarchy_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bSimplifyNodeHierarchy_SetBit(void* Obj)
	{
		((UDatasmithDeltaGenSceneImportData*)Obj)->bSimplifyNodeHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bSimplifyNodeHierarchy = { "bSimplifyNodeHierarchy", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bSimplifyNodeHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bSimplifyNodeHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bSimplifyNodeHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportVar_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportVar_SetBit(void* Obj)
	{
		((UDatasmithDeltaGenSceneImportData*)Obj)->bImportVar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportVar = { "bImportVar", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportVar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportVar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_VarPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_VarPath = { "VarPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDeltaGenSceneImportData, VarPath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_VarPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_VarPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportPos_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportPos_SetBit(void* Obj)
	{
		((UDatasmithDeltaGenSceneImportData*)Obj)->bImportPos = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportPos = { "bImportPos", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportPos_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_PosPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_PosPath = { "PosPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDeltaGenSceneImportData, PosPath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_PosPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_PosPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportTml_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportTml_SetBit(void* Obj)
	{
		((UDatasmithDeltaGenSceneImportData*)Obj)->bImportTml = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportTml = { "bImportTml", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithDeltaGenSceneImportData), &Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportTml_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportTml_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportTml_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_TmlPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_TmlPath = { "TmlPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDeltaGenSceneImportData, TmlPath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_TmlPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_TmlPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bMergeNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bRemoveInvisibleNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bSimplifyNodeHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_VarPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_PosPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_bImportTml,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::NewProp_TmlPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithDeltaGenSceneImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::ClassParams = {
		&UDatasmithDeltaGenSceneImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithDeltaGenSceneImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithDeltaGenSceneImportData>()
	{
		return UDatasmithDeltaGenSceneImportData::StaticClass();
	}
	UDatasmithDeltaGenSceneImportData::UDatasmithDeltaGenSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithDeltaGenSceneImportData);
	UDatasmithDeltaGenSceneImportData::~UDatasmithDeltaGenSceneImportData() {}
	void UDatasmithVREDAssetImportData::StaticRegisterNativesUDatasmithVREDAssetImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithVREDAssetImportData);
	UClass* Z_Construct_UClass_UDatasmithVREDAssetImportData_NoRegister()
	{
		return UDatasmithVREDAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithVREDAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::ClassParams = {
		&UDatasmithVREDAssetImportData::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithVREDAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.OuterSingleton, Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithVREDAssetImportData>()
	{
		return UDatasmithVREDAssetImportData::StaticClass();
	}
	UDatasmithVREDAssetImportData::UDatasmithVREDAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithVREDAssetImportData);
	UDatasmithVREDAssetImportData::~UDatasmithVREDAssetImportData() {}
	void UDatasmithVREDSceneImportData::StaticRegisterNativesUDatasmithVREDSceneImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithVREDSceneImportData);
	UClass* Z_Construct_UClass_UDatasmithVREDSceneImportData_NoRegister()
	{
		return UDatasmithVREDSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeNodes_MetaData[];
#endif
		static void NewProp_bMergeNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeDuplicatedNodes_MetaData[];
#endif
		static void NewProp_bOptimizeDuplicatedNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeDuplicatedNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMats_MetaData[];
#endif
		static void NewProp_bImportMats_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatsPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MatsPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportVar_MetaData[];
#endif
		static void NewProp_bImportVar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCleanVar_MetaData[];
#endif
		static void NewProp_bCleanVar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VarPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportLightInfo_MetaData[];
#endif
		static void NewProp_bImportLightInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportLightInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightInfoPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LightInfoPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportClipInfo_MetaData[];
#endif
		static void NewProp_bImportClipInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportClipInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipInfoPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClipInfoPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithFBXSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bMergeNodes_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bMergeNodes_SetBit(void* Obj)
	{
		((UDatasmithVREDSceneImportData*)Obj)->bMergeNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bMergeNodes = { "bMergeNodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bMergeNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bMergeNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bMergeNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_SetBit(void* Obj)
	{
		((UDatasmithVREDSceneImportData*)Obj)->bOptimizeDuplicatedNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes = { "bOptimizeDuplicatedNodes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportMats_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportMats_SetBit(void* Obj)
	{
		((UDatasmithVREDSceneImportData*)Obj)->bImportMats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportMats = { "bImportMats", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportMats_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportMats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportMats_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_MatsPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_MatsPath = { "MatsPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithVREDSceneImportData, MatsPath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_MatsPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_MatsPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportVar_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportVar_SetBit(void* Obj)
	{
		((UDatasmithVREDSceneImportData*)Obj)->bImportVar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportVar = { "bImportVar", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportVar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportVar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bCleanVar_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bCleanVar_SetBit(void* Obj)
	{
		((UDatasmithVREDSceneImportData*)Obj)->bCleanVar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bCleanVar = { "bCleanVar", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bCleanVar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bCleanVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bCleanVar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_VarPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_VarPath = { "VarPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithVREDSceneImportData, VarPath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_VarPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_VarPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportLightInfo_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportLightInfo_SetBit(void* Obj)
	{
		((UDatasmithVREDSceneImportData*)Obj)->bImportLightInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportLightInfo = { "bImportLightInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportLightInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportLightInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportLightInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_LightInfoPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_LightInfoPath = { "LightInfoPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithVREDSceneImportData, LightInfoPath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_LightInfoPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_LightInfoPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportClipInfo_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportClipInfo_SetBit(void* Obj)
	{
		((UDatasmithVREDSceneImportData*)Obj)->bImportClipInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportClipInfo = { "bImportClipInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithVREDSceneImportData), &Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportClipInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportClipInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportClipInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_ClipInfoPath_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_ClipInfoPath = { "ClipInfoPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithVREDSceneImportData, ClipInfoPath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_ClipInfoPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_ClipInfoPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bMergeNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bOptimizeDuplicatedNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportMats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_MatsPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bCleanVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_VarPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportLightInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_LightInfoPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_bImportClipInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::NewProp_ClipInfoPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithVREDSceneImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::ClassParams = {
		&UDatasmithVREDSceneImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithVREDSceneImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithVREDSceneImportData>()
	{
		return UDatasmithVREDSceneImportData::StaticClass();
	}
	UDatasmithVREDSceneImportData::UDatasmithVREDSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithVREDSceneImportData);
	UDatasmithVREDSceneImportData::~UDatasmithVREDSceneImportData() {}
	void UDatasmithIFCSceneImportData::StaticRegisterNativesUDatasmithIFCSceneImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithIFCSceneImportData);
	UClass* Z_Construct_UClass_UDatasmithIFCSceneImportData_NoRegister()
	{
		return UDatasmithIFCSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithIFCSceneImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::ClassParams = {
		&UDatasmithIFCSceneImportData::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithIFCSceneImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithIFCSceneImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithIFCSceneImportData.OuterSingleton, Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithIFCSceneImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithIFCSceneImportData>()
	{
		return UDatasmithIFCSceneImportData::StaticClass();
	}
	UDatasmithIFCSceneImportData::UDatasmithIFCSceneImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithIFCSceneImportData);
	UDatasmithIFCSceneImportData::~UDatasmithIFCSceneImportData() {}
	void UDatasmithStaticMeshIFCImportData::StaticRegisterNativesUDatasmithStaticMeshIFCImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithStaticMeshIFCImportData);
	UClass* Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_NoRegister()
	{
		return UDatasmithStaticMeshIFCImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceGlobalId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceGlobalId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithStaticMeshImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::NewProp_SourceGlobalId_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::NewProp_SourceGlobalId = { "SourceGlobalId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithStaticMeshIFCImportData, SourceGlobalId), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::NewProp_SourceGlobalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::NewProp_SourceGlobalId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::NewProp_SourceGlobalId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshIFCImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::ClassParams = {
		&UDatasmithStaticMeshIFCImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithStaticMeshIFCImportData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithStaticMeshIFCImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithStaticMeshIFCImportData.OuterSingleton, Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithStaticMeshIFCImportData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshIFCImportData>()
	{
		return UDatasmithStaticMeshIFCImportData::StaticClass();
	}
	UDatasmithStaticMeshIFCImportData::UDatasmithStaticMeshIFCImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshIFCImportData);
	UDatasmithStaticMeshIFCImportData::~UDatasmithStaticMeshIFCImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_Statics::ScriptStructInfo[] = {
		{ FDatasmithImportInfo::StaticStruct, Z_Construct_UScriptStruct_FDatasmithImportInfo_Statics::NewStructOps, TEXT("DatasmithImportInfo"), &Z_Registration_Info_UScriptStruct_DatasmithImportInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithImportInfo), 4009325863U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithAssetImportData, UDatasmithAssetImportData::StaticClass, TEXT("UDatasmithAssetImportData"), &Z_Registration_Info_UClass_UDatasmithAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithAssetImportData), 3245098835U) },
		{ Z_Construct_UClass_UDatasmithStaticMeshImportData, UDatasmithStaticMeshImportData::StaticClass, TEXT("UDatasmithStaticMeshImportData"), &Z_Registration_Info_UClass_UDatasmithStaticMeshImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithStaticMeshImportData), 3343640530U) },
		{ Z_Construct_UClass_UDatasmithStaticMeshCADImportData, UDatasmithStaticMeshCADImportData::StaticClass, TEXT("UDatasmithStaticMeshCADImportData"), &Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithStaticMeshCADImportData), 573786366U) },
		{ Z_Construct_UClass_UDatasmithSceneImportData, UDatasmithSceneImportData::StaticClass, TEXT("UDatasmithSceneImportData"), &Z_Registration_Info_UClass_UDatasmithSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithSceneImportData), 2601991522U) },
		{ Z_Construct_UClass_UDatasmithTranslatedSceneImportData, UDatasmithTranslatedSceneImportData::StaticClass, TEXT("UDatasmithTranslatedSceneImportData"), &Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithTranslatedSceneImportData), 1623845735U) },
		{ Z_Construct_UClass_UDatasmithCADImportSceneData, UDatasmithCADImportSceneData::StaticClass, TEXT("UDatasmithCADImportSceneData"), &Z_Registration_Info_UClass_UDatasmithCADImportSceneData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithCADImportSceneData), 2530515203U) },
		{ Z_Construct_UClass_UDatasmithMDLSceneImportData, UDatasmithMDLSceneImportData::StaticClass, TEXT("UDatasmithMDLSceneImportData"), &Z_Registration_Info_UClass_UDatasmithMDLSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithMDLSceneImportData), 102713910U) },
		{ Z_Construct_UClass_UDatasmithGLTFSceneImportData, UDatasmithGLTFSceneImportData::StaticClass, TEXT("UDatasmithGLTFSceneImportData"), &Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithGLTFSceneImportData), 2232478618U) },
		{ Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData, UDatasmithStaticMeshGLTFImportData::StaticClass, TEXT("UDatasmithStaticMeshGLTFImportData"), &Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithStaticMeshGLTFImportData), 2325991682U) },
		{ Z_Construct_UClass_UDatasmithFBXSceneImportData, UDatasmithFBXSceneImportData::StaticClass, TEXT("UDatasmithFBXSceneImportData"), &Z_Registration_Info_UClass_UDatasmithFBXSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithFBXSceneImportData), 1954105584U) },
		{ Z_Construct_UClass_UDatasmithDeltaGenAssetImportData, UDatasmithDeltaGenAssetImportData::StaticClass, TEXT("UDatasmithDeltaGenAssetImportData"), &Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithDeltaGenAssetImportData), 886164830U) },
		{ Z_Construct_UClass_UDatasmithDeltaGenSceneImportData, UDatasmithDeltaGenSceneImportData::StaticClass, TEXT("UDatasmithDeltaGenSceneImportData"), &Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithDeltaGenSceneImportData), 4170608204U) },
		{ Z_Construct_UClass_UDatasmithVREDAssetImportData, UDatasmithVREDAssetImportData::StaticClass, TEXT("UDatasmithVREDAssetImportData"), &Z_Registration_Info_UClass_UDatasmithVREDAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithVREDAssetImportData), 3816128951U) },
		{ Z_Construct_UClass_UDatasmithVREDSceneImportData, UDatasmithVREDSceneImportData::StaticClass, TEXT("UDatasmithVREDSceneImportData"), &Z_Registration_Info_UClass_UDatasmithVREDSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithVREDSceneImportData), 2038026185U) },
		{ Z_Construct_UClass_UDatasmithIFCSceneImportData, UDatasmithIFCSceneImportData::StaticClass, TEXT("UDatasmithIFCSceneImportData"), &Z_Registration_Info_UClass_UDatasmithIFCSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithIFCSceneImportData), 968363163U) },
		{ Z_Construct_UClass_UDatasmithStaticMeshIFCImportData, UDatasmithStaticMeshIFCImportData::StaticClass, TEXT("UDatasmithStaticMeshIFCImportData"), &Z_Registration_Info_UClass_UDatasmithStaticMeshIFCImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithStaticMeshIFCImportData), 3053743885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_1716789425(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetImportData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
