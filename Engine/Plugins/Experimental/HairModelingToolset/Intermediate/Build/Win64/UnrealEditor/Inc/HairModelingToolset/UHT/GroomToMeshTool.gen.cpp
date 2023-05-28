// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomToMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomToMeshTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGroomToMeshTool();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGroomToMeshTool_NoRegister();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGroomToMeshToolBuilder();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGroomToMeshToolBuilder_NoRegister();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGroomToMeshToolProperties();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGroomToMeshToolProperties_NoRegister();
	HAIRMODELINGTOOLSET_API UEnum* Z_Construct_UEnum_HairModelingToolset_EGroomToMeshUVMode();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_AGroomActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HairModelingToolset();
// End Cross Module References
	void UGroomToMeshToolBuilder::StaticRegisterNativesUGroomToMeshToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomToMeshToolBuilder);
	UClass* Z_Construct_UClass_UGroomToMeshToolBuilder_NoRegister()
	{
		return UGroomToMeshToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UGroomToMeshToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomToMeshToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_HairModelingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "GroomToMeshTool.h" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomToMeshToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomToMeshToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomToMeshToolBuilder_Statics::ClassParams = {
		&UGroomToMeshToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomToMeshToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UGroomToMeshToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomToMeshToolBuilder.OuterSingleton, Z_Construct_UClass_UGroomToMeshToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomToMeshToolBuilder.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UClass* StaticClass<UGroomToMeshToolBuilder>()
	{
		return UGroomToMeshToolBuilder::StaticClass();
	}
	UGroomToMeshToolBuilder::UGroomToMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomToMeshToolBuilder);
	UGroomToMeshToolBuilder::~UGroomToMeshToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomToMeshUVMode;
	static UEnum* EGroomToMeshUVMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomToMeshUVMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomToMeshUVMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairModelingToolset_EGroomToMeshUVMode, (UObject*)Z_Construct_UPackage__Script_HairModelingToolset(), TEXT("EGroomToMeshUVMode"));
		}
		return Z_Registration_Info_UEnum_EGroomToMeshUVMode.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UEnum* StaticEnum<EGroomToMeshUVMode>()
	{
		return EGroomToMeshUVMode_StaticEnum();
	}
	struct Z_Construct_UEnum_HairModelingToolset_EGroomToMeshUVMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairModelingToolset_EGroomToMeshUVMode_Statics::Enumerators[] = {
		{ "EGroomToMeshUVMode::PlanarSplitting", (int64)EGroomToMeshUVMode::PlanarSplitting },
		{ "EGroomToMeshUVMode::MinimalConformal", (int64)EGroomToMeshUVMode::MinimalConformal },
		{ "EGroomToMeshUVMode::PlanarSplitConformal", (int64)EGroomToMeshUVMode::PlanarSplitConformal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairModelingToolset_EGroomToMeshUVMode_Statics::Enum_MetaDataParams[] = {
		{ "MinimalConformal.Name", "EGroomToMeshUVMode::MinimalConformal" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
		{ "PlanarSplitConformal.Name", "EGroomToMeshUVMode::PlanarSplitConformal" },
		{ "PlanarSplitting.Name", "EGroomToMeshUVMode::PlanarSplitting" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairModelingToolset_EGroomToMeshUVMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairModelingToolset,
		nullptr,
		"EGroomToMeshUVMode",
		"EGroomToMeshUVMode",
		Z_Construct_UEnum_HairModelingToolset_EGroomToMeshUVMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairModelingToolset_EGroomToMeshUVMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairModelingToolset_EGroomToMeshUVMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairModelingToolset_EGroomToMeshUVMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairModelingToolset_EGroomToMeshUVMode()
	{
		if (!Z_Registration_Info_UEnum_EGroomToMeshUVMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomToMeshUVMode.InnerSingleton, Z_Construct_UEnum_HairModelingToolset_EGroomToMeshUVMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomToMeshUVMode.InnerSingleton;
	}
	void UGroomToMeshToolProperties::StaticRegisterNativesUGroomToMeshToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomToMeshToolProperties);
	UClass* Z_Construct_UClass_UGroomToMeshToolProperties_NoRegister()
	{
		return UGroomToMeshToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UGroomToMeshToolProperties_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyMorphology_MetaData[];
#endif
		static void NewProp_bApplyMorphology_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyMorphology;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosingDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClosingDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpeningDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OpeningDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClipToHead_MetaData[];
#endif
		static void NewProp_bClipToHead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClipToHead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipMeshActor_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_ClipMeshActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmooth_MetaData[];
#endif
		static void NewProp_bSmooth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmooth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Smoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Smoothness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeCorrection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplify_MetaData[];
#endif
		static void NewProp_bSimplify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexCount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UVMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSideBySide_MetaData[];
#endif
		static void NewProp_bShowSideBySide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSideBySide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGuides_MetaData[];
#endif
		static void NewProp_bShowGuides_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGuides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowUVs_MetaData[];
#endif
		static void NewProp_bShowUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowUVs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomToMeshToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_HairModelingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GroomToMeshTool.h" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VoxelCount_MetaData[] = {
		{ "Category", "Meshing" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "8" },
		{ "Comment", "/** The size of the geometry bounding box major axis measured in voxels */" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
		{ "ToolTip", "The size of the geometry bounding box major axis measured in voxels" },
		{ "UIMax", "512" },
		{ "UIMin", "8" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VoxelCount = { "VoxelCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshToolProperties, VoxelCount), METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VoxelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VoxelCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_BlendPower_MetaData[] = {
		{ "Category", "Meshing" },
		{ "ClampMax", "128.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
		{ "UIMax", "16.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_BlendPower = { "BlendPower", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshToolProperties, BlendPower), METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_BlendPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_BlendPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_RadiusScale_MetaData[] = {
		{ "Category", "Meshing" },
		{ "ClampMax", "128.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_RadiusScale = { "RadiusScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshToolProperties, RadiusScale), METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_RadiusScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_RadiusScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bApplyMorphology_MetaData[] = {
		{ "Category", "Morphology" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bApplyMorphology_SetBit(void* Obj)
	{
		((UGroomToMeshToolProperties*)Obj)->bApplyMorphology = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bApplyMorphology = { "bApplyMorphology", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroomToMeshToolProperties), &Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bApplyMorphology_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bApplyMorphology_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bApplyMorphology_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_ClosingDist_MetaData[] = {
		{ "Category", "Morphology" },
		{ "ClampMax", "128.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_ClosingDist = { "ClosingDist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshToolProperties, ClosingDist), METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_ClosingDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_ClosingDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_OpeningDist_MetaData[] = {
		{ "Category", "Morphology" },
		{ "ClampMax", "128.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_OpeningDist = { "OpeningDist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshToolProperties, OpeningDist), METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_OpeningDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_OpeningDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bClipToHead_MetaData[] = {
		{ "Category", "Clipping" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bClipToHead_SetBit(void* Obj)
	{
		((UGroomToMeshToolProperties*)Obj)->bClipToHead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bClipToHead = { "bClipToHead", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroomToMeshToolProperties), &Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bClipToHead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bClipToHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bClipToHead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_ClipMeshActor_MetaData[] = {
		{ "Category", "Clipping" },
		{ "Comment", "// todo: this probably also needs to support skeletal mesh\n" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
		{ "ToolTip", "todo: this probably also needs to support skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_ClipMeshActor = { "ClipMeshActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshToolProperties, ClipMeshActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_ClipMeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_ClipMeshActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSmooth_MetaData[] = {
		{ "Category", "Smoothing" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSmooth_SetBit(void* Obj)
	{
		((UGroomToMeshToolProperties*)Obj)->bSmooth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSmooth = { "bSmooth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroomToMeshToolProperties), &Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSmooth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSmooth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSmooth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_Smoothness_MetaData[] = {
		{ "Category", "Smoothing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_Smoothness = { "Smoothness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshToolProperties, Smoothness), METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_Smoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VolumeCorrection_MetaData[] = {
		{ "Category", "Smoothing" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "-2.0" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VolumeCorrection = { "VolumeCorrection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshToolProperties, VolumeCorrection), METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VolumeCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VolumeCorrection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSimplify_MetaData[] = {
		{ "Category", "Simplification" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSimplify_SetBit(void* Obj)
	{
		((UGroomToMeshToolProperties*)Obj)->bSimplify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSimplify = { "bSimplify", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroomToMeshToolProperties), &Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSimplify_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSimplify_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSimplify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VertexCount_MetaData[] = {
		{ "Category", "Simplification" },
		{ "ClampMax", "9999999999" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Target triangle count */" },
		{ "EditCondition", "bSimplify == true" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
		{ "ToolTip", "Target triangle count" },
		{ "UIMax", "5000" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VertexCount = { "VertexCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshToolProperties, VertexCount), METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VertexCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VertexCount_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_UVMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_UVMode_MetaData[] = {
		{ "Category", "UVGeneration" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_UVMode = { "UVMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshToolProperties, UVMode), Z_Construct_UEnum_HairModelingToolset_EGroomToMeshUVMode, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_UVMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_UVMode_MetaData)) }; // 165448137
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowSideBySide_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowSideBySide_SetBit(void* Obj)
	{
		((UGroomToMeshToolProperties*)Obj)->bShowSideBySide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowSideBySide = { "bShowSideBySide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroomToMeshToolProperties), &Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowSideBySide_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowSideBySide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowSideBySide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowGuides_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowGuides_SetBit(void* Obj)
	{
		((UGroomToMeshToolProperties*)Obj)->bShowGuides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowGuides = { "bShowGuides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroomToMeshToolProperties), &Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowGuides_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowGuides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowGuides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowUVs_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowUVs_SetBit(void* Obj)
	{
		((UGroomToMeshToolProperties*)Obj)->bShowUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowUVs = { "bShowUVs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroomToMeshToolProperties), &Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowUVs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomToMeshToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VoxelCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_BlendPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_RadiusScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bApplyMorphology,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_ClosingDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_OpeningDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bClipToHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_ClipMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSmooth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_Smoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VolumeCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bSimplify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_VertexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_UVMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_UVMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowSideBySide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowGuides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshToolProperties_Statics::NewProp_bShowUVs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomToMeshToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomToMeshToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomToMeshToolProperties_Statics::ClassParams = {
		&UGroomToMeshToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroomToMeshToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomToMeshToolProperties()
	{
		if (!Z_Registration_Info_UClass_UGroomToMeshToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomToMeshToolProperties.OuterSingleton, Z_Construct_UClass_UGroomToMeshToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomToMeshToolProperties.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UClass* StaticClass<UGroomToMeshToolProperties>()
	{
		return UGroomToMeshToolProperties::StaticClass();
	}
	UGroomToMeshToolProperties::UGroomToMeshToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomToMeshToolProperties);
	UGroomToMeshToolProperties::~UGroomToMeshToolProperties() {}
	void UGroomToMeshTool::StaticRegisterNativesUGroomToMeshTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomToMeshTool);
	UClass* Z_Construct_UClass_UGroomToMeshTool_NoRegister()
	{
		return UGroomToMeshTool::StaticClass();
	}
	struct Z_Construct_UClass_UGroomToMeshTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGroom_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_TargetGroom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomToMeshTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_HairModelingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "GroomToMeshTool.h" },
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshTool, Settings), Z_Construct_UClass_UGroomToMeshToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_TargetGroom_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_TargetGroom = { "TargetGroom", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshTool, TargetGroom), Z_Construct_UClass_AGroomActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_TargetGroom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_TargetGroom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_PreviewGeom_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_PreviewGeom = { "PreviewGeom", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshTool, PreviewGeom), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_PreviewGeom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_PreviewGeom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_MeshMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_MeshMaterial = { "MeshMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshTool, MeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_MeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_MeshMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_UVMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomToMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_UVMaterial = { "UVMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomToMeshTool, UVMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_UVMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_UVMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomToMeshTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_TargetGroom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_PreviewGeom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_MeshMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomToMeshTool_Statics::NewProp_UVMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomToMeshTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomToMeshTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomToMeshTool_Statics::ClassParams = {
		&UGroomToMeshTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroomToMeshTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomToMeshTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomToMeshTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomToMeshTool()
	{
		if (!Z_Registration_Info_UClass_UGroomToMeshTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomToMeshTool.OuterSingleton, Z_Construct_UClass_UGroomToMeshTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomToMeshTool.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UClass* StaticClass<UGroomToMeshTool>()
	{
		return UGroomToMeshTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomToMeshTool);
	UGroomToMeshTool::~UGroomToMeshTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomToMeshTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomToMeshTool_h_Statics::EnumInfo[] = {
		{ EGroomToMeshUVMode_StaticEnum, TEXT("EGroomToMeshUVMode"), &Z_Registration_Info_UEnum_EGroomToMeshUVMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 165448137U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomToMeshTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomToMeshToolBuilder, UGroomToMeshToolBuilder::StaticClass, TEXT("UGroomToMeshToolBuilder"), &Z_Registration_Info_UClass_UGroomToMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomToMeshToolBuilder), 4052279522U) },
		{ Z_Construct_UClass_UGroomToMeshToolProperties, UGroomToMeshToolProperties::StaticClass, TEXT("UGroomToMeshToolProperties"), &Z_Registration_Info_UClass_UGroomToMeshToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomToMeshToolProperties), 507790433U) },
		{ Z_Construct_UClass_UGroomToMeshTool, UGroomToMeshTool::StaticClass, TEXT("UGroomToMeshTool"), &Z_Registration_Info_UClass_UGroomToMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomToMeshTool), 4022228644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomToMeshTool_h_3652699191(TEXT("/Script/HairModelingToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomToMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomToMeshTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomToMeshTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GroomToMeshTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
