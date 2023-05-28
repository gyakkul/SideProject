// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataInterface/NiagaraDataInterfaceDynamicMesh.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDynamicMesh() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection;
class UScriptStruct* FNiagaraDynamicMeshSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDynamicMeshSection"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDynamicMeshSection>()
{
	return FNiagaraDynamicMeshSection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTriangles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTriangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDynamicMeshSection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_NumTriangles_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Number of triangles in this section. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Number of triangles in this section." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_NumTriangles = { "NumTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDynamicMeshSection, NumTriangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_NumTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_NumTriangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Index of the material to use. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Index of the material to use." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDynamicMeshSection, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_MaterialIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_NumTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_MaterialIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDynamicMeshSection",
		sizeof(FNiagaraDynamicMeshSection),
		alignof(FNiagaraDynamicMeshSection),
		Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial;
class UScriptStruct* FNiagaraDynamicMeshMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDynamicMeshMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDynamicMeshMaterial>()
{
	return FNiagaraDynamicMeshMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialUserParamBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialUserParamBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDynamicMeshMaterial>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Optional material to use for this section. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Optional material to use for this section." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDynamicMeshMaterial, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_MaterialUserParamBinding_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Optional binding to a user parameter */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Optional binding to a user parameter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_MaterialUserParamBinding = { "MaterialUserParamBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDynamicMeshMaterial, MaterialUserParamBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_MaterialUserParamBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_MaterialUserParamBinding_MetaData)) }; // 1724214256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_MaterialUserParamBinding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDynamicMeshMaterial",
		sizeof(FNiagaraDynamicMeshMaterial),
		alignof(FNiagaraDynamicMeshMaterial),
		Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial.InnerSingleton;
	}
	void UNiagaraDataInterfaceDynamicMesh::StaticRegisterNativesUNiagaraDataInterfaceDynamicMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceDynamicMesh);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_NoRegister()
	{
		return UNiagaraDataInterfaceDynamicMesh::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumVertices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTexCoords_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumTexCoords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasColors_MetaData[];
#endif
		static void NewProp_bHasColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasTangentBasis_MetaData[];
#endif
		static void NewProp_bHasTangentBasis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTangentBasis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearTrianglesPerFrame_MetaData[];
#endif
		static void NewProp_bClearTrianglesPerFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearTrianglesPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::Class_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Data Interface allowing sampling of a texture */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Dynamic Mesh" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Data Interface allowing sampling of a texture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection, METADATA_PARAMS(nullptr, 0) }; // 2732431768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Sections_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/**\n\x09Sections to render, each section will generally result in a draw call.\n\x09Triangles are contiguous between sections, i.e. Section[1] triangles will begin after Section[0].NumTriangles\n\x09*/" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Sections to render, each section will generally result in a draw call.\nTriangles are contiguous between sections, i.e. Section[1] triangles will begin after Section[0].NumTriangles" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceDynamicMesh, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Sections_MetaData)) }; // 2732431768
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial, METADATA_PARAMS(nullptr, 0) }; // 3658732491
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** List of materials to use */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "List of materials to use" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceDynamicMesh, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Materials_MetaData)) }; // 3658732491
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumVertices_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Allocates space for the number of vertices we will use, leave as zero if you intend to allocate dynamically via VM calls. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Allocates space for the number of vertices we will use, leave as zero if you intend to allocate dynamically via VM calls." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumVertices = { "NumVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceDynamicMesh, NumVertices), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumTexCoords_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Allocates space for the number of texture coordinates requested. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Allocates space for the number of texture coordinates requested." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumTexCoords = { "NumTexCoords", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceDynamicMesh, NumTexCoords), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumTexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumTexCoords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasColors_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Allocates space for vertex colors when enabled. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Allocates space for vertex colors when enabled." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasColors_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceDynamicMesh*)Obj)->bHasColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasColors = { "bHasColors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceDynamicMesh), &Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasTangentBasis_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Allocates space for tangent basis when enabled. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Allocates space for tangent basis when enabled." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasTangentBasis_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceDynamicMesh*)Obj)->bHasTangentBasis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasTangentBasis = { "bHasTangentBasis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceDynamicMesh), &Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasTangentBasis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasTangentBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasTangentBasis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bClearTrianglesPerFrame_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Should we auto clear section triangle allocations per frame or not. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Should we auto clear section triangle allocations per frame or not." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bClearTrianglesPerFrame_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceDynamicMesh*)Obj)->bClearTrianglesPerFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bClearTrianglesPerFrame = { "bClearTrianglesPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceDynamicMesh), &Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bClearTrianglesPerFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bClearTrianglesPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bClearTrianglesPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_DefaultBounds_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Should we auto clear section triangle allocations per frame or not. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Should we auto clear section triangle allocations per frame or not." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_DefaultBounds = { "DefaultBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceDynamicMesh, DefaultBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_DefaultBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_DefaultBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumTexCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasTangentBasis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bClearTrianglesPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_DefaultBounds,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister, (int32)VTABLE_OFFSET(UNiagaraDataInterfaceDynamicMesh, INiagaraRenderableMeshInterface), false },  // 841067250
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceDynamicMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::ClassParams = {
		&UNiagaraDataInterfaceDynamicMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceDynamicMesh>()
	{
		return UNiagaraDataInterfaceDynamicMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceDynamicMesh);
	UNiagaraDataInterfaceDynamicMesh::~UNiagaraDataInterfaceDynamicMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraDynamicMeshSection::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewStructOps, TEXT("NiagaraDynamicMeshSection"), &Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDynamicMeshSection), 2732431768U) },
		{ FNiagaraDynamicMeshMaterial::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewStructOps, TEXT("NiagaraDynamicMeshMaterial"), &Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDynamicMeshMaterial), 3658732491U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh, UNiagaraDataInterfaceDynamicMesh::StaticClass, TEXT("UNiagaraDataInterfaceDynamicMesh"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceDynamicMesh), 2154519208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_3524215130(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
