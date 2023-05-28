// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataRegistryTypes.h"
#include "DataRegistryId.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataRegistryTypes() {}
// Cross Module References
	DATAREGISTRY_API UEnum* Z_Construct_UEnum_DataRegistry_EDataRegistryAcquireStatus();
	DATAREGISTRY_API UEnum* Z_Construct_UEnum_DataRegistry_EDataRegistryAvailability();
	DATAREGISTRY_API UFunction* Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature();
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryCachePolicy();
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryId();
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryIdFormat();
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryLookup();
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistrySourceItemId();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_DataRegistry();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataRegistryAvailability;
	static UEnum* EDataRegistryAvailability_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataRegistryAvailability.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataRegistryAvailability.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataRegistry_EDataRegistryAvailability, (UObject*)Z_Construct_UPackage__Script_DataRegistry(), TEXT("EDataRegistryAvailability"));
		}
		return Z_Registration_Info_UEnum_EDataRegistryAvailability.OuterSingleton;
	}
	template<> DATAREGISTRY_API UEnum* StaticEnum<EDataRegistryAvailability>()
	{
		return EDataRegistryAvailability_StaticEnum();
	}
	struct Z_Construct_UEnum_DataRegistry_EDataRegistryAvailability_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataRegistry_EDataRegistryAvailability_Statics::Enumerators[] = {
		{ "EDataRegistryAvailability::DoesNotExist", (int64)EDataRegistryAvailability::DoesNotExist },
		{ "EDataRegistryAvailability::Unknown", (int64)EDataRegistryAvailability::Unknown },
		{ "EDataRegistryAvailability::Remote", (int64)EDataRegistryAvailability::Remote },
		{ "EDataRegistryAvailability::OnDisk", (int64)EDataRegistryAvailability::OnDisk },
		{ "EDataRegistryAvailability::LocalAsset", (int64)EDataRegistryAvailability::LocalAsset },
		{ "EDataRegistryAvailability::PreCached", (int64)EDataRegistryAvailability::PreCached },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataRegistry_EDataRegistryAvailability_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** General rule about how hard it is to access an item, with later entries being the most available and faster to access */" },
		{ "DoesNotExist.Comment", "/** Item definitely does not exist */" },
		{ "DoesNotExist.Name", "EDataRegistryAvailability::DoesNotExist" },
		{ "DoesNotExist.ToolTip", "Item definitely does not exist" },
		{ "LocalAsset.Comment", "/** Comes from a local asset, can be sync loaded as needed */" },
		{ "LocalAsset.Name", "EDataRegistryAvailability::LocalAsset" },
		{ "LocalAsset.ToolTip", "Comes from a local asset, can be sync loaded as needed" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "OnDisk.Comment", "/** From some other asset such as a json file available without internet access */" },
		{ "OnDisk.Name", "EDataRegistryAvailability::OnDisk" },
		{ "OnDisk.ToolTip", "From some other asset such as a json file available without internet access" },
		{ "PreCached.Comment", "/** This item has already been loaded into memory by a different system and is immediately available */" },
		{ "PreCached.Name", "EDataRegistryAvailability::PreCached" },
		{ "PreCached.ToolTip", "This item has already been loaded into memory by a different system and is immediately available" },
		{ "Remote.Comment", "/** From a database or website with very high latency */" },
		{ "Remote.Name", "EDataRegistryAvailability::Remote" },
		{ "Remote.ToolTip", "From a database or website with very high latency" },
		{ "ToolTip", "General rule about how hard it is to access an item, with later entries being the most available and faster to access" },
		{ "Unknown.Comment", "/** Not sure where item is located or if it exists at all */" },
		{ "Unknown.Name", "EDataRegistryAvailability::Unknown" },
		{ "Unknown.ToolTip", "Not sure where item is located or if it exists at all" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataRegistry_EDataRegistryAvailability_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataRegistry,
		nullptr,
		"EDataRegistryAvailability",
		"EDataRegistryAvailability",
		Z_Construct_UEnum_DataRegistry_EDataRegistryAvailability_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataRegistry_EDataRegistryAvailability_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataRegistry_EDataRegistryAvailability_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataRegistry_EDataRegistryAvailability_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataRegistry_EDataRegistryAvailability()
	{
		if (!Z_Registration_Info_UEnum_EDataRegistryAvailability.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataRegistryAvailability.InnerSingleton, Z_Construct_UEnum_DataRegistry_EDataRegistryAvailability_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataRegistryAvailability.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataRegistryIdFormat;
class UScriptStruct* FDataRegistryIdFormat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataRegistryIdFormat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataRegistryIdFormat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataRegistryIdFormat, (UObject*)Z_Construct_UPackage__Script_DataRegistry(), TEXT("DataRegistryIdFormat"));
	}
	return Z_Registration_Info_UScriptStruct_DataRegistryIdFormat.OuterSingleton;
}
template<> DATAREGISTRY_API UScriptStruct* StaticStruct<FDataRegistryIdFormat>()
{
	return FDataRegistryIdFormat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseGameplayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseGameplayTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct representing how a unique id is formatted and picked in the editor */" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "ToolTip", "Struct representing how a unique id is formatted and picked in the editor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataRegistryIdFormat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::NewProp_BaseGameplayTag_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If this is not empty, all ids are part of this hierarchy */" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "ToolTip", "If this is not empty, all ids are part of this hierarchy" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::NewProp_BaseGameplayTag = { "BaseGameplayTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistryIdFormat, BaseGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::NewProp_BaseGameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::NewProp_BaseGameplayTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::NewProp_BaseGameplayTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
		nullptr,
		&NewStructOps,
		"DataRegistryIdFormat",
		sizeof(FDataRegistryIdFormat),
		alignof(FDataRegistryIdFormat),
		Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryIdFormat()
	{
		if (!Z_Registration_Info_UScriptStruct_DataRegistryIdFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataRegistryIdFormat.InnerSingleton, Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataRegistryIdFormat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataRegistryCachePolicy;
class UScriptStruct* FDataRegistryCachePolicy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataRegistryCachePolicy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataRegistryCachePolicy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataRegistryCachePolicy, (UObject*)Z_Construct_UPackage__Script_DataRegistry(), TEXT("DataRegistryCachePolicy"));
	}
	return Z_Registration_Info_UScriptStruct_DataRegistryCachePolicy.OuterSingleton;
}
template<> DATAREGISTRY_API UScriptStruct* StaticStruct<FDataRegistryCachePolicy>()
{
	return FDataRegistryCachePolicy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCacheIsAlwaysVolatile_MetaData[];
#endif
		static void NewProp_bCacheIsAlwaysVolatile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheIsAlwaysVolatile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurveTableCacheVersion_MetaData[];
#endif
		static void NewProp_bUseCurveTableCacheVersion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurveTableCacheVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinNumberKept_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinNumberKept;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberKept_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberKept;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceKeepSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceKeepSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceReleaseSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceReleaseSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Rules to use when deciding how to unload registry items and related assets */" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "ToolTip", "Rules to use when deciding how to unload registry items and related assets" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataRegistryCachePolicy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bCacheIsAlwaysVolatile_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** If this is true, the cache is always considered volatile when returning EDataRegistryCacheResult */" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "ToolTip", "If this is true, the cache is always considered volatile when returning EDataRegistryCacheResult" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bCacheIsAlwaysVolatile_SetBit(void* Obj)
	{
		((FDataRegistryCachePolicy*)Obj)->bCacheIsAlwaysVolatile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bCacheIsAlwaysVolatile = { "bCacheIsAlwaysVolatile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDataRegistryCachePolicy), &Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bCacheIsAlwaysVolatile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bCacheIsAlwaysVolatile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bCacheIsAlwaysVolatile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bUseCurveTableCacheVersion_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** If this is true, the cache version is synchronized with the global CurveTable cache version */" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "ToolTip", "If this is true, the cache version is synchronized with the global CurveTable cache version" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bUseCurveTableCacheVersion_SetBit(void* Obj)
	{
		((FDataRegistryCachePolicy*)Obj)->bUseCurveTableCacheVersion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bUseCurveTableCacheVersion = { "bUseCurveTableCacheVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDataRegistryCachePolicy), &Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bUseCurveTableCacheVersion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bUseCurveTableCacheVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bUseCurveTableCacheVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_MinNumberKept_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** Will not release items if fewer then this number loaded, 0 means infinite */" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "ToolTip", "Will not release items if fewer then this number loaded, 0 means infinite" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_MinNumberKept = { "MinNumberKept", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistryCachePolicy, MinNumberKept), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_MinNumberKept_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_MinNumberKept_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_MaxNumberKept_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** Maximum number of items to keep loaded, 0 means infinite */" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "ToolTip", "Maximum number of items to keep loaded, 0 means infinite" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_MaxNumberKept = { "MaxNumberKept", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistryCachePolicy, MaxNumberKept), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_MaxNumberKept_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_MaxNumberKept_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_ForceKeepSeconds_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** Any item accessed within this amount of seconds is never unloaded */" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "ToolTip", "Any item accessed within this amount of seconds is never unloaded" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_ForceKeepSeconds = { "ForceKeepSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistryCachePolicy, ForceKeepSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_ForceKeepSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_ForceKeepSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_ForceReleaseSeconds_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** Any item not accessed within this amount of seconds is always unloaded */" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "ToolTip", "Any item not accessed within this amount of seconds is always unloaded" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_ForceReleaseSeconds = { "ForceReleaseSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistryCachePolicy, ForceReleaseSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_ForceReleaseSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_ForceReleaseSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bCacheIsAlwaysVolatile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_bUseCurveTableCacheVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_MinNumberKept,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_MaxNumberKept,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_ForceKeepSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewProp_ForceReleaseSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
		nullptr,
		&NewStructOps,
		"DataRegistryCachePolicy",
		sizeof(FDataRegistryCachePolicy),
		alignof(FDataRegistryCachePolicy),
		Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryCachePolicy()
	{
		if (!Z_Registration_Info_UScriptStruct_DataRegistryCachePolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataRegistryCachePolicy.InnerSingleton, Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataRegistryCachePolicy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataRegistryLookup;
class UScriptStruct* FDataRegistryLookup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataRegistryLookup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataRegistryLookup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataRegistryLookup, (UObject*)Z_Construct_UPackage__Script_DataRegistry(), TEXT("DataRegistryLookup"));
	}
	return Z_Registration_Info_UScriptStruct_DataRegistryLookup.OuterSingleton;
}
template<> DATAREGISTRY_API UScriptStruct* StaticStruct<FDataRegistryLookup>()
{
	return FDataRegistryLookup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataRegistryLookup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistryLookup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A resolved unique id for a specific source, explains how to look it up. This type is opaque in blueprints and cannot be saved across runs */" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "ToolTip", "A resolved unique id for a specific source, explains how to look it up. This type is opaque in blueprints and cannot be saved across runs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataRegistryLookup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataRegistryLookup>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataRegistryLookup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
		nullptr,
		&NewStructOps,
		"DataRegistryLookup",
		sizeof(FDataRegistryLookup),
		alignof(FDataRegistryLookup),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistryLookup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistryLookup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryLookup()
	{
		if (!Z_Registration_Info_UScriptStruct_DataRegistryLookup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataRegistryLookup.InnerSingleton, Z_Construct_UScriptStruct_FDataRegistryLookup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataRegistryLookup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataRegistrySourceItemId;
class UScriptStruct* FDataRegistrySourceItemId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataRegistrySourceItemId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataRegistrySourceItemId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataRegistrySourceItemId, (UObject*)Z_Construct_UPackage__Script_DataRegistry(), TEXT("DataRegistrySourceItemId"));
	}
	return Z_Registration_Info_UScriptStruct_DataRegistrySourceItemId.OuterSingleton;
}
template<> DATAREGISTRY_API UScriptStruct* StaticStruct<FDataRegistrySourceItemId>()
{
	return FDataRegistrySourceItemId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataRegistrySourceItemId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistrySourceItemId_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A debugging/editor struct used to describe the source for a single data registry item */" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "ToolTip", "A debugging/editor struct used to describe the source for a single data registry item" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataRegistrySourceItemId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataRegistrySourceItemId>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataRegistrySourceItemId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
		nullptr,
		&NewStructOps,
		"DataRegistrySourceItemId",
		sizeof(FDataRegistrySourceItemId),
		alignof(FDataRegistrySourceItemId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistrySourceItemId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistrySourceItemId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataRegistrySourceItemId()
	{
		if (!Z_Registration_Info_UScriptStruct_DataRegistrySourceItemId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataRegistrySourceItemId.InnerSingleton, Z_Construct_UScriptStruct_FDataRegistrySourceItemId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataRegistrySourceItemId.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataRegistryAcquireStatus;
	static UEnum* EDataRegistryAcquireStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataRegistryAcquireStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataRegistryAcquireStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataRegistry_EDataRegistryAcquireStatus, (UObject*)Z_Construct_UPackage__Script_DataRegistry(), TEXT("EDataRegistryAcquireStatus"));
		}
		return Z_Registration_Info_UEnum_EDataRegistryAcquireStatus.OuterSingleton;
	}
	template<> DATAREGISTRY_API UEnum* StaticEnum<EDataRegistryAcquireStatus>()
	{
		return EDataRegistryAcquireStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_DataRegistry_EDataRegistryAcquireStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataRegistry_EDataRegistryAcquireStatus_Statics::Enumerators[] = {
		{ "EDataRegistryAcquireStatus::NotStarted", (int64)EDataRegistryAcquireStatus::NotStarted },
		{ "EDataRegistryAcquireStatus::WaitingForInitialAcquire", (int64)EDataRegistryAcquireStatus::WaitingForInitialAcquire },
		{ "EDataRegistryAcquireStatus::InitialAcquireFinished", (int64)EDataRegistryAcquireStatus::InitialAcquireFinished },
		{ "EDataRegistryAcquireStatus::WaitingForResources", (int64)EDataRegistryAcquireStatus::WaitingForResources },
		{ "EDataRegistryAcquireStatus::AcquireFinished", (int64)EDataRegistryAcquireStatus::AcquireFinished },
		{ "EDataRegistryAcquireStatus::AcquireError", (int64)EDataRegistryAcquireStatus::AcquireError },
		{ "EDataRegistryAcquireStatus::DoesNotExist", (int64)EDataRegistryAcquireStatus::DoesNotExist },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataRegistry_EDataRegistryAcquireStatus_Statics::Enum_MetaDataParams[] = {
		{ "AcquireError.Comment", "/** Failed to acquire, may have timed out or had network issues, can be retried later */" },
		{ "AcquireError.Name", "EDataRegistryAcquireStatus::AcquireError" },
		{ "AcquireError.ToolTip", "Failed to acquire, may have timed out or had network issues, can be retried later" },
		{ "AcquireFinished.Comment", "/** Fully loaded */" },
		{ "AcquireFinished.Name", "EDataRegistryAcquireStatus::AcquireFinished" },
		{ "AcquireFinished.ToolTip", "Fully loaded" },
		{ "Comment", "/** State of a registry async request */" },
		{ "DoesNotExist.Comment", "/** Known to not exist, cannot be retried */" },
		{ "DoesNotExist.Name", "EDataRegistryAcquireStatus::DoesNotExist" },
		{ "DoesNotExist.ToolTip", "Known to not exist, cannot be retried" },
		{ "InitialAcquireFinished.Comment", "/** Temporary state, finished acquiring data but need to check resources */" },
		{ "InitialAcquireFinished.Name", "EDataRegistryAcquireStatus::InitialAcquireFinished" },
		{ "InitialAcquireFinished.ToolTip", "Temporary state, finished acquiring data but need to check resources" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "NotStarted.Comment", "/** Not started yet */" },
		{ "NotStarted.Name", "EDataRegistryAcquireStatus::NotStarted" },
		{ "NotStarted.ToolTip", "Not started yet" },
		{ "ToolTip", "State of a registry async request" },
		{ "WaitingForInitialAcquire.Comment", "/** Initial acquire still in progress */" },
		{ "WaitingForInitialAcquire.Name", "EDataRegistryAcquireStatus::WaitingForInitialAcquire" },
		{ "WaitingForInitialAcquire.ToolTip", "Initial acquire still in progress" },
		{ "WaitingForResources.Comment", "/** Data requested and returned, still loading dependent resources */" },
		{ "WaitingForResources.Name", "EDataRegistryAcquireStatus::WaitingForResources" },
		{ "WaitingForResources.ToolTip", "Data requested and returned, still loading dependent resources" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataRegistry_EDataRegistryAcquireStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataRegistry,
		nullptr,
		"EDataRegistryAcquireStatus",
		"EDataRegistryAcquireStatus",
		Z_Construct_UEnum_DataRegistry_EDataRegistryAcquireStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataRegistry_EDataRegistryAcquireStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataRegistry_EDataRegistryAcquireStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataRegistry_EDataRegistryAcquireStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataRegistry_EDataRegistryAcquireStatus()
	{
		if (!Z_Registration_Info_UEnum_EDataRegistryAcquireStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataRegistryAcquireStatus.InnerSingleton, Z_Construct_UEnum_DataRegistry_EDataRegistryAcquireStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataRegistryAcquireStatus.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics
	{
		struct _Script_DataRegistry_eventDataRegistryItemAcquiredBPCallback_Parms
		{
			FDataRegistryId ItemId;
			FDataRegistryLookup ResolvedLookup;
			EDataRegistryAcquireStatus Status;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedLookup;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DataRegistry_eventDataRegistryItemAcquiredBPCallback_Parms, ItemId), Z_Construct_UScriptStruct_FDataRegistryId, METADATA_PARAMS(nullptr, 0) }; // 2704397205
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::NewProp_ResolvedLookup = { "ResolvedLookup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DataRegistry_eventDataRegistryItemAcquiredBPCallback_Parms, ResolvedLookup), Z_Construct_UScriptStruct_FDataRegistryLookup, METADATA_PARAMS(nullptr, 0) }; // 3506840247
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DataRegistry_eventDataRegistryItemAcquiredBPCallback_Parms, Status), Z_Construct_UEnum_DataRegistry_EDataRegistryAcquireStatus, METADATA_PARAMS(nullptr, 0) }; // 2186772546
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::NewProp_ResolvedLookup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Blueprint delegate called when item is loaded, you will need to re-query the cache */" },
		{ "ModuleRelativePath", "Public/DataRegistryTypes.h" },
		{ "ToolTip", "Blueprint delegate called when item is loaded, you will need to re-query the cache" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DataRegistry, nullptr, "DataRegistryItemAcquiredBPCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::_Script_DataRegistry_eventDataRegistryItemAcquiredBPCallback_Parms), Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDataRegistryItemAcquiredBPCallback_DelegateWrapper(const FScriptDelegate& DataRegistryItemAcquiredBPCallback, FDataRegistryId ItemId, FDataRegistryLookup ResolvedLookup, EDataRegistryAcquireStatus Status)
{
	struct _Script_DataRegistry_eventDataRegistryItemAcquiredBPCallback_Parms
	{
		FDataRegistryId ItemId;
		FDataRegistryLookup ResolvedLookup;
		EDataRegistryAcquireStatus Status;
	};
	_Script_DataRegistry_eventDataRegistryItemAcquiredBPCallback_Parms Parms;
	Parms.ItemId=ItemId;
	Parms.ResolvedLookup=ResolvedLookup;
	Parms.Status=Status;
	DataRegistryItemAcquiredBPCallback.ProcessDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_Statics::EnumInfo[] = {
		{ EDataRegistryAvailability_StaticEnum, TEXT("EDataRegistryAvailability"), &Z_Registration_Info_UEnum_EDataRegistryAvailability, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1053395457U) },
		{ EDataRegistryAcquireStatus_StaticEnum, TEXT("EDataRegistryAcquireStatus"), &Z_Registration_Info_UEnum_EDataRegistryAcquireStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2186772546U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_Statics::ScriptStructInfo[] = {
		{ FDataRegistryIdFormat::StaticStruct, Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics::NewStructOps, TEXT("DataRegistryIdFormat"), &Z_Registration_Info_UScriptStruct_DataRegistryIdFormat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataRegistryIdFormat), 2128307817U) },
		{ FDataRegistryCachePolicy::StaticStruct, Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics::NewStructOps, TEXT("DataRegistryCachePolicy"), &Z_Registration_Info_UScriptStruct_DataRegistryCachePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataRegistryCachePolicy), 2234887824U) },
		{ FDataRegistryLookup::StaticStruct, Z_Construct_UScriptStruct_FDataRegistryLookup_Statics::NewStructOps, TEXT("DataRegistryLookup"), &Z_Registration_Info_UScriptStruct_DataRegistryLookup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataRegistryLookup), 3506840247U) },
		{ FDataRegistrySourceItemId::StaticStruct, Z_Construct_UScriptStruct_FDataRegistrySourceItemId_Statics::NewStructOps, TEXT("DataRegistrySourceItemId"), &Z_Registration_Info_UScriptStruct_DataRegistrySourceItemId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataRegistrySourceItemId), 1612456335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_1327430657(TEXT("/Script/DataRegistry"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
