// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionObject.h"
#include "GeometryCollection/GeometryCollectionDamagePropagationData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionObject() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_ECollisionTypeEnum();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EImplicitTypeEnum();
	CHAOSSOLVERENGINE_API UEnum* Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSource();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionSource;
class UScriptStruct* FGeometryCollectionSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSource, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionSource"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionSource.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionSource>()
{
	return FGeometryCollectionSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceGeometryObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceGeometryObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceMaterial_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddInternalMaterials_MetaData[];
#endif
		static void NewProp_bAddInternalMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddInternalMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplitComponents_MetaData[];
#endif
		static void NewProp_bSplitComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionSource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceGeometryObject_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh, /Script/Engine.SkeletalMesh, /Script/GeometryCollectionEngine.GeometryCollection" },
		{ "Category", "GeometrySource" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceGeometryObject = { "SourceGeometryObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSource, SourceGeometryObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceGeometryObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceGeometryObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_LocalTransform_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSource, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_LocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_LocalTransform_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial_Inner = { "SourceMaterial", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial = { "SourceMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSource, SourceMaterial), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bAddInternalMaterials_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "Comment", "/** Whether source materials should be duplicated to create slots for internal materials. Does not apply if the source is a GeometryCollection. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Whether source materials should be duplicated to create slots for internal materials. Does not apply if the source is a GeometryCollection." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bAddInternalMaterials_SetBit(void* Obj)
	{
		((FGeometryCollectionSource*)Obj)->bAddInternalMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bAddInternalMaterials = { "bAddInternalMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryCollectionSource), &Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bAddInternalMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bAddInternalMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bAddInternalMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSplitComponents_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "Comment", "/** Whether individual source mesh components should be split into separate pieces of geometry based on mesh connectivity. If checked, triangles that are not topologically connected will be assigned separate bones. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Whether individual source mesh components should be split into separate pieces of geometry based on mesh connectivity. If checked, triangles that are not topologically connected will be assigned separate bones." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSplitComponents_SetBit(void* Obj)
	{
		((FGeometryCollectionSource*)Obj)->bSplitComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSplitComponents = { "bSplitComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryCollectionSource), &Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSplitComponents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSplitComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSplitComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceGeometryObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_LocalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bAddInternalMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_bSplitComponents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeometryCollectionSource",
		sizeof(FGeometryCollectionSource),
		alignof(FGeometryCollectionSource),
		Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSource()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCollectionSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionSource.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCollectionSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh;
class UScriptStruct* FGeometryCollectionAutoInstanceMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionAutoInstanceMesh"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionAutoInstanceMesh>()
{
	return FGeometryCollectionAutoInstanceMesh::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionAutoInstanceMesh>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh" },
		{ "Category", "AutoInstance" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionAutoInstanceMesh, StaticMesh), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "AutoInstance" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionAutoInstanceMesh, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_Materials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewProp_Materials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeometryCollectionAutoInstanceMesh",
		sizeof(FGeometryCollectionAutoInstanceMesh),
		alignof(FGeometryCollectionAutoInstanceMesh),
		Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar;
class UScriptStruct* FGeometryCollectionEmbeddedExemplar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionEmbeddedExemplar"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionEmbeddedExemplar>()
{
	return FGeometryCollectionEmbeddedExemplar::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshExemplar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshExemplar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionEmbeddedExemplar>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StaticMeshExemplar_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh" },
		{ "Category", "EmbeddedExemplar" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StaticMeshExemplar = { "StaticMeshExemplar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionEmbeddedExemplar, StaticMeshExemplar), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StaticMeshExemplar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StaticMeshExemplar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StartCullDistance_MetaData[] = {
		{ "Category", "EmbeddedExemplar" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionEmbeddedExemplar, StartCullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StartCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StartCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_EndCullDistance_MetaData[] = {
		{ "Category", "EmbeddedExemplar" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionEmbeddedExemplar, EndCullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_EndCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_EndCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_InstanceCount_MetaData[] = {
		{ "Category", "EmbeddedExemplar" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_InstanceCount = { "InstanceCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionEmbeddedExemplar, InstanceCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_InstanceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_InstanceCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StaticMeshExemplar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_StartCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_EndCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewProp_InstanceCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeometryCollectionEmbeddedExemplar",
		sizeof(FGeometryCollectionEmbeddedExemplar),
		alignof(FGeometryCollectionEmbeddedExemplar),
		Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData;
class UScriptStruct* FGeometryCollectionLevelSetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionLevelSetData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionLevelSetData>()
{
	return FGeometryCollectionLevelSetData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinLevelSetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevelSetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinClusterLevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinClusterLevelSetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevelSetResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionLevelSetData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinLevelSetResolution_MetaData[] = {
		{ "Category", "LevelSet" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 5)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinLevelSetResolution = { "MinLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionLevelSetData, MinLevelSetResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxLevelSetResolution_MetaData[] = {
		{ "Category", "LevelSet" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxLevelSetResolution = { "MaxLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionLevelSetData, MaxLevelSetResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinClusterLevelSetResolution_MetaData[] = {
		{ "Category", "LevelSet" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 5)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinClusterLevelSetResolution = { "MinClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionLevelSetData, MinClusterLevelSetResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinClusterLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinClusterLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxClusterLevelSetResolution_MetaData[] = {
		{ "Category", "LevelSet" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxClusterLevelSetResolution = { "MaxClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionLevelSetData, MaxClusterLevelSetResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxClusterLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxClusterLevelSetResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinLevelSetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxLevelSetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MinClusterLevelSetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewProp_MaxClusterLevelSetResolution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeometryCollectionLevelSetData",
		sizeof(FGeometryCollectionLevelSetData),
		alignof(FGeometryCollectionLevelSetData),
		Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData;
class UScriptStruct* FGeometryCollectionCollisionParticleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionCollisionParticleData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionCollisionParticleData>()
{
	return FGeometryCollectionCollisionParticleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionParticlesFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionParticlesFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumCollisionParticles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumCollisionParticles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionCollisionParticleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_CollisionParticlesFraction_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/**\n\x09 * Number of particles on the triangulated surface to use for collisions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Number of particles on the triangulated surface to use for collisions." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_CollisionParticlesFraction = { "CollisionParticlesFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionCollisionParticleData, CollisionParticlesFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_CollisionParticlesFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_CollisionParticlesFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_MaximumCollisionParticles_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/**\n\x09 * Max number of particles.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Max number of particles." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_MaximumCollisionParticles = { "MaximumCollisionParticles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionCollisionParticleData, MaximumCollisionParticles), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_MaximumCollisionParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_MaximumCollisionParticles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_CollisionParticlesFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewProp_MaximumCollisionParticles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeometryCollectionCollisionParticleData",
		sizeof(FGeometryCollectionCollisionParticleData),
		alignof(FGeometryCollectionCollisionParticleData),
		Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData;
class UScriptStruct* FGeometryCollectionCollisionTypeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionCollisionTypeData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionCollisionTypeData>()
{
	return FGeometryCollectionCollisionTypeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImplicitType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImplicitType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImplicitType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionParticles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectReductionPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionObjectReductionPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMarginFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionMarginFraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionCollisionTypeData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  CollisionType defines how to initialize the rigid collision structures.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionCollisionTypeData, CollisionType), Z_Construct_UEnum_Chaos_ECollisionTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionType_MetaData)) }; // 2773679451
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_ImplicitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_ImplicitType_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  CollisionType defines how to initialize the rigid collision structures.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_ImplicitType = { "ImplicitType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionCollisionTypeData, ImplicitType), Z_Construct_UEnum_Chaos_EImplicitTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_ImplicitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_ImplicitType_MetaData)) }; // 623206369
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_LevelSet_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  LevelSet Resolution data for rasterization.\n\x09*/" },
		{ "EditCondition", "ImplicitType == EImplicitTypeEnum::Chaos_Implicit_LevelSet" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  LevelSet Resolution data for rasterization." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_LevelSet = { "LevelSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionCollisionTypeData, LevelSet), Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_LevelSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_LevelSet_MetaData)) }; // 1060937764
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionParticles_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Collision Particle data for surface samples during Particle-LevelSet collisions.\n\x09*/" },
		{ "EditCondition", "CollisionType == ECollisionTypeEnum::Chaos_Surface_Volumetric" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Collision Particle data for surface samples during Particle-LevelSet collisions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionParticles = { "CollisionParticles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionCollisionTypeData, CollisionParticles), Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionParticles_MetaData)) }; // 2579370399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionObjectReductionPercentage_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Uniform scale on the collision body. (def: 0)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Uniform scale on the collision body. (def: 0)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionObjectReductionPercentage = { "CollisionObjectReductionPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionCollisionTypeData, CollisionObjectReductionPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionObjectReductionPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionObjectReductionPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionMarginFraction_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* A collision margin is a fraction of size used by some boxes and convex shapes to improve collision detection results.\n\x09* The core geometry of shapes that support a margin are reduced in size by the margin, and the margin\n\x09* is added back on during collision detection. The net result is a shape of the same size but with rounded corners.\n\x09*/" },
		{ "EditCondition", "ImplicitType == EImplicitTypeEnum::Chaos_Implicit_Convex || ImplicitType == EImplicitTypeEnum::Chaos_Implicit_Box" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "A collision margin is a fraction of size used by some boxes and convex shapes to improve collision detection results.\nThe core geometry of shapes that support a margin are reduced in size by the margin, and the margin\nis added back on during collision detection. The net result is a shape of the same size but with rounded corners." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionMarginFraction = { "CollisionMarginFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionCollisionTypeData, CollisionMarginFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionMarginFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionMarginFraction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_ImplicitType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_ImplicitType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_LevelSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionObjectReductionPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewProp_CollisionMarginFraction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeometryCollectionCollisionTypeData",
		sizeof(FGeometryCollectionCollisionTypeData),
		alignof(FGeometryCollectionCollisionTypeData),
		Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData;
class UScriptStruct* FGeometryCollectionSizeSpecificData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionSizeSpecificData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionSizeSpecificData>()
{
	return FGeometryCollectionSizeSpecificData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionShapes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionShapes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionShapes;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImplicitType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImplicitType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImplicitType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinLevelSetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevelSetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinClusterLevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinClusterLevelSetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevelSetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectReductionPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionObjectReductionPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionParticlesFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionParticlesFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumCollisionParticles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumCollisionParticles;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DamageThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionSizeSpecificData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxSize_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/** The max size these settings apply to*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "The max size these settings apply to" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MaxSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionShapes_Inner = { "CollisionShapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData, METADATA_PARAMS(nullptr, 0) }; // 3129606463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionShapes_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09* Collision Shapes allow kfor multiple collision types per rigid body. \n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "* Collision Shapes allow kfor multiple collision types per rigid body." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionShapes = { "CollisionShapes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, CollisionShapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionShapes_MetaData)) }; // 3129606463
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Comment", "/*\n\x09 *  CollisionType defines how to initialize the rigid collision structures.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.CollisionType instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, CollisionType_DEPRECATED), Z_Construct_UEnum_Chaos_ECollisionTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType_MetaData)) }; // 2773679451
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType_MetaData[] = {
		{ "Comment", "/*\n\x09 *  CollisionType defines how to initialize the rigid collision structures.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.ImplicitType instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType = { "ImplicitType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, ImplicitType_DEPRECATED), Z_Construct_UEnum_Chaos_EImplicitTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType_MetaData)) }; // 623206369
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09 *  Resolution on the smallest axes for the level set. (def: 5)\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.LevelSet.MinLevelSetResolution instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinLevelSetResolution = { "MinLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MinLevelSetResolution_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09 *  Resolution on the smallest axes for the level set. (def: 10)\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.LevelSet.MaxLevelSetResolution instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxLevelSetResolution = { "MaxLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MaxLevelSetResolution_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinClusterLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09 *  Resolution on the smallest axes for the level set. (def: 5)\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.LevelSet.MinClusterLevelSetResolution instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinClusterLevelSetResolution = { "MinClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MinClusterLevelSetResolution_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinClusterLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinClusterLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxClusterLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09 *  Resolution on the smallest axes for the level set. (def: 10)\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.LevelSet.MaxClusterLevelSetResolution instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxClusterLevelSetResolution = { "MaxClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MaxClusterLevelSetResolution_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxClusterLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxClusterLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionObjectReductionPercentage_MetaData[] = {
		{ "Comment", "/*\n\x09 *  Resolution on the smallest axes for the level set. (def: 10)\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.CollisionObjectReductionPercentage instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionObjectReductionPercentage = { "CollisionObjectReductionPercentage", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, CollisionObjectReductionPercentage_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionObjectReductionPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionObjectReductionPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionParticlesFraction_MetaData[] = {
		{ "Comment", "/**\n\x09 * Number of particles on the triangulated surface to use for collisions.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.CollisionParticlesFraction instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Number of particles on the triangulated surface to use for collisions." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionParticlesFraction = { "CollisionParticlesFraction", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, CollisionParticlesFraction_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionParticlesFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionParticlesFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaximumCollisionParticles_MetaData[] = {
		{ "Comment", "/**\n\x09 * Max number of particles.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Collision.MaximumCollisionParticles instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Max number of particles." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaximumCollisionParticles = { "MaximumCollisionParticles", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MaximumCollisionParticles_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaximumCollisionParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaximumCollisionParticles_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_DamageThreshold_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09 * Max number of particles.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Max number of particles." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_DamageThreshold = { "DamageThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, DamageThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_DamageThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_DamageThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionShapes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionShapes,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinLevelSetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxLevelSetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinClusterLevelSetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxClusterLevelSetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionObjectReductionPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionParticlesFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaximumCollisionParticles,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_DamageThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeometryCollectionSizeSpecificData",
		sizeof(FGeometryCollectionSizeSpecificData),
		alignof(FGeometryCollectionSizeSpecificData),
		Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData.InnerSingleton;
	}
	void UGeometryCollection::StaticRegisterNativesUGeometryCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollection);
	UClass* Z_Construct_UClass_UGeometryCollection_NoRegister()
	{
		return UGeometryCollection::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableClustering_MetaData[];
#endif
		static void NewProp_EnableClustering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableClustering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterGroupIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterGroupIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageThreshold_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DamageThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSizeSpecificDamageThreshold_MetaData[];
#endif
		static void NewProp_bUseSizeSpecificDamageThreshold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSizeSpecificDamageThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerClusterOnlyDamageThreshold_MetaData[];
#endif
		static void NewProp_PerClusterOnlyDamageThreshold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PerClusterOnlyDamageThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagePropagationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamagePropagationData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterConnectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterConnectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterConnectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionGraphBoundsFilteringMargin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConnectionGraphBoundsFilteringMargin;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometrySource_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometrySource_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometrySource;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmbeddedGeometryExemplar_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmbeddedGeometryExemplar_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EmbeddedGeometryExemplar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[];
#endif
		static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoInstanceMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoInstanceMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoInstanceMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootProxy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStripOnCook_MetaData[];
#endif
		static void NewProp_bStripOnCook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripOnCook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableNanite_MetaData[];
#endif
		static void NewProp_EnableNanite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableNanite;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImplicitType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImplicitType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImplicitType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinLevelSetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevelSetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinClusterLevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinClusterLevelSetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevelSetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectReductionPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionObjectReductionPercentage;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMassAsDensity_MetaData[];
#endif
		static void NewProp_bMassAsDensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMassAsDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumMassClamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumMassClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportCollisionFromSource_MetaData[];
#endif
		static void NewProp_bImportCollisionFromSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportCollisionFromSource;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionParticlesFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionParticlesFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumCollisionParticles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumCollisionParticles;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveOnMaxSleep_MetaData[];
#endif
		static void NewProp_bRemoveOnMaxSleep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveOnMaxSleep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumSleepTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumSleepTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovalDuration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSlowMovingAsSleeping_MetaData[];
#endif
		static void NewProp_bSlowMovingAsSleeping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlowMovingAsSleeping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlowMovingVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowMovingVelocityThreshold;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SizeSpecificData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeSpecificData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SizeSpecificData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableRemovePiecesOnFracture_MetaData[];
#endif
		static void NewProp_EnableRemovePiecesOnFracture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableRemovePiecesOnFracture;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RemoveOnFractureMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveOnFractureMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoveOnFractureMaterials;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailInfo;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataflowAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataflowAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataflowTerminal_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataflowTerminal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistentGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSelectedMaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneSelectedMaterialIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* UGeometryCollectionObject (UObject)\n*\n* UObject wrapper for the FGeometryCollection\n*\n*/" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionObject.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UGeometryCollectionObject (UObject)\n\nUObject wrapper for the FGeometryCollection" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering_MetaData[] = {
		{ "Category", "Clustering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->EnableClustering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering = { "EnableClustering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterGroupIndex_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** Maximum level for cluster breaks. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Maximum level for cluster breaks." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterGroupIndex = { "ClusterGroupIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, ClusterGroupIndex), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterGroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterGroupIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevel_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** Maximum level for cluster breaks. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Maximum level for cluster breaks." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevel = { "MaxClusterLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, MaxClusterLevel), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevel_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold_Inner = { "DamageThreshold", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** Damage threshold for clusters at different levels. */" },
		{ "EditCondition", "!bUseSizeSpecificDamageThreshold" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Damage threshold for clusters at different levels." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold = { "DamageThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, DamageThreshold), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseSizeSpecificDamageThreshold_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** whether to use size specific damage threshold instead of level based ones ( see Size Specific Data array ). */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "whether to use size specific damage threshold instead of level based ones ( see Size Specific Data array )." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseSizeSpecificDamageThreshold_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->bUseSizeSpecificDamageThreshold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseSizeSpecificDamageThreshold = { "bUseSizeSpecificDamageThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseSizeSpecificDamageThreshold_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseSizeSpecificDamageThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseSizeSpecificDamageThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PerClusterOnlyDamageThreshold_MetaData[] = {
		{ "Category", "Compatibility" },
		{ "Comment", "/** compatibility check, when true, only cluster compute damage from parameters and propagate to direct children\n\x09 *  when false, each child will compute it's damage threshold allowing for more precise and intuitive destruction behavior\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "compatibility check, when true, only cluster compute damage from parameters and propagate to direct children\nwhen false, each child will compute it's damage threshold allowing for more precise and intuitive destruction behavior" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PerClusterOnlyDamageThreshold_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->PerClusterOnlyDamageThreshold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PerClusterOnlyDamageThreshold = { "PerClusterOnlyDamageThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PerClusterOnlyDamageThreshold_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PerClusterOnlyDamageThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PerClusterOnlyDamageThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamagePropagationData_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** Data about how damage propagation shoudl behave. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Data about how damage propagation shoudl behave." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamagePropagationData = { "DamagePropagationData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, DamagePropagationData), Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamagePropagationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamagePropagationData_MetaData)) }; // 3866457733
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType = { "ClusterConnectionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, ClusterConnectionType), Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType_MetaData)) }; // 4036541358
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ConnectionGraphBoundsFilteringMargin_MetaData[] = {
		{ "Category", "Clustering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ConnectionGraphBoundsFilteringMargin = { "ConnectionGraphBoundsFilteringMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, ConnectionGraphBoundsFilteringMargin), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ConnectionGraphBoundsFilteringMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ConnectionGraphBoundsFilteringMargin_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource_Inner = { "GeometrySource", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryCollectionSource, METADATA_PARAMS(nullptr, 0) }; // 463373050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource = { "GeometrySource", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, GeometrySource), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource_MetaData)) }; // 463373050
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EmbeddedGeometryExemplar_Inner = { "EmbeddedGeometryExemplar", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar, METADATA_PARAMS(nullptr, 0) }; // 507740771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EmbeddedGeometryExemplar_MetaData[] = {
		{ "Category", "EmbeddedGeometry" },
		{ "Comment", "/** References for embedded geometry generation */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "References for embedded geometry generation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EmbeddedGeometryExemplar = { "EmbeddedGeometryExemplar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, EmbeddedGeometryExemplar), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EmbeddedGeometryExemplar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EmbeddedGeometryExemplar_MetaData)) }; // 507740771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Whether to use full precision UVs when rendering this geometry. (Does not apply to Nanite rendering) */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Whether to use full precision UVs when rendering this geometry. (Does not apply to Nanite rendering)" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->bUseFullPrecisionUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseFullPrecisionUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseFullPrecisionUVs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceMeshes_Inner = { "AutoInstanceMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh, METADATA_PARAMS(nullptr, 0) }; // 592194073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceMeshes_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** list of unique static mesh / materials pairs for auto instancing*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "list of unique static mesh / materials pairs for auto instancing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceMeshes = { "AutoInstanceMeshes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, AutoInstanceMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceMeshes_MetaData)) }; // 592194073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RootProxy_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh" },
		{ "Category", "Rendering" },
		{ "Comment", "/** static mesh to use as a proxy for rendering until the geometry collection is broken */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "static mesh to use as a proxy for rendering until the geometry collection is broken" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RootProxy = { "RootProxy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, RootProxy), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RootProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RootProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripOnCook_MetaData[] = {
		{ "Category", "Nanite" },
		{ "Comment", "/**\n\x09 * Strip unnecessary data from the Geometry Collection to keep the memory footprint as small as possible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Strip unnecessary data from the Geometry Collection to keep the memory footprint as small as possible." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripOnCook_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->bStripOnCook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripOnCook = { "bStripOnCook", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripOnCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripOnCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripOnCook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableNanite_MetaData[] = {
		{ "Category", "Nanite" },
		{ "Comment", "/**\n\x09 * Enable support for Nanite.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Enable support for Nanite." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableNanite_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->EnableNanite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableNanite = { "EnableNanite", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableNanite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableNanite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableNanite_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Comment", "/*\n\x09*  CollisionType defines how to initialize the rigid collision structures.\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, CollisionType_DEPRECATED), Z_Construct_UEnum_Chaos_ECollisionTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType_MetaData)) }; // 2773679451
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType_MetaData[] = {
		{ "Comment", "/*\n\x09*  CollisionType defines how to initialize the rigid collision structures.\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType = { "ImplicitType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, ImplicitType_DEPRECATED), Z_Construct_UEnum_Chaos_EImplicitTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType_MetaData)) }; // 623206369
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 5)\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinLevelSetResolution = { "MinLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, MinLevelSetResolution_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxLevelSetResolution = { "MaxLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, MaxLevelSetResolution_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinClusterLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 5)\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinClusterLevelSetResolution = { "MinClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, MinClusterLevelSetResolution_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinClusterLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinClusterLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevelSetResolution_MetaData[] = {
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevelSetResolution = { "MaxClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, MaxClusterLevelSetResolution_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionObjectReductionPercentage_MetaData[] = {
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionObjectReductionPercentage = { "CollisionObjectReductionPercentage", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, CollisionObjectReductionPercentage_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionObjectReductionPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionObjectReductionPercentage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* Mass As Density, units are in kg/m^3\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Mass As Density, units are in kg/m^3" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->bMassAsDensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity = { "bMassAsDensity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* Total Mass of Collection. If density, units are in kg/m^3\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Total Mass of Collection. If density, units are in kg/m^3" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, Mass), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinimumMassClamp_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* Smallest allowable mass (def:0.1)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Smallest allowable mass (def:0.1)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinimumMassClamp = { "MinimumMassClamp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, MinimumMassClamp), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinimumMassClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinimumMassClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bImportCollisionFromSource_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* whether to import collision from the source asset\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "whether to import collision from the source asset" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bImportCollisionFromSource_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->bImportCollisionFromSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bImportCollisionFromSource = { "bImportCollisionFromSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bImportCollisionFromSource_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bImportCollisionFromSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bImportCollisionFromSource_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionParticlesFraction_MetaData[] = {
		{ "Comment", "/**\n\x09 * Number of particles on the triangulated surface to use for collisions.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Number of particles on the triangulated surface to use for collisions." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionParticlesFraction = { "CollisionParticlesFraction", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, CollisionParticlesFraction_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionParticlesFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionParticlesFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumCollisionParticles_MetaData[] = {
		{ "Comment", "/**\n\x09 * Max number of particles.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated. Use the default SizeSpecificData instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Max number of particles." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumCollisionParticles = { "MaximumCollisionParticles", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, MaximumCollisionParticles_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumCollisionParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumCollisionParticles_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bRemoveOnMaxSleep_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** Remove particle from simulation and dissolve rendered geometry once sleep threshold has been exceeded. */" },
		{ "DisplayName", "Remove on Sleep" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Remove particle from simulation and dissolve rendered geometry once sleep threshold has been exceeded." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bRemoveOnMaxSleep_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->bRemoveOnMaxSleep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bRemoveOnMaxSleep = { "bRemoveOnMaxSleep", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bRemoveOnMaxSleep_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bRemoveOnMaxSleep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bRemoveOnMaxSleep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumSleepTime_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** How long may the particle sleep before initiating removal (in seconds). */" },
		{ "DisplayName", "Sleep Min Max" },
		{ "EditCondition", "bRemoveOnMaxSleep" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "How long may the particle sleep before initiating removal (in seconds)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumSleepTime = { "MaximumSleepTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, MaximumSleepTime), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumSleepTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumSleepTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemovalDuration_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** How long does the removal process take (in seconds). */" },
		{ "DisplayName", "Removal Duration" },
		{ "EditCondition", "bRemoveOnMaxSleep" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "How long does the removal process take (in seconds)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemovalDuration = { "RemovalDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, RemovalDuration), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemovalDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemovalDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bSlowMovingAsSleeping_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** when on non-sleeping, slow moving pieces will be considered as sleeping, this helps removal of jittery but not really moving objects. */" },
		{ "DisplayName", "Slow-Moving as sleeping" },
		{ "EditCondition", "bRemoveOnMaxSleep" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "when on non-sleeping, slow moving pieces will be considered as sleeping, this helps removal of jittery but not really moving objects." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bSlowMovingAsSleeping_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->bSlowMovingAsSleeping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bSlowMovingAsSleeping = { "bSlowMovingAsSleeping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bSlowMovingAsSleeping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bSlowMovingAsSleeping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bSlowMovingAsSleeping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SlowMovingVelocityThreshold_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** When slow moving detection is on, this defines the linear velocity thresholds in cm/s to consider the object as sleeping . */" },
		{ "DisplayName", "Slow-Moving Velocity Threshold" },
		{ "EditCondition", "bRemoveOnMaxSleep && bSlowMovingAsSleeping" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "When slow moving detection is on, this defines the linear velocity thresholds in cm/s to consider the object as sleeping ." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SlowMovingVelocityThreshold = { "SlowMovingVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, SlowMovingVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SlowMovingVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SlowMovingVelocityThreshold_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData_Inner = { "SizeSpecificData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData, METADATA_PARAMS(nullptr, 0) }; // 2170467283
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09* Size Specfic Data reflects the default geometry to bind to rigid bodies smaller\n\x09* than the max size volume. This can also be empty to reflect no collision geometry\n\x09* for the collection. \n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "* Size Specfic Data reflects the default geometry to bind to rigid bodies smaller\n* than the max size volume. This can also be empty to reflect no collision geometry\n* for the collection." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData = { "SizeSpecificData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, SizeSpecificData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData_MetaData)) }; // 2170467283
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture_MetaData[] = {
		{ "Comment", "/**\n\x09* Enable remove pieces on fracture\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use remove on break feature instead ( Fracture editor tools )." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Enable remove pieces on fracture" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->EnableRemovePiecesOnFracture_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture = { "EnableRemovePiecesOnFracture", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials_Inner = { "RemoveOnFractureMaterials", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials_MetaData[] = {
		{ "Comment", "/**\n\x09* Materials relating to remove on fracture\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use remove on break feature instead ( Fracture editor tools )." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Materials relating to remove on fracture" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials = { "RemoveOnFractureMaterials", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, RemoveOnFractureMaterials_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this geometry collection */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Importing data and options used for this geometry collection" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0016000800080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00160408000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ThumbnailInfo_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowAsset_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//\n// Dataflow\n//\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Dataflow" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowAsset = { "DataflowAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, DataflowAsset), Z_Construct_UClass_UDataflow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowTerminal_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowTerminal = { "DataflowTerminal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, DataflowTerminal), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowTerminal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowTerminal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid_MetaData[] = {
		{ "Comment", "/** Guid created on construction of this collection. It should be used to uniquely identify this collection */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Guid created on construction of this collection. It should be used to uniquely identify this collection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid = { "PersistentGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, PersistentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid_MetaData[] = {
		{ "Comment", "/** \n\x09 * Guid that can be invalidated on demand - essentially a 'version' that should be changed when a structural change is made to\n\x09 * the geometry collection. This signals to any caches that attempt to link to a geometry collection whether the collection\n\x09 * is still valid (hasn't structurally changed post-recording)\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Guid that can be invalidated on demand - essentially a 'version' that should be changed when a structural change is made to\nthe geometry collection. This signals to any caches that attempt to link to a geometry collection whether the collection\nis still valid (hasn't structurally changed post-recording)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid = { "StateGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, StateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex_MetaData[] = {
		{ "Comment", "// #todo(dmp): rename to be consistent BoneSelectedMaterialID?\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "#todo(dmp): rename to be consistent BoneSelectedMaterialID?" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex = { "BoneSelectedMaterialIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollection, BoneSelectedMaterialIndex), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterGroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseSizeSpecificDamageThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PerClusterOnlyDamageThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamagePropagationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ConnectionGraphBoundsFilteringMargin,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EmbeddedGeometryExemplar_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EmbeddedGeometryExemplar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bUseFullPrecisionUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AutoInstanceMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RootProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bStripOnCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableNanite,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinLevelSetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxLevelSetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinClusterLevelSetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevelSetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionObjectReductionPercentage,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinimumMassClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bImportCollisionFromSource,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionParticlesFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumCollisionParticles,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bRemoveOnMaxSleep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumSleepTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemovalDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bSlowMovingAsSleeping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SlowMovingVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_AssetImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ThumbnailInfo,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DataflowTerminal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollection_Statics::ClassParams = {
		&UGeometryCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCollection()
	{
		if (!Z_Registration_Info_UClass_UGeometryCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollection.OuterSingleton, Z_Construct_UClass_UGeometryCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCollection.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollection>()
	{
		return UGeometryCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollection);
	UGeometryCollection::~UGeometryCollection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCollection)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_Statics::ScriptStructInfo[] = {
		{ FGeometryCollectionSource::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewStructOps, TEXT("GeometryCollectionSource"), &Z_Registration_Info_UScriptStruct_GeometryCollectionSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionSource), 463373050U) },
		{ FGeometryCollectionAutoInstanceMesh::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh_Statics::NewStructOps, TEXT("GeometryCollectionAutoInstanceMesh"), &Z_Registration_Info_UScriptStruct_GeometryCollectionAutoInstanceMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionAutoInstanceMesh), 592194073U) },
		{ FGeometryCollectionEmbeddedExemplar::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionEmbeddedExemplar_Statics::NewStructOps, TEXT("GeometryCollectionEmbeddedExemplar"), &Z_Registration_Info_UScriptStruct_GeometryCollectionEmbeddedExemplar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionEmbeddedExemplar), 507740771U) },
		{ FGeometryCollectionLevelSetData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionLevelSetData_Statics::NewStructOps, TEXT("GeometryCollectionLevelSetData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionLevelSetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionLevelSetData), 1060937764U) },
		{ FGeometryCollectionCollisionParticleData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionCollisionParticleData_Statics::NewStructOps, TEXT("GeometryCollectionCollisionParticleData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionParticleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionCollisionParticleData), 2579370399U) },
		{ FGeometryCollectionCollisionTypeData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionCollisionTypeData_Statics::NewStructOps, TEXT("GeometryCollectionCollisionTypeData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionCollisionTypeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionCollisionTypeData), 3129606463U) },
		{ FGeometryCollectionSizeSpecificData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewStructOps, TEXT("GeometryCollectionSizeSpecificData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionSizeSpecificData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionSizeSpecificData), 2170467283U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollection, UGeometryCollection::StaticClass, TEXT("UGeometryCollection"), &Z_Registration_Info_UClass_UGeometryCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollection), 1583857049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_3397329560(TEXT("/Script/GeometryCollectionEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
