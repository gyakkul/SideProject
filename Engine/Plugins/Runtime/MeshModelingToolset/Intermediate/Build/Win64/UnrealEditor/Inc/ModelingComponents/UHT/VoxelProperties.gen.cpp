// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertySets/VoxelProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelProperties() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UVoxelProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UVoxelProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UVoxelProperties::StaticRegisterNativesUVoxelProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelProperties);
	UClass* Z_Construct_UClass_UVoxelProperties_NoRegister()
	{
		return UVoxelProperties::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSimplify_MetaData[];
#endif
		static void NewProp_bAutoSimplify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSimplify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveInternalSurfaces_MetaData[];
#endif
		static void NewProp_bRemoveInternalSurfaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveInternalSurfaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyMaxErrorFactor_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SimplifyMaxErrorFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeRootMinComponentVolume_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CubeRootMinComponentVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PropertySets/VoxelProperties.h" },
		{ "ModuleRelativePath", "Public/PropertySets/VoxelProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelProperties_Statics::NewProp_VoxelCount_MetaData[] = {
		{ "Category", "VoxelSettings" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "8" },
		{ "Comment", "/** The size of the geometry bounding box major axis measured in voxels */" },
		{ "ModuleRelativePath", "Public/PropertySets/VoxelProperties.h" },
		{ "ToolTip", "The size of the geometry bounding box major axis measured in voxels" },
		{ "UIMax", "1024" },
		{ "UIMin", "8" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelProperties_Statics::NewProp_VoxelCount = { "VoxelCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelProperties, VoxelCount), METADATA_PARAMS(Z_Construct_UClass_UVoxelProperties_Statics::NewProp_VoxelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProperties_Statics::NewProp_VoxelCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bAutoSimplify_MetaData[] = {
		{ "Category", "VoxelSettings" },
		{ "Comment", "/** Automatically simplify the result of voxel-based meshes.*/" },
		{ "ModuleRelativePath", "Public/PropertySets/VoxelProperties.h" },
		{ "ToolTip", "Automatically simplify the result of voxel-based meshes." },
	};
#endif
	void Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bAutoSimplify_SetBit(void* Obj)
	{
		((UVoxelProperties*)Obj)->bAutoSimplify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bAutoSimplify = { "bAutoSimplify", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelProperties), &Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bAutoSimplify_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bAutoSimplify_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bAutoSimplify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bRemoveInternalSurfaces_MetaData[] = {
		{ "Category", "VoxelSettings" },
		{ "Comment", "/** Remove internal, occluded geometry */" },
		{ "ModuleRelativePath", "Public/PropertySets/VoxelProperties.h" },
		{ "ToolTip", "Remove internal, occluded geometry" },
	};
#endif
	void Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bRemoveInternalSurfaces_SetBit(void* Obj)
	{
		((UVoxelProperties*)Obj)->bRemoveInternalSurfaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bRemoveInternalSurfaces = { "bRemoveInternalSurfaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelProperties), &Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bRemoveInternalSurfaces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bRemoveInternalSurfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bRemoveInternalSurfaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelProperties_Statics::NewProp_SimplifyMaxErrorFactor_MetaData[] = {
		{ "Category", "VoxelSettings" },
		{ "ClampMax", "10" },
		{ "ClampMin", ".001" },
		{ "Comment", "/** The max error (as a multiple of the voxel size) to accept when simplifying the output */" },
		{ "EditCondition", "bAutoSimplify == true" },
		{ "ModuleRelativePath", "Public/PropertySets/VoxelProperties.h" },
		{ "ToolTip", "The max error (as a multiple of the voxel size) to accept when simplifying the output" },
		{ "UIMax", "5" },
		{ "UIMin", ".1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVoxelProperties_Statics::NewProp_SimplifyMaxErrorFactor = { "SimplifyMaxErrorFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelProperties, SimplifyMaxErrorFactor), METADATA_PARAMS(Z_Construct_UClass_UVoxelProperties_Statics::NewProp_SimplifyMaxErrorFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProperties_Statics::NewProp_SimplifyMaxErrorFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelProperties_Statics::NewProp_CubeRootMinComponentVolume_MetaData[] = {
		{ "Category", "VoxelSettings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Automatically remove components smaller than this (to clean up any isolated floating bits) */" },
		{ "ModuleRelativePath", "Public/PropertySets/VoxelProperties.h" },
		{ "ToolTip", "Automatically remove components smaller than this (to clean up any isolated floating bits)" },
		{ "UIMax", "100" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVoxelProperties_Statics::NewProp_CubeRootMinComponentVolume = { "CubeRootMinComponentVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelProperties, CubeRootMinComponentVolume), METADATA_PARAMS(Z_Construct_UClass_UVoxelProperties_Statics::NewProp_CubeRootMinComponentVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProperties_Statics::NewProp_CubeRootMinComponentVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelProperties_Statics::NewProp_VoxelCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bAutoSimplify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelProperties_Statics::NewProp_bRemoveInternalSurfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelProperties_Statics::NewProp_SimplifyMaxErrorFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelProperties_Statics::NewProp_CubeRootMinComponentVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelProperties_Statics::ClassParams = {
		&UVoxelProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelProperties()
	{
		if (!Z_Registration_Info_UClass_UVoxelProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelProperties.OuterSingleton, Z_Construct_UClass_UVoxelProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelProperties.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UVoxelProperties>()
	{
		return UVoxelProperties::StaticClass();
	}
	UVoxelProperties::UVoxelProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelProperties);
	UVoxelProperties::~UVoxelProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_VoxelProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_VoxelProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelProperties, UVoxelProperties::StaticClass, TEXT("UVoxelProperties"), &Z_Registration_Info_UClass_UVoxelProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelProperties), 1979677803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_VoxelProperties_h_3552588127(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_VoxelProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_VoxelProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
