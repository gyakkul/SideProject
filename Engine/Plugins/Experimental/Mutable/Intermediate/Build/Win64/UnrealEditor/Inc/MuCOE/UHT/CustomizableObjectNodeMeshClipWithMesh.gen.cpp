// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeMeshClipWithMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeMeshClipWithMesh() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeModifierBase();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeMeshClipWithMesh::StaticRegisterNativesUCustomizableObjectNodeMeshClipWithMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeMeshClipWithMesh);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_NoRegister()
	{
		return UCustomizableObjectNodeMeshClipWithMesh::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectToClipWith_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomizableObjectToClipWith;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayMaterialNodeToClipWithID_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayMaterialNodeToClipWithID_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayMaterialNodeToClipWithID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeModifierBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeMeshClipWithMesh.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipWithMesh.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "MeshToClip" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipWithMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipWithMesh, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_CustomizableObjectToClipWith_MetaData[] = {
		{ "Category", "CustomizableObjectToClip" },
		{ "Comment", "//!< If assigned, then a material inside this CO will be clipped by this node.\n//!< If several materials with the same name, all are considered (to cover all LOD levels)\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipWithMesh.h" },
		{ "ToolTip", "!< If assigned, then a material inside this CO will be clipped by this node.\n!< If several materials with the same name, all are considered (to cover all LOD levels)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_CustomizableObjectToClipWith = { "CustomizableObjectToClipWith", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipWithMesh, CustomizableObjectToClipWith), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_CustomizableObjectToClipWith_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_CustomizableObjectToClipWith_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_ArrayMaterialNodeToClipWithID_Inner = { "ArrayMaterialNodeToClipWithID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_ArrayMaterialNodeToClipWithID_MetaData[] = {
		{ "Category", "CustomizableObjectToClip" },
		{ "Comment", "//!< Array with the Guids of the nodes with the same material inside the CustomizableObjectToClipWith CO (if any is assigned)\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipWithMesh.h" },
		{ "ToolTip", "!< Array with the Guids of the nodes with the same material inside the CustomizableObjectToClipWith CO (if any is assigned)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_ArrayMaterialNodeToClipWithID = { "ArrayMaterialNodeToClipWithID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipWithMesh, ArrayMaterialNodeToClipWithID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_ArrayMaterialNodeToClipWithID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_ArrayMaterialNodeToClipWithID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Mesh Transform*/" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMeshClipWithMesh.h" },
		{ "ToolTip", "Mesh Transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMeshClipWithMesh, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_CustomizableObjectToClipWith,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_ArrayMaterialNodeToClipWithID_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_ArrayMaterialNodeToClipWithID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::NewProp_Transform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeMeshClipWithMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::ClassParams = {
		&UCustomizableObjectNodeMeshClipWithMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeMeshClipWithMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeMeshClipWithMesh.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeMeshClipWithMesh.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeMeshClipWithMesh>()
	{
		return UCustomizableObjectNodeMeshClipWithMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeMeshClipWithMesh);
	UCustomizableObjectNodeMeshClipWithMesh::~UCustomizableObjectNodeMeshClipWithMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshClipWithMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshClipWithMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeMeshClipWithMesh, UCustomizableObjectNodeMeshClipWithMesh::StaticClass, TEXT("UCustomizableObjectNodeMeshClipWithMesh"), &Z_Registration_Info_UClass_UCustomizableObjectNodeMeshClipWithMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeMeshClipWithMesh), 3959099289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshClipWithMesh_h_2526309624(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshClipWithMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMeshClipWithMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
