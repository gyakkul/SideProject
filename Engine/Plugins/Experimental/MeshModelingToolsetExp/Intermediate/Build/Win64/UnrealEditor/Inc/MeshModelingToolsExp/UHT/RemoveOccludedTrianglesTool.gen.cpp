// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoveOccludedTrianglesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoveOccludedTrianglesTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemoveOccludedTrianglesTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemoveOccludedTrianglesTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemoveOccludedTrianglesToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemoveOccludedTrianglesToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemoveOccludedTrianglesToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOccludedAction();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionCalculationUIMode();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionTriangleSamplingUIMode();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void URemoveOccludedTrianglesToolBuilder::StaticRegisterNativesURemoveOccludedTrianglesToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoveOccludedTrianglesToolBuilder);
	UClass* Z_Construct_UClass_URemoveOccludedTrianglesToolBuilder_NoRegister()
	{
		return URemoveOccludedTrianglesToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_URemoveOccludedTrianglesToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoveOccludedTrianglesToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "RemoveOccludedTrianglesTool.h" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoveOccludedTrianglesToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoveOccludedTrianglesToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoveOccludedTrianglesToolBuilder_Statics::ClassParams = {
		&URemoveOccludedTrianglesToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoveOccludedTrianglesToolBuilder()
	{
		if (!Z_Registration_Info_UClass_URemoveOccludedTrianglesToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoveOccludedTrianglesToolBuilder.OuterSingleton, Z_Construct_UClass_URemoveOccludedTrianglesToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoveOccludedTrianglesToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URemoveOccludedTrianglesToolBuilder>()
	{
		return URemoveOccludedTrianglesToolBuilder::StaticClass();
	}
	URemoveOccludedTrianglesToolBuilder::URemoveOccludedTrianglesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoveOccludedTrianglesToolBuilder);
	URemoveOccludedTrianglesToolBuilder::~URemoveOccludedTrianglesToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOcclusionTriangleSamplingUIMode;
	static UEnum* EOcclusionTriangleSamplingUIMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOcclusionTriangleSamplingUIMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOcclusionTriangleSamplingUIMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionTriangleSamplingUIMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EOcclusionTriangleSamplingUIMode"));
		}
		return Z_Registration_Info_UEnum_EOcclusionTriangleSamplingUIMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EOcclusionTriangleSamplingUIMode>()
	{
		return EOcclusionTriangleSamplingUIMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionTriangleSamplingUIMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionTriangleSamplingUIMode_Statics::Enumerators[] = {
		{ "EOcclusionTriangleSamplingUIMode::Vertices", (int64)EOcclusionTriangleSamplingUIMode::Vertices },
		{ "EOcclusionTriangleSamplingUIMode::VerticesAndCentroids", (int64)EOcclusionTriangleSamplingUIMode::VerticesAndCentroids },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionTriangleSamplingUIMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// these UIMode enums are versions of the enums in Operations/RemoveOccludedTriangles.h, w/ some removed & some renamed to be more user friendly\n" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "these UIMode enums are versions of the enums in Operations/RemoveOccludedTriangles.h, w/ some removed & some renamed to be more user friendly" },
		{ "Vertices.Comment", "/** Test for occlusion at vertices */" },
		{ "Vertices.Name", "EOcclusionTriangleSamplingUIMode::Vertices" },
		{ "Vertices.ToolTip", "Test for occlusion at vertices" },
		{ "VerticesAndCentroids.Comment", "/** Test for occlusion at vertices and triangle centroids */" },
		{ "VerticesAndCentroids.Name", "EOcclusionTriangleSamplingUIMode::VerticesAndCentroids" },
		{ "VerticesAndCentroids.ToolTip", "Test for occlusion at vertices and triangle centroids" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionTriangleSamplingUIMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EOcclusionTriangleSamplingUIMode",
		"EOcclusionTriangleSamplingUIMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionTriangleSamplingUIMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionTriangleSamplingUIMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionTriangleSamplingUIMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionTriangleSamplingUIMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionTriangleSamplingUIMode()
	{
		if (!Z_Registration_Info_UEnum_EOcclusionTriangleSamplingUIMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOcclusionTriangleSamplingUIMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionTriangleSamplingUIMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOcclusionTriangleSamplingUIMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOcclusionCalculationUIMode;
	static UEnum* EOcclusionCalculationUIMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOcclusionCalculationUIMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOcclusionCalculationUIMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionCalculationUIMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EOcclusionCalculationUIMode"));
		}
		return Z_Registration_Info_UEnum_EOcclusionCalculationUIMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EOcclusionCalculationUIMode>()
	{
		return EOcclusionCalculationUIMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionCalculationUIMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionCalculationUIMode_Statics::Enumerators[] = {
		{ "EOcclusionCalculationUIMode::GeneralizedWindingNumber", (int64)EOcclusionCalculationUIMode::GeneralizedWindingNumber },
		{ "EOcclusionCalculationUIMode::RaycastOcclusionSamples", (int64)EOcclusionCalculationUIMode::RaycastOcclusionSamples },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionCalculationUIMode_Statics::Enum_MetaDataParams[] = {
		{ "GeneralizedWindingNumber.Comment", "/** Test for occlusion by a 3D 'Winding Number' test (Note: Allows internal 'air pockets' to be considered 'not occluded') */" },
		{ "GeneralizedWindingNumber.Name", "EOcclusionCalculationUIMode::GeneralizedWindingNumber" },
		{ "GeneralizedWindingNumber.ToolTip", "Test for occlusion by a 3D 'Winding Number' test (Note: Allows internal 'air pockets' to be considered 'not occluded')" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "RaycastOcclusionSamples.Comment", "/** Test for occlusion by casting rays against the mesh */" },
		{ "RaycastOcclusionSamples.Name", "EOcclusionCalculationUIMode::RaycastOcclusionSamples" },
		{ "RaycastOcclusionSamples.ToolTip", "Test for occlusion by casting rays against the mesh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionCalculationUIMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EOcclusionCalculationUIMode",
		"EOcclusionCalculationUIMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionCalculationUIMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionCalculationUIMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionCalculationUIMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionCalculationUIMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionCalculationUIMode()
	{
		if (!Z_Registration_Info_UEnum_EOcclusionCalculationUIMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOcclusionCalculationUIMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionCalculationUIMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOcclusionCalculationUIMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOccludedAction;
	static UEnum* EOccludedAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOccludedAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOccludedAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EOccludedAction, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EOccludedAction"));
		}
		return Z_Registration_Info_UEnum_EOccludedAction.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EOccludedAction>()
	{
		return EOccludedAction_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EOccludedAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EOccludedAction_Statics::Enumerators[] = {
		{ "EOccludedAction::Remove", (int64)EOccludedAction::Remove },
		{ "EOccludedAction::SetNewGroup", (int64)EOccludedAction::SetNewGroup },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EOccludedAction_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "Remove.Name", "EOccludedAction::Remove" },
		{ "SetNewGroup.Name", "EOccludedAction::SetNewGroup" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EOccludedAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EOccludedAction",
		"EOccludedAction",
		Z_Construct_UEnum_MeshModelingToolsExp_EOccludedAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOccludedAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EOccludedAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOccludedAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOccludedAction()
	{
		if (!Z_Registration_Info_UEnum_EOccludedAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOccludedAction.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EOccludedAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOccludedAction.InnerSingleton;
	}
	void URemoveOccludedTrianglesToolProperties::StaticRegisterNativesURemoveOccludedTrianglesToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoveOccludedTrianglesToolProperties);
	UClass* Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_NoRegister()
	{
		return URemoveOccludedTrianglesToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionTestMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionTestMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OcclusionTestMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriangleSampling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleSampling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TriangleSampling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindingIsoValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_WindingIsoValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddRandomRays_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AddRandomRays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddTriangleSamples_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AddTriangleSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySelfOcclude_MetaData[];
#endif
		static void NewProp_bOnlySelfOcclude_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySelfOcclude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShrinkRemoval_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ShrinkRemoval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAreaIsland_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinAreaIsland;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTriCountIsland_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MinTriCountIsland;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties\n */" },
		{ "IncludePath", "RemoveOccludedTrianglesTool.h" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "Standard properties" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_OcclusionTestMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_OcclusionTestMethod_MetaData[] = {
		{ "Category", "OcclusionCalculation" },
		{ "Comment", "/** The method for deciding whether a triangle is occluded */" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "The method for deciding whether a triangle is occluded" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_OcclusionTestMethod = { "OcclusionTestMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesToolProperties, OcclusionTestMethod), Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionCalculationUIMode, METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_OcclusionTestMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_OcclusionTestMethod_MetaData)) }; // 1706720747
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_TriangleSampling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_TriangleSampling_MetaData[] = {
		{ "Category", "OcclusionCalculation" },
		{ "Comment", "/** Where to sample triangles to test occlusion */" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "Where to sample triangles to test occlusion" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_TriangleSampling = { "TriangleSampling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesToolProperties, TriangleSampling), Z_Construct_UEnum_MeshModelingToolsExp_EOcclusionTriangleSamplingUIMode, METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_TriangleSampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_TriangleSampling_MetaData)) }; // 2504044201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_WindingIsoValue_MetaData[] = {
		{ "Category", "OcclusionCalculation" },
		{ "ClampMax", "2" },
		{ "ClampMin", "-2" },
		{ "Comment", "/** The winding isovalue for GeneralizedWindingNumber mode */" },
		{ "EditCondition", "OcclusionTestMethod==EOcclusionCalculationUIMode::GeneralizedWindingNumber" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "The winding isovalue for GeneralizedWindingNumber mode" },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_WindingIsoValue = { "WindingIsoValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesToolProperties, WindingIsoValue), METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_WindingIsoValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_WindingIsoValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_AddRandomRays_MetaData[] = {
		{ "Category", "OcclusionCalculation" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** For raycast-based occlusion tests, optionally add random ray direction to increase the accuracy of the visibility sampling */" },
		{ "EditCondition", "OcclusionTestMethod==EOcclusionCalculationUIMode::RaycastOcclusionSamples" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "For raycast-based occlusion tests, optionally add random ray direction to increase the accuracy of the visibility sampling" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_AddRandomRays = { "AddRandomRays", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesToolProperties, AddRandomRays), METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_AddRandomRays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_AddRandomRays_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_AddTriangleSamples_MetaData[] = {
		{ "Category", "OcclusionCalculation" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Optionally add random samples to each triangle (in addition to those from TriangleSampling) to increase the accuracy of the visibility sampling */" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "Optionally add random samples to each triangle (in addition to those from TriangleSampling) to increase the accuracy of the visibility sampling" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_AddTriangleSamples = { "AddTriangleSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesToolProperties, AddTriangleSamples), METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_AddTriangleSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_AddTriangleSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_bOnlySelfOcclude_MetaData[] = {
		{ "Category", "OcclusionCalculation" },
		{ "Comment", "/** If false, when multiple meshes are selected the meshes can occlude each other.  When true, we process each selected mesh independently and only consider self-occlusions. */" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "If false, when multiple meshes are selected the meshes can occlude each other.  When true, we process each selected mesh independently and only consider self-occlusions." },
	};
#endif
	void Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_bOnlySelfOcclude_SetBit(void* Obj)
	{
		((URemoveOccludedTrianglesToolProperties*)Obj)->bOnlySelfOcclude = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_bOnlySelfOcclude = { "bOnlySelfOcclude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoveOccludedTrianglesToolProperties), &Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_bOnlySelfOcclude_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_bOnlySelfOcclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_bOnlySelfOcclude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_ShrinkRemoval_MetaData[] = {
		{ "Category", "OcclusionCalculation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Shrink (erode) the boundary of the set of triangles to remove. */" },
		{ "Delta", "1" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "Shrink (erode) the boundary of the set of triangles to remove." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_ShrinkRemoval = { "ShrinkRemoval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesToolProperties, ShrinkRemoval), METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_ShrinkRemoval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_ShrinkRemoval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_MinAreaIsland_MetaData[] = {
		{ "Category", "RemoveIslands" },
		{ "ClampMin", "0" },
		{ "Delta", "0.500000" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_MinAreaIsland = { "MinAreaIsland", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesToolProperties, MinAreaIsland), METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_MinAreaIsland_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_MinAreaIsland_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_MinTriCountIsland_MetaData[] = {
		{ "Category", "RemoveIslands" },
		{ "ClampMin", "0" },
		{ "Delta", "1" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_MinTriCountIsland = { "MinTriCountIsland", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesToolProperties, MinTriCountIsland), METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_MinTriCountIsland_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_MinTriCountIsland_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/** What action to perform on occluded triangles */" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "What action to perform on occluded triangles" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesToolProperties, Action), Z_Construct_UEnum_MeshModelingToolsExp_EOccludedAction, METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_Action_MetaData)) }; // 2136363470
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_OcclusionTestMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_OcclusionTestMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_TriangleSampling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_TriangleSampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_WindingIsoValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_AddRandomRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_AddTriangleSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_bOnlySelfOcclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_ShrinkRemoval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_MinAreaIsland,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_MinTriCountIsland,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::NewProp_Action,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoveOccludedTrianglesToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::ClassParams = {
		&URemoveOccludedTrianglesToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoveOccludedTrianglesToolProperties()
	{
		if (!Z_Registration_Info_UClass_URemoveOccludedTrianglesToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoveOccludedTrianglesToolProperties.OuterSingleton, Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoveOccludedTrianglesToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URemoveOccludedTrianglesToolProperties>()
	{
		return URemoveOccludedTrianglesToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoveOccludedTrianglesToolProperties);
	URemoveOccludedTrianglesToolProperties::~URemoveOccludedTrianglesToolProperties() {}
	void URemoveOccludedTrianglesAdvancedProperties::StaticRegisterNativesURemoveOccludedTrianglesAdvancedProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoveOccludedTrianglesAdvancedProperties);
	UClass* Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties_NoRegister()
	{
		return URemoveOccludedTrianglesAdvancedProperties::StaticClass();
	}
	struct Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Advanced properties\n */" },
		{ "IncludePath", "RemoveOccludedTrianglesTool.h" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "Advanced properties" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoveOccludedTrianglesAdvancedProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties_Statics::ClassParams = {
		&URemoveOccludedTrianglesAdvancedProperties::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties()
	{
		if (!Z_Registration_Info_UClass_URemoveOccludedTrianglesAdvancedProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoveOccludedTrianglesAdvancedProperties.OuterSingleton, Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoveOccludedTrianglesAdvancedProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URemoveOccludedTrianglesAdvancedProperties>()
	{
		return URemoveOccludedTrianglesAdvancedProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoveOccludedTrianglesAdvancedProperties);
	URemoveOccludedTrianglesAdvancedProperties::~URemoveOccludedTrianglesAdvancedProperties() {}
	void URemoveOccludedTrianglesOperatorFactory::StaticRegisterNativesURemoveOccludedTrianglesOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoveOccludedTrianglesOperatorFactory);
	UClass* Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_NoRegister()
	{
		return URemoveOccludedTrianglesOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Tool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory with enough info to spawn the background-thread Operator to do a chunk of work for the tool\n *  stores a pointer to the tool and enough info to know which specific operator it should spawn\n */" },
		{ "IncludePath", "RemoveOccludedTrianglesTool.h" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "Factory with enough info to spawn the background-thread Operator to do a chunk of work for the tool\n stores a pointer to the tool and enough info to know which specific operator it should spawn" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::NewProp_Tool_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesOperatorFactory, Tool), Z_Construct_UClass_URemoveOccludedTrianglesTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::NewProp_Tool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::NewProp_Tool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::NewProp_Tool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoveOccludedTrianglesOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::ClassParams = {
		&URemoveOccludedTrianglesOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_URemoveOccludedTrianglesOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoveOccludedTrianglesOperatorFactory.OuterSingleton, Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoveOccludedTrianglesOperatorFactory.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URemoveOccludedTrianglesOperatorFactory>()
	{
		return URemoveOccludedTrianglesOperatorFactory::StaticClass();
	}
	URemoveOccludedTrianglesOperatorFactory::URemoveOccludedTrianglesOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoveOccludedTrianglesOperatorFactory);
	URemoveOccludedTrianglesOperatorFactory::~URemoveOccludedTrianglesOperatorFactory() {}
	void URemoveOccludedTrianglesTool::StaticRegisterNativesURemoveOccludedTrianglesTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoveOccludedTrianglesTool);
	UClass* Z_Construct_UClass_URemoveOccludedTrianglesTool_NoRegister()
	{
		return URemoveOccludedTrianglesTool::StaticClass();
	}
	struct Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BasicProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupLayersProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PolygroupLayersProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdvancedProperties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Previews_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Previews_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Previews;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewCopies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCopies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewCopies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Mesh Normal Updating Tool\n */" },
		{ "IncludePath", "RemoveOccludedTrianglesTool.h" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "Simple Mesh Normal Updating Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesTool, BasicProperties), Z_Construct_UClass_URemoveOccludedTrianglesToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_BasicProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_BasicProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_PolygroupLayersProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_PolygroupLayersProperties = { "PolygroupLayersProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesTool, PolygroupLayersProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_PolygroupLayersProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_PolygroupLayersProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_AdvancedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_AdvancedProperties = { "AdvancedProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesTool, AdvancedProperties), Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_AdvancedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_AdvancedProperties_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_Previews_Inner = { "Previews", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_Previews_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_Previews = { "Previews", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesTool, Previews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_Previews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_Previews_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_PreviewCopies_Inner = { "PreviewCopies", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_PreviewCopies_MetaData[] = {
		{ "Comment", "// When multiple meshes in the selection correspond to the same asset, only one needs a PreviewWithBackgroundCompute\n//  all others just get a plain PreviewMesh copy that is updated via OnMeshUpdated broadcast from the source Preview\n" },
		{ "ModuleRelativePath", "Public/RemoveOccludedTrianglesTool.h" },
		{ "ToolTip", "When multiple meshes in the selection correspond to the same asset, only one needs a PreviewWithBackgroundCompute\n all others just get a plain PreviewMesh copy that is updated via OnMeshUpdated broadcast from the source Preview" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_PreviewCopies = { "PreviewCopies", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoveOccludedTrianglesTool, PreviewCopies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_PreviewCopies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_PreviewCopies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_BasicProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_PolygroupLayersProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_AdvancedProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_Previews_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_Previews,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_PreviewCopies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::NewProp_PreviewCopies,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoveOccludedTrianglesTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::ClassParams = {
		&URemoveOccludedTrianglesTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoveOccludedTrianglesTool()
	{
		if (!Z_Registration_Info_UClass_URemoveOccludedTrianglesTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoveOccludedTrianglesTool.OuterSingleton, Z_Construct_UClass_URemoveOccludedTrianglesTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoveOccludedTrianglesTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URemoveOccludedTrianglesTool>()
	{
		return URemoveOccludedTrianglesTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoveOccludedTrianglesTool);
	URemoveOccludedTrianglesTool::~URemoveOccludedTrianglesTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemoveOccludedTrianglesTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemoveOccludedTrianglesTool_h_Statics::EnumInfo[] = {
		{ EOcclusionTriangleSamplingUIMode_StaticEnum, TEXT("EOcclusionTriangleSamplingUIMode"), &Z_Registration_Info_UEnum_EOcclusionTriangleSamplingUIMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2504044201U) },
		{ EOcclusionCalculationUIMode_StaticEnum, TEXT("EOcclusionCalculationUIMode"), &Z_Registration_Info_UEnum_EOcclusionCalculationUIMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1706720747U) },
		{ EOccludedAction_StaticEnum, TEXT("EOccludedAction"), &Z_Registration_Info_UEnum_EOccludedAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2136363470U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemoveOccludedTrianglesTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoveOccludedTrianglesToolBuilder, URemoveOccludedTrianglesToolBuilder::StaticClass, TEXT("URemoveOccludedTrianglesToolBuilder"), &Z_Registration_Info_UClass_URemoveOccludedTrianglesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoveOccludedTrianglesToolBuilder), 2719986817U) },
		{ Z_Construct_UClass_URemoveOccludedTrianglesToolProperties, URemoveOccludedTrianglesToolProperties::StaticClass, TEXT("URemoveOccludedTrianglesToolProperties"), &Z_Registration_Info_UClass_URemoveOccludedTrianglesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoveOccludedTrianglesToolProperties), 1486785014U) },
		{ Z_Construct_UClass_URemoveOccludedTrianglesAdvancedProperties, URemoveOccludedTrianglesAdvancedProperties::StaticClass, TEXT("URemoveOccludedTrianglesAdvancedProperties"), &Z_Registration_Info_UClass_URemoveOccludedTrianglesAdvancedProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoveOccludedTrianglesAdvancedProperties), 3313618914U) },
		{ Z_Construct_UClass_URemoveOccludedTrianglesOperatorFactory, URemoveOccludedTrianglesOperatorFactory::StaticClass, TEXT("URemoveOccludedTrianglesOperatorFactory"), &Z_Registration_Info_UClass_URemoveOccludedTrianglesOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoveOccludedTrianglesOperatorFactory), 3482075142U) },
		{ Z_Construct_UClass_URemoveOccludedTrianglesTool, URemoveOccludedTrianglesTool::StaticClass, TEXT("URemoveOccludedTrianglesTool"), &Z_Registration_Info_UClass_URemoveOccludedTrianglesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoveOccludedTrianglesTool), 3178179025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemoveOccludedTrianglesTool_h_51402862(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemoveOccludedTrianglesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemoveOccludedTrianglesTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemoveOccludedTrianglesTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemoveOccludedTrianglesTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
