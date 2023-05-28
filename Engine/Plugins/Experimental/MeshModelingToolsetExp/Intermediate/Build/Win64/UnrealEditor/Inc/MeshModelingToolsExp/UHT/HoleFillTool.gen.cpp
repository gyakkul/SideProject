// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoleFillTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoleFillTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillOperatorFactory();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillOperatorFactory_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillStatisticsProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillStatisticsProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillToolActions();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillToolActions_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothHoleFillProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothHoleFillProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBoundarySelectionMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UHoleFillToolBuilder::StaticRegisterNativesUHoleFillToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoleFillToolBuilder);
	UClass* Z_Construct_UClass_UHoleFillToolBuilder_NoRegister()
	{
		return UHoleFillToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UHoleFillToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoleFillToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Tool builder\n */" },
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "* Tool builder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoleFillToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoleFillToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoleFillToolBuilder_Statics::ClassParams = {
		&UHoleFillToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHoleFillToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoleFillToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UHoleFillToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoleFillToolBuilder.OuterSingleton, Z_Construct_UClass_UHoleFillToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoleFillToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UHoleFillToolBuilder>()
	{
		return UHoleFillToolBuilder::StaticClass();
	}
	UHoleFillToolBuilder::UHoleFillToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoleFillToolBuilder);
	UHoleFillToolBuilder::~UHoleFillToolBuilder() {}
	void USmoothHoleFillProperties::StaticRegisterNativesUSmoothHoleFillProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmoothHoleFillProperties);
	UClass* Z_Construct_UClass_USmoothHoleFillProperties_NoRegister()
	{
		return USmoothHoleFillProperties::StaticClass();
	}
	struct Z_Construct_UClass_USmoothHoleFillProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainToHoleInterior_MetaData[];
#endif
		static void NewProp_bConstrainToHoleInterior_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainToHoleInterior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemeshingExteriorRegionWidth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RemeshingExteriorRegionWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingExteriorRegionWidth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SmoothingExteriorRegionWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingInteriorRegionWidth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SmoothingInteriorRegionWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorSmoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorSmoothness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillDensityScalar_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_FillDensityScalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectDuringRemesh_MetaData[];
#endif
		static void NewProp_bProjectDuringRemesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectDuringRemesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmoothHoleFillProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothHoleFillProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Properties. This class reflects the parameters in FSmoothFillOptions, but is decorated to allow use in the UI system.\n */" },
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "* Properties. This class reflects the parameters in FSmoothFillOptions, but is decorated to allow use in the UI system." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bConstrainToHoleInterior_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "Comment", "/** Allow smoothing and remeshing of triangles outside of the fill region */" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Allow smoothing and remeshing of triangles outside of the fill region" },
	};
#endif
	void Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bConstrainToHoleInterior_SetBit(void* Obj)
	{
		((USmoothHoleFillProperties*)Obj)->bConstrainToHoleInterior = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bConstrainToHoleInterior = { "bConstrainToHoleInterior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmoothHoleFillProperties), &Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bConstrainToHoleInterior_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bConstrainToHoleInterior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bConstrainToHoleInterior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_RemeshingExteriorRegionWidth_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of vertex rings outside of the fill region to allow remeshing */" },
		{ "Delta", "1" },
		{ "EditCondition", "!bConstrainToHoleInterior" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Number of vertex rings outside of the fill region to allow remeshing" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_RemeshingExteriorRegionWidth = { "RemeshingExteriorRegionWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothHoleFillProperties, RemeshingExteriorRegionWidth), METADATA_PARAMS(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_RemeshingExteriorRegionWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_RemeshingExteriorRegionWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingExteriorRegionWidth_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of vertex rings outside of the fill region to perform smoothing */" },
		{ "Delta", "1" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Number of vertex rings outside of the fill region to perform smoothing" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingExteriorRegionWidth = { "SmoothingExteriorRegionWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothHoleFillProperties, SmoothingExteriorRegionWidth), METADATA_PARAMS(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingExteriorRegionWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingExteriorRegionWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingInteriorRegionWidth_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of vertex rings away from the fill region boundary to constrain smoothing */" },
		{ "Delta", "1" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Number of vertex rings away from the fill region boundary to constrain smoothing" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingInteriorRegionWidth = { "SmoothingInteriorRegionWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothHoleFillProperties, SmoothingInteriorRegionWidth), METADATA_PARAMS(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingInteriorRegionWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingInteriorRegionWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_InteriorSmoothness_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Desired Smoothness. This is not a linear quantity, but larger numbers produce smoother results */" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Desired Smoothness. This is not a linear quantity, but larger numbers produce smoother results" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_InteriorSmoothness = { "InteriorSmoothness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothHoleFillProperties, InteriorSmoothness), METADATA_PARAMS(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_InteriorSmoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_InteriorSmoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_FillDensityScalar_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Relative triangle density of fill region */" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Relative triangle density of fill region" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_FillDensityScalar = { "FillDensityScalar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmoothHoleFillProperties, FillDensityScalar), METADATA_PARAMS(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_FillDensityScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_FillDensityScalar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bProjectDuringRemesh_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "Comment", "/** \n\x09 * Whether to project to the original mesh during post-smooth remeshing. This can be expensive on large meshes with \n\x09 * many holes. \n\x09 */" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Whether to project to the original mesh during post-smooth remeshing. This can be expensive on large meshes with\nmany holes." },
	};
#endif
	void Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bProjectDuringRemesh_SetBit(void* Obj)
	{
		((USmoothHoleFillProperties*)Obj)->bProjectDuringRemesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bProjectDuringRemesh = { "bProjectDuringRemesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmoothHoleFillProperties), &Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bProjectDuringRemesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bProjectDuringRemesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bProjectDuringRemesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmoothHoleFillProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bConstrainToHoleInterior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_RemeshingExteriorRegionWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingExteriorRegionWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingInteriorRegionWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_InteriorSmoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_FillDensityScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bProjectDuringRemesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmoothHoleFillProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmoothHoleFillProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::ClassParams = {
		&USmoothHoleFillProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmoothHoleFillProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmoothHoleFillProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USmoothHoleFillProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmoothHoleFillProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmoothHoleFillProperties()
	{
		if (!Z_Registration_Info_UClass_USmoothHoleFillProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmoothHoleFillProperties.OuterSingleton, Z_Construct_UClass_USmoothHoleFillProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmoothHoleFillProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USmoothHoleFillProperties>()
	{
		return USmoothHoleFillProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmoothHoleFillProperties);
	USmoothHoleFillProperties::~USmoothHoleFillProperties() {}
	void UHoleFillToolProperties::StaticRegisterNativesUHoleFillToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoleFillToolProperties);
	UClass* Z_Construct_UClass_UHoleFillToolProperties_NoRegister()
	{
		return UHoleFillToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UHoleFillToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FillType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FillType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveIsolatedTriangles_MetaData[];
#endif
		static void NewProp_bRemoveIsolatedTriangles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveIsolatedTriangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bQuickFillSmallHoles_MetaData[];
#endif
		static void NewProp_bQuickFillSmallHoles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuickFillSmallHoles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoleFillToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_FillType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_FillType_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_FillType = { "FillType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoleFillToolProperties, FillType), Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType, METADATA_PARAMS(Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_FillType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_FillType_MetaData)) }; // 2040185138
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bRemoveIsolatedTriangles_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Clean up triangles that have no neighbors */" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Clean up triangles that have no neighbors" },
	};
#endif
	void Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bRemoveIsolatedTriangles_SetBit(void* Obj)
	{
		((UHoleFillToolProperties*)Obj)->bRemoveIsolatedTriangles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bRemoveIsolatedTriangles = { "bRemoveIsolatedTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoleFillToolProperties), &Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bRemoveIsolatedTriangles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bRemoveIsolatedTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bRemoveIsolatedTriangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bQuickFillSmallHoles_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Identify and quickly fill single-triangle holes */" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Identify and quickly fill single-triangle holes" },
	};
#endif
	void Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bQuickFillSmallHoles_SetBit(void* Obj)
	{
		((UHoleFillToolProperties*)Obj)->bQuickFillSmallHoles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bQuickFillSmallHoles = { "bQuickFillSmallHoles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoleFillToolProperties), &Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bQuickFillSmallHoles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bQuickFillSmallHoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bQuickFillSmallHoles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoleFillToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_FillType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_FillType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bRemoveIsolatedTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bQuickFillSmallHoles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoleFillToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoleFillToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoleFillToolProperties_Statics::ClassParams = {
		&UHoleFillToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoleFillToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHoleFillToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoleFillToolProperties()
	{
		if (!Z_Registration_Info_UClass_UHoleFillToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoleFillToolProperties.OuterSingleton, Z_Construct_UClass_UHoleFillToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoleFillToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UHoleFillToolProperties>()
	{
		return UHoleFillToolProperties::StaticClass();
	}
	UHoleFillToolProperties::UHoleFillToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoleFillToolProperties);
	UHoleFillToolProperties::~UHoleFillToolProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoleFillToolActions;
	static UEnum* EHoleFillToolActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoleFillToolActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoleFillToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EHoleFillToolActions"));
		}
		return Z_Registration_Info_UEnum_EHoleFillToolActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EHoleFillToolActions>()
	{
		return EHoleFillToolActions_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::Enumerators[] = {
		{ "EHoleFillToolActions::NoAction", (int64)EHoleFillToolActions::NoAction },
		{ "EHoleFillToolActions::SelectAll", (int64)EHoleFillToolActions::SelectAll },
		{ "EHoleFillToolActions::ClearSelection", (int64)EHoleFillToolActions::ClearSelection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::Enum_MetaDataParams[] = {
		{ "ClearSelection.Name", "EHoleFillToolActions::ClearSelection" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "NoAction.Name", "EHoleFillToolActions::NoAction" },
		{ "SelectAll.Name", "EHoleFillToolActions::SelectAll" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EHoleFillToolActions",
		"EHoleFillToolActions",
		Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions()
	{
		if (!Z_Registration_Info_UEnum_EHoleFillToolActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoleFillToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoleFillToolActions.InnerSingleton;
	}
	DEFINE_FUNCTION(UHoleFillToolActions::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoleFillToolActions::execSelectAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectAll();
		P_NATIVE_END;
	}
	void UHoleFillToolActions::StaticRegisterNativesUHoleFillToolActions()
	{
		UClass* Class = UHoleFillToolActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UHoleFillToolActions::execClear },
			{ "SelectAll", &UHoleFillToolActions::execSelectAll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoleFillToolActions_Clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoleFillToolActions_Clear_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "DisplayName", "Clear" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoleFillToolActions_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoleFillToolActions, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoleFillToolActions_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoleFillToolActions_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoleFillToolActions_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoleFillToolActions_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoleFillToolActions_SelectAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoleFillToolActions_SelectAll_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "DisplayName", "Select All" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoleFillToolActions_SelectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoleFillToolActions, nullptr, "SelectAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoleFillToolActions_SelectAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoleFillToolActions_SelectAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoleFillToolActions_SelectAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoleFillToolActions_SelectAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoleFillToolActions);
	UClass* Z_Construct_UClass_UHoleFillToolActions_NoRegister()
	{
		return UHoleFillToolActions::StaticClass();
	}
	struct Z_Construct_UClass_UHoleFillToolActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoleFillToolActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoleFillToolActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoleFillToolActions_Clear, "Clear" }, // 2502497274
		{ &Z_Construct_UFunction_UHoleFillToolActions_SelectAll, "SelectAll" }, // 653373593
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillToolActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoleFillToolActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoleFillToolActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoleFillToolActions_Statics::ClassParams = {
		&UHoleFillToolActions::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHoleFillToolActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoleFillToolActions()
	{
		if (!Z_Registration_Info_UClass_UHoleFillToolActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoleFillToolActions.OuterSingleton, Z_Construct_UClass_UHoleFillToolActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoleFillToolActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UHoleFillToolActions>()
	{
		return UHoleFillToolActions::StaticClass();
	}
	UHoleFillToolActions::UHoleFillToolActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoleFillToolActions);
	UHoleFillToolActions::~UHoleFillToolActions() {}
	void UHoleFillStatisticsProperties::StaticRegisterNativesUHoleFillStatisticsProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoleFillStatisticsProperties);
	UClass* Z_Construct_UClass_UHoleFillStatisticsProperties_NoRegister()
	{
		return UHoleFillStatisticsProperties::StaticClass();
	}
	struct Z_Construct_UClass_UHoleFillStatisticsProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialHoles_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InitialHoles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoles_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedHoles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessfulFills_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SuccessfulFills;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailedFills_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FailedFills;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainingHoles_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemainingHoles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_InitialHoles_MetaData[] = {
		{ "Category", "HoleFillStatistics" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_InitialHoles = { "InitialHoles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoleFillStatisticsProperties, InitialHoles), METADATA_PARAMS(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_InitialHoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_InitialHoles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SelectedHoles_MetaData[] = {
		{ "Category", "HoleFillStatistics" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SelectedHoles = { "SelectedHoles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoleFillStatisticsProperties, SelectedHoles), METADATA_PARAMS(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SelectedHoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SelectedHoles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SuccessfulFills_MetaData[] = {
		{ "Category", "HoleFillStatistics" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SuccessfulFills = { "SuccessfulFills", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoleFillStatisticsProperties, SuccessfulFills), METADATA_PARAMS(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SuccessfulFills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SuccessfulFills_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_FailedFills_MetaData[] = {
		{ "Category", "HoleFillStatistics" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_FailedFills = { "FailedFills", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoleFillStatisticsProperties, FailedFills), METADATA_PARAMS(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_FailedFills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_FailedFills_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_RemainingHoles_MetaData[] = {
		{ "Category", "HoleFillStatistics" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_RemainingHoles = { "RemainingHoles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoleFillStatisticsProperties, RemainingHoles), METADATA_PARAMS(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_RemainingHoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_RemainingHoles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_InitialHoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SelectedHoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SuccessfulFills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_FailedFills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_RemainingHoles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoleFillStatisticsProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::ClassParams = {
		&UHoleFillStatisticsProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoleFillStatisticsProperties()
	{
		if (!Z_Registration_Info_UClass_UHoleFillStatisticsProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoleFillStatisticsProperties.OuterSingleton, Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoleFillStatisticsProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UHoleFillStatisticsProperties>()
	{
		return UHoleFillStatisticsProperties::StaticClass();
	}
	UHoleFillStatisticsProperties::UHoleFillStatisticsProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoleFillStatisticsProperties);
	UHoleFillStatisticsProperties::~UHoleFillStatisticsProperties() {}
	void UHoleFillOperatorFactory::StaticRegisterNativesUHoleFillOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoleFillOperatorFactory);
	UClass* Z_Construct_UClass_UHoleFillOperatorFactory_NoRegister()
	{
		return UHoleFillOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHoleFillOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillTool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FillTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoleFillOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Operator factory\n */" },
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "* Operator factory" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillOperatorFactory_Statics::NewProp_FillTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHoleFillOperatorFactory_Statics::NewProp_FillTool = { "FillTool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoleFillOperatorFactory, FillTool), Z_Construct_UClass_UHoleFillTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoleFillOperatorFactory_Statics::NewProp_FillTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillOperatorFactory_Statics::NewProp_FillTool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoleFillOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillOperatorFactory_Statics::NewProp_FillTool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoleFillOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoleFillOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoleFillOperatorFactory_Statics::ClassParams = {
		&UHoleFillOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoleFillOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoleFillOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoleFillOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_UHoleFillOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoleFillOperatorFactory.OuterSingleton, Z_Construct_UClass_UHoleFillOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoleFillOperatorFactory.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UHoleFillOperatorFactory>()
	{
		return UHoleFillOperatorFactory::StaticClass();
	}
	UHoleFillOperatorFactory::UHoleFillOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoleFillOperatorFactory);
	UHoleFillOperatorFactory::~UHoleFillOperatorFactory() {}
	void UHoleFillTool::StaticRegisterNativesUHoleFillTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoleFillTool);
	UClass* Z_Construct_UClass_UHoleFillTool_NoRegister()
	{
		return UHoleFillTool::StaticClass();
	}
	struct Z_Construct_UClass_UHoleFillTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothHoleFillProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SmoothHoleFillProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Statistics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionMechanic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoleFillTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Tool\n * Inherit from IClickBehaviorTarget so we can click on boundary loops.\n */" },
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "* Tool\n* Inherit from IClickBehaviorTarget so we can click on boundary loops." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SmoothHoleFillProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SmoothHoleFillProperties = { "SmoothHoleFillProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoleFillTool, SmoothHoleFillProperties), Z_Construct_UClass_USmoothHoleFillProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SmoothHoleFillProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SmoothHoleFillProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoleFillTool, Properties), Z_Construct_UClass_UHoleFillToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Properties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Actions_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoleFillTool, Actions), Z_Construct_UClass_UHoleFillToolActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Actions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Statistics_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoleFillTool, Statistics), Z_Construct_UClass_UHoleFillStatisticsProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Statistics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Statistics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoleFillTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Preview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SelectionMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SelectionMechanic = { "SelectionMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoleFillTool, SelectionMechanic), Z_Construct_UClass_UBoundarySelectionMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SelectionMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SelectionMechanic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoleFillTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SmoothHoleFillProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Statistics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Preview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SelectionMechanic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoleFillTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoleFillTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoleFillTool_Statics::ClassParams = {
		&UHoleFillTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoleFillTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHoleFillTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoleFillTool()
	{
		if (!Z_Registration_Info_UClass_UHoleFillTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoleFillTool.OuterSingleton, Z_Construct_UClass_UHoleFillTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoleFillTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UHoleFillTool>()
	{
		return UHoleFillTool::StaticClass();
	}
	UHoleFillTool::UHoleFillTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoleFillTool);
	UHoleFillTool::~UHoleFillTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_Statics::EnumInfo[] = {
		{ EHoleFillToolActions_StaticEnum, TEXT("EHoleFillToolActions"), &Z_Registration_Info_UEnum_EHoleFillToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 93063654U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoleFillToolBuilder, UHoleFillToolBuilder::StaticClass, TEXT("UHoleFillToolBuilder"), &Z_Registration_Info_UClass_UHoleFillToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoleFillToolBuilder), 1818847515U) },
		{ Z_Construct_UClass_USmoothHoleFillProperties, USmoothHoleFillProperties::StaticClass, TEXT("USmoothHoleFillProperties"), &Z_Registration_Info_UClass_USmoothHoleFillProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmoothHoleFillProperties), 384289996U) },
		{ Z_Construct_UClass_UHoleFillToolProperties, UHoleFillToolProperties::StaticClass, TEXT("UHoleFillToolProperties"), &Z_Registration_Info_UClass_UHoleFillToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoleFillToolProperties), 1286673913U) },
		{ Z_Construct_UClass_UHoleFillToolActions, UHoleFillToolActions::StaticClass, TEXT("UHoleFillToolActions"), &Z_Registration_Info_UClass_UHoleFillToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoleFillToolActions), 3922719767U) },
		{ Z_Construct_UClass_UHoleFillStatisticsProperties, UHoleFillStatisticsProperties::StaticClass, TEXT("UHoleFillStatisticsProperties"), &Z_Registration_Info_UClass_UHoleFillStatisticsProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoleFillStatisticsProperties), 1619158241U) },
		{ Z_Construct_UClass_UHoleFillOperatorFactory, UHoleFillOperatorFactory::StaticClass, TEXT("UHoleFillOperatorFactory"), &Z_Registration_Info_UClass_UHoleFillOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoleFillOperatorFactory), 1826425348U) },
		{ Z_Construct_UClass_UHoleFillTool, UHoleFillTool::StaticClass, TEXT("UHoleFillTool"), &Z_Registration_Info_UClass_UHoleFillTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoleFillTool), 3333442191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_3883609038(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
