// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/CreateNewAssetUtilityFunctions.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateNewAssetUtilityFunctions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshNaniteSettings();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_NoRegister();
	GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions();
	GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions();
	GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions();
	GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions();
	GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptUniqueAssetNameOptions;
class UScriptStruct* FGeometryScriptUniqueAssetNameOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptUniqueAssetNameOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptUniqueAssetNameOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingEditor(), TEXT("GeometryScriptUniqueAssetNameOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptUniqueAssetNameOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<FGeometryScriptUniqueAssetNameOptions>()
{
	return FGeometryScriptUniqueAssetNameOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueIDDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniqueIDDigits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptUniqueAssetNameOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::NewProp_UniqueIDDigits_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::NewProp_UniqueIDDigits = { "UniqueIDDigits", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptUniqueAssetNameOptions, UniqueIDDigits), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::NewProp_UniqueIDDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::NewProp_UniqueIDDigits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::NewProp_UniqueIDDigits,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
		nullptr,
		&NewStructOps,
		"GeometryScriptUniqueAssetNameOptions",
		sizeof(FGeometryScriptUniqueAssetNameOptions),
		alignof(FGeometryScriptUniqueAssetNameOptions),
		Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptUniqueAssetNameOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptUniqueAssetNameOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptUniqueAssetNameOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewVolumeFromMeshOptions;
class UScriptStruct* FGeometryScriptCreateNewVolumeFromMeshOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewVolumeFromMeshOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewVolumeFromMeshOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingEditor(), TEXT("GeometryScriptCreateNewVolumeFromMeshOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewVolumeFromMeshOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<FGeometryScriptCreateNewVolumeFromMeshOptions>()
{
	return FGeometryScriptCreateNewVolumeFromMeshOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VolumeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSimplify_MetaData[];
#endif
		static void NewProp_bAutoSimplify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSimplify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriangles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptCreateNewVolumeFromMeshOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_VolumeType_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_VolumeType = { "VolumeType", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCreateNewVolumeFromMeshOptions, VolumeType), Z_Construct_UClass_UClass, Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_VolumeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_VolumeType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_bAutoSimplify_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_bAutoSimplify_SetBit(void* Obj)
	{
		((FGeometryScriptCreateNewVolumeFromMeshOptions*)Obj)->bAutoSimplify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_bAutoSimplify = { "bAutoSimplify", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCreateNewVolumeFromMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_bAutoSimplify_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_bAutoSimplify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_bAutoSimplify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_MaxTriangles_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_MaxTriangles = { "MaxTriangles", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCreateNewVolumeFromMeshOptions, MaxTriangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_MaxTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_MaxTriangles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_VolumeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_bAutoSimplify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewProp_MaxTriangles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
		nullptr,
		&NewStructOps,
		"GeometryScriptCreateNewVolumeFromMeshOptions",
		sizeof(FGeometryScriptCreateNewVolumeFromMeshOptions),
		alignof(FGeometryScriptCreateNewVolumeFromMeshOptions),
		Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewVolumeFromMeshOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewVolumeFromMeshOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewVolumeFromMeshOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewStaticMeshAssetOptions;
class UScriptStruct* FGeometryScriptCreateNewStaticMeshAssetOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewStaticMeshAssetOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewStaticMeshAssetOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingEditor(), TEXT("GeometryScriptCreateNewStaticMeshAssetOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewStaticMeshAssetOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<FGeometryScriptCreateNewStaticMeshAssetOptions>()
{
	return FGeometryScriptCreateNewStaticMeshAssetOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRecomputeNormals_MetaData[];
#endif
		static void NewProp_bEnableRecomputeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRecomputeNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRecomputeTangents_MetaData[];
#endif
		static void NewProp_bEnableRecomputeTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRecomputeTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNanite_MetaData[];
#endif
		static void NewProp_bEnableNanite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNanite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteProxyTrianglePercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NaniteProxyTrianglePercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptCreateNewStaticMeshAssetOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals_SetBit(void* Obj)
	{
		((FGeometryScriptCreateNewStaticMeshAssetOptions*)Obj)->bEnableRecomputeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals = { "bEnableRecomputeNormals", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCreateNewStaticMeshAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents_SetBit(void* Obj)
	{
		((FGeometryScriptCreateNewStaticMeshAssetOptions*)Obj)->bEnableRecomputeTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents = { "bEnableRecomputeTangents", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCreateNewStaticMeshAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableNanite_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableNanite_SetBit(void* Obj)
	{
		((FGeometryScriptCreateNewStaticMeshAssetOptions*)Obj)->bEnableNanite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableNanite = { "bEnableNanite", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCreateNewStaticMeshAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableNanite_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableNanite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableNanite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_NaniteSettings_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Nanite settings to set on new StaticMesh Asset */" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
		{ "ToolTip", "Nanite settings to set on new StaticMesh Asset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_NaniteSettings = { "NaniteSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCreateNewStaticMeshAssetOptions, NaniteSettings), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_NaniteSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_NaniteSettings_MetaData)) }; // 2370712239
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_NaniteProxyTrianglePercent_MetaData[] = {
		{ "Category", "Deprecated" },
		{ "Comment", "/** Replaced NaniteProxyTrianglePercent with usage of Engine FMeshNaniteSettings, use NaniteSettings property instead */" },
		{ "DisplayName", "DEPRECATED NANITE SETTING" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
		{ "ToolTip", "Replaced NaniteProxyTrianglePercent with usage of Engine FMeshNaniteSettings, use NaniteSettings property instead" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_NaniteProxyTrianglePercent = { "NaniteProxyTrianglePercent", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCreateNewStaticMeshAssetOptions, NaniteProxyTrianglePercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_NaniteProxyTrianglePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_NaniteProxyTrianglePercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FGeometryScriptCreateNewStaticMeshAssetOptions*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCreateNewStaticMeshAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_CollisionMode_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_CollisionMode = { "CollisionMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCreateNewStaticMeshAssetOptions, CollisionMode), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_CollisionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_CollisionMode_MetaData)) }; // 3043805667
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableNanite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_NaniteSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_NaniteProxyTrianglePercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewProp_CollisionMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
		nullptr,
		&NewStructOps,
		"GeometryScriptCreateNewStaticMeshAssetOptions",
		sizeof(FGeometryScriptCreateNewStaticMeshAssetOptions),
		alignof(FGeometryScriptCreateNewStaticMeshAssetOptions),
		Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewStaticMeshAssetOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewStaticMeshAssetOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewStaticMeshAssetOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewSkeletalMeshAssetOptions;
class UScriptStruct* FGeometryScriptCreateNewSkeletalMeshAssetOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewSkeletalMeshAssetOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewSkeletalMeshAssetOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingEditor(), TEXT("GeometryScriptCreateNewSkeletalMeshAssetOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewSkeletalMeshAssetOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<FGeometryScriptCreateNewSkeletalMeshAssetOptions>()
{
	return FGeometryScriptCreateNewSkeletalMeshAssetOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRecomputeNormals_MetaData[];
#endif
		static void NewProp_bEnableRecomputeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRecomputeNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRecomputeTangents_MetaData[];
#endif
		static void NewProp_bEnableRecomputeTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRecomputeTangents;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Materials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptCreateNewSkeletalMeshAssetOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals_SetBit(void* Obj)
	{
		((FGeometryScriptCreateNewSkeletalMeshAssetOptions*)Obj)->bEnableRecomputeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals = { "bEnableRecomputeNormals", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCreateNewSkeletalMeshAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents_SetBit(void* Obj)
	{
		((FGeometryScriptCreateNewSkeletalMeshAssetOptions*)Obj)->bEnableRecomputeTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents = { "bEnableRecomputeTangents", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCreateNewSkeletalMeshAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_Materials_ValueProp = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_Materials_Key_KeyProp = { "Materials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCreateNewSkeletalMeshAssetOptions, Materials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_Materials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_bEnableRecomputeTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_Materials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_Materials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewProp_Materials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
		nullptr,
		&NewStructOps,
		"GeometryScriptCreateNewSkeletalMeshAssetOptions",
		sizeof(FGeometryScriptCreateNewSkeletalMeshAssetOptions),
		alignof(FGeometryScriptCreateNewSkeletalMeshAssetOptions),
		Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewSkeletalMeshAssetOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewSkeletalMeshAssetOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewSkeletalMeshAssetOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewTexture2DAssetOptions;
class UScriptStruct* FGeometryScriptCreateNewTexture2DAssetOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewTexture2DAssetOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewTexture2DAssetOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingEditor(), TEXT("GeometryScriptCreateNewTexture2DAssetOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewTexture2DAssetOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<FGeometryScriptCreateNewTexture2DAssetOptions>()
{
	return FGeometryScriptCreateNewTexture2DAssetOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverwriteIfExists_MetaData[];
#endif
		static void NewProp_bOverwriteIfExists_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteIfExists;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptCreateNewTexture2DAssetOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::NewProp_bOverwriteIfExists_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, overwrite any existing texture assets using the same AssetPathAndName */" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
		{ "ToolTip", "If true, overwrite any existing texture assets using the same AssetPathAndName" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::NewProp_bOverwriteIfExists_SetBit(void* Obj)
	{
		((FGeometryScriptCreateNewTexture2DAssetOptions*)Obj)->bOverwriteIfExists = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::NewProp_bOverwriteIfExists = { "bOverwriteIfExists", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCreateNewTexture2DAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::NewProp_bOverwriteIfExists_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::NewProp_bOverwriteIfExists_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::NewProp_bOverwriteIfExists_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::NewProp_bOverwriteIfExists,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
		nullptr,
		&NewStructOps,
		"GeometryScriptCreateNewTexture2DAssetOptions",
		sizeof(FGeometryScriptCreateNewTexture2DAssetOptions),
		alignof(FGeometryScriptCreateNewTexture2DAssetOptions),
		Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewTexture2DAssetOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewTexture2DAssetOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewTexture2DAssetOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_CreateNewAssetFunctions::execCreateNewTexture2DAsset)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_FromTexture);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPathAndName);
		P_GET_STRUCT(FGeometryScriptCreateNewTexture2DAssetOptions,Z_Param_Options);
		P_GET_ENUM_REF(EGeometryScriptOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UGeometryScriptLibrary_CreateNewAssetFunctions::CreateNewTexture2DAsset(Z_Param_FromTexture,Z_Param_AssetPathAndName,Z_Param_Options,(EGeometryScriptOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_CreateNewAssetFunctions::execCreateNewSkeletalMeshAssetFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_FromDynamicMesh);
		P_GET_OBJECT(USkeleton,Z_Param_InSkeleton);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPathAndName);
		P_GET_STRUCT(FGeometryScriptCreateNewSkeletalMeshAssetOptions,Z_Param_Options);
		P_GET_ENUM_REF(EGeometryScriptOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=UGeometryScriptLibrary_CreateNewAssetFunctions::CreateNewSkeletalMeshAssetFromMesh(Z_Param_FromDynamicMesh,Z_Param_InSkeleton,Z_Param_AssetPathAndName,Z_Param_Options,(EGeometryScriptOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_CreateNewAssetFunctions::execCreateNewStaticMeshAssetFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_FromDynamicMesh);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPathAndName);
		P_GET_STRUCT(FGeometryScriptCreateNewStaticMeshAssetOptions,Z_Param_Options);
		P_GET_ENUM_REF(EGeometryScriptOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=UGeometryScriptLibrary_CreateNewAssetFunctions::CreateNewStaticMeshAssetFromMesh(Z_Param_FromDynamicMesh,Z_Param_AssetPathAndName,Z_Param_Options,(EGeometryScriptOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_CreateNewAssetFunctions::execCreateNewVolumeFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_FromDynamicMesh);
		P_GET_OBJECT_REF(UWorld,Z_Param_Out_CreateInWorld);
		P_GET_STRUCT(FTransform,Z_Param_ActorTransform);
		P_GET_PROPERTY(FStrProperty,Z_Param_BaseActorName);
		P_GET_STRUCT(FGeometryScriptCreateNewVolumeFromMeshOptions,Z_Param_Options);
		P_GET_ENUM_REF(EGeometryScriptOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AVolume**)Z_Param__Result=UGeometryScriptLibrary_CreateNewAssetFunctions::CreateNewVolumeFromMesh(Z_Param_FromDynamicMesh,Z_Param_Out_CreateInWorld,Z_Param_ActorTransform,Z_Param_BaseActorName,Z_Param_Options,(EGeometryScriptOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_CreateNewAssetFunctions::execCreateUniqueNewAssetPathName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetFolderPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_BaseAssetName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_UniqueAssetPathAndName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_UniqueAssetName);
		P_GET_STRUCT(FGeometryScriptUniqueAssetNameOptions,Z_Param_Options);
		P_GET_ENUM_REF(EGeometryScriptOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_CreateNewAssetFunctions::CreateUniqueNewAssetPathName(Z_Param_AssetFolderPath,Z_Param_BaseAssetName,Z_Param_Out_UniqueAssetPathAndName,Z_Param_Out_UniqueAssetName,Z_Param_Options,(EGeometryScriptOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_CreateNewAssetFunctions::StaticRegisterNativesUGeometryScriptLibrary_CreateNewAssetFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_CreateNewAssetFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewSkeletalMeshAssetFromMesh", &UGeometryScriptLibrary_CreateNewAssetFunctions::execCreateNewSkeletalMeshAssetFromMesh },
			{ "CreateNewStaticMeshAssetFromMesh", &UGeometryScriptLibrary_CreateNewAssetFunctions::execCreateNewStaticMeshAssetFromMesh },
			{ "CreateNewTexture2DAsset", &UGeometryScriptLibrary_CreateNewAssetFunctions::execCreateNewTexture2DAsset },
			{ "CreateNewVolumeFromMesh", &UGeometryScriptLibrary_CreateNewAssetFunctions::execCreateNewVolumeFromMesh },
			{ "CreateUniqueNewAssetPathName", &UGeometryScriptLibrary_CreateNewAssetFunctions::execCreateUniqueNewAssetPathName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics
	{
		struct GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewSkeletalMeshAssetFromMesh_Parms
		{
			UDynamicMesh* FromDynamicMesh;
			USkeleton* InSkeleton;
			FString AssetPathAndName;
			FGeometryScriptCreateNewSkeletalMeshAssetOptions Options;
			EGeometryScriptOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromDynamicMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeleton;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPathAndName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_FromDynamicMesh = { "FromDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewSkeletalMeshAssetFromMesh_Parms, FromDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_InSkeleton = { "InSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewSkeletalMeshAssetFromMesh_Parms, InSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_AssetPathAndName = { "AssetPathAndName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewSkeletalMeshAssetFromMesh_Parms, AssetPathAndName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewSkeletalMeshAssetFromMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions, METADATA_PARAMS(nullptr, 0) }; // 4227061400
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewSkeletalMeshAssetFromMesh_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 3716180884
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewSkeletalMeshAssetFromMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Skeletal Mesh Asset" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewSkeletalMeshAssetFromMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_FromDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_InSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_AssetPathAndName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|AssetManagement" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions, nullptr, "CreateNewSkeletalMeshAssetFromMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewSkeletalMeshAssetFromMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics
	{
		struct GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewStaticMeshAssetFromMesh_Parms
		{
			UDynamicMesh* FromDynamicMesh;
			FString AssetPathAndName;
			FGeometryScriptCreateNewStaticMeshAssetOptions Options;
			EGeometryScriptOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
			UStaticMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromDynamicMesh;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPathAndName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_FromDynamicMesh = { "FromDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewStaticMeshAssetFromMesh_Parms, FromDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_AssetPathAndName = { "AssetPathAndName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewStaticMeshAssetFromMesh_Parms, AssetPathAndName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewStaticMeshAssetFromMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions, METADATA_PARAMS(nullptr, 0) }; // 2442365268
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewStaticMeshAssetFromMesh_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 3716180884
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewStaticMeshAssetFromMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Static Mesh Asset" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewStaticMeshAssetFromMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_FromDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_AssetPathAndName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|AssetManagement" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions, nullptr, "CreateNewStaticMeshAssetFromMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewStaticMeshAssetFromMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics
	{
		struct GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewTexture2DAsset_Parms
		{
			UTexture2D* FromTexture;
			FString AssetPathAndName;
			FGeometryScriptCreateNewTexture2DAssetOptions Options;
			EGeometryScriptOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromTexture;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPathAndName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_FromTexture = { "FromTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewTexture2DAsset_Parms, FromTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_AssetPathAndName = { "AssetPathAndName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewTexture2DAsset_Parms, AssetPathAndName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewTexture2DAsset_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions, METADATA_PARAMS(nullptr, 0) }; // 3124549628
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewTexture2DAsset_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 3716180884
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewTexture2DAsset_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Texture 2D Asset" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewTexture2DAsset_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_FromTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_AssetPathAndName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|AssetManagement" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions, nullptr, "CreateNewTexture2DAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewTexture2DAsset_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics
	{
		struct GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewVolumeFromMesh_Parms
		{
			UDynamicMesh* FromDynamicMesh;
			UWorld* CreateInWorld;
			FTransform ActorTransform;
			FString BaseActorName;
			FGeometryScriptCreateNewVolumeFromMeshOptions Options;
			EGeometryScriptOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
			AVolume* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromDynamicMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreateInWorld;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseActorName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_FromDynamicMesh = { "FromDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewVolumeFromMesh_Parms, FromDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_CreateInWorld = { "CreateInWorld", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewVolumeFromMesh_Parms, CreateInWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewVolumeFromMesh_Parms, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_BaseActorName = { "BaseActorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewVolumeFromMesh_Parms, BaseActorName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewVolumeFromMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 841717454
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewVolumeFromMesh_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 3716180884
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewVolumeFromMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Volume Actor" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewVolumeFromMesh_Parms, ReturnValue), Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_FromDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_CreateInWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_ActorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_BaseActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|AssetManagement" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions, nullptr, "CreateNewVolumeFromMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateNewVolumeFromMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics
	{
		struct GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateUniqueNewAssetPathName_Parms
		{
			FString AssetFolderPath;
			FString BaseAssetName;
			FString UniqueAssetPathAndName;
			FString UniqueAssetName;
			FGeometryScriptUniqueAssetNameOptions Options;
			EGeometryScriptOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetFolderPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseAssetName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueAssetPathAndName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueAssetName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_AssetFolderPath = { "AssetFolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateUniqueNewAssetPathName_Parms, AssetFolderPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_BaseAssetName = { "BaseAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateUniqueNewAssetPathName_Parms, BaseAssetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_UniqueAssetPathAndName = { "UniqueAssetPathAndName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateUniqueNewAssetPathName_Parms, UniqueAssetPathAndName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_UniqueAssetName = { "UniqueAssetName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateUniqueNewAssetPathName_Parms, UniqueAssetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateUniqueNewAssetPathName_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions, METADATA_PARAMS(nullptr, 0) }; // 1674288745
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateUniqueNewAssetPathName_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 3716180884
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateUniqueNewAssetPathName_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_AssetFolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_BaseAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_UniqueAssetPathAndName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_UniqueAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::NewProp_Debug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|AssetManagement" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions, nullptr, "CreateUniqueNewAssetPathName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::GeometryScriptLibrary_CreateNewAssetFunctions_eventCreateUniqueNewAssetPathName_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_CreateNewAssetFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_CreateNewAssetFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewSkeletalMeshAssetFromMesh, "CreateNewSkeletalMeshAssetFromMesh" }, // 1190670391
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewStaticMeshAssetFromMesh, "CreateNewStaticMeshAssetFromMesh" }, // 3517024491
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewTexture2DAsset, "CreateNewTexture2DAsset" }, // 3979227806
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateNewVolumeFromMesh, "CreateNewVolumeFromMesh" }, // 4081288539
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_CreateNewAssetFunctions_CreateUniqueNewAssetPathName, "CreateUniqueNewAssetPathName" }, // 1256907678
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/CreateNewAssetUtilityFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/CreateNewAssetUtilityFunctions.h" },
		{ "ScriptName", "GeometryScript_NewAssetUtils" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_CreateNewAssetFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_CreateNewAssetFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGEDITOR_API UClass* StaticClass<UGeometryScriptLibrary_CreateNewAssetFunctions>()
	{
		return UGeometryScriptLibrary_CreateNewAssetFunctions::StaticClass();
	}
	UGeometryScriptLibrary_CreateNewAssetFunctions::UGeometryScriptLibrary_CreateNewAssetFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_CreateNewAssetFunctions);
	UGeometryScriptLibrary_CreateNewAssetFunctions::~UGeometryScriptLibrary_CreateNewAssetFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptUniqueAssetNameOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics::NewStructOps, TEXT("GeometryScriptUniqueAssetNameOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptUniqueAssetNameOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptUniqueAssetNameOptions), 1674288745U) },
		{ FGeometryScriptCreateNewVolumeFromMeshOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics::NewStructOps, TEXT("GeometryScriptCreateNewVolumeFromMeshOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewVolumeFromMeshOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptCreateNewVolumeFromMeshOptions), 841717454U) },
		{ FGeometryScriptCreateNewStaticMeshAssetOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics::NewStructOps, TEXT("GeometryScriptCreateNewStaticMeshAssetOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewStaticMeshAssetOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptCreateNewStaticMeshAssetOptions), 2442365268U) },
		{ FGeometryScriptCreateNewSkeletalMeshAssetOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics::NewStructOps, TEXT("GeometryScriptCreateNewSkeletalMeshAssetOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewSkeletalMeshAssetOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptCreateNewSkeletalMeshAssetOptions), 4227061400U) },
		{ FGeometryScriptCreateNewTexture2DAssetOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics::NewStructOps, TEXT("GeometryScriptCreateNewTexture2DAssetOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptCreateNewTexture2DAssetOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptCreateNewTexture2DAssetOptions), 3124549628U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions, UGeometryScriptLibrary_CreateNewAssetFunctions::StaticClass, TEXT("UGeometryScriptLibrary_CreateNewAssetFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_CreateNewAssetFunctions), 4016188573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_1512264423(TEXT("/Script/GeometryScriptingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
