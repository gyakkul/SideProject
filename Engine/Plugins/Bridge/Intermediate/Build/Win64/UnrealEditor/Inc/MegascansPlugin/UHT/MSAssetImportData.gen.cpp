// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MSAssetImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSAssetImportData() {}
// Cross Module References
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FChannelPackedInfo();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeInfo();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMasterMaterialInfo();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceInfo();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParams();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialUsage();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTexturesList();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTextureUsage();
	MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUAssetMeta();
	UPackage* Z_Construct_UPackage__Script_MegascansPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialUsage;
class UScriptStruct* FMaterialUsage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialUsage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialUsage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialUsage, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("MaterialUsage"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialUsage.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMaterialUsage>()
{
	return FMaterialUsage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialUsage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instanceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_instanceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_materialSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialUsage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//Asset metadata\n" },
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
		{ "ToolTip", "Asset metadata" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialUsage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_instanceID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_instanceID = { "instanceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialUsage, instanceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_instanceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_instanceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_materialSlot_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_materialSlot = { "materialSlot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialUsage, materialSlot), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_materialSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_materialSlot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_instanceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_materialSlot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialUsage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"MaterialUsage",
		sizeof(FMaterialUsage),
		alignof(FMaterialUsage),
		Z_Construct_UScriptStruct_FMaterialUsage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialUsage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialUsage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialUsage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialUsage()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialUsage.InnerSingleton, Z_Construct_UScriptStruct_FMaterialUsage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialUsage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshInfo;
class UScriptStruct* FMeshInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshInfo, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("MeshInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MeshInfo.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMeshInfo>()
{
	return FMeshInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_meshID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_numberOfLods_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_numberOfLods;
		static const UECodeGen_Private::FStructPropertyParams NewProp_materialUsage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialUsage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_materialUsage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_meshID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_meshID = { "meshID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshInfo, meshID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_meshID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_meshID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_name_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshInfo, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshInfo, path), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_numberOfLods_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_numberOfLods = { "numberOfLods", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshInfo, numberOfLods), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_numberOfLods_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_numberOfLods_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_materialUsage_Inner = { "materialUsage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMaterialUsage, METADATA_PARAMS(nullptr, 0) }; // 34727236
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_materialUsage_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_materialUsage = { "materialUsage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshInfo, materialUsage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_materialUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_materialUsage_MetaData)) }; // 34727236
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_meshID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_numberOfLods,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_materialUsage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_materialUsage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"MeshInfo",
		sizeof(FMeshInfo),
		alignof(FMeshInfo),
		Z_Construct_UScriptStruct_FMeshInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshInfo.InnerSingleton, Z_Construct_UScriptStruct_FMeshInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FoliageTypeInfo;
class UScriptStruct* FFoliageTypeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FoliageTypeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FoliageTypeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliageTypeInfo, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("FoliageTypeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FoliageTypeInfo.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FFoliageTypeInfo>()
{
	return FFoliageTypeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliageTypeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFoliageTypeInfo, path), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::NewProp_path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::NewProp_path,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"FoliageTypeInfo",
		sizeof(FFoliageTypeInfo),
		alignof(FFoliageTypeInfo),
		Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_FoliageTypeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FoliageTypeInfo.InnerSingleton, Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FoliageTypeInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialParams;
class UScriptStruct* FMaterialParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParams, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("MaterialParams"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialParams.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMaterialParams>()
{
	return FMaterialParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paramName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_paramName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_usedTextureID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_usedTextureID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_paramName_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_paramName = { "paramName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialParams, paramName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_paramName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_paramName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_usedTextureID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_usedTextureID = { "usedTextureID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialParams, usedTextureID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_usedTextureID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_usedTextureID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_paramName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_usedTextureID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"MaterialParams",
		sizeof(FMaterialParams),
		alignof(FMaterialParams),
		Z_Construct_UScriptStruct_FMaterialParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialParams.InnerSingleton, Z_Construct_UScriptStruct_FMaterialParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialInstanceInfo;
class UScriptStruct* FMaterialInstanceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInstanceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialInstanceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceInfo, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("MaterialInstanceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialInstanceInfo.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMaterialInstanceInfo>()
{
	return FMaterialInstanceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instanceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_instanceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instanceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_instanceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instancePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_instancePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instanceMaster_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_instanceMaster;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
		static const UECodeGen_Private::FStructPropertyParams NewProp_params_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_params_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialInstanceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceID = { "instanceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialInstanceInfo, instanceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceName_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceName = { "instanceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialInstanceInfo, instanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instancePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instancePath = { "instancePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialInstanceInfo, instancePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instancePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instancePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceMaster_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceMaster = { "instanceMaster", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialInstanceInfo, instanceMaster), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceMaster_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceMaster_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_type_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialInstanceInfo, type), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_type_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_params_Inner = { "params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMaterialParams, METADATA_PARAMS(nullptr, 0) }; // 3501183266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_params_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialInstanceInfo, params), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_params_MetaData)) }; // 3501183266
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instancePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceMaster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_params_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_params,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"MaterialInstanceInfo",
		sizeof(FMaterialInstanceInfo),
		alignof(FMaterialInstanceInfo),
		Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialInstanceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialInstanceInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialInstanceInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MasterMaterialInfo;
class UScriptStruct* FMasterMaterialInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MasterMaterialInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MasterMaterialInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMasterMaterialInfo, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("MasterMaterialInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MasterMaterialInfo.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMasterMaterialInfo>()
{
	return FMasterMaterialInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_masterID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_masterID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_masterMaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_masterMaterialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMasterMaterialInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterID = { "masterID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMasterMaterialInfo, masterID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterMaterialName = { "masterMaterialName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMasterMaterialInfo, masterMaterialName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterMaterialName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMasterMaterialInfo, path), METADATA_PARAMS(Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterMaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_path,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"MasterMaterialInfo",
		sizeof(FMasterMaterialInfo),
		alignof(FMasterMaterialInfo),
		Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMasterMaterialInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MasterMaterialInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MasterMaterialInfo.InnerSingleton, Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MasterMaterialInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChannelPackedInfo;
class UScriptStruct* FChannelPackedInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChannelPackedInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChannelPackedInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChannelPackedInfo, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("ChannelPackedInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ChannelPackedInfo.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FChannelPackedInfo>()
{
	return FChannelPackedInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChannelPackedInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_packedType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_packedType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChannelPackedInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_channel_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelPackedInfo, channel), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_channel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_packedType_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_packedType = { "packedType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelPackedInfo, packedType), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_packedType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_packedType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_packedType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"ChannelPackedInfo",
		sizeof(FChannelPackedInfo),
		alignof(FChannelPackedInfo),
		Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChannelPackedInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ChannelPackedInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChannelPackedInfo.InnerSingleton, Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChannelPackedInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureUsage;
class UScriptStruct* FTextureUsage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureUsage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureUsage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureUsage, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("TextureUsage"));
	}
	return Z_Registration_Info_UScriptStruct_TextureUsage.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FTextureUsage>()
{
	return FTextureUsage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureUsage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_matID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_matID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_matParams_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_matParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureUsage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureUsage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureUsage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matID = { "matID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureUsage, matID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matParams_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matParams = { "matParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureUsage, matParams), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matParams_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matParams,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureUsage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"TextureUsage",
		sizeof(FTextureUsage),
		alignof(FTextureUsage),
		Z_Construct_UScriptStruct_FTextureUsage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureUsage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureUsage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureUsage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureUsage()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureUsage.InnerSingleton, Z_Construct_UScriptStruct_FTextureUsage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureUsage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TexturesList;
class UScriptStruct* FTexturesList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TexturesList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TexturesList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTexturesList, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("TexturesList"));
	}
	return Z_Registration_Info_UScriptStruct_TexturesList.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FTexturesList>()
{
	return FTexturesList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTexturesList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textureID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_textureID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isChannelPacked_MetaData[];
#endif
		static void NewProp_isChannelPacked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isChannelPacked;
		static const UECodeGen_Private::FStructPropertyParams NewProp_channelPackInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channelPackInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_channelPackInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_pluggedIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pluggedIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_pluggedIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturesList_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTexturesList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTexturesList>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_textureID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_textureID = { "textureID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTexturesList, textureID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_textureID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_textureID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_type_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTexturesList, type), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_resolution_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_resolution = { "resolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTexturesList, resolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_name_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTexturesList, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTexturesList, path), METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_isChannelPacked_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_isChannelPacked_SetBit(void* Obj)
	{
		((FTexturesList*)Obj)->isChannelPacked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_isChannelPacked = { "isChannelPacked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTexturesList), &Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_isChannelPacked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_isChannelPacked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_isChannelPacked_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_channelPackInfo_Inner = { "channelPackInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChannelPackedInfo, METADATA_PARAMS(nullptr, 0) }; // 3426448670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_channelPackInfo_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_channelPackInfo = { "channelPackInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTexturesList, channelPackInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_channelPackInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_channelPackInfo_MetaData)) }; // 3426448670
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_pluggedIn_Inner = { "pluggedIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTextureUsage, METADATA_PARAMS(nullptr, 0) }; // 4290994698
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_pluggedIn_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_pluggedIn = { "pluggedIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTexturesList, pluggedIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_pluggedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_pluggedIn_MetaData)) }; // 4290994698
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTexturesList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_textureID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_isChannelPacked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_channelPackInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_channelPackInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_pluggedIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_pluggedIn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTexturesList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"TexturesList",
		sizeof(FTexturesList),
		alignof(FTexturesList),
		Z_Construct_UScriptStruct_FTexturesList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturesList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturesList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturesList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTexturesList()
	{
		if (!Z_Registration_Info_UScriptStruct_TexturesList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TexturesList.InnerSingleton, Z_Construct_UScriptStruct_FTexturesList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TexturesList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UAssetMeta;
class UScriptStruct* FUAssetMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UAssetMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UAssetMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUAssetMeta, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("UAssetMeta"));
	}
	return Z_Registration_Info_UScriptStruct_UAssetMeta.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FUAssetMeta>()
{
	return FUAssetMeta::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUAssetMeta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_assetID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_assetID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_assetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_assetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_assetType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_assetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_assetSubType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_assetSubType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_assetTier_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_assetTier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_assetRootPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_assetRootPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_meshList;
		static const UECodeGen_Private::FStrPropertyParams NewProp_foliageAssetPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_foliageAssetPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_foliageAssetPaths;
		static const UECodeGen_Private::FStructPropertyParams NewProp_materialInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_materialInstances;
		static const UECodeGen_Private::FStructPropertyParams NewProp_textureSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textureSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_textureSets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_masterMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_masterMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_masterMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUAssetMeta_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUAssetMeta>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetID = { "assetID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUAssetMeta, assetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetName = { "assetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUAssetMeta, assetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetType_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetType = { "assetType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUAssetMeta, assetType), METADATA_PARAMS(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetSubType_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetSubType = { "assetSubType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUAssetMeta, assetSubType), METADATA_PARAMS(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetSubType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetSubType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetTier_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetTier = { "assetTier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUAssetMeta, assetTier), METADATA_PARAMS(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetTier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetRootPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetRootPath = { "assetRootPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUAssetMeta, assetRootPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetRootPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetRootPath_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_meshList_Inner = { "meshList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeshInfo, METADATA_PARAMS(nullptr, 0) }; // 85039001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_meshList_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_meshList = { "meshList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUAssetMeta, meshList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_meshList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_meshList_MetaData)) }; // 85039001
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_foliageAssetPaths_Inner = { "foliageAssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_foliageAssetPaths_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_foliageAssetPaths = { "foliageAssetPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUAssetMeta, foliageAssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_foliageAssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_foliageAssetPaths_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_materialInstances_Inner = { "materialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMaterialInstanceInfo, METADATA_PARAMS(nullptr, 0) }; // 2053104540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_materialInstances_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_materialInstances = { "materialInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUAssetMeta, materialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_materialInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_materialInstances_MetaData)) }; // 2053104540
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_textureSets_Inner = { "textureSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTexturesList, METADATA_PARAMS(nullptr, 0) }; // 2994579680
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_textureSets_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_textureSets = { "textureSets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUAssetMeta, textureSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_textureSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_textureSets_MetaData)) }; // 2994579680
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_masterMaterials_Inner = { "masterMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMasterMaterialInfo, METADATA_PARAMS(nullptr, 0) }; // 930351020
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_masterMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_masterMaterials = { "masterMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUAssetMeta, masterMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_masterMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_masterMaterials_MetaData)) }; // 930351020
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUAssetMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetSubType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetTier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetRootPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_meshList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_meshList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_foliageAssetPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_foliageAssetPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_materialInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_materialInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_textureSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_textureSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_masterMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_masterMaterials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
		nullptr,
		&NewStructOps,
		"UAssetMeta",
		sizeof(FUAssetMeta),
		alignof(FUAssetMeta),
		Z_Construct_UScriptStruct_FUAssetMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUAssetMeta_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUAssetMeta()
	{
		if (!Z_Registration_Info_UScriptStruct_UAssetMeta.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UAssetMeta.InnerSingleton, Z_Construct_UScriptStruct_FUAssetMeta_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UAssetMeta.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Private_MSAssetImportData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Private_MSAssetImportData_h_Statics::ScriptStructInfo[] = {
		{ FMaterialUsage::StaticStruct, Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewStructOps, TEXT("MaterialUsage"), &Z_Registration_Info_UScriptStruct_MaterialUsage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialUsage), 34727236U) },
		{ FMeshInfo::StaticStruct, Z_Construct_UScriptStruct_FMeshInfo_Statics::NewStructOps, TEXT("MeshInfo"), &Z_Registration_Info_UScriptStruct_MeshInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshInfo), 85039001U) },
		{ FFoliageTypeInfo::StaticStruct, Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::NewStructOps, TEXT("FoliageTypeInfo"), &Z_Registration_Info_UScriptStruct_FoliageTypeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFoliageTypeInfo), 1644951788U) },
		{ FMaterialParams::StaticStruct, Z_Construct_UScriptStruct_FMaterialParams_Statics::NewStructOps, TEXT("MaterialParams"), &Z_Registration_Info_UScriptStruct_MaterialParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialParams), 3501183266U) },
		{ FMaterialInstanceInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewStructOps, TEXT("MaterialInstanceInfo"), &Z_Registration_Info_UScriptStruct_MaterialInstanceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialInstanceInfo), 2053104540U) },
		{ FMasterMaterialInfo::StaticStruct, Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewStructOps, TEXT("MasterMaterialInfo"), &Z_Registration_Info_UScriptStruct_MasterMaterialInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMasterMaterialInfo), 930351020U) },
		{ FChannelPackedInfo::StaticStruct, Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewStructOps, TEXT("ChannelPackedInfo"), &Z_Registration_Info_UScriptStruct_ChannelPackedInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChannelPackedInfo), 3426448670U) },
		{ FTextureUsage::StaticStruct, Z_Construct_UScriptStruct_FTextureUsage_Statics::NewStructOps, TEXT("TextureUsage"), &Z_Registration_Info_UScriptStruct_TextureUsage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureUsage), 4290994698U) },
		{ FTexturesList::StaticStruct, Z_Construct_UScriptStruct_FTexturesList_Statics::NewStructOps, TEXT("TexturesList"), &Z_Registration_Info_UScriptStruct_TexturesList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTexturesList), 2994579680U) },
		{ FUAssetMeta::StaticStruct, Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewStructOps, TEXT("UAssetMeta"), &Z_Registration_Info_UScriptStruct_UAssetMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUAssetMeta), 4216015958U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Private_MSAssetImportData_h_1413700827(TEXT("/Script/MegascansPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Private_MSAssetImportData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Private_MSAssetImportData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
