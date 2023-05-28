// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Data/ManifestUObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManifestUObject() {}
// Cross Module References
	BUILDPATCHSERVICES_API UClass* Z_Construct_UClass_UBuildPatchManifest();
	BUILDPATCHSERVICES_API UClass* Z_Construct_UClass_UBuildPatchManifest_NoRegister();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FChunkInfoData();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FChunkPartData();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomFieldData();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FFileManifestData();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FSHAHashData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_BuildPatchServices();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomFieldData;
class UScriptStruct* FCustomFieldData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomFieldData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomFieldData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomFieldData, (UObject*)Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("CustomFieldData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomFieldData.OuterSingleton;
}
template<> BUILDPATCHSERVICES_API UScriptStruct* StaticStruct<FCustomFieldData>()
{
	return FCustomFieldData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomFieldData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFieldData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomFieldData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomFieldData, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomFieldData, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomFieldData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomFieldData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
		nullptr,
		&NewStructOps,
		"CustomFieldData",
		sizeof(FCustomFieldData),
		alignof(FCustomFieldData),
		Z_Construct_UScriptStruct_FCustomFieldData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFieldData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFieldData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFieldData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomFieldData()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomFieldData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomFieldData.InnerSingleton, Z_Construct_UScriptStruct_FCustomFieldData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomFieldData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SHAHashData;
class UScriptStruct* FSHAHashData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SHAHashData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SHAHashData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSHAHashData, (UObject*)Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("SHAHashData"));
	}
	return Z_Registration_Info_UScriptStruct_SHAHashData.OuterSingleton;
}
template<> BUILDPATCHSERVICES_API UScriptStruct* StaticStruct<FSHAHashData>()
{
	return FSHAHashData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSHAHashData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHAHashData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSHAHashData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSHAHashData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHAHashData_Statics::NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSHAHashData_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Hash, FSHAHashData), nullptr, nullptr, STRUCT_OFFSET(FSHAHashData, Hash), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSHAHashData_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHAHashData_Statics::NewProp_Hash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSHAHashData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSHAHashData_Statics::NewProp_Hash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSHAHashData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
		nullptr,
		&NewStructOps,
		"SHAHashData",
		sizeof(FSHAHashData),
		alignof(FSHAHashData),
		Z_Construct_UScriptStruct_FSHAHashData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHAHashData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSHAHashData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSHAHashData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSHAHashData()
	{
		if (!Z_Registration_Info_UScriptStruct_SHAHashData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SHAHashData.InnerSingleton, Z_Construct_UScriptStruct_FSHAHashData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SHAHashData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkInfoData;
class UScriptStruct* FChunkInfoData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkInfoData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkInfoData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkInfoData, (UObject*)Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("ChunkInfoData"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkInfoData.OuterSingleton;
}
template<> BUILDPATCHSERVICES_API UScriptStruct* StaticStruct<FChunkInfoData>()
{
	return FChunkInfoData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChunkInfoData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_Hash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShaHash_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShaHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_FileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupNumber_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfoData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkInfoData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChunkInfoData, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChunkInfoData, Hash), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Hash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_ShaHash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_ShaHash = { "ShaHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChunkInfoData, ShaHash), Z_Construct_UScriptStruct_FSHAHashData, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_ShaHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_ShaHash_MetaData)) }; // 1683238732
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_FileSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChunkInfoData, FileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_FileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_FileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_GroupNumber_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_GroupNumber = { "GroupNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChunkInfoData, GroupNumber), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_GroupNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_GroupNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkInfoData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_ShaHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_FileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_GroupNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
		nullptr,
		&NewStructOps,
		"ChunkInfoData",
		sizeof(FChunkInfoData),
		alignof(FChunkInfoData),
		Z_Construct_UScriptStruct_FChunkInfoData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfoData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkInfoData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChunkInfoData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkInfoData.InnerSingleton, Z_Construct_UScriptStruct_FChunkInfoData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChunkInfoData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkPartData;
class UScriptStruct* FChunkPartData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkPartData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkPartData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkPartData, (UObject*)Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("ChunkPartData"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkPartData.OuterSingleton;
}
template<> BUILDPATCHSERVICES_API UScriptStruct* StaticStruct<FChunkPartData>()
{
	return FChunkPartData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChunkPartData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkPartData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkPartData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkPartData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChunkPartData, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChunkPartData, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChunkPartData, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkPartData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Size,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkPartData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
		nullptr,
		&NewStructOps,
		"ChunkPartData",
		sizeof(FChunkPartData),
		alignof(FChunkPartData),
		Z_Construct_UScriptStruct_FChunkPartData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPartData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkPartData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPartData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkPartData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChunkPartData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkPartData.InnerSingleton, Z_Construct_UScriptStruct_FChunkPartData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChunkPartData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FileManifestData;
class UScriptStruct* FFileManifestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FileManifestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FileManifestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileManifestData, (UObject*)Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("FileManifestData"));
	}
	return Z_Registration_Info_UScriptStruct_FileManifestData.OuterSingleton;
}
template<> BUILDPATCHSERVICES_API UScriptStruct* StaticStruct<FFileManifestData>()
{
	return FFileManifestData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFileManifestData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileHash_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FileHash;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FileChunkParts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileChunkParts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FileChunkParts;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstallTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstallTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstallTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnixExecutable_MetaData[];
#endif
		static void NewProp_bIsUnixExecutable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnixExecutable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SymlinkTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SymlinkTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[];
#endif
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompressed_MetaData[];
#endif
		static void NewProp_bIsCompressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFileManifestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileManifestData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_Filename_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFileManifestData, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileHash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileHash = { "FileHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFileManifestData, FileHash), Z_Construct_UScriptStruct_FSHAHashData, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileHash_MetaData)) }; // 1683238732
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts_Inner = { "FileChunkParts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChunkPartData, METADATA_PARAMS(nullptr, 0) }; // 2276829707
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts = { "FileChunkParts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFileManifestData, FileChunkParts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts_MetaData)) }; // 2276829707
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags_Inner = { "InstallTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags = { "InstallTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFileManifestData, InstallTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable_SetBit(void* Obj)
	{
		((FFileManifestData*)Obj)->bIsUnixExecutable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable = { "bIsUnixExecutable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFileManifestData), &Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_SymlinkTarget_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_SymlinkTarget = { "SymlinkTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFileManifestData, SymlinkTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_SymlinkTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_SymlinkTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((FFileManifestData*)Obj)->bIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFileManifestData), &Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed_SetBit(void* Obj)
	{
		((FFileManifestData*)Obj)->bIsCompressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed = { "bIsCompressed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFileManifestData), &Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFileManifestData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_SymlinkTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFileManifestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
		nullptr,
		&NewStructOps,
		"FileManifestData",
		sizeof(FFileManifestData),
		alignof(FFileManifestData),
		Z_Construct_UScriptStruct_FFileManifestData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFileManifestData()
	{
		if (!Z_Registration_Info_UScriptStruct_FileManifestData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FileManifestData.InnerSingleton, Z_Construct_UScriptStruct_FFileManifestData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FileManifestData.InnerSingleton;
	}
	void UBuildPatchManifest::StaticRegisterNativesUBuildPatchManifest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildPatchManifest);
	UClass* Z_Construct_UClass_UBuildPatchManifest_NoRegister()
	{
		return UBuildPatchManifest::StaticClass();
	}
	struct Z_Construct_UClass_UBuildPatchManifest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManifestFileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ManifestFileVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFileData_MetaData[];
#endif
		static void NewProp_bIsFileData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFileData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaunchExe_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LaunchExe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaunchCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LaunchCommand;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrereqIds_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrereqIds_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PrereqIds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrereqName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrereqName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrereqPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrereqPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrereqArgs_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrereqArgs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FileManifestList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileManifestList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FileManifestList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChunkList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomFields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomFields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomFields;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuildPatchManifest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Data/ManifestUObject.h" },
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ManifestFileVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ManifestFileVersion = { "ManifestFileVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildPatchManifest, ManifestFileVersion), nullptr, METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ManifestFileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ManifestFileVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData_SetBit(void* Obj)
	{
		((UBuildPatchManifest*)Obj)->bIsFileData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData = { "bIsFileData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBuildPatchManifest), &Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppID_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildPatchManifest, AppID), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildPatchManifest, AppName), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_BuildVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_BuildVersion = { "BuildVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildPatchManifest, BuildVersion), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_BuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_BuildVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchExe_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchExe = { "LaunchExe", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildPatchManifest, LaunchExe), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchExe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchExe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchCommand_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchCommand = { "LaunchCommand", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildPatchManifest, LaunchCommand), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchCommand_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds_ElementProp = { "PrereqIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds = { "PrereqIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildPatchManifest, PrereqIds), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqName = { "PrereqName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildPatchManifest, PrereqName), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqPath = { "PrereqPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildPatchManifest, PrereqPath), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqArgs_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqArgs = { "PrereqArgs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildPatchManifest, PrereqArgs), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqArgs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList_Inner = { "FileManifestList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFileManifestData, METADATA_PARAMS(nullptr, 0) }; // 3407565558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList = { "FileManifestList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildPatchManifest, FileManifestList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList_MetaData)) }; // 3407565558
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList_Inner = { "ChunkList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChunkInfoData, METADATA_PARAMS(nullptr, 0) }; // 582117373
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList = { "ChunkList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildPatchManifest, ChunkList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList_MetaData)) }; // 582117373
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields_Inner = { "CustomFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomFieldData, METADATA_PARAMS(nullptr, 0) }; // 1157926112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields = { "CustomFields", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildPatchManifest, CustomFields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields_MetaData)) }; // 1157926112
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuildPatchManifest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ManifestFileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_BuildVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchExe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqArgs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuildPatchManifest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildPatchManifest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildPatchManifest_Statics::ClassParams = {
		&UBuildPatchManifest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBuildPatchManifest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuildPatchManifest()
	{
		if (!Z_Registration_Info_UClass_UBuildPatchManifest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildPatchManifest.OuterSingleton, Z_Construct_UClass_UBuildPatchManifest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuildPatchManifest.OuterSingleton;
	}
	template<> BUILDPATCHSERVICES_API UClass* StaticClass<UBuildPatchManifest>()
	{
		return UBuildPatchManifest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildPatchManifest);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_Statics::ScriptStructInfo[] = {
		{ FCustomFieldData::StaticStruct, Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewStructOps, TEXT("CustomFieldData"), &Z_Registration_Info_UScriptStruct_CustomFieldData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomFieldData), 1157926112U) },
		{ FSHAHashData::StaticStruct, Z_Construct_UScriptStruct_FSHAHashData_Statics::NewStructOps, TEXT("SHAHashData"), &Z_Registration_Info_UScriptStruct_SHAHashData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSHAHashData), 1683238732U) },
		{ FChunkInfoData::StaticStruct, Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewStructOps, TEXT("ChunkInfoData"), &Z_Registration_Info_UScriptStruct_ChunkInfoData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkInfoData), 582117373U) },
		{ FChunkPartData::StaticStruct, Z_Construct_UScriptStruct_FChunkPartData_Statics::NewStructOps, TEXT("ChunkPartData"), &Z_Registration_Info_UScriptStruct_ChunkPartData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkPartData), 2276829707U) },
		{ FFileManifestData::StaticStruct, Z_Construct_UScriptStruct_FFileManifestData_Statics::NewStructOps, TEXT("FileManifestData"), &Z_Registration_Info_UScriptStruct_FileManifestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFileManifestData), 3407565558U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuildPatchManifest, UBuildPatchManifest::StaticClass, TEXT("UBuildPatchManifest"), &Z_Registration_Info_UClass_UBuildPatchManifest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildPatchManifest), 957034260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_2313548405(TEXT("/Script/BuildPatchServices"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Online_BuildPatchServices_Private_Data_ManifestUObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
