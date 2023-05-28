// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomAssetMeshes.h"
#include "GroomAssetCards.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomAssetMeshes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupCardsTextures();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupsMeshesSourceDescription;
class UScriptStruct* FHairGroupsMeshesSourceDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsMeshesSourceDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupsMeshesSourceDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupsMeshesSourceDescription"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsMeshesSourceDescription.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupsMeshesSourceDescription>()
{
	return FHairGroupsMeshesSourceDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Textures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedMeshKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportedMeshKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetMeshes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupsMeshesSourceDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "/* Deprecated */" },
		{ "ModuleRelativePath", "Public/GroomAssetMeshes.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsMeshesSourceDescription, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_MaterialSlotName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetMeshes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsMeshesSourceDescription, MaterialSlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_MaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_MaterialSlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_ImportedMesh_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetMeshes.h" },
		{ "ToolTip", "Mesh settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_ImportedMesh = { "ImportedMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsMeshesSourceDescription, ImportedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_ImportedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_ImportedMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "MeshesSource" },
		{ "ModuleRelativePath", "Public/GroomAssetMeshes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsMeshesSourceDescription, Textures), Z_Construct_UScriptStruct_FHairGroupCardsTextures, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_Textures_MetaData)) }; // 3802314929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "Category", "MeshesSource" },
		{ "Comment", "/* Group index on which this mesh geometry will be used (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead) */" },
		{ "ModuleRelativePath", "Public/GroomAssetMeshes.h" },
		{ "ToolTip", "Group index on which this mesh geometry will be used (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsMeshesSourceDescription, GroupIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_GroupIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "MeshesSource" },
		{ "Comment", "/* LOD on which this mesh geometry will be used. -1 means not used  (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead) */" },
		{ "ModuleRelativePath", "Public/GroomAssetMeshes.h" },
		{ "ToolTip", "LOD on which this mesh geometry will be used. -1 means not used  (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsMeshesSourceDescription, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_ImportedMeshKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAssetMeshes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_ImportedMeshKey = { "ImportedMeshKey", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsMeshesSourceDescription, ImportedMeshKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_ImportedMeshKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_ImportedMeshKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_MaterialSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_ImportedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_GroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewProp_ImportedMeshKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairGroupsMeshesSourceDescription",
		sizeof(FHairGroupsMeshesSourceDescription),
		alignof(FHairGroupsMeshesSourceDescription),
		Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupsMeshesSourceDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupsMeshesSourceDescription.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupsMeshesSourceDescription.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetMeshes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetMeshes_h_Statics::ScriptStructInfo[] = {
		{ FHairGroupsMeshesSourceDescription::StaticStruct, Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription_Statics::NewStructOps, TEXT("HairGroupsMeshesSourceDescription"), &Z_Registration_Info_UScriptStruct_HairGroupsMeshesSourceDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupsMeshesSourceDescription), 2133016578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetMeshes_h_1265861561(TEXT("/Script/HairStrandsCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetMeshes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetMeshes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
