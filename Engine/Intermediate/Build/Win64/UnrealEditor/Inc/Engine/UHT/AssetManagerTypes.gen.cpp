// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/AssetManagerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetManagerTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPrimaryAssetCookRule();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetManagerSearchRules();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPrimaryAssetCookRule;
	static UEnum* EPrimaryAssetCookRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPrimaryAssetCookRule, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPrimaryAssetCookRule"));
		}
		return Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPrimaryAssetCookRule>()
	{
		return EPrimaryAssetCookRule_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::Enumerators[] = {
		{ "EPrimaryAssetCookRule::Unknown", (int64)EPrimaryAssetCookRule::Unknown },
		{ "EPrimaryAssetCookRule::NeverCook", (int64)EPrimaryAssetCookRule::NeverCook },
		{ "EPrimaryAssetCookRule::ProductionNeverCook", (int64)EPrimaryAssetCookRule::ProductionNeverCook },
		{ "EPrimaryAssetCookRule::DevelopmentCook", (int64)EPrimaryAssetCookRule::DevelopmentCook },
		{ "EPrimaryAssetCookRule::DevelopmentAlwaysProductionNeverCook", (int64)EPrimaryAssetCookRule::DevelopmentAlwaysProductionNeverCook },
		{ "EPrimaryAssetCookRule::DevelopmentAlwaysCook", (int64)EPrimaryAssetCookRule::DevelopmentAlwaysCook },
		{ "EPrimaryAssetCookRule::DevelopmentAlwaysProductionUnknownCook", (int64)EPrimaryAssetCookRule::DevelopmentAlwaysProductionUnknownCook },
		{ "EPrimaryAssetCookRule::AlwaysCook", (int64)EPrimaryAssetCookRule::AlwaysCook },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysCook.Comment", "/** Asset will always be cooked, in both production and development. */" },
		{ "AlwaysCook.Name", "EPrimaryAssetCookRule::AlwaysCook" },
		{ "AlwaysCook.ToolTip", "Asset will always be cooked, in both production and development." },
		{ "Comment", "/** Rule about when to cook/ship a primary asset */" },
		{ "DevelopmentAlwaysCook.Comment", "/** Legacy name equivalent to DevelopmentAlwaysProductionNeverCook */" },
		{ "DevelopmentAlwaysCook.Name", "EPrimaryAssetCookRule::DevelopmentAlwaysCook" },
		{ "DevelopmentAlwaysCook.ToolTip", "Legacy name equivalent to DevelopmentAlwaysProductionNeverCook" },
		{ "DevelopmentAlwaysProductionNeverCook.Comment", "/** Asset will always be cooked in development, but should never be cooked in a production build. */" },
		{ "DevelopmentAlwaysProductionNeverCook.Name", "EPrimaryAssetCookRule::DevelopmentAlwaysProductionNeverCook" },
		{ "DevelopmentAlwaysProductionNeverCook.ToolTip", "Asset will always be cooked in development, but should never be cooked in a production build." },
		{ "DevelopmentAlwaysProductionUnknownCook.Comment", "/**\n\x09 * Asset will always be cooked in development; nothing is known about whether it should cook in Production. It will cook\n\x09 * in production if something else depends on it.\n\x09 */" },
		{ "DevelopmentAlwaysProductionUnknownCook.Name", "EPrimaryAssetCookRule::DevelopmentAlwaysProductionUnknownCook" },
		{ "DevelopmentAlwaysProductionUnknownCook.ToolTip", "Asset will always be cooked in development; nothing is known about whether it should cook in Production. It will cook\nin production if something else depends on it." },
		{ "DevelopmentCook.Comment", "/** Legacy name equivalent to Production Never Cook */" },
		{ "DevelopmentCook.Name", "EPrimaryAssetCookRule::DevelopmentCook" },
		{ "DevelopmentCook.ToolTip", "Legacy name equivalent to Production Never Cook" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "NeverCook.Comment", "/** Asset should never be cooked/shipped in any situation. An error will be generated if something depends on it. */" },
		{ "NeverCook.Name", "EPrimaryAssetCookRule::NeverCook" },
		{ "NeverCook.ToolTip", "Asset should never be cooked/shipped in any situation. An error will be generated if something depends on it." },
		{ "ProductionNeverCook.Comment", "/** Asset will be cooked in development if something else depends on it, but will never be cooked in a production build. */" },
		{ "ProductionNeverCook.Name", "EPrimaryAssetCookRule::ProductionNeverCook" },
		{ "ProductionNeverCook.ToolTip", "Asset will be cooked in development if something else depends on it, but will never be cooked in a production build." },
		{ "ToolTip", "Rule about when to cook/ship a primary asset" },
		{ "Unknown.Comment", "/** Nothing is known about this asset specifically. It will cook in both Development and Production if something else depends on it. */" },
		{ "Unknown.Name", "EPrimaryAssetCookRule::Unknown" },
		{ "Unknown.ToolTip", "Nothing is known about this asset specifically. It will cook in both Development and Production if something else depends on it." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPrimaryAssetCookRule",
		"EPrimaryAssetCookRule",
		Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPrimaryAssetCookRule()
	{
		if (!Z_Registration_Info_UEnum_EPrimaryAssetCookRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPrimaryAssetCookRule.InnerSingleton, Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPrimaryAssetCookRule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PrimaryAssetRules;
class UScriptStruct* FPrimaryAssetRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PrimaryAssetRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PrimaryAssetRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetRules, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PrimaryAssetRules"));
	}
	return Z_Registration_Info_UScriptStruct_PrimaryAssetRules.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrimaryAssetRules>()
{
	return FPrimaryAssetRules::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyRecursively_MetaData[];
#endif
		static void NewProp_bApplyRecursively_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyRecursively;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CookRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CookRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure defining rules for what to do with assets, this is defined per type and can be overridden per asset */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Structure defining rules for what to do with assets, this is defined per type and can be overridden per asset" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimaryAssetRules>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Primary Assets with a higher priority will take precedence over lower priorities when assigning management for referenced assets. If priorities match, both will manage the same Secondary Asset. */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Primary Assets with a higher priority will take precedence over lower priorities when assigning management for referenced assets. If priorities match, both will manage the same Secondary Asset." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrimaryAssetRules, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_ChunkId_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Assets will be put into this Chunk ID specifically, if set to something other than -1. The default Chunk is Chunk 0. */" },
		{ "DisplayName", "Chunk ID" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Assets will be put into this Chunk ID specifically, if set to something other than -1. The default Chunk is Chunk 0." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_ChunkId = { "ChunkId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrimaryAssetRules, ChunkId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_ChunkId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_ChunkId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** If true, this rule will apply to all referenced Secondary Assets recursively, as long as they are not managed by a higher-priority Primary Asset. */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "If true, this rule will apply to all referenced Secondary Assets recursively, as long as they are not managed by a higher-priority Primary Asset." },
	};
#endif
	void Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively_SetBit(void* Obj)
	{
		((FPrimaryAssetRules*)Obj)->bApplyRecursively = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively = { "bApplyRecursively", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPrimaryAssetRules), &Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Rule describing when this asset should be cooked. */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Rule describing when this asset should be cooked." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule = { "CookRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrimaryAssetRules, CookRule), Z_Construct_UEnum_Engine_EPrimaryAssetCookRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule_MetaData)) }; // 545706995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_ChunkId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PrimaryAssetRules",
		sizeof(FPrimaryAssetRules),
		alignof(FPrimaryAssetRules),
		Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules()
	{
		if (!Z_Registration_Info_UScriptStruct_PrimaryAssetRules.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PrimaryAssetRules.InnerSingleton, Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PrimaryAssetRules.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo;
class UScriptStruct* FPrimaryAssetTypeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PrimaryAssetTypeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrimaryAssetTypeInfo>()
{
	return FPrimaryAssetTypeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PrimaryAssetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetBaseClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AssetBaseClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetBaseClassLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AssetBaseClassLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBlueprintClasses_MetaData[];
#endif
		static void NewProp_bHasBlueprintClasses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBlueprintClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnly_MetaData[];
#endif
		static void NewProp_bIsEditorOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnly;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Directories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Directories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Directories;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecificAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecificAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecificAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rules;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetScanPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetScanPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetScanPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDynamicAsset_MetaData[];
#endif
		static void NewProp_bIsDynamicAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfAssets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure with publicly exposed information about an asset type. These can be loaded out of a config file. */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Structure with publicly exposed information about an asset type. These can be loaded out of a config file." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimaryAssetTypeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_PrimaryAssetType_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** The logical name for this type of Primary Asset */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "The logical name for this type of Primary Asset" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_PrimaryAssetType = { "PrimaryAssetType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, PrimaryAssetType), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_PrimaryAssetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_PrimaryAssetType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "AssetType" },
		{ "Comment", "/** Base Class of all assets of this type */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Base Class of all assets of this type" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClass = { "AssetBaseClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetBaseClass), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClassLoaded_MetaData[] = {
		{ "Comment", "/** Base Class of all assets of this type */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Base Class of all assets of this type" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClassLoaded = { "AssetBaseClassLoaded", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetBaseClassLoaded), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClassLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClassLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** True if the assets loaded are blueprints classes, false if they are normal UObjects */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if the assets loaded are blueprints classes, false if they are normal UObjects" },
	};
#endif
	void Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses_SetBit(void* Obj)
	{
		((FPrimaryAssetTypeInfo*)Obj)->bHasBlueprintClasses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses = { "bHasBlueprintClasses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPrimaryAssetTypeInfo), &Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** True if this type is editor only. Disable this to consider content that is part of the engine or engine plugins. */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if this type is editor only. Disable this to consider content that is part of the engine or engine plugins." },
	};
#endif
	void Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly_SetBit(void* Obj)
	{
		((FPrimaryAssetTypeInfo*)Obj)->bIsEditorOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly = { "bIsEditorOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPrimaryAssetTypeInfo), &Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories_Inner = { "Directories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** Directories to search for this asset type */" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Directories to search for this asset type" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories = { "Directories", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, Directories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets_Inner = { "SpecificAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** Individual assets to scan */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Individual assets to scan" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets = { "SpecificAssets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, SpecificAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Default management rules for this type, individual assets can be overridden */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Default management rules for this type, individual assets can be overridden" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, Rules), Z_Construct_UScriptStruct_FPrimaryAssetRules, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Rules_MetaData)) }; // 3266167430
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths_Inner = { "AssetScanPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths_MetaData[] = {
		{ "Comment", "/** Combination of directories and individual assets to search for this asset type. Will have the Directories and Assets added to it but may include virtual paths */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Combination of directories and individual assets to search for this asset type. Will have the Directories and Assets added to it but may include virtual paths" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths = { "AssetScanPaths", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetScanPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset_MetaData[] = {
		{ "Comment", "/** True if this is an asset created at runtime that has no on disk representation. Cannot be set in config */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if this is an asset created at runtime that has no on disk representation. Cannot be set in config" },
	};
#endif
	void Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset_SetBit(void* Obj)
	{
		((FPrimaryAssetTypeInfo*)Obj)->bIsDynamicAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset = { "bIsDynamicAsset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPrimaryAssetTypeInfo), &Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_NumberOfAssets_MetaData[] = {
		{ "Comment", "/** Number of tracked assets of that type */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Number of tracked assets of that type" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_NumberOfAssets = { "NumberOfAssets", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrimaryAssetTypeInfo, NumberOfAssets), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_NumberOfAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_NumberOfAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_PrimaryAssetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClassLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Rules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_NumberOfAssets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PrimaryAssetTypeInfo",
		sizeof(FPrimaryAssetTypeInfo),
		alignof(FPrimaryAssetTypeInfo),
		Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo.InnerSingleton, Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetManagerSearchRules;
class UScriptStruct* FAssetManagerSearchRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetManagerSearchRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetManagerSearchRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetManagerSearchRules, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AssetManagerSearchRules"));
	}
	return Z_Registration_Info_UScriptStruct_AssetManagerSearchRules.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetManagerSearchRules>()
{
	return FAssetManagerSearchRules::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetScanPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetScanPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetScanPaths;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IncludePatterns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludePatterns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludePatterns;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludePatterns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludePatterns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludePatterns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetBaseClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AssetBaseClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBlueprintClasses_MetaData[];
#endif
		static void NewProp_bHasBlueprintClasses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBlueprintClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceSynchronousScan_MetaData[];
#endif
		static void NewProp_bForceSynchronousScan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSynchronousScan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipVirtualPathExpansion_MetaData[];
#endif
		static void NewProp_bSkipVirtualPathExpansion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipVirtualPathExpansion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipManagerIncludeCheck_MetaData[];
#endif
		static void NewProp_bSkipManagerIncludeCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipManagerIncludeCheck;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Rules for how to scan the asset registry for assets matching path and type descriptions */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Rules for how to scan the asset registry for assets matching path and type descriptions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetManagerSearchRules>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths_Inner = { "AssetScanPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** List of top-level directories and specific assets to search, must be paths starting with /, directories should not have a trailing / */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "List of top-level directories and specific assets to search, must be paths starting with /, directories should not have a trailing /" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths = { "AssetScanPaths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetManagerSearchRules, AssetScanPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns_Inner = { "IncludePatterns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Optional list of include wildcard patterns using * that will get matched against full package path. If there are any at least one of these must match */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Optional list of include wildcard patterns using * that will get matched against full package path. If there are any at least one of these must match" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns = { "IncludePatterns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetManagerSearchRules, IncludePatterns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns_Inner = { "ExcludePatterns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Optional list of exclude wildcard patterns that can use *, if any of these match it will be excluded */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Optional list of exclude wildcard patterns that can use *, if any of these match it will be excluded" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns = { "ExcludePatterns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetManagerSearchRules, ExcludePatterns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetBaseClass_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Assets must inherit from this class, for blueprints this should be the instance base class */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Assets must inherit from this class, for blueprints this should be the instance base class" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetBaseClass = { "AssetBaseClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetManagerSearchRules, AssetBaseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetBaseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetBaseClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** True if scanning for blueprints, false for all other assets */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if scanning for blueprints, false for all other assets" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses_SetBit(void* Obj)
	{
		((FAssetManagerSearchRules*)Obj)->bHasBlueprintClasses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses = { "bHasBlueprintClasses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAssetManagerSearchRules), &Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** True if this should force a synchronous scan of the disk even if an async scan is in progress */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if this should force a synchronous scan of the disk even if an async scan is in progress" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan_SetBit(void* Obj)
	{
		((FAssetManagerSearchRules*)Obj)->bForceSynchronousScan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan = { "bForceSynchronousScan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAssetManagerSearchRules), &Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** True if AssetScanPaths are real paths that do not need expansion */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if AssetScanPaths are real paths that do not need expansion" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion_SetBit(void* Obj)
	{
		((FAssetManagerSearchRules*)Obj)->bSkipVirtualPathExpansion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion = { "bSkipVirtualPathExpansion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAssetManagerSearchRules), &Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** True if this test should skip the ShouldIncludeInAssetSearch function on AssetManager */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if this test should skip the ShouldIncludeInAssetSearch function on AssetManager" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck_SetBit(void* Obj)
	{
		((FAssetManagerSearchRules*)Obj)->bSkipManagerIncludeCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck = { "bSkipManagerIncludeCheck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAssetManagerSearchRules), &Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetBaseClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AssetManagerSearchRules",
		sizeof(FAssetManagerSearchRules),
		alignof(FAssetManagerSearchRules),
		Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetManagerSearchRules()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetManagerSearchRules.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetManagerSearchRules.InnerSingleton, Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetManagerSearchRules.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_Statics::EnumInfo[] = {
		{ EPrimaryAssetCookRule_StaticEnum, TEXT("EPrimaryAssetCookRule"), &Z_Registration_Info_UEnum_EPrimaryAssetCookRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 545706995U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_Statics::ScriptStructInfo[] = {
		{ FPrimaryAssetRules::StaticStruct, Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewStructOps, TEXT("PrimaryAssetRules"), &Z_Registration_Info_UScriptStruct_PrimaryAssetRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrimaryAssetRules), 3266167430U) },
		{ FPrimaryAssetTypeInfo::StaticStruct, Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewStructOps, TEXT("PrimaryAssetTypeInfo"), &Z_Registration_Info_UScriptStruct_PrimaryAssetTypeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrimaryAssetTypeInfo), 4230382326U) },
		{ FAssetManagerSearchRules::StaticStruct, Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewStructOps, TEXT("AssetManagerSearchRules"), &Z_Registration_Info_UScriptStruct_AssetManagerSearchRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetManagerSearchRules), 2704440946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_307488928(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
