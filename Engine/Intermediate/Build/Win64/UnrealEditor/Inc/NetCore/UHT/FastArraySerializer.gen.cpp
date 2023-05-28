// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Net/Serialization/FastArraySerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastArraySerializer() {}
// Cross Module References
	NETCORE_API UEnum* Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_NetCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FastArraySerializerItem;
class UScriptStruct* FFastArraySerializerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FastArraySerializerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FastArraySerializerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFastArraySerializerItem, (UObject*)Z_Construct_UPackage__Script_NetCore(), TEXT("FastArraySerializerItem"));
	}
	return Z_Registration_Info_UScriptStruct_FastArraySerializerItem.OuterSingleton;
}
template<> NETCORE_API UScriptStruct* StaticStruct<FFastArraySerializerItem>()
{
	return FFastArraySerializerItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicationID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationKey_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicationKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MostRecentArrayReplicationKey_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MostRecentArrayReplicationKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base struct for items using Fast TArray Replication */" },
		{ "ModuleRelativePath", "Classes/Net/Serialization/FastArraySerializer.h" },
		{ "ToolTip", "Base struct for items using Fast TArray Replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFastArraySerializerItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Net/Serialization/FastArraySerializer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationID = { "ReplicationID", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFastArraySerializerItem, ReplicationID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Net/Serialization/FastArraySerializer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationKey = { "ReplicationKey", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFastArraySerializerItem, ReplicationKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Net/Serialization/FastArraySerializer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey = { "MostRecentArrayReplicationKey", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFastArraySerializerItem, MostRecentArrayReplicationKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_ReplicationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewProp_MostRecentArrayReplicationKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
		nullptr,
		&NewStructOps,
		"FastArraySerializerItem",
		sizeof(FFastArraySerializerItem),
		alignof(FFastArraySerializerItem),
		Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem()
	{
		if (!Z_Registration_Info_UScriptStruct_FastArraySerializerItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FastArraySerializerItem.InnerSingleton, Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FastArraySerializerItem.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags;
	static UEnum* EFastArraySerializerDeltaFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags, (UObject*)Z_Construct_UPackage__Script_NetCore(), TEXT("EFastArraySerializerDeltaFlags"));
		}
		return Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.OuterSingleton;
	}
	template<> NETCORE_API UEnum* StaticEnum<EFastArraySerializerDeltaFlags>()
	{
		return EFastArraySerializerDeltaFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags_Statics::Enumerators[] = {
		{ "EFastArraySerializerDeltaFlags::None", (int64)EFastArraySerializerDeltaFlags::None },
		{ "EFastArraySerializerDeltaFlags::HasBeenSerialized", (int64)EFastArraySerializerDeltaFlags::HasBeenSerialized },
		{ "EFastArraySerializerDeltaFlags::HasDeltaBeenRequested", (int64)EFastArraySerializerDeltaFlags::HasDeltaBeenRequested },
		{ "EFastArraySerializerDeltaFlags::IsUsingDeltaSerialization", (int64)EFastArraySerializerDeltaFlags::IsUsingDeltaSerialization },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags_Statics::Enum_MetaDataParams[] = {
		{ "HasBeenSerialized.Comment", "//! No flags.\n" },
		{ "HasBeenSerialized.Name", "EFastArraySerializerDeltaFlags::HasBeenSerialized" },
		{ "HasBeenSerialized.ToolTip", "! No flags." },
		{ "HasDeltaBeenRequested.Comment", "//! Set when serialization at least once (i.e., this struct has been written or read).\n" },
		{ "HasDeltaBeenRequested.Name", "EFastArraySerializerDeltaFlags::HasDeltaBeenRequested" },
		{ "HasDeltaBeenRequested.ToolTip", "! Set when serialization at least once (i.e., this struct has been written or read)." },
		{ "IsUsingDeltaSerialization.Comment", "//! Set if users requested Delta Serialization for this struct.\n" },
		{ "IsUsingDeltaSerialization.Name", "EFastArraySerializerDeltaFlags::IsUsingDeltaSerialization" },
		{ "IsUsingDeltaSerialization.ToolTip", "! Set if users requested Delta Serialization for this struct." },
		{ "ModuleRelativePath", "Classes/Net/Serialization/FastArraySerializer.h" },
		{ "None.Name", "EFastArraySerializerDeltaFlags::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NetCore,
		nullptr,
		"EFastArraySerializerDeltaFlags",
		"EFastArraySerializerDeltaFlags",
		Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags()
	{
		if (!Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.InnerSingleton, Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FastArraySerializer;
class UScriptStruct* FFastArraySerializer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FastArraySerializer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FastArraySerializer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFastArraySerializer, (UObject*)Z_Construct_UPackage__Script_NetCore(), TEXT("FastArraySerializer"));
	}
	return Z_Registration_Info_UScriptStruct_FastArraySerializer.OuterSingleton;
}
template<> NETCORE_API UScriptStruct* StaticStruct<FFastArraySerializer>()
{
	return FFastArraySerializer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFastArraySerializer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayReplicationKey_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayReplicationKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeltaFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeltaFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base struct for wrapping the array used in Fast TArray Replication */" },
		{ "ModuleRelativePath", "Classes/Net/Serialization/FastArraySerializer.h" },
		{ "ToolTip", "Base struct for wrapping the array used in Fast TArray Replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFastArraySerializer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_ArrayReplicationKey_MetaData[] = {
		{ "Comment", "/** Counter used to track array replication. */" },
		{ "ModuleRelativePath", "Classes/Net/Serialization/FastArraySerializer.h" },
		{ "ToolTip", "Counter used to track array replication." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_ArrayReplicationKey = { "ArrayReplicationKey", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFastArraySerializer, ArrayReplicationKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_ArrayReplicationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_ArrayReplicationKey_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Net/Serialization/FastArraySerializer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags = { "DeltaFlags", nullptr, (EPropertyFlags)0x0040000080002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFastArraySerializer, DeltaFlags), Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags_MetaData)) }; // 4213941022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFastArraySerializer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_ArrayReplicationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewProp_DeltaFlags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFastArraySerializer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
		nullptr,
		&NewStructOps,
		"FastArraySerializer",
		sizeof(FFastArraySerializer),
		alignof(FFastArraySerializer),
		Z_Construct_UScriptStruct_FFastArraySerializer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFastArraySerializer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer()
	{
		if (!Z_Registration_Info_UScriptStruct_FastArraySerializer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FastArraySerializer.InnerSingleton, Z_Construct_UScriptStruct_FFastArraySerializer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FastArraySerializer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h_Statics::EnumInfo[] = {
		{ EFastArraySerializerDeltaFlags_StaticEnum, TEXT("EFastArraySerializerDeltaFlags"), &Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4213941022U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h_Statics::ScriptStructInfo[] = {
		{ FFastArraySerializerItem::StaticStruct, Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewStructOps, TEXT("FastArraySerializerItem"), &Z_Registration_Info_UScriptStruct_FastArraySerializerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFastArraySerializerItem), 4211711067U) },
		{ FFastArraySerializer::StaticStruct, Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewStructOps, TEXT("FastArraySerializer"), &Z_Registration_Info_UScriptStruct_FastArraySerializer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFastArraySerializer), 3665465275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h_4061964809(TEXT("/Script/NetCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
