// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaniteDisplacedMesh.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaniteDisplacedMesh() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	NANITEDISPLACEDMESH_API UClass* Z_Construct_UClass_UNaniteDisplacedMesh();
	NANITEDISPLACEDMESH_API UClass* Z_Construct_UClass_UNaniteDisplacedMesh_NoRegister();
	NANITEDISPLACEDMESH_API UScriptStruct* Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap();
	NANITEDISPLACEDMESH_API UScriptStruct* Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams();
	UPackage* Z_Construct_UPackage__Script_NaniteDisplacedMesh();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshDisplacementMap;
class UScriptStruct* FNaniteDisplacedMeshDisplacementMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshDisplacementMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshDisplacementMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap, (UObject*)Z_Construct_UPackage__Script_NaniteDisplacedMesh(), TEXT("NaniteDisplacedMeshDisplacementMap"));
	}
	return Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshDisplacementMap.OuterSingleton;
}
template<> NANITEDISPLACEDMESH_API UScriptStruct* StaticStruct<FNaniteDisplacedMeshDisplacementMap>()
{
	return FNaniteDisplacedMeshDisplacementMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Center;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNaniteDisplacedMeshDisplacementMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Displacement" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNaniteDisplacedMeshDisplacementMap, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Displacement" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNaniteDisplacedMeshDisplacementMap, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Displacement" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNaniteDisplacedMeshDisplacementMap, Center), METADATA_PARAMS(Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Center_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewProp_Center,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NaniteDisplacedMesh,
		nullptr,
		&NewStructOps,
		"NaniteDisplacedMeshDisplacementMap",
		sizeof(FNaniteDisplacedMeshDisplacementMap),
		alignof(FNaniteDisplacedMeshDisplacementMap),
		Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap()
	{
		if (!Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshDisplacementMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshDisplacementMap.InnerSingleton, Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshDisplacementMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshParams;
class UScriptStruct* FNaniteDisplacedMeshParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams, (UObject*)Z_Construct_UPackage__Script_NaniteDisplacedMesh(), TEXT("NaniteDisplacedMeshParams"));
	}
	return Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshParams.OuterSingleton;
}
template<> NANITEDISPLACEDMESH_API UScriptStruct* StaticStruct<FNaniteDisplacedMeshParams>()
{
	return FNaniteDisplacedMeshParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeError_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RelativeError;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplacementMaps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementMaps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplacementMaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNaniteDisplacedMeshParams>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNaniteDisplacedMeshParams, BaseMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_RelativeError_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_RelativeError = { "RelativeError", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNaniteDisplacedMeshParams, RelativeError), METADATA_PARAMS(Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_RelativeError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_RelativeError_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_DisplacementMaps_Inner = { "DisplacementMaps", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap, METADATA_PARAMS(nullptr, 0) }; // 1848226386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_DisplacementMaps_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_DisplacementMaps = { "DisplacementMaps", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNaniteDisplacedMeshParams, DisplacementMaps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_DisplacementMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_DisplacementMaps_MetaData)) }; // 1848226386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_RelativeError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_DisplacementMaps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewProp_DisplacementMaps,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NaniteDisplacedMesh,
		nullptr,
		&NewStructOps,
		"NaniteDisplacedMeshParams",
		sizeof(FNaniteDisplacedMeshParams),
		alignof(FNaniteDisplacedMeshParams),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams()
	{
		if (!Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshParams.InnerSingleton, Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshParams.InnerSingleton;
	}
	void UNaniteDisplacedMesh::StaticRegisterNativesUNaniteDisplacedMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNaniteDisplacedMesh);
	UClass* Z_Construct_UClass_UNaniteDisplacedMesh_NoRegister()
	{
		return UNaniteDisplacedMesh::StaticClass();
	}
	struct Z_Construct_UClass_UNaniteDisplacedMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditable_MetaData[];
#endif
		static void NewProp_bIsEditable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNaniteDisplacedMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NaniteDisplacedMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteDisplacedMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaniteDisplacedMesh.h" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMesh.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteDisplacedMesh_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "bIsEditable" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNaniteDisplacedMesh_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNaniteDisplacedMesh, Parameters), Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams, METADATA_PARAMS(Z_Construct_UClass_UNaniteDisplacedMesh_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteDisplacedMesh_Statics::NewProp_Parameters_MetaData)) }; // 189607405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteDisplacedMesh_Statics::NewProp_bIsEditable_MetaData[] = {
		{ "Category", "Asset" },
		{ "Comment", "/**\n\x09 * Was this asset created by a procedural tool?\n\x09 * This flag is generally set by tool that created the asset.\n\x09 * It's used to tell the users that they shouldn't modify the asset by themselves.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMesh.h" },
		{ "ToolTip", "Was this asset created by a procedural tool?\nThis flag is generally set by tool that created the asset.\nIt's used to tell the users that they shouldn't modify the asset by themselves." },
	};
#endif
	void Z_Construct_UClass_UNaniteDisplacedMesh_Statics::NewProp_bIsEditable_SetBit(void* Obj)
	{
		((UNaniteDisplacedMesh*)Obj)->bIsEditable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNaniteDisplacedMesh_Statics::NewProp_bIsEditable = { "bIsEditable", nullptr, (EPropertyFlags)0x0010040800020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNaniteDisplacedMesh), &Z_Construct_UClass_UNaniteDisplacedMesh_Statics::NewProp_bIsEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNaniteDisplacedMesh_Statics::NewProp_bIsEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteDisplacedMesh_Statics::NewProp_bIsEditable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNaniteDisplacedMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNaniteDisplacedMesh_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNaniteDisplacedMesh_Statics::NewProp_bIsEditable,
	};
#endif // WITH_EDITORONLY_DATA
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNaniteDisplacedMesh_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister, (int32)VTABLE_OFFSET(UNaniteDisplacedMesh, IInterface_AsyncCompilation), false },  // 30865164
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNaniteDisplacedMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNaniteDisplacedMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNaniteDisplacedMesh_Statics::ClassParams = {
		&UNaniteDisplacedMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UNaniteDisplacedMesh_Statics::PropPointers, nullptr),
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteDisplacedMesh_Statics::PropPointers), 0),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNaniteDisplacedMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteDisplacedMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNaniteDisplacedMesh()
	{
		if (!Z_Registration_Info_UClass_UNaniteDisplacedMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNaniteDisplacedMesh.OuterSingleton, Z_Construct_UClass_UNaniteDisplacedMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNaniteDisplacedMesh.OuterSingleton;
	}
	template<> NANITEDISPLACEDMESH_API UClass* StaticClass<UNaniteDisplacedMesh>()
	{
		return UNaniteDisplacedMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNaniteDisplacedMesh);
	UNaniteDisplacedMesh::~UNaniteDisplacedMesh() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNaniteDisplacedMesh)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_Statics::ScriptStructInfo[] = {
		{ FNaniteDisplacedMeshDisplacementMap::StaticStruct, Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics::NewStructOps, TEXT("NaniteDisplacedMeshDisplacementMap"), &Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshDisplacementMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNaniteDisplacedMeshDisplacementMap), 1848226386U) },
		{ FNaniteDisplacedMeshParams::StaticStruct, Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics::NewStructOps, TEXT("NaniteDisplacedMeshParams"), &Z_Registration_Info_UScriptStruct_NaniteDisplacedMeshParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNaniteDisplacedMeshParams), 189607405U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNaniteDisplacedMesh, UNaniteDisplacedMesh::StaticClass, TEXT("UNaniteDisplacedMesh"), &Z_Registration_Info_UClass_UNaniteDisplacedMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNaniteDisplacedMesh), 3331297901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_2641177081(TEXT("/Script/NaniteDisplacedMesh"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
