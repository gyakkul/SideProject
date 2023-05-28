// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSolidifyMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSolidifyMeshesTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelSolidifyMeshesTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelSolidifyMeshesTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseVoxelTool();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UVoxelSolidifyMeshesToolProperties::StaticRegisterNativesUVoxelSolidifyMeshesToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSolidifyMeshesToolProperties);
	UClass* Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_NoRegister()
	{
		return UVoxelSolidifyMeshesToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_WindingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtendBounds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ExtendBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceSearchSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SurfaceSearchSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSolidAtBoundaries_MetaData[];
#endif
		static void NewProp_bSolidAtBoundaries_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolidAtBoundaries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyThickenShells_MetaData[];
#endif
		static void NewProp_bApplyThickenShells_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyThickenShells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThickenShells_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ThickenShells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Properties of the solidify operation\n */" },
		{ "IncludePath", "VoxelSolidifyMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelSolidifyMeshesTool.h" },
		{ "ToolTip", "Properties of the solidify operation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_WindingThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Winding number threshold to determine what is consider inside the mesh */" },
		{ "ModuleRelativePath", "Public/VoxelSolidifyMeshesTool.h" },
		{ "ToolTip", "Winding number threshold to determine what is consider inside the mesh" },
		{ "UIMax", ".9" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_WindingThreshold = { "WindingThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelSolidifyMeshesToolProperties, WindingThreshold), METADATA_PARAMS(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_WindingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_WindingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_ExtendBounds_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How far we allow bounds of solid surface to go beyond the bounds of the original input surface before clamping / cutting the surface off */" },
		{ "ModuleRelativePath", "Public/VoxelSolidifyMeshesTool.h" },
		{ "ToolTip", "How far we allow bounds of solid surface to go beyond the bounds of the original input surface before clamping / cutting the surface off" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_ExtendBounds = { "ExtendBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelSolidifyMeshesToolProperties, ExtendBounds), METADATA_PARAMS(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_ExtendBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_ExtendBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_SurfaceSearchSteps_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How many binary search steps to take when placing vertices on the surface */" },
		{ "ModuleRelativePath", "Public/VoxelSolidifyMeshesTool.h" },
		{ "ToolTip", "How many binary search steps to take when placing vertices on the surface" },
		{ "UIMax", "6" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_SurfaceSearchSteps = { "SurfaceSearchSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelSolidifyMeshesToolProperties, SurfaceSearchSteps), METADATA_PARAMS(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_SurfaceSearchSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_SurfaceSearchSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bSolidAtBoundaries_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to fill at the border of the bounding box, if the surface extends beyond the voxel boundaries */" },
		{ "ModuleRelativePath", "Public/VoxelSolidifyMeshesTool.h" },
		{ "ToolTip", "Whether to fill at the border of the bounding box, if the surface extends beyond the voxel boundaries" },
	};
#endif
	void Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bSolidAtBoundaries_SetBit(void* Obj)
	{
		((UVoxelSolidifyMeshesToolProperties*)Obj)->bSolidAtBoundaries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bSolidAtBoundaries = { "bSolidAtBoundaries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelSolidifyMeshesToolProperties), &Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bSolidAtBoundaries_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bSolidAtBoundaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bSolidAtBoundaries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bApplyThickenShells_MetaData[] = {
		{ "Comment", "/** If true, uses the ThickenShells setting */" },
		{ "ModuleRelativePath", "Public/VoxelSolidifyMeshesTool.h" },
		{ "ToolTip", "If true, uses the ThickenShells setting" },
	};
#endif
	void Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bApplyThickenShells_SetBit(void* Obj)
	{
		((UVoxelSolidifyMeshesToolProperties*)Obj)->bApplyThickenShells = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bApplyThickenShells = { "bApplyThickenShells", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelSolidifyMeshesToolProperties), &Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bApplyThickenShells_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bApplyThickenShells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bApplyThickenShells_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_ThickenShells_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1000" },
		{ "ClampMin", ".001" },
		{ "Comment", "/** Thicken open-boundary surfaces (extrude them inwards) to ensure they are captured in the VoxWrap output. Units are in world space. */" },
		{ "EditCondition", "bApplyThickenShells == true" },
		{ "ModuleRelativePath", "Public/VoxelSolidifyMeshesTool.h" },
		{ "ToolTip", "Thicken open-boundary surfaces (extrude them inwards) to ensure they are captured in the VoxWrap output. Units are in world space." },
		{ "UIMax", "100" },
		{ "UIMin", ".1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_ThickenShells = { "ThickenShells", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelSolidifyMeshesToolProperties, ThickenShells), METADATA_PARAMS(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_ThickenShells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_ThickenShells_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_WindingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_ExtendBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_SurfaceSearchSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bSolidAtBoundaries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_bApplyThickenShells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::NewProp_ThickenShells,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSolidifyMeshesToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::ClassParams = {
		&UVoxelSolidifyMeshesToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties()
	{
		if (!Z_Registration_Info_UClass_UVoxelSolidifyMeshesToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSolidifyMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSolidifyMeshesToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVoxelSolidifyMeshesToolProperties>()
	{
		return UVoxelSolidifyMeshesToolProperties::StaticClass();
	}
	UVoxelSolidifyMeshesToolProperties::UVoxelSolidifyMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSolidifyMeshesToolProperties);
	UVoxelSolidifyMeshesToolProperties::~UVoxelSolidifyMeshesToolProperties() {}
	void UVoxelSolidifyMeshesTool::StaticRegisterNativesUVoxelSolidifyMeshesTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSolidifyMeshesTool);
	UClass* Z_Construct_UClass_UVoxelSolidifyMeshesTool_NoRegister()
	{
		return UVoxelSolidifyMeshesTool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolidifyProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SolidifyProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseVoxelTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool to take one or more meshes, possibly intersecting and possibly with holes, and create a single solid mesh with consistent inside/outside\n */" },
		{ "IncludePath", "VoxelSolidifyMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelSolidifyMeshesTool.h" },
		{ "ToolTip", "Tool to take one or more meshes, possibly intersecting and possibly with holes, and create a single solid mesh with consistent inside/outside" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::NewProp_SolidifyProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSolidifyMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::NewProp_SolidifyProperties = { "SolidifyProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelSolidifyMeshesTool, SolidifyProperties), Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::NewProp_SolidifyProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::NewProp_SolidifyProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::NewProp_SolidifyProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSolidifyMeshesTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::ClassParams = {
		&UVoxelSolidifyMeshesTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSolidifyMeshesTool()
	{
		if (!Z_Registration_Info_UClass_UVoxelSolidifyMeshesTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSolidifyMeshesTool.OuterSingleton, Z_Construct_UClass_UVoxelSolidifyMeshesTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSolidifyMeshesTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVoxelSolidifyMeshesTool>()
	{
		return UVoxelSolidifyMeshesTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSolidifyMeshesTool);
	UVoxelSolidifyMeshesTool::~UVoxelSolidifyMeshesTool() {}
	void UVoxelSolidifyMeshesToolBuilder::StaticRegisterNativesUVoxelSolidifyMeshesToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSolidifyMeshesToolBuilder);
	UClass* Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_NoRegister()
	{
		return UVoxelSolidifyMeshesToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSolidifyMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelSolidifyMeshesTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSolidifyMeshesToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_Statics::ClassParams = {
		&UVoxelSolidifyMeshesToolBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UVoxelSolidifyMeshesToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSolidifyMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSolidifyMeshesToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVoxelSolidifyMeshesToolBuilder>()
	{
		return UVoxelSolidifyMeshesToolBuilder::StaticClass();
	}
	UVoxelSolidifyMeshesToolBuilder::UVoxelSolidifyMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSolidifyMeshesToolBuilder);
	UVoxelSolidifyMeshesToolBuilder::~UVoxelSolidifyMeshesToolBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSolidifyMeshesToolProperties, UVoxelSolidifyMeshesToolProperties::StaticClass, TEXT("UVoxelSolidifyMeshesToolProperties"), &Z_Registration_Info_UClass_UVoxelSolidifyMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSolidifyMeshesToolProperties), 2768231114U) },
		{ Z_Construct_UClass_UVoxelSolidifyMeshesTool, UVoxelSolidifyMeshesTool::StaticClass, TEXT("UVoxelSolidifyMeshesTool"), &Z_Registration_Info_UClass_UVoxelSolidifyMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSolidifyMeshesTool), 3505821267U) },
		{ Z_Construct_UClass_UVoxelSolidifyMeshesToolBuilder, UVoxelSolidifyMeshesToolBuilder::StaticClass, TEXT("UVoxelSolidifyMeshesToolBuilder"), &Z_Registration_Info_UClass_UVoxelSolidifyMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSolidifyMeshesToolBuilder), 1731245618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_4020412808(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelSolidifyMeshesTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
