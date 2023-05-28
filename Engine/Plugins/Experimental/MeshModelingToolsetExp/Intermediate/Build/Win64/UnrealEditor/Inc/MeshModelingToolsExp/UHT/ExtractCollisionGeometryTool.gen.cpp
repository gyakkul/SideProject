// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Physics/ExtractCollisionGeometryTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtractCollisionGeometryTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtractCollisionGeometryTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtractCollisionGeometryTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtractCollisionGeometryToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtractCollisionGeometryToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtractCollisionToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtractCollisionToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EExtractCollisionOutputType();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UExtractCollisionGeometryToolBuilder::StaticRegisterNativesUExtractCollisionGeometryToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtractCollisionGeometryToolBuilder);
	UClass* Z_Construct_UClass_UExtractCollisionGeometryToolBuilder_NoRegister()
	{
		return UExtractCollisionGeometryToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UExtractCollisionGeometryToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExtractCollisionGeometryToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionGeometryToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/ExtractCollisionGeometryTool.h" },
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExtractCollisionGeometryToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtractCollisionGeometryToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtractCollisionGeometryToolBuilder_Statics::ClassParams = {
		&UExtractCollisionGeometryToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionGeometryToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionGeometryToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExtractCollisionGeometryToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UExtractCollisionGeometryToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtractCollisionGeometryToolBuilder.OuterSingleton, Z_Construct_UClass_UExtractCollisionGeometryToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExtractCollisionGeometryToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UExtractCollisionGeometryToolBuilder>()
	{
		return UExtractCollisionGeometryToolBuilder::StaticClass();
	}
	UExtractCollisionGeometryToolBuilder::UExtractCollisionGeometryToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExtractCollisionGeometryToolBuilder);
	UExtractCollisionGeometryToolBuilder::~UExtractCollisionGeometryToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExtractCollisionOutputType;
	static UEnum* EExtractCollisionOutputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EExtractCollisionOutputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EExtractCollisionOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EExtractCollisionOutputType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EExtractCollisionOutputType"));
		}
		return Z_Registration_Info_UEnum_EExtractCollisionOutputType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EExtractCollisionOutputType>()
	{
		return EExtractCollisionOutputType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EExtractCollisionOutputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EExtractCollisionOutputType_Statics::Enumerators[] = {
		{ "EExtractCollisionOutputType::Simple", (int64)EExtractCollisionOutputType::Simple },
		{ "EExtractCollisionOutputType::Complex", (int64)EExtractCollisionOutputType::Complex },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EExtractCollisionOutputType_Statics::Enum_MetaDataParams[] = {
		{ "Complex.Comment", "/** Complex Collision Mesh */" },
		{ "Complex.Name", "EExtractCollisionOutputType::Complex" },
		{ "Complex.ToolTip", "Complex Collision Mesh" },
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
		{ "Simple.Comment", "/** Simple Collision shapes (Box, Sphere, Capsule, Convex) */" },
		{ "Simple.Name", "EExtractCollisionOutputType::Simple" },
		{ "Simple.ToolTip", "Simple Collision shapes (Box, Sphere, Capsule, Convex)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EExtractCollisionOutputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EExtractCollisionOutputType",
		"EExtractCollisionOutputType",
		Z_Construct_UEnum_MeshModelingToolsExp_EExtractCollisionOutputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EExtractCollisionOutputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EExtractCollisionOutputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EExtractCollisionOutputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EExtractCollisionOutputType()
	{
		if (!Z_Registration_Info_UEnum_EExtractCollisionOutputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExtractCollisionOutputType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EExtractCollisionOutputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EExtractCollisionOutputType.InnerSingleton;
	}
	void UExtractCollisionToolProperties::StaticRegisterNativesUExtractCollisionToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtractCollisionToolProperties);
	UClass* Z_Construct_UClass_UExtractCollisionToolProperties_NoRegister()
	{
		return UExtractCollisionToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UExtractCollisionToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWeldEdges_MetaData[];
#endif
		static void NewProp_bWeldEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputSeparateMeshes_MetaData[];
#endif
		static void NewProp_bOutputSeparateMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputSeparateMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPreview_MetaData[];
#endif
		static void NewProp_bShowPreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowInputMesh_MetaData[];
#endif
		static void NewProp_bShowInputMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInputMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExtractCollisionToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/ExtractCollisionGeometryTool.h" },
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Type of collision geometry to convert to Mesh */" },
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
		{ "ToolTip", "Type of collision geometry to convert to Mesh" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtractCollisionToolProperties, CollisionType), Z_Construct_UEnum_MeshModelingToolsExp_EExtractCollisionOutputType, METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_CollisionType_MetaData)) }; // 2824688057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bWeldEdges_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether or not to weld coincident border edges of the Complex Collision Mesh (if possible) */" },
		{ "EditCondition", "CollisionType == EExtractCollisionOutputType::Complex" },
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
		{ "ToolTip", "Whether or not to weld coincident border edges of the Complex Collision Mesh (if possible)" },
	};
#endif
	void Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bWeldEdges_SetBit(void* Obj)
	{
		((UExtractCollisionToolProperties*)Obj)->bWeldEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bWeldEdges = { "bWeldEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UExtractCollisionToolProperties), &Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bWeldEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bWeldEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bWeldEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bOutputSeparateMeshes_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether or not to generate a seperate Mesh Object for each Simple Collision Shape  */" },
		{ "EditCondition", "CollisionType == EExtractCollisionOutputType::Simple" },
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
		{ "ToolTip", "Whether or not to generate a seperate Mesh Object for each Simple Collision Shape" },
	};
#endif
	void Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bOutputSeparateMeshes_SetBit(void* Obj)
	{
		((UExtractCollisionToolProperties*)Obj)->bOutputSeparateMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bOutputSeparateMeshes = { "bOutputSeparateMeshes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UExtractCollisionToolProperties), &Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bOutputSeparateMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bOutputSeparateMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bOutputSeparateMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowPreview_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Show/Hide a preview of the generated mesh (overlaps source mesh) */" },
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
		{ "ToolTip", "Show/Hide a preview of the generated mesh (overlaps source mesh)" },
	};
#endif
	void Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowPreview_SetBit(void* Obj)
	{
		((UExtractCollisionToolProperties*)Obj)->bShowPreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowPreview = { "bShowPreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UExtractCollisionToolProperties), &Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowInputMesh_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Show/Hide input mesh */" },
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
		{ "ToolTip", "Show/Hide input mesh" },
	};
#endif
	void Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowInputMesh_SetBit(void* Obj)
	{
		((UExtractCollisionToolProperties*)Obj)->bShowInputMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowInputMesh = { "bShowInputMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UExtractCollisionToolProperties), &Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowInputMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowInputMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowInputMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExtractCollisionToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_CollisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bWeldEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bOutputSeparateMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtractCollisionToolProperties_Statics::NewProp_bShowInputMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExtractCollisionToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtractCollisionToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtractCollisionToolProperties_Statics::ClassParams = {
		&UExtractCollisionToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExtractCollisionToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExtractCollisionToolProperties()
	{
		if (!Z_Registration_Info_UClass_UExtractCollisionToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtractCollisionToolProperties.OuterSingleton, Z_Construct_UClass_UExtractCollisionToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExtractCollisionToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UExtractCollisionToolProperties>()
	{
		return UExtractCollisionToolProperties::StaticClass();
	}
	UExtractCollisionToolProperties::UExtractCollisionToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExtractCollisionToolProperties);
	UExtractCollisionToolProperties::~UExtractCollisionToolProperties() {}
	void UExtractCollisionGeometryTool::StaticRegisterNativesUExtractCollisionGeometryTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtractCollisionGeometryTool);
	UClass* Z_Construct_UClass_UExtractCollisionGeometryTool_NoRegister()
	{
		return UExtractCollisionGeometryTool::StaticClass();
	}
	struct Z_Construct_UClass_UExtractCollisionGeometryTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputTypeProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VizSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VizSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewElements_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewElements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Inspector Tool for visualizing mesh information\n */" },
		{ "IncludePath", "Physics/ExtractCollisionGeometryTool.h" },
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
		{ "ToolTip", "Mesh Inspector Tool for visualizing mesh information" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_OutputTypeProperties_MetaData[] = {
		{ "Comment", "/** Property set for type of output object (StaticMesh, Volume, etc) */" },
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
		{ "ToolTip", "Property set for type of output object (StaticMesh, Volume, etc)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtractCollisionGeometryTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_OutputTypeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_OutputTypeProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtractCollisionGeometryTool, Settings), Z_Construct_UClass_UExtractCollisionToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_VizSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_VizSettings = { "VizSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtractCollisionGeometryTool, VizSettings), Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_VizSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_VizSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_ObjectProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_ObjectProps = { "ObjectProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtractCollisionGeometryTool, ObjectProps), Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_ObjectProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_ObjectProps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_PreviewElements_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_PreviewElements = { "PreviewElements", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtractCollisionGeometryTool, PreviewElements), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_PreviewElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_PreviewElements_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/ExtractCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtractCollisionGeometryTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_PreviewMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_OutputTypeProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_VizSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_ObjectProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_PreviewElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::NewProp_PreviewMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtractCollisionGeometryTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::ClassParams = {
		&UExtractCollisionGeometryTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExtractCollisionGeometryTool()
	{
		if (!Z_Registration_Info_UClass_UExtractCollisionGeometryTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtractCollisionGeometryTool.OuterSingleton, Z_Construct_UClass_UExtractCollisionGeometryTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExtractCollisionGeometryTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UExtractCollisionGeometryTool>()
	{
		return UExtractCollisionGeometryTool::StaticClass();
	}
	UExtractCollisionGeometryTool::UExtractCollisionGeometryTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExtractCollisionGeometryTool);
	UExtractCollisionGeometryTool::~UExtractCollisionGeometryTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_ExtractCollisionGeometryTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_ExtractCollisionGeometryTool_h_Statics::EnumInfo[] = {
		{ EExtractCollisionOutputType_StaticEnum, TEXT("EExtractCollisionOutputType"), &Z_Registration_Info_UEnum_EExtractCollisionOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2824688057U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_ExtractCollisionGeometryTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExtractCollisionGeometryToolBuilder, UExtractCollisionGeometryToolBuilder::StaticClass, TEXT("UExtractCollisionGeometryToolBuilder"), &Z_Registration_Info_UClass_UExtractCollisionGeometryToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtractCollisionGeometryToolBuilder), 3206164118U) },
		{ Z_Construct_UClass_UExtractCollisionToolProperties, UExtractCollisionToolProperties::StaticClass, TEXT("UExtractCollisionToolProperties"), &Z_Registration_Info_UClass_UExtractCollisionToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtractCollisionToolProperties), 4120819212U) },
		{ Z_Construct_UClass_UExtractCollisionGeometryTool, UExtractCollisionGeometryTool::StaticClass, TEXT("UExtractCollisionGeometryTool"), &Z_Registration_Info_UClass_UExtractCollisionGeometryTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtractCollisionGeometryTool), 4265670079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_ExtractCollisionGeometryTool_h_1269468971(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_ExtractCollisionGeometryTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_ExtractCollisionGeometryTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_ExtractCollisionGeometryTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_ExtractCollisionGeometryTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
