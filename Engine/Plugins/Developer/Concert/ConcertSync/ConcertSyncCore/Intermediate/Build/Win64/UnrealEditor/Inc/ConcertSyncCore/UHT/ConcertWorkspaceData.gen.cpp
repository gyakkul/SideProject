// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertWorkspaceData.h"
#include "ConcertMessageData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertWorkspaceData() {}
// Cross Module References
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertByteArray();
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertPackage();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertPackageInfo();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertPackageUpdateType;
	static UEnum* EConcertPackageUpdateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertPackageUpdateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertPackageUpdateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("EConcertPackageUpdateType"));
		}
		return Z_Registration_Info_UEnum_EConcertPackageUpdateType.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertPackageUpdateType>()
	{
		return EConcertPackageUpdateType_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType_Statics::Enumerators[] = {
		{ "EConcertPackageUpdateType::Dummy", (int64)EConcertPackageUpdateType::Dummy },
		{ "EConcertPackageUpdateType::Added", (int64)EConcertPackageUpdateType::Added },
		{ "EConcertPackageUpdateType::Saved", (int64)EConcertPackageUpdateType::Saved },
		{ "EConcertPackageUpdateType::Renamed", (int64)EConcertPackageUpdateType::Renamed },
		{ "EConcertPackageUpdateType::Deleted", (int64)EConcertPackageUpdateType::Deleted },
		{ "EConcertPackageUpdateType::Count", (int64)EConcertPackageUpdateType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType_Statics::Enum_MetaDataParams[] = {
		{ "Added.Comment", "/** This package has been added, but not yet saved */" },
		{ "Added.Name", "EConcertPackageUpdateType::Added" },
		{ "Added.ToolTip", "This package has been added, but not yet saved" },
		{ "Count.Name", "EConcertPackageUpdateType::Count" },
		{ "Deleted.Comment", "/** This package has been deleted */" },
		{ "Deleted.Name", "EConcertPackageUpdateType::Deleted" },
		{ "Deleted.ToolTip", "This package has been deleted" },
		{ "Dummy.Comment", "/** A dummy update, typically used to fence some transactions as no longer relevant */" },
		{ "Dummy.Name", "EConcertPackageUpdateType::Dummy" },
		{ "Dummy.ToolTip", "A dummy update, typically used to fence some transactions as no longer relevant" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
		{ "Renamed.Comment", "/** This package has been renamed (leaving a redirector) */" },
		{ "Renamed.Name", "EConcertPackageUpdateType::Renamed" },
		{ "Renamed.ToolTip", "This package has been renamed (leaving a redirector)" },
		{ "Saved.Comment", "/** This package has been saved */" },
		{ "Saved.Name", "EConcertPackageUpdateType::Saved" },
		{ "Saved.ToolTip", "This package has been saved" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"EConcertPackageUpdateType",
		"EConcertPackageUpdateType",
		Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType()
	{
		if (!Z_Registration_Info_UEnum_EConcertPackageUpdateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertPackageUpdateType.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertPackageUpdateType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertPackageInfo;
class UScriptStruct* FConcertPackageInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertPackageInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertPackageInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertPackageInfo, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertPackageInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertPackageInfo.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertPackageInfo>()
{
	return FConcertPackageInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertPackageInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewPackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageFileExtension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageFileExtension;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PackageUpdateType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageUpdateType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PackageUpdateType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionEventIdAtSave_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TransactionEventIdAtSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreSave_MetaData[];
#endif
		static void NewProp_bPreSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSave_MetaData[];
#endif
		static void NewProp_bAutoSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertPackageInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageName_MetaData[] = {
		{ "Comment", "/** The name of the package */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
		{ "ToolTip", "The name of the package" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackageInfo, PackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_NewPackageName_MetaData[] = {
		{ "Comment", "/** The new name of the package (if PackageUpdateType == EConcertPackageUpdateType::Renamed) */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
		{ "ToolTip", "The new name of the package (if PackageUpdateType == EConcertPackageUpdateType::Renamed)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_NewPackageName = { "NewPackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackageInfo, NewPackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_NewPackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_NewPackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_AssetClass_MetaData[] = {
		{ "Comment", "/** The class of the asset contained in this package. */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
		{ "ToolTip", "The class of the asset contained in this package." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackageInfo, AssetClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_AssetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_AssetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageFileExtension_MetaData[] = {
		{ "Comment", "/** The extension of the package file on disk (eg, .umap or .uasset) */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
		{ "ToolTip", "The extension of the package file on disk (eg, .umap or .uasset)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageFileExtension = { "PackageFileExtension", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackageInfo, PackageFileExtension), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageFileExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageFileExtension_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageUpdateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageUpdateType_MetaData[] = {
		{ "Comment", "/** What kind of package update is this? */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
		{ "ToolTip", "What kind of package update is this?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageUpdateType = { "PackageUpdateType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackageInfo, PackageUpdateType), Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageUpdateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageUpdateType_MetaData)) }; // 1910392113
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_TransactionEventIdAtSave_MetaData[] = {
		{ "Comment", "/** What was the max transaction event ID when this update was made? (to discard older transactions that applied to this package) */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
		{ "ToolTip", "What was the max transaction event ID when this update was made? (to discard older transactions that applied to this package)" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_TransactionEventIdAtSave = { "TransactionEventIdAtSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackageInfo, TransactionEventIdAtSave), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_TransactionEventIdAtSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_TransactionEventIdAtSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bPreSave_MetaData[] = {
		{ "Comment", "/** Was this update caused by a pre-save? */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
		{ "ToolTip", "Was this update caused by a pre-save?" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bPreSave_SetBit(void* Obj)
	{
		((FConcertPackageInfo*)Obj)->bPreSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bPreSave = { "bPreSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertPackageInfo), &Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bPreSave_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bPreSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bPreSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bAutoSave_MetaData[] = {
		{ "Comment", "/** Was this update caused by an auto-save? */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
		{ "ToolTip", "Was this update caused by an auto-save?" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bAutoSave_SetBit(void* Obj)
	{
		((FConcertPackageInfo*)Obj)->bAutoSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bAutoSave = { "bAutoSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertPackageInfo), &Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bAutoSave_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bAutoSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bAutoSave_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_NewPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_AssetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageFileExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageUpdateType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_PackageUpdateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_TransactionEventIdAtSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bPreSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewProp_bAutoSave,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertPackageInfo",
		sizeof(FConcertPackageInfo),
		alignof(FConcertPackageInfo),
		Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertPackageInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertPackageInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertPackageInfo.InnerSingleton, Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertPackageInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertPackage;
class UScriptStruct* FConcertPackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertPackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertPackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertPackage, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertPackage"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertPackage.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertPackage>()
{
	return FConcertPackage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertPackage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PackageData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertPackage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_Info_MetaData[] = {
		{ "Comment", "/** Contains information about the package event such as the package name, the event type, if this was triggered by an auto-save, etc. */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
		{ "ToolTip", "Contains information about the package event such as the package name, the event type, if this was triggered by an auto-save, etc." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackage, Info), Z_Construct_UScriptStruct_FConcertPackageInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_Info_MetaData)) }; // 1261909146
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_PackageData_MetaData[] = {
		{ "Comment", "/** Contains the package data, unless the package size was too large (according to the hard limit or a configuration). */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
		{ "ToolTip", "Contains the package data, unless the package size was too large (according to the hard limit or a configuration)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_PackageData = { "PackageData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackage, PackageData), Z_Construct_UScriptStruct_FConcertByteArray, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_PackageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_PackageData_MetaData)) }; // 3392847132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_FileId_MetaData[] = {
		{ "Comment", "/** A link to a file containing the data if the package size was too large to be directly embedded. The package data needs to be retrieved using IConcertFileSharingService interface.*/" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceData.h" },
		{ "ToolTip", "A link to a file containing the data if the package size was too large to be directly embedded. The package data needs to be retrieved using IConcertFileSharingService interface." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_FileId = { "FileId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackage, FileId), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_FileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_FileId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertPackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_Info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_PackageData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackage_Statics::NewProp_FileId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertPackage",
		sizeof(FConcertPackage),
		alignof(FConcertPackage),
		Z_Construct_UScriptStruct_FConcertPackage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertPackage()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertPackage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertPackage.InnerSingleton, Z_Construct_UScriptStruct_FConcertPackage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertPackage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_Statics::EnumInfo[] = {
		{ EConcertPackageUpdateType_StaticEnum, TEXT("EConcertPackageUpdateType"), &Z_Registration_Info_UEnum_EConcertPackageUpdateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1910392113U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_Statics::ScriptStructInfo[] = {
		{ FConcertPackageInfo::StaticStruct, Z_Construct_UScriptStruct_FConcertPackageInfo_Statics::NewStructOps, TEXT("ConcertPackageInfo"), &Z_Registration_Info_UScriptStruct_ConcertPackageInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertPackageInfo), 1261909146U) },
		{ FConcertPackage::StaticStruct, Z_Construct_UScriptStruct_FConcertPackage_Statics::NewStructOps, TEXT("ConcertPackage"), &Z_Registration_Info_UScriptStruct_ConcertPackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertPackage), 287183038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_3293557875(TEXT("/Script/ConcertSyncCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
