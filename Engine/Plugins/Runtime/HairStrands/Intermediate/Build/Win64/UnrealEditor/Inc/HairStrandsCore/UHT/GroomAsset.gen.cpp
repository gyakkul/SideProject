// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomAsset.h"
#include "../../Source/Runtime/Engine/Public/PerPlatformProperties.h"
#include "GroomAssetCards.h"
#include "GroomAssetInterpolation.h"
#include "GroomAssetMeshes.h"
#include "GroomAssetPhysics.h"
#include "GroomAssetRendering.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupInfo();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsInterpolation();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsLOD();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsMaterial();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsPhysics();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsRendering();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupInfo;
class UScriptStruct* FHairGroupInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupInfo, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupInfo.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupInfo>()
{
	return FHairGroupInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCurves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumGuides_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumGuides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCurveVertices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCurveVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumGuideVertices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumGuideVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCurveLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCurveLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxImportedWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxImportedWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupCardsID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupCardsID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupID_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupID = { "GroupID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupInfo, GroupID), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupInfo, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurves_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Curve Count" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurves = { "NumCurves", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupInfo, NumCurves), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuides_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Guide Count" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuides = { "NumGuides", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupInfo, NumGuides), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurveVertices_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Curve Vertex Count" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurveVertices = { "NumCurveVertices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupInfo, NumCurveVertices), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurveVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurveVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuideVertices_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Guide Vertex Count" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuideVertices = { "NumGuideVertices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupInfo, NumGuideVertices), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuideVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuideVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxCurveLength_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Length of the longest hair strands" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxCurveLength = { "MaxCurveLength", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupInfo, MaxCurveLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxCurveLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxCurveLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxImportedWidth_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Imported width (DCC) of the larget hair strands" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxImportedWidth = { "MaxImportedWidth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupInfo, MaxImportedWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxImportedWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxImportedWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupCardsID_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Card Group ID for split hair card generation" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupCardsID = { "GroupCardsID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupInfo, GroupCardsID), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupCardsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupCardsID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurveVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuideVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxCurveLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxImportedWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupCardsID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairGroupInfo",
		sizeof(FHairGroupInfo),
		alignof(FHairGroupInfo),
		Z_Construct_UScriptStruct_FHairGroupInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupInfo.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupsMaterial;
class UScriptStruct* FHairGroupsMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupsMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsMaterial, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupsMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsMaterial.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupsMaterial>()
{
	return FHairGroupsMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupsMaterial>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsMaterial, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsMaterial, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_SlotName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_SlotName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairGroupsMaterial",
		sizeof(FHairGroupsMaterial),
		alignof(FHairGroupsMaterial),
		Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupsMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupsMaterial.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupsMaterial.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHairGroupInfoWithVisibility>() == std::is_polymorphic<FHairGroupInfo>(), "USTRUCT FHairGroupInfoWithVisibility cannot be polymorphic unless super FHairGroupInfo is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility;
class UScriptStruct* FHairGroupInfoWithVisibility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupInfoWithVisibility"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupInfoWithVisibility>()
{
	return FHairGroupInfoWithVisibility::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupInfoWithVisibility>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** Toggle hair group visibility. This visibility flag is not persistent to the asset, and exists only as a preview/helper mechanism */" },
		{ "DisplayName", "Visible" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Toggle hair group visibility. This visibility flag is not persistent to the asset, and exists only as a preview/helper mechanism" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((FHairGroupInfoWithVisibility*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairGroupInfoWithVisibility), &Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		Z_Construct_UScriptStruct_FHairGroupInfo,
		&NewStructOps,
		"HairGroupInfoWithVisibility",
		sizeof(FHairGroupInfoWithVisibility),
		alignof(FHairGroupInfoWithVisibility),
		Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHairAtlasTextureType;
	static UEnum* EHairAtlasTextureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHairAtlasTextureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHairAtlasTextureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EHairAtlasTextureType"));
		}
		return Z_Registration_Info_UEnum_EHairAtlasTextureType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairAtlasTextureType>()
	{
		return EHairAtlasTextureType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::Enumerators[] = {
		{ "EHairAtlasTextureType::Depth", (int64)EHairAtlasTextureType::Depth },
		{ "EHairAtlasTextureType::Tangent", (int64)EHairAtlasTextureType::Tangent },
		{ "EHairAtlasTextureType::Attribute", (int64)EHairAtlasTextureType::Attribute },
		{ "EHairAtlasTextureType::Coverage", (int64)EHairAtlasTextureType::Coverage },
		{ "EHairAtlasTextureType::AuxilaryData", (int64)EHairAtlasTextureType::AuxilaryData },
		{ "EHairAtlasTextureType::Material", (int64)EHairAtlasTextureType::Material },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::Enum_MetaDataParams[] = {
		{ "Attribute.Name", "EHairAtlasTextureType::Attribute" },
		{ "AuxilaryData.Name", "EHairAtlasTextureType::AuxilaryData" },
		{ "BlueprintType", "true" },
		{ "Coverage.Name", "EHairAtlasTextureType::Coverage" },
		{ "Depth.Name", "EHairAtlasTextureType::Depth" },
		{ "Material.Name", "EHairAtlasTextureType::Material" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "Tangent.Name", "EHairAtlasTextureType::Tangent" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EHairAtlasTextureType",
		"EHairAtlasTextureType",
		Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType()
	{
		if (!Z_Registration_Info_UEnum_EHairAtlasTextureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHairAtlasTextureType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHairAtlasTextureType.InnerSingleton;
	}
	void UGroomAsset::StaticRegisterNativesUGroomAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomAsset);
	UClass* Z_Construct_UClass_UGroomAsset_NoRegister()
	{
		return UGroomAsset::StaticClass();
	}
	struct Z_Construct_UClass_UGroomAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsRendering_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsRendering_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsRendering;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsPhysics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsPhysics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsPhysics;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsInterpolation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsInterpolation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsInterpolation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsLOD_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsLOD_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsLOD;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsCards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsCards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsCards;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableGlobalInterpolation_MetaData[];
#endif
		static void NewProp_EnableGlobalInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGlobalInterpolation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HairInterpolationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairInterpolationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HairInterpolationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiggedSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RiggedSkeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeformedGroupSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeformedGroupSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeformedGroupSections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableBelowMinLodStripping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisableBelowMinLodStripping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectiveLODBias_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectiveLODBias_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectiveLODBias;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "HairRendering HairPhysics HairInterpolation" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements an asset that can be used to store hair strands\n */" },
		{ "HideCategories", "Object Hidden" },
		{ "IncludePath", "GroomAsset.h" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Implements an asset that can be used to store hair strands" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo_Inner = { "HairGroupsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility, METADATA_PARAMS(nullptr, 0) }; // 1743231223
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo_MetaData[] = {
		{ "Category", "HairInfo" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo = { "HairGroupsInfo", nullptr, (EPropertyFlags)0x0010000000002041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, HairGroupsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo_MetaData)) }; // 1743231223
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering_Inner = { "HairGroupsRendering", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHairGroupsRendering, METADATA_PARAMS(nullptr, 0) }; // 2327193286
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering_MetaData[] = {
		{ "Category", "HairRendering" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering = { "HairGroupsRendering", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, HairGroupsRendering), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering_MetaData)) }; // 2327193286
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics_Inner = { "HairGroupsPhysics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHairGroupsPhysics, METADATA_PARAMS(nullptr, 0) }; // 1095911762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics_MetaData[] = {
		{ "Category", "HairPhysics" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics = { "HairGroupsPhysics", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, HairGroupsPhysics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics_MetaData)) }; // 1095911762
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation_Inner = { "HairGroupsInterpolation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHairGroupsInterpolation, METADATA_PARAMS(nullptr, 0) }; // 3358068899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation_MetaData[] = {
		{ "Category", "HairInterpolation" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation = { "HairGroupsInterpolation", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, HairGroupsInterpolation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation_MetaData)) }; // 3358068899
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD_Inner = { "HairGroupsLOD", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHairGroupsLOD, METADATA_PARAMS(nullptr, 0) }; // 2812470900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD_MetaData[] = {
		{ "Category", "HairLOD" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD = { "HairGroupsLOD", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, HairGroupsLOD), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD_MetaData)) }; // 2812470900
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards_Inner = { "HairGroupsCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription, METADATA_PARAMS(nullptr, 0) }; // 4273660569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards_MetaData[] = {
		{ "Category", "HairCards" },
		{ "Comment", "/** Cards - Source description data */" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Cards - Source description data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards = { "HairGroupsCards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, HairGroupsCards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards_MetaData)) }; // 4273660569
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes_Inner = { "HairGroupsMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription, METADATA_PARAMS(nullptr, 0) }; // 2133016578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes_MetaData[] = {
		{ "Category", "HairMeshes" },
		{ "Comment", "/** Meshes - Source description data */" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Meshes - Source description data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes = { "HairGroupsMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, HairGroupsMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes_MetaData)) }; // 2133016578
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials_Inner = { "HairGroupsMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHairGroupsMaterial, METADATA_PARAMS(nullptr, 0) }; // 4162929462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials_MetaData[] = {
		{ "Category", "HairMaterials" },
		{ "Comment", "/** Meshes - Source description data */" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Meshes - Source description data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials = { "HairGroupsMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, HairGroupsMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials_MetaData)) }; // 4162929462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation_MetaData[] = {
		{ "Category", "HairInterpolation" },
		{ "DisplayName", "RBF Interpolation" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Enable radial basis function interpolation to be used instead of the local skin rigid transform (WIP)" },
	};
#endif
	void Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation_SetBit(void* Obj)
	{
		((UGroomAsset*)Obj)->EnableGlobalInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation = { "EnableGlobalInterpolation", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroomAsset), &Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType_MetaData[] = {
		{ "Category", "HairInterpolation" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Type of interpolation used (WIP)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType = { "HairInterpolationType", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, HairInterpolationType), Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType_MetaData)) }; // 2916579086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_RiggedSkeletalMesh_MetaData[] = {
		{ "Category", "HairInterpolation" },
		{ "Comment", "/** Deformed skeletal mesh that will drive the groom deformation/simulation. For creating this skeletal mesh, enable EnableDeformation within the interpolation settings*/" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Deformed skeletal mesh that will drive the groom deformation/simulation. For creating this skeletal mesh, enable EnableDeformation within the interpolation settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_RiggedSkeletalMesh = { "RiggedSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, RiggedSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_RiggedSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_RiggedSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections_Inner = { "DeformedGroupSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections_MetaData[] = {
		{ "Comment", "/** Deformed skeletal mesh mapping from groups to sections */" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Deformed skeletal mesh mapping from groups to sections" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections = { "DeformedGroupSections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, DeformedGroupSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_MinLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Minimum LOD to cook */" },
		{ "DisplayName", "Minimum LOD" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Minimum LOD to cook" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, MinLOD), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_MinLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_MinLOD_MetaData)) }; // 1463691826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_DisableBelowMinLodStripping_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** When true all LODs below MinLod will still be cooked */" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "When true all LODs below MinLod will still be cooked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_DisableBelowMinLodStripping = { "DisableBelowMinLodStripping", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, DisableBelowMinLodStripping), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_DisableBelowMinLodStripping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_DisableBelowMinLodStripping_MetaData)) }; // 3656766386
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias_Inner = { "EffectiveLODBias", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias_MetaData[] = {
		{ "Comment", "/** The LOD bias to use after LOD stripping, regardless of MinLOD. Computed at cook time */" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "The LOD bias to use after LOD stripping, regardless of MinLOD. Computed at cook time" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias = { "EffectiveLODBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, EffectiveLODBias), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Asset data to be used when re-importing */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Asset data to be used when re-importing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0014048000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomAsset, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_RiggedSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_MinLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_DisableBelowMinLodStripping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGroomAsset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UGroomAsset, IInterface_AssetUserData), false },  // 1283872964
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomAsset_Statics::ClassParams = {
		&UGroomAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroomAsset_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomAsset()
	{
		if (!Z_Registration_Info_UClass_UGroomAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomAsset.OuterSingleton, Z_Construct_UClass_UGroomAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomAsset.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomAsset>()
	{
		return UGroomAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomAsset);
	UGroomAsset::~UGroomAsset() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGroomAsset)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::EnumInfo[] = {
		{ EHairAtlasTextureType_StaticEnum, TEXT("EHairAtlasTextureType"), &Z_Registration_Info_UEnum_EHairAtlasTextureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1888104935U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::ScriptStructInfo[] = {
		{ FHairGroupInfo::StaticStruct, Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewStructOps, TEXT("HairGroupInfo"), &Z_Registration_Info_UScriptStruct_HairGroupInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupInfo), 1116759464U) },
		{ FHairGroupsMaterial::StaticStruct, Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewStructOps, TEXT("HairGroupsMaterial"), &Z_Registration_Info_UScriptStruct_HairGroupsMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupsMaterial), 4162929462U) },
		{ FHairGroupInfoWithVisibility::StaticStruct, Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewStructOps, TEXT("HairGroupInfoWithVisibility"), &Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupInfoWithVisibility), 1743231223U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomAsset, UGroomAsset::StaticClass, TEXT("UGroomAsset"), &Z_Registration_Info_UClass_UGroomAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomAsset), 874674817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_4227302753(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
