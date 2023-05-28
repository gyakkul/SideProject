// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomBindingAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomBindingAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAssetList();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAssetList_NoRegister();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGoomBindingGroupInfo();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo;
class UScriptStruct* FGoomBindingGroupInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoomBindingGroupInfo, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("GoomBindingGroupInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FGoomBindingGroupInfo>()
{
	return FGoomBindingGroupInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenRootCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RenRootCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenLODCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RenLODCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimRootCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SimRootCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimLODCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SimLODCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoomBindingGroupInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenRootCount_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Curve Count" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenRootCount = { "RenRootCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoomBindingGroupInfo, RenRootCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenRootCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenRootCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenLODCount_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Curve LOD" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenLODCount = { "RenLODCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoomBindingGroupInfo, RenLODCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenLODCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenLODCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimRootCount_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Guide Count" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimRootCount = { "SimRootCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoomBindingGroupInfo, SimRootCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimRootCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimRootCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimLODCount_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Guide LOD" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimLODCount = { "SimLODCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoomBindingGroupInfo, SimLODCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimLODCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimLODCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenRootCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenLODCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimRootCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimLODCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"GoomBindingGroupInfo",
		sizeof(FGoomBindingGroupInfo),
		alignof(FGoomBindingGroupInfo),
		Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoomBindingGroupInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo.InnerSingleton, Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomBindingMeshType;
	static UEnum* EGroomBindingMeshType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomBindingMeshType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomBindingMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomBindingMeshType"));
		}
		return Z_Registration_Info_UEnum_EGroomBindingMeshType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomBindingMeshType>()
	{
		return EGroomBindingMeshType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::Enumerators[] = {
		{ "EGroomBindingMeshType::SkeletalMesh", (int64)EGroomBindingMeshType::SkeletalMesh },
		{ "EGroomBindingMeshType::GeometryCache", (int64)EGroomBindingMeshType::GeometryCache },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enum that describes the type of mesh to bind to */" },
		{ "GeometryCache.Name", "EGroomBindingMeshType::GeometryCache" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
		{ "SkeletalMesh.Name", "EGroomBindingMeshType::SkeletalMesh" },
		{ "ToolTip", "Enum that describes the type of mesh to bind to" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomBindingMeshType",
		"EGroomBindingMeshType",
		Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType()
	{
		if (!Z_Registration_Info_UEnum_EGroomBindingMeshType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomBindingMeshType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomBindingMeshType.InnerSingleton;
	}
	void UGroomBindingAsset::StaticRegisterNativesUGroomBindingAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomBindingAsset);
	UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister()
	{
		return UGroomBindingAsset::StaticClass();
	}
	struct Z_Construct_UClass_UGroomBindingAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroomBindingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomBindingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroomBindingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Groom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Groom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceGeometryCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceGeometryCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGeometryCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetGeometryCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInterpolationPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInterpolationPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchingSection_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MatchingSection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomBindingAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements an asset that can be used to store binding information between a groom and a skeletal mesh\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GroomBindingAsset.h" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
		{ "ToolTip", "Implements an asset that can be used to store binding information between a groom and a skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Type of mesh to create groom binding for */" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
		{ "ToolTip", "Type of mesh to create groom binding for" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType = { "GroomBindingType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomBindingAsset, GroomBindingType), Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType, METADATA_PARAMS(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType_MetaData)) }; // 797963176
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_Groom_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Groom to bind. */" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
		{ "ToolTip", "Groom to bind." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x0014010000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomBindingAsset, Groom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_Groom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_Groom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceSkeletalMesh_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Skeletal mesh on which the groom has been authored. This is optional, and used only if the hair\n\x09\x09""binding is done a different mesh than the one which it has been authored */" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
		{ "ToolTip", "Skeletal mesh on which the groom has been authored. This is optional, and used only if the hair\n              binding is done a different mesh than the one which it has been authored" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceSkeletalMesh = { "SourceSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomBindingAsset, SourceSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetSkeletalMesh_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Skeletal mesh on which the groom is attached to. */" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
		{ "ToolTip", "Skeletal mesh on which the groom is attached to." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetSkeletalMesh = { "TargetSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomBindingAsset, TargetSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceGeometryCache_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceGeometryCache = { "SourceGeometryCache", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomBindingAsset, SourceGeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceGeometryCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceGeometryCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetGeometryCache_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetGeometryCache = { "TargetGeometryCache", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomBindingAsset, TargetGeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetGeometryCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetGeometryCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_NumInterpolationPoints_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Number of points used for the rbf interpolation */" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
		{ "ToolTip", "Number of points used for the rbf interpolation" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_NumInterpolationPoints = { "NumInterpolationPoints", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomBindingAsset, NumInterpolationPoints), METADATA_PARAMS(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_NumInterpolationPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_NumInterpolationPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_MatchingSection_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Number of points used for the rbf interpolation */" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
		{ "ToolTip", "Number of points used for the rbf interpolation" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_MatchingSection = { "MatchingSection", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomBindingAsset, MatchingSection), METADATA_PARAMS(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_MatchingSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_MatchingSection_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos_Inner = { "GroupInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGoomBindingGroupInfo, METADATA_PARAMS(nullptr, 0) }; // 451288319
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos_MetaData[] = {
		{ "Category", "HairGroups" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos = { "GroupInfos", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomBindingAsset, GroupInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos_MetaData)) }; // 451288319
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomBindingAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_Groom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceGeometryCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetGeometryCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_NumInterpolationPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_MatchingSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomBindingAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomBindingAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomBindingAsset_Statics::ClassParams = {
		&UGroomBindingAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroomBindingAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomBindingAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomBindingAsset()
	{
		if (!Z_Registration_Info_UClass_UGroomBindingAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomBindingAsset.OuterSingleton, Z_Construct_UClass_UGroomBindingAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomBindingAsset.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomBindingAsset>()
	{
		return UGroomBindingAsset::StaticClass();
	}
	UGroomBindingAsset::UGroomBindingAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomBindingAsset);
	UGroomBindingAsset::~UGroomBindingAsset() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGroomBindingAsset)
	void UGroomBindingAssetList::StaticRegisterNativesUGroomBindingAssetList()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomBindingAssetList);
	UClass* Z_Construct_UClass_UGroomBindingAssetList_NoRegister()
	{
		return UGroomBindingAssetList::StaticClass();
	}
	struct Z_Construct_UClass_UGroomBindingAssetList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomBindingAssetList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAssetList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GroomBindingAsset.h" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0014000000002041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomBindingAssetList, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomBindingAssetList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomBindingAssetList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomBindingAssetList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomBindingAssetList_Statics::ClassParams = {
		&UGroomBindingAssetList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroomBindingAssetList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAssetList_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomBindingAssetList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAssetList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomBindingAssetList()
	{
		if (!Z_Registration_Info_UClass_UGroomBindingAssetList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomBindingAssetList.OuterSingleton, Z_Construct_UClass_UGroomBindingAssetList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomBindingAssetList.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomBindingAssetList>()
	{
		return UGroomBindingAssetList::StaticClass();
	}
	UGroomBindingAssetList::UGroomBindingAssetList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomBindingAssetList);
	UGroomBindingAssetList::~UGroomBindingAssetList() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::EnumInfo[] = {
		{ EGroomBindingMeshType_StaticEnum, TEXT("EGroomBindingMeshType"), &Z_Registration_Info_UEnum_EGroomBindingMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 797963176U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::ScriptStructInfo[] = {
		{ FGoomBindingGroupInfo::StaticStruct, Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewStructOps, TEXT("GoomBindingGroupInfo"), &Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGoomBindingGroupInfo), 451288319U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomBindingAsset, UGroomBindingAsset::StaticClass, TEXT("UGroomBindingAsset"), &Z_Registration_Info_UClass_UGroomBindingAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomBindingAsset), 523164612U) },
		{ Z_Construct_UClass_UGroomBindingAssetList, UGroomBindingAssetList::StaticClass, TEXT("UGroomBindingAssetList"), &Z_Registration_Info_UClass_UGroomBindingAssetList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomBindingAssetList), 4014499030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_1486405918(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
