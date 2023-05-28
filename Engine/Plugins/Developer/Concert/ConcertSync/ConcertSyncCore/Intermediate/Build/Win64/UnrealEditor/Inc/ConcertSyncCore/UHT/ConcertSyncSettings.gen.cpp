// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertSyncSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertSyncSettings() {}
// Cross Module References
	CONCERTSYNCCORE_API UClass* Z_Construct_UClass_UConcertSyncConfig();
	CONCERTSYNCCORE_API UClass* Z_Construct_UClass_UConcertSyncConfig_NoRegister();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPackageClassFilter();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransactionClassFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransactionClassFilter;
class UScriptStruct* FTransactionClassFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransactionClassFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransactionClassFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransactionClassFilter, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("TransactionClassFilter"));
	}
	return Z_Registration_Info_UScriptStruct_TransactionClassFilter.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FTransactionClassFilter>()
{
	return FTransactionClassFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransactionClassFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectOuterClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectOuterClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransactionClassFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewProp_ObjectOuterClass_MetaData[] = {
		{ "Category", "Sync Settings" },
		{ "Comment", "/**\n\x09 *\x09Optional Outer Class that will allow object only if one of their outer match this class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
		{ "ToolTip", "Optional Outer Class that will allow object only if one of their outer match this class." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewProp_ObjectOuterClass = { "ObjectOuterClass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransactionClassFilter, ObjectOuterClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewProp_ObjectOuterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewProp_ObjectOuterClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewProp_ObjectClasses_Inner = { "ObjectClasses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewProp_ObjectClasses_MetaData[] = {
		{ "Category", "Sync Settings" },
		{ "Comment", "/**\n\x09 * Object classes to filter transaction object on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
		{ "ToolTip", "Object classes to filter transaction object on." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewProp_ObjectClasses = { "ObjectClasses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransactionClassFilter, ObjectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewProp_ObjectClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewProp_ObjectClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewProp_ObjectOuterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewProp_ObjectClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewProp_ObjectClasses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"TransactionClassFilter",
		sizeof(FTransactionClassFilter),
		alignof(FTransactionClassFilter),
		Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransactionClassFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_TransactionClassFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransactionClassFilter.InnerSingleton, Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransactionClassFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PackageClassFilter;
class UScriptStruct* FPackageClassFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PackageClassFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PackageClassFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPackageClassFilter, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("PackageClassFilter"));
	}
	return Z_Registration_Info_UScriptStruct_PackageClassFilter.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FPackageClassFilter>()
{
	return FPackageClassFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPackageClassFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetClass;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContentPaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackageClassFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPackageClassFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewProp_AssetClass_MetaData[] = {
		{ "Category", "Sync Settings" },
		{ "Comment", "/**\n\x09 *\x09Optional Class that will filter a specific asset type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
		{ "ToolTip", "Optional Class that will filter a specific asset type." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackageClassFilter, AssetClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewProp_AssetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewProp_AssetClass_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewProp_ContentPaths_Inner = { "ContentPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewProp_ContentPaths_MetaData[] = {
		{ "Category", "Sync Settings" },
		{ "Comment", "/**\n\x09 *  Paths on which package of a certain asset type will pass the filter, if no asset is specified all asset in those paths pass the filter\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
		{ "ToolTip", "Paths on which package of a certain asset type will pass the filter, if no asset is specified all asset in those paths pass the filter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewProp_ContentPaths = { "ContentPaths", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPackageClassFilter, ContentPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewProp_ContentPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewProp_ContentPaths_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPackageClassFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewProp_AssetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewProp_ContentPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewProp_ContentPaths,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPackageClassFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"PackageClassFilter",
		sizeof(FPackageClassFilter),
		alignof(FPackageClassFilter),
		Z_Construct_UScriptStruct_FPackageClassFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackageClassFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPackageClassFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackageClassFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPackageClassFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_PackageClassFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PackageClassFilter.InnerSingleton, Z_Construct_UScriptStruct_FPackageClassFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PackageClassFilter.InnerSingleton;
	}
	void UConcertSyncConfig::StaticRegisterNativesUConcertSyncConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConcertSyncConfig);
	UClass* Z_Construct_UClass_UConcertSyncConfig_NoRegister()
	{
		return UConcertSyncConfig::StaticClass();
	}
	struct Z_Construct_UClass_UConcertSyncConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInteractiveHotReload_MetaData[];
#endif
		static void NewProp_bInteractiveHotReload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteractiveHotReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPresenceInPIE_MetaData[];
#endif
		static void NewProp_bShowPresenceInPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPresenceInPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeAnnotationObjectChanges_MetaData[];
#endif
		static void NewProp_bIncludeAnnotationObjectChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAnnotationObjectChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotTransactionsPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapshotTransactionsPerSecond;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IncludeObjectClassFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeObjectClassFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludeObjectClassFilters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeTransactionClassFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeTransactionClassFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeTransactionClassFilters;
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_AllowedTransientProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTransientProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedTransientProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludePackageClassFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludePackageClassFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludePackageClassFilters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConcertSyncConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSyncConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConcertSyncSettings.h" },
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bInteractiveHotReload_MetaData[] = {
		{ "Category", "Transaction Settings" },
		{ "Comment", "/**\n\x09 * Should we ask before hot-reloading changed packages?\n\x09 * If disabled we will clobber any local changes when reloading packages.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
		{ "ToolTip", "Should we ask before hot-reloading changed packages?\nIf disabled we will clobber any local changes when reloading packages." },
	};
#endif
	void Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bInteractiveHotReload_SetBit(void* Obj)
	{
		((UConcertSyncConfig*)Obj)->bInteractiveHotReload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bInteractiveHotReload = { "bInteractiveHotReload", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertSyncConfig), &Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bInteractiveHotReload_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bInteractiveHotReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bInteractiveHotReload_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bShowPresenceInPIE_MetaData[] = {
		{ "Category", "Transaction Settings" },
		{ "Comment", "/**\n\x09 * Should we show presence when in PIE?\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
		{ "ToolTip", "Should we show presence when in PIE?" },
	};
#endif
	void Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bShowPresenceInPIE_SetBit(void* Obj)
	{
		((UConcertSyncConfig*)Obj)->bShowPresenceInPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bShowPresenceInPIE = { "bShowPresenceInPIE", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertSyncConfig), &Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bShowPresenceInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bShowPresenceInPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bShowPresenceInPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bIncludeAnnotationObjectChanges_MetaData[] = {
		{ "Category", "Transaction Settings" },
		{ "Comment", "/**\n\x09 * Should we include object changes that have been generated via a transaction annotation\n\x09 * (where possible), or should we send the entire transaction annotation blob instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
		{ "ToolTip", "Should we include object changes that have been generated via a transaction annotation\n(where possible), or should we send the entire transaction annotation blob instead." },
	};
#endif
	void Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bIncludeAnnotationObjectChanges_SetBit(void* Obj)
	{
		((UConcertSyncConfig*)Obj)->bIncludeAnnotationObjectChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bIncludeAnnotationObjectChanges = { "bIncludeAnnotationObjectChanges", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertSyncConfig), &Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bIncludeAnnotationObjectChanges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bIncludeAnnotationObjectChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bIncludeAnnotationObjectChanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_SnapshotTransactionsPerSecond_MetaData[] = {
		{ "Category", "Transaction Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * Number of snapshot transactions (eg, moving an object or dragging a slider) that should be sent per-second to other clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
		{ "ToolTip", "Number of snapshot transactions (eg, moving an object or dragging a slider) that should be sent per-second to other clients." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_SnapshotTransactionsPerSecond = { "SnapshotTransactionsPerSecond", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertSyncConfig, SnapshotTransactionsPerSecond), METADATA_PARAMS(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_SnapshotTransactionsPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_SnapshotTransactionsPerSecond_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_IncludeObjectClassFilters_Inner = { "IncludeObjectClassFilters", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransactionClassFilter, METADATA_PARAMS(nullptr, 0) }; // 1458806566
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_IncludeObjectClassFilters_MetaData[] = {
		{ "Category", "Transaction Settings" },
		{ "Comment", "/**\n\x09 * Array of Transaction class filter.\n\x09 * Only objects that pass those filters will be included in transaction updates.\n\x09 * @note If this is empty, then all class types will send transaction updates.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
		{ "ToolTip", "Array of Transaction class filter.\nOnly objects that pass those filters will be included in transaction updates.\n@note If this is empty, then all class types will send transaction updates." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_IncludeObjectClassFilters = { "IncludeObjectClassFilters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertSyncConfig, IncludeObjectClassFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_IncludeObjectClassFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_IncludeObjectClassFilters_MetaData)) }; // 1458806566
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludeTransactionClassFilters_Inner = { "ExcludeTransactionClassFilters", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransactionClassFilter, METADATA_PARAMS(nullptr, 0) }; // 1458806566
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludeTransactionClassFilters_MetaData[] = {
		{ "Category", "Transaction Settings" },
		{ "Comment", "/**\n\x09 * Array of additional Transaction class filter.\n\x09 * Objects that matches those filters, will prevent the whole transaction from propagation.\n\x09 * @note These filters takes precedence over the IncludeObjectClassFilters\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
		{ "ToolTip", "Array of additional Transaction class filter.\nObjects that matches those filters, will prevent the whole transaction from propagation.\n@note These filters takes precedence over the IncludeObjectClassFilters" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludeTransactionClassFilters = { "ExcludeTransactionClassFilters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertSyncConfig, ExcludeTransactionClassFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludeTransactionClassFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludeTransactionClassFilters_MetaData)) }; // 1458806566
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_AllowedTransientProperties_Inner = { "AllowedTransientProperties", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, &FProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_AllowedTransientProperties_MetaData[] = {
		{ "AllowedClasses", "/Script/CoreUObject.Property" },
		{ "Category", "Transaction Settings" },
		{ "Comment", "/**\n\x09 * Array of transient class properties that we should send transaction updates for even if usually filtered out.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
		{ "ToolTip", "Array of transient class properties that we should send transaction updates for even if usually filtered out." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_AllowedTransientProperties = { "AllowedTransientProperties", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertSyncConfig, AllowedTransientProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_AllowedTransientProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_AllowedTransientProperties_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludePackageClassFilters_Inner = { "ExcludePackageClassFilters", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPackageClassFilter, METADATA_PARAMS(nullptr, 0) }; // 955218234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludePackageClassFilters_MetaData[] = {
		{ "Category", "Package Settings" },
		{ "Comment", "/**\n\x09 * Array of package class filter.\n\x09 * Packages that matches those filters, will be excluded from propagating to the server when saved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSettings.h" },
		{ "ToolTip", "Array of package class filter.\nPackages that matches those filters, will be excluded from propagating to the server when saved." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludePackageClassFilters = { "ExcludePackageClassFilters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertSyncConfig, ExcludePackageClassFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludePackageClassFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludePackageClassFilters_MetaData)) }; // 955218234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConcertSyncConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bInteractiveHotReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bShowPresenceInPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_bIncludeAnnotationObjectChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_SnapshotTransactionsPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_IncludeObjectClassFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_IncludeObjectClassFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludeTransactionClassFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludeTransactionClassFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_AllowedTransientProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_AllowedTransientProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludePackageClassFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertSyncConfig_Statics::NewProp_ExcludePackageClassFilters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConcertSyncConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConcertSyncConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConcertSyncConfig_Statics::ClassParams = {
		&UConcertSyncConfig::StaticClass,
		"ConcertSyncCore",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConcertSyncConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSyncConfig_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UConcertSyncConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertSyncConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConcertSyncConfig()
	{
		if (!Z_Registration_Info_UClass_UConcertSyncConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConcertSyncConfig.OuterSingleton, Z_Construct_UClass_UConcertSyncConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConcertSyncConfig.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UClass* StaticClass<UConcertSyncConfig>()
	{
		return UConcertSyncConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConcertSyncConfig);
	UConcertSyncConfig::~UConcertSyncConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_Statics::ScriptStructInfo[] = {
		{ FTransactionClassFilter::StaticStruct, Z_Construct_UScriptStruct_FTransactionClassFilter_Statics::NewStructOps, TEXT("TransactionClassFilter"), &Z_Registration_Info_UScriptStruct_TransactionClassFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransactionClassFilter), 1458806566U) },
		{ FPackageClassFilter::StaticStruct, Z_Construct_UScriptStruct_FPackageClassFilter_Statics::NewStructOps, TEXT("PackageClassFilter"), &Z_Registration_Info_UScriptStruct_PackageClassFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPackageClassFilter), 955218234U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConcertSyncConfig, UConcertSyncConfig::StaticClass, TEXT("UConcertSyncConfig"), &Z_Registration_Info_UClass_UConcertSyncConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConcertSyncConfig), 3550826309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_555198703(TEXT("/Script/ConcertSyncCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
