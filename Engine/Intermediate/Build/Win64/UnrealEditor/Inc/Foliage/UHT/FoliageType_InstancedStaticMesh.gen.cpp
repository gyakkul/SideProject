// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoliageType_InstancedStaticMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageType_InstancedStaticMesh() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	void UFoliageType_InstancedStaticMesh::StaticRegisterNativesUFoliageType_InstancedStaticMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoliageType_InstancedStaticMesh);
	UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister()
	{
		return UFoliageType_InstancedStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NaniteOverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteOverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NaniteOverrideMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFoliageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FoliageType_InstancedStaticMesh.h" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
		{ "ToolTip", "Material overrides for foliage instances." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_NaniteOverrideMaterials_Inner = { "NaniteOverrideMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_NaniteOverrideMaterials_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
		{ "ToolTip", "Nanite material overrides for foliage instances." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_NaniteOverrideMaterials = { "NaniteOverrideMaterials", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, NaniteOverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_NaniteOverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_NaniteOverrideMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The component class to use for foliage instances. \n\x09  * You can make a Blueprint subclass of FoliageInstancedStaticMeshComponent to implement custom behavior and assign that class here. */" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
		{ "ToolTip", "The component class to use for foliage instances.\nYou can make a Blueprint subclass of FoliageInstancedStaticMeshComponent to implement custom behavior and assign that class here." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_ComponentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_NaniteOverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_NaniteOverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_ComponentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageType_InstancedStaticMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::ClassParams = {
		&UFoliageType_InstancedStaticMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh()
	{
		if (!Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.OuterSingleton, Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.OuterSingleton;
	}
	template<> FOLIAGE_API UClass* StaticClass<UFoliageType_InstancedStaticMesh>()
	{
		return UFoliageType_InstancedStaticMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageType_InstancedStaticMesh);
	UFoliageType_InstancedStaticMesh::~UFoliageType_InstancedStaticMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoliageType_InstancedStaticMesh, UFoliageType_InstancedStaticMesh::StaticClass, TEXT("UFoliageType_InstancedStaticMesh"), &Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoliageType_InstancedStaticMesh), 609767169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_2566947161(TEXT("/Script/Foliage"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
