// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AttributeEditorTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeEditorTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorActionPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorActionPropertySet_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorAttribProperties();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorAttribProperties_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorCopyAttributeActions();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorCopyAttributeActions_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorLightmapUVActions();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorLightmapUVActions_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorModifyAttributeActions();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorModifyAttributeActions_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorNewAttributeActions();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorNewAttributeActions_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorNormalsActions();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorNormalsActions_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorTool();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorToolBuilder();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorToolBuilder_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorUVActions();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAttributeEditorUVActions_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorAttribType();
	MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorElementType();
	MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorToolActions();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp();
// End Cross Module References
	void UAttributeEditorToolBuilder::StaticRegisterNativesUAttributeEditorToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeEditorToolBuilder);
	UClass* Z_Construct_UClass_UAttributeEditorToolBuilder_NoRegister()
	{
		return UAttributeEditorToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeEditorToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEditorToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AttributeEditorTool.h" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeEditorToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeEditorToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeEditorToolBuilder_Statics::ClassParams = {
		&UAttributeEditorToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeEditorToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UAttributeEditorToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeEditorToolBuilder.OuterSingleton, Z_Construct_UClass_UAttributeEditorToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeEditorToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UAttributeEditorToolBuilder>()
	{
		return UAttributeEditorToolBuilder::StaticClass();
	}
	UAttributeEditorToolBuilder::UAttributeEditorToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeEditorToolBuilder);
	UAttributeEditorToolBuilder::~UAttributeEditorToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttributeEditorElementType;
	static UEnum* EAttributeEditorElementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttributeEditorElementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttributeEditorElementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorElementType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp(), TEXT("EAttributeEditorElementType"));
		}
		return Z_Registration_Info_UEnum_EAttributeEditorElementType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* StaticEnum<EAttributeEditorElementType>()
	{
		return EAttributeEditorElementType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorElementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorElementType_Statics::Enumerators[] = {
		{ "EAttributeEditorElementType::Vertex", (int64)EAttributeEditorElementType::Vertex },
		{ "EAttributeEditorElementType::VertexInstance", (int64)EAttributeEditorElementType::VertexInstance },
		{ "EAttributeEditorElementType::Triangle", (int64)EAttributeEditorElementType::Triangle },
		{ "EAttributeEditorElementType::Polygon", (int64)EAttributeEditorElementType::Polygon },
		{ "EAttributeEditorElementType::Edge", (int64)EAttributeEditorElementType::Edge },
		{ "EAttributeEditorElementType::PolygonGroup", (int64)EAttributeEditorElementType::PolygonGroup },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorElementType_Statics::Enum_MetaDataParams[] = {
		{ "Edge.Name", "EAttributeEditorElementType::Edge" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "Polygon.Name", "EAttributeEditorElementType::Polygon" },
		{ "PolygonGroup.Name", "EAttributeEditorElementType::PolygonGroup" },
		{ "Triangle.Name", "EAttributeEditorElementType::Triangle" },
		{ "Vertex.Name", "EAttributeEditorElementType::Vertex" },
		{ "VertexInstance.Name", "EAttributeEditorElementType::VertexInstance" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorElementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
		nullptr,
		"EAttributeEditorElementType",
		"EAttributeEditorElementType",
		Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorElementType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorElementType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorElementType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorElementType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorElementType()
	{
		if (!Z_Registration_Info_UEnum_EAttributeEditorElementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttributeEditorElementType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorElementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttributeEditorElementType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttributeEditorAttribType;
	static UEnum* EAttributeEditorAttribType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttributeEditorAttribType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttributeEditorAttribType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorAttribType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp(), TEXT("EAttributeEditorAttribType"));
		}
		return Z_Registration_Info_UEnum_EAttributeEditorAttribType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* StaticEnum<EAttributeEditorAttribType>()
	{
		return EAttributeEditorAttribType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorAttribType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorAttribType_Statics::Enumerators[] = {
		{ "EAttributeEditorAttribType::Int32", (int64)EAttributeEditorAttribType::Int32 },
		{ "EAttributeEditorAttribType::Boolean", (int64)EAttributeEditorAttribType::Boolean },
		{ "EAttributeEditorAttribType::Float", (int64)EAttributeEditorAttribType::Float },
		{ "EAttributeEditorAttribType::Vector2", (int64)EAttributeEditorAttribType::Vector2 },
		{ "EAttributeEditorAttribType::Vector3", (int64)EAttributeEditorAttribType::Vector3 },
		{ "EAttributeEditorAttribType::Vector4", (int64)EAttributeEditorAttribType::Vector4 },
		{ "EAttributeEditorAttribType::String", (int64)EAttributeEditorAttribType::String },
		{ "EAttributeEditorAttribType::Unknown", (int64)EAttributeEditorAttribType::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorAttribType_Statics::Enum_MetaDataParams[] = {
		{ "Boolean.Name", "EAttributeEditorAttribType::Boolean" },
		{ "Float.Name", "EAttributeEditorAttribType::Float" },
		{ "Int32.Name", "EAttributeEditorAttribType::Int32" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "String.Name", "EAttributeEditorAttribType::String" },
		{ "Unknown.Name", "EAttributeEditorAttribType::Unknown" },
		{ "Vector2.Name", "EAttributeEditorAttribType::Vector2" },
		{ "Vector3.Name", "EAttributeEditorAttribType::Vector3" },
		{ "Vector4.Name", "EAttributeEditorAttribType::Vector4" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorAttribType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
		nullptr,
		"EAttributeEditorAttribType",
		"EAttributeEditorAttribType",
		Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorAttribType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorAttribType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorAttribType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorAttribType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorAttribType()
	{
		if (!Z_Registration_Info_UEnum_EAttributeEditorAttribType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttributeEditorAttribType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorAttribType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttributeEditorAttribType.InnerSingleton;
	}
	void UAttributeEditorAttribProperties::StaticRegisterNativesUAttributeEditorAttribProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeEditorAttribProperties);
	UClass* Z_Construct_UClass_UAttributeEditorAttribProperties_NoRegister()
	{
		return UAttributeEditorAttribProperties::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeEditorAttribProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VertexAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexAttributes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceAttributes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TriangleAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TriangleAttributes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PolygonAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonAttributes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_EdgeAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgeAttributes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttributeEditorTool.h" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_VertexAttributes_Inner = { "VertexAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_VertexAttributes_MetaData[] = {
		{ "Category", "AttributesInspector" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_VertexAttributes = { "VertexAttributes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorAttribProperties, VertexAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_VertexAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_VertexAttributes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_InstanceAttributes_Inner = { "InstanceAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_InstanceAttributes_MetaData[] = {
		{ "Category", "AttributesInspector" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_InstanceAttributes = { "InstanceAttributes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorAttribProperties, InstanceAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_InstanceAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_InstanceAttributes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_TriangleAttributes_Inner = { "TriangleAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_TriangleAttributes_MetaData[] = {
		{ "Category", "AttributesInspector" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_TriangleAttributes = { "TriangleAttributes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorAttribProperties, TriangleAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_TriangleAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_TriangleAttributes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_PolygonAttributes_Inner = { "PolygonAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_PolygonAttributes_MetaData[] = {
		{ "Category", "AttributesInspector" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_PolygonAttributes = { "PolygonAttributes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorAttribProperties, PolygonAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_PolygonAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_PolygonAttributes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_EdgeAttributes_Inner = { "EdgeAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_EdgeAttributes_MetaData[] = {
		{ "Category", "AttributesInspector" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_EdgeAttributes = { "EdgeAttributes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorAttribProperties, EdgeAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_EdgeAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_EdgeAttributes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_GroupAttributes_Inner = { "GroupAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_GroupAttributes_MetaData[] = {
		{ "Category", "AttributesInspector" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_GroupAttributes = { "GroupAttributes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorAttribProperties, GroupAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_GroupAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_GroupAttributes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_VertexAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_VertexAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_InstanceAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_InstanceAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_TriangleAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_TriangleAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_PolygonAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_PolygonAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_EdgeAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_EdgeAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_GroupAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::NewProp_GroupAttributes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeEditorAttribProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::ClassParams = {
		&UAttributeEditorAttribProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeEditorAttribProperties()
	{
		if (!Z_Registration_Info_UClass_UAttributeEditorAttribProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeEditorAttribProperties.OuterSingleton, Z_Construct_UClass_UAttributeEditorAttribProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeEditorAttribProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UAttributeEditorAttribProperties>()
	{
		return UAttributeEditorAttribProperties::StaticClass();
	}
	UAttributeEditorAttribProperties::UAttributeEditorAttribProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeEditorAttribProperties);
	UAttributeEditorAttribProperties::~UAttributeEditorAttribProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttributeEditorToolActions;
	static UEnum* EAttributeEditorToolActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttributeEditorToolActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttributeEditorToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp(), TEXT("EAttributeEditorToolActions"));
		}
		return Z_Registration_Info_UEnum_EAttributeEditorToolActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* StaticEnum<EAttributeEditorToolActions>()
	{
		return EAttributeEditorToolActions_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorToolActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorToolActions_Statics::Enumerators[] = {
		{ "EAttributeEditorToolActions::NoAction", (int64)EAttributeEditorToolActions::NoAction },
		{ "EAttributeEditorToolActions::ClearNormals", (int64)EAttributeEditorToolActions::ClearNormals },
		{ "EAttributeEditorToolActions::DiscardTangents", (int64)EAttributeEditorToolActions::DiscardTangents },
		{ "EAttributeEditorToolActions::ClearAllUVs", (int64)EAttributeEditorToolActions::ClearAllUVs },
		{ "EAttributeEditorToolActions::ClearSelectedUVs", (int64)EAttributeEditorToolActions::ClearSelectedUVs },
		{ "EAttributeEditorToolActions::AddUVSet", (int64)EAttributeEditorToolActions::AddUVSet },
		{ "EAttributeEditorToolActions::DeleteSelectedUVSet", (int64)EAttributeEditorToolActions::DeleteSelectedUVSet },
		{ "EAttributeEditorToolActions::DuplicateSelectedUVSet", (int64)EAttributeEditorToolActions::DuplicateSelectedUVSet },
		{ "EAttributeEditorToolActions::AddAttribute", (int64)EAttributeEditorToolActions::AddAttribute },
		{ "EAttributeEditorToolActions::AddWeightMapLayer", (int64)EAttributeEditorToolActions::AddWeightMapLayer },
		{ "EAttributeEditorToolActions::AddPolyGroupLayer", (int64)EAttributeEditorToolActions::AddPolyGroupLayer },
		{ "EAttributeEditorToolActions::DeleteAttribute", (int64)EAttributeEditorToolActions::DeleteAttribute },
		{ "EAttributeEditorToolActions::ClearAttribute", (int64)EAttributeEditorToolActions::ClearAttribute },
		{ "EAttributeEditorToolActions::CopyAttributeFromTo", (int64)EAttributeEditorToolActions::CopyAttributeFromTo },
		{ "EAttributeEditorToolActions::EnableLightmapUVs", (int64)EAttributeEditorToolActions::EnableLightmapUVs },
		{ "EAttributeEditorToolActions::DisableLightmapUVs", (int64)EAttributeEditorToolActions::DisableLightmapUVs },
		{ "EAttributeEditorToolActions::ResetLightmapUVChannels", (int64)EAttributeEditorToolActions::ResetLightmapUVChannels },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorToolActions_Statics::Enum_MetaDataParams[] = {
		{ "AddAttribute.Name", "EAttributeEditorToolActions::AddAttribute" },
		{ "AddPolyGroupLayer.Name", "EAttributeEditorToolActions::AddPolyGroupLayer" },
		{ "AddUVSet.Name", "EAttributeEditorToolActions::AddUVSet" },
		{ "AddWeightMapLayer.Name", "EAttributeEditorToolActions::AddWeightMapLayer" },
		{ "ClearAllUVs.Name", "EAttributeEditorToolActions::ClearAllUVs" },
		{ "ClearAttribute.Name", "EAttributeEditorToolActions::ClearAttribute" },
		{ "ClearNormals.Name", "EAttributeEditorToolActions::ClearNormals" },
		{ "ClearSelectedUVs.Name", "EAttributeEditorToolActions::ClearSelectedUVs" },
		{ "CopyAttributeFromTo.Name", "EAttributeEditorToolActions::CopyAttributeFromTo" },
		{ "DeleteAttribute.Name", "EAttributeEditorToolActions::DeleteAttribute" },
		{ "DeleteSelectedUVSet.Name", "EAttributeEditorToolActions::DeleteSelectedUVSet" },
		{ "DisableLightmapUVs.Name", "EAttributeEditorToolActions::DisableLightmapUVs" },
		{ "DiscardTangents.Name", "EAttributeEditorToolActions::DiscardTangents" },
		{ "DuplicateSelectedUVSet.Name", "EAttributeEditorToolActions::DuplicateSelectedUVSet" },
		{ "EnableLightmapUVs.Name", "EAttributeEditorToolActions::EnableLightmapUVs" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "NoAction.Name", "EAttributeEditorToolActions::NoAction" },
		{ "ResetLightmapUVChannels.Name", "EAttributeEditorToolActions::ResetLightmapUVChannels" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorToolActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
		nullptr,
		"EAttributeEditorToolActions",
		"EAttributeEditorToolActions",
		Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorToolActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorToolActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorToolActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorToolActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorToolActions()
	{
		if (!Z_Registration_Info_UEnum_EAttributeEditorToolActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttributeEditorToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorToolActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttributeEditorToolActions.InnerSingleton;
	}
	void UAttributeEditorActionPropertySet::StaticRegisterNativesUAttributeEditorActionPropertySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeEditorActionPropertySet);
	UClass* Z_Construct_UClass_UAttributeEditorActionPropertySet_NoRegister()
	{
		return UAttributeEditorActionPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeEditorActionPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEditorActionPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorActionPropertySet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttributeEditorTool.h" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeEditorActionPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeEditorActionPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeEditorActionPropertySet_Statics::ClassParams = {
		&UAttributeEditorActionPropertySet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorActionPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorActionPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeEditorActionPropertySet()
	{
		if (!Z_Registration_Info_UClass_UAttributeEditorActionPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeEditorActionPropertySet.OuterSingleton, Z_Construct_UClass_UAttributeEditorActionPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeEditorActionPropertySet.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UAttributeEditorActionPropertySet>()
	{
		return UAttributeEditorActionPropertySet::StaticClass();
	}
	UAttributeEditorActionPropertySet::UAttributeEditorActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeEditorActionPropertySet);
	UAttributeEditorActionPropertySet::~UAttributeEditorActionPropertySet() {}
	DEFINE_FUNCTION(UAttributeEditorNormalsActions::execDiscardTangents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DiscardTangents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEditorNormalsActions::execResetHardNormals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetHardNormals();
		P_NATIVE_END;
	}
	void UAttributeEditorNormalsActions::StaticRegisterNativesUAttributeEditorNormalsActions()
	{
		UClass* Class = UAttributeEditorNormalsActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DiscardTangents", &UAttributeEditorNormalsActions::execDiscardTangents },
			{ "ResetHardNormals", &UAttributeEditorNormalsActions::execResetHardNormals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeEditorNormalsActions_DiscardTangents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorNormalsActions_DiscardTangents_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Normals" },
		{ "Comment", "/** Clear Tangents from the mesh */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "Clear Tangents from the mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorNormalsActions_DiscardTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorNormalsActions, nullptr, "DiscardTangents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorNormalsActions_DiscardTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorNormalsActions_DiscardTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorNormalsActions_DiscardTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorNormalsActions_DiscardTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEditorNormalsActions_ResetHardNormals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorNormalsActions_ResetHardNormals_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Normals" },
		{ "Comment", "/** Remove any hard edges / split normals, setting all normals to a single averaged vertex normal */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "Remove any hard edges / split normals, setting all normals to a single averaged vertex normal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorNormalsActions_ResetHardNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorNormalsActions, nullptr, "ResetHardNormals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorNormalsActions_ResetHardNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorNormalsActions_ResetHardNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorNormalsActions_ResetHardNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorNormalsActions_ResetHardNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeEditorNormalsActions);
	UClass* Z_Construct_UClass_UAttributeEditorNormalsActions_NoRegister()
	{
		return UAttributeEditorNormalsActions::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeEditorNormalsActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEditorNormalsActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeEditorActionPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeEditorNormalsActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeEditorNormalsActions_DiscardTangents, "DiscardTangents" }, // 655504552
		{ &Z_Construct_UFunction_UAttributeEditorNormalsActions_ResetHardNormals, "ResetHardNormals" }, // 1973416798
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorNormalsActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttributeEditorTool.h" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeEditorNormalsActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeEditorNormalsActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeEditorNormalsActions_Statics::ClassParams = {
		&UAttributeEditorNormalsActions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorNormalsActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorNormalsActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeEditorNormalsActions()
	{
		if (!Z_Registration_Info_UClass_UAttributeEditorNormalsActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeEditorNormalsActions.OuterSingleton, Z_Construct_UClass_UAttributeEditorNormalsActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeEditorNormalsActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UAttributeEditorNormalsActions>()
	{
		return UAttributeEditorNormalsActions::StaticClass();
	}
	UAttributeEditorNormalsActions::UAttributeEditorNormalsActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeEditorNormalsActions);
	UAttributeEditorNormalsActions::~UAttributeEditorNormalsActions() {}
	DEFINE_FUNCTION(UAttributeEditorUVActions::execDuplicateSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DuplicateSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEditorUVActions::execDeleteSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEditorUVActions::execAddNew)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNew();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEditorUVActions::execClearAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEditorUVActions::execGetUVLayerNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetUVLayerNamesFunc();
		P_NATIVE_END;
	}
	void UAttributeEditorUVActions::StaticRegisterNativesUAttributeEditorUVActions()
	{
		UClass* Class = UAttributeEditorUVActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNew", &UAttributeEditorUVActions::execAddNew },
			{ "ClearAll", &UAttributeEditorUVActions::execClearAll },
			{ "DeleteSelected", &UAttributeEditorUVActions::execDeleteSelected },
			{ "DuplicateSelected", &UAttributeEditorUVActions::execDuplicateSelected },
			{ "GetUVLayerNamesFunc", &UAttributeEditorUVActions::execGetUVLayerNamesFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeEditorUVActions_AddNew_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorUVActions_AddNew_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UVs" },
		{ "Comment", "/** Clear the selected UV layers, setting all UV values to (0,0) */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "Clear the selected UV layers, setting all UV values to (0,0)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorUVActions_AddNew_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorUVActions, nullptr, "AddNew", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorUVActions_AddNew_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorUVActions_AddNew_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorUVActions_AddNew()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorUVActions_AddNew_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEditorUVActions_ClearAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorUVActions_ClearAll_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UVs" },
		{ "Comment", "/** Clear all UV layers, setting all UV values to (0,0) */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "Clear all UV layers, setting all UV values to (0,0)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorUVActions_ClearAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorUVActions, nullptr, "ClearAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorUVActions_ClearAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorUVActions_ClearAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorUVActions_ClearAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorUVActions_ClearAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEditorUVActions_DeleteSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorUVActions_DeleteSelected_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UVs" },
		{ "Comment", "/** Clear the selected UV layers, setting all UV values to (0,0) */" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "Clear the selected UV layers, setting all UV values to (0,0)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorUVActions_DeleteSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorUVActions, nullptr, "DeleteSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorUVActions_DeleteSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorUVActions_DeleteSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorUVActions_DeleteSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorUVActions_DeleteSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEditorUVActions_DuplicateSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorUVActions_DuplicateSelected_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UVs" },
		{ "Comment", "/** Clear the selected UV layers, setting all UV values to (0,0) */" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "Clear the selected UV layers, setting all UV values to (0,0)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorUVActions_DuplicateSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorUVActions, nullptr, "DuplicateSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorUVActions_DuplicateSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorUVActions_DuplicateSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorUVActions_DuplicateSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorUVActions_DuplicateSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics
	{
		struct AttributeEditorUVActions_eventGetUVLayerNamesFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeEditorUVActions_eventGetUVLayerNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorUVActions, nullptr, "GetUVLayerNamesFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics::AttributeEditorUVActions_eventGetUVLayerNamesFunc_Parms), Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeEditorUVActions);
	UClass* Z_Construct_UClass_UAttributeEditorUVActions_NoRegister()
	{
		return UAttributeEditorUVActions::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeEditorUVActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UVLayer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UVLayerNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVLayerNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVLayerNamesList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEditorUVActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeEditorActionPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeEditorUVActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeEditorUVActions_AddNew, "AddNew" }, // 994343058
		{ &Z_Construct_UFunction_UAttributeEditorUVActions_ClearAll, "ClearAll" }, // 584499900
		{ &Z_Construct_UFunction_UAttributeEditorUVActions_DeleteSelected, "DeleteSelected" }, // 3007378831
		{ &Z_Construct_UFunction_UAttributeEditorUVActions_DuplicateSelected, "DuplicateSelected" }, // 497415030
		{ &Z_Construct_UFunction_UAttributeEditorUVActions_GetUVLayerNamesFunc, "GetUVLayerNamesFunc" }, // 1555790502
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorUVActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttributeEditorTool.h" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorUVActions_Statics::NewProp_UVLayer_MetaData[] = {
		{ "Category", "UVs" },
		{ "GetOptions", "GetUVLayerNamesFunc" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttributeEditorUVActions_Statics::NewProp_UVLayer = { "UVLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorUVActions, UVLayer), METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorUVActions_Statics::NewProp_UVLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorUVActions_Statics::NewProp_UVLayer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttributeEditorUVActions_Statics::NewProp_UVLayerNamesList_Inner = { "UVLayerNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorUVActions_Statics::NewProp_UVLayerNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEditorUVActions_Statics::NewProp_UVLayerNamesList = { "UVLayerNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorUVActions, UVLayerNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorUVActions_Statics::NewProp_UVLayerNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorUVActions_Statics::NewProp_UVLayerNamesList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeEditorUVActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorUVActions_Statics::NewProp_UVLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorUVActions_Statics::NewProp_UVLayerNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorUVActions_Statics::NewProp_UVLayerNamesList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeEditorUVActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeEditorUVActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeEditorUVActions_Statics::ClassParams = {
		&UAttributeEditorUVActions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeEditorUVActions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorUVActions_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorUVActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorUVActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeEditorUVActions()
	{
		if (!Z_Registration_Info_UClass_UAttributeEditorUVActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeEditorUVActions.OuterSingleton, Z_Construct_UClass_UAttributeEditorUVActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeEditorUVActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UAttributeEditorUVActions>()
	{
		return UAttributeEditorUVActions::StaticClass();
	}
	UAttributeEditorUVActions::UAttributeEditorUVActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeEditorUVActions);
	UAttributeEditorUVActions::~UAttributeEditorUVActions() {}
	DEFINE_FUNCTION(UAttributeEditorLightmapUVActions::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEditorLightmapUVActions::execDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEditorLightmapUVActions::execEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Enable();
		P_NATIVE_END;
	}
	void UAttributeEditorLightmapUVActions::StaticRegisterNativesUAttributeEditorLightmapUVActions()
	{
		UClass* Class = UAttributeEditorLightmapUVActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Disable", &UAttributeEditorLightmapUVActions::execDisable },
			{ "Enable", &UAttributeEditorLightmapUVActions::execEnable },
			{ "Reset", &UAttributeEditorLightmapUVActions::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Disable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Disable_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "LightmapUVs" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorLightmapUVActions, nullptr, "Disable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Disable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Disable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Disable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Disable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Enable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Enable_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "LightmapUVs" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Enable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorLightmapUVActions, nullptr, "Enable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Enable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Enable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Enable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Enable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Reset_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "LightmapUVs" },
		{ "Comment", "/** Reset Lightmap UV channels to Source Channel UV0 and Destination as UVMax+1 */" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "Reset Lightmap UV channels to Source Channel UV0 and Destination as UVMax+1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorLightmapUVActions, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeEditorLightmapUVActions);
	UClass* Z_Construct_UClass_UAttributeEditorLightmapUVActions_NoRegister()
	{
		return UAttributeEditorLightmapUVActions::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceUVIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceUVIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationUVIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DestinationUVIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeEditorActionPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Disable, "Disable" }, // 958471361
		{ &Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Enable, "Enable" }, // 1791244191
		{ &Z_Construct_UFunction_UAttributeEditorLightmapUVActions_Reset, "Reset" }, // 1049281490
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttributeEditorTool.h" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "LightmapUVs" },
		{ "Comment", "/** Whether or not Lightmap UVs are enabled in the Static Mesh Build Settings. Use the Static Mesh Editor to change this value. */" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "Whether or not Lightmap UVs are enabled in the Static Mesh Build Settings. Use the Static Mesh Editor to change this value." },
	};
#endif
	void Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((UAttributeEditorLightmapUVActions*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAttributeEditorLightmapUVActions), &Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_bGenerateLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_SourceUVIndex_MetaData[] = {
		{ "Category", "LightmapUVs" },
		{ "Comment", "/** Source UV channel used to compute Lightmap UVs. Use the Static Mesh Editor to change this value. */" },
		{ "DisplayName", "Source Channel" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Source UV channel used to compute Lightmap UVs. Use the Static Mesh Editor to change this value." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_SourceUVIndex = { "SourceUVIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorLightmapUVActions, SourceUVIndex), METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_SourceUVIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_SourceUVIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_DestinationUVIndex_MetaData[] = {
		{ "Category", "LightmapUVs" },
		{ "Comment", "/** Lightmap UVs are stored in this UV Channel. Use the Static Mesh Editor to change this value. */" },
		{ "DisplayName", "Dest Channel" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Lightmap UVs are stored in this UV Channel. Use the Static Mesh Editor to change this value." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_DestinationUVIndex = { "DestinationUVIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorLightmapUVActions, DestinationUVIndex), METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_DestinationUVIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_DestinationUVIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_SourceUVIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::NewProp_DestinationUVIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeEditorLightmapUVActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::ClassParams = {
		&UAttributeEditorLightmapUVActions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeEditorLightmapUVActions()
	{
		if (!Z_Registration_Info_UClass_UAttributeEditorLightmapUVActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeEditorLightmapUVActions.OuterSingleton, Z_Construct_UClass_UAttributeEditorLightmapUVActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeEditorLightmapUVActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UAttributeEditorLightmapUVActions>()
	{
		return UAttributeEditorLightmapUVActions::StaticClass();
	}
	UAttributeEditorLightmapUVActions::UAttributeEditorLightmapUVActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeEditorLightmapUVActions);
	UAttributeEditorLightmapUVActions::~UAttributeEditorLightmapUVActions() {}
	DEFINE_FUNCTION(UAttributeEditorNewAttributeActions::execAddPolyGroupLayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPolyGroupLayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEditorNewAttributeActions::execAddWeightMapLayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWeightMapLayer();
		P_NATIVE_END;
	}
	void UAttributeEditorNewAttributeActions::StaticRegisterNativesUAttributeEditorNewAttributeActions()
	{
		UClass* Class = UAttributeEditorNewAttributeActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPolyGroupLayer", &UAttributeEditorNewAttributeActions::execAddPolyGroupLayer },
			{ "AddWeightMapLayer", &UAttributeEditorNewAttributeActions::execAddWeightMapLayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddPolyGroupLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddPolyGroupLayer_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "NewAttribute" },
		{ "Comment", "/** Add a new PolyGroup layer with the given Name */" },
		{ "DisplayName", "Add PolyGroup Layer" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "Add a new PolyGroup layer with the given Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddPolyGroupLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorNewAttributeActions, nullptr, "AddPolyGroupLayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddPolyGroupLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddPolyGroupLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddPolyGroupLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddPolyGroupLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddWeightMapLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddWeightMapLayer_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "NewAttribute" },
		{ "Comment", "/** Add a new Per-Vertex Weight Map layer with the given Name */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "Add a new Per-Vertex Weight Map layer with the given Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddWeightMapLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorNewAttributeActions, nullptr, "AddWeightMapLayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddWeightMapLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddWeightMapLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddWeightMapLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddWeightMapLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeEditorNewAttributeActions);
	UClass* Z_Construct_UClass_UAttributeEditorNewAttributeActions_NoRegister()
	{
		return UAttributeEditorNewAttributeActions::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeEditorActionPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddPolyGroupLayer, "AddPolyGroupLayer" }, // 1043412777
		{ &Z_Construct_UFunction_UAttributeEditorNewAttributeActions_AddWeightMapLayer, "AddWeightMapLayer" }, // 671666091
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttributeEditorTool.h" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_NewName_MetaData[] = {
		{ "Category", "NewAttribute" },
		{ "DisplayName", "New Attribute Name" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorNewAttributeActions, NewName), METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_NewName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_ElementType_MetaData[] = {
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = NewAttribute)\n" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = NewAttribute)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorNewAttributeActions, ElementType), Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorElementType, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_ElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_ElementType_MetaData)) }; // 2702311795
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_DataType_MetaData[] = {
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = NewAttribute)\n" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = NewAttribute)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorNewAttributeActions, DataType), Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EAttributeEditorAttribType, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_DataType_MetaData)) }; // 2590844918
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_NewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_ElementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_ElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::NewProp_DataType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeEditorNewAttributeActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::ClassParams = {
		&UAttributeEditorNewAttributeActions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeEditorNewAttributeActions()
	{
		if (!Z_Registration_Info_UClass_UAttributeEditorNewAttributeActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeEditorNewAttributeActions.OuterSingleton, Z_Construct_UClass_UAttributeEditorNewAttributeActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeEditorNewAttributeActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UAttributeEditorNewAttributeActions>()
	{
		return UAttributeEditorNewAttributeActions::StaticClass();
	}
	UAttributeEditorNewAttributeActions::UAttributeEditorNewAttributeActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeEditorNewAttributeActions);
	UAttributeEditorNewAttributeActions::~UAttributeEditorNewAttributeActions() {}
	DEFINE_FUNCTION(UAttributeEditorModifyAttributeActions::execDeleteSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttributeEditorModifyAttributeActions::execGetAttributeNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAttributeNamesFunc();
		P_NATIVE_END;
	}
	void UAttributeEditorModifyAttributeActions::StaticRegisterNativesUAttributeEditorModifyAttributeActions()
	{
		UClass* Class = UAttributeEditorModifyAttributeActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteSelected", &UAttributeEditorModifyAttributeActions::execDeleteSelected },
			{ "GetAttributeNamesFunc", &UAttributeEditorModifyAttributeActions::execGetAttributeNamesFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_DeleteSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_DeleteSelected_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ModifyAttribute" },
		{ "Comment", "/** Remove the selected Attribute Name from the mesh */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "Remove the selected Attribute Name from the mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_DeleteSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorModifyAttributeActions, nullptr, "DeleteSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_DeleteSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_DeleteSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_DeleteSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_DeleteSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics
	{
		struct AttributeEditorModifyAttributeActions_eventGetAttributeNamesFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AttributeEditorModifyAttributeActions_eventGetAttributeNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorModifyAttributeActions, nullptr, "GetAttributeNamesFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics::AttributeEditorModifyAttributeActions_eventGetAttributeNamesFunc_Parms), Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeEditorModifyAttributeActions);
	UClass* Z_Construct_UClass_UAttributeEditorModifyAttributeActions_NoRegister()
	{
		return UAttributeEditorModifyAttributeActions::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeNamesList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeEditorActionPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_DeleteSelected, "DeleteSelected" }, // 730307898
		{ &Z_Construct_UFunction_UAttributeEditorModifyAttributeActions_GetAttributeNamesFunc, "GetAttributeNamesFunc" }, // 3923967331
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttributeEditorTool.h" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "ModifyAttribute" },
		{ "GetOptions", "GetAttributeNamesFunc" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorModifyAttributeActions, Attribute), METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::NewProp_Attribute_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::NewProp_AttributeNamesList_Inner = { "AttributeNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::NewProp_AttributeNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::NewProp_AttributeNamesList = { "AttributeNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorModifyAttributeActions, AttributeNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::NewProp_AttributeNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::NewProp_AttributeNamesList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::NewProp_AttributeNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::NewProp_AttributeNamesList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeEditorModifyAttributeActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::ClassParams = {
		&UAttributeEditorModifyAttributeActions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeEditorModifyAttributeActions()
	{
		if (!Z_Registration_Info_UClass_UAttributeEditorModifyAttributeActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeEditorModifyAttributeActions.OuterSingleton, Z_Construct_UClass_UAttributeEditorModifyAttributeActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeEditorModifyAttributeActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UAttributeEditorModifyAttributeActions>()
	{
		return UAttributeEditorModifyAttributeActions::StaticClass();
	}
	UAttributeEditorModifyAttributeActions::UAttributeEditorModifyAttributeActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeEditorModifyAttributeActions);
	UAttributeEditorModifyAttributeActions::~UAttributeEditorModifyAttributeActions() {}
	DEFINE_FUNCTION(UAttributeEditorCopyAttributeActions::execCopyFromTo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyFromTo();
		P_NATIVE_END;
	}
	void UAttributeEditorCopyAttributeActions::StaticRegisterNativesUAttributeEditorCopyAttributeActions()
	{
		UClass* Class = UAttributeEditorCopyAttributeActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyFromTo", &UAttributeEditorCopyAttributeActions::execCopyFromTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttributeEditorCopyAttributeActions_CopyFromTo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttributeEditorCopyAttributeActions_CopyFromTo_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CopyAttribute" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributeEditorCopyAttributeActions_CopyFromTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributeEditorCopyAttributeActions, nullptr, "CopyFromTo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttributeEditorCopyAttributeActions_CopyFromTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributeEditorCopyAttributeActions_CopyFromTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttributeEditorCopyAttributeActions_CopyFromTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributeEditorCopyAttributeActions_CopyFromTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeEditorCopyAttributeActions);
	UClass* Z_Construct_UClass_UAttributeEditorCopyAttributeActions_NoRegister()
	{
		return UAttributeEditorCopyAttributeActions::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FromAttribute_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FromAttribute;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToAttribute_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToAttribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeEditorActionPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributeEditorCopyAttributeActions_CopyFromTo, "CopyFromTo" }, // 2682452398
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttributeEditorTool.h" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_FromAttribute_Inner = { "FromAttribute", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_FromAttribute_MetaData[] = {
		{ "Category", "CopyAttribute" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_FromAttribute = { "FromAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorCopyAttributeActions, FromAttribute), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_FromAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_FromAttribute_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_ToAttribute_Inner = { "ToAttribute", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_ToAttribute_MetaData[] = {
		{ "Category", "CopyAttribute" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_ToAttribute = { "ToAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorCopyAttributeActions, ToAttribute), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_ToAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_ToAttribute_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_FromAttribute_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_FromAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_ToAttribute_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::NewProp_ToAttribute,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeEditorCopyAttributeActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::ClassParams = {
		&UAttributeEditorCopyAttributeActions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeEditorCopyAttributeActions()
	{
		if (!Z_Registration_Info_UClass_UAttributeEditorCopyAttributeActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeEditorCopyAttributeActions.OuterSingleton, Z_Construct_UClass_UAttributeEditorCopyAttributeActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeEditorCopyAttributeActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UAttributeEditorCopyAttributeActions>()
	{
		return UAttributeEditorCopyAttributeActions::StaticClass();
	}
	UAttributeEditorCopyAttributeActions::UAttributeEditorCopyAttributeActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeEditorCopyAttributeActions);
	UAttributeEditorCopyAttributeActions::~UAttributeEditorCopyAttributeActions() {}
	void UAttributeEditorTool::StaticRegisterNativesUAttributeEditorTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeEditorTool);
	UClass* Z_Construct_UClass_UAttributeEditorTool_NoRegister()
	{
		return UAttributeEditorTool::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeEditorTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalsActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NormalsActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmapUVActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LightmapUVActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAttributeProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NewAttributeProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifyAttributeProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModifyAttributeProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyAttributeProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CopyAttributeProps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeEditorTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Attribute Editor Tool\n */" },
		{ "IncludePath", "AttributeEditorTool.h" },
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
		{ "ToolTip", "Mesh Attribute Editor Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_NormalsActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_NormalsActions = { "NormalsActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorTool, NormalsActions), Z_Construct_UClass_UAttributeEditorNormalsActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_NormalsActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_NormalsActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_UVActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_UVActions = { "UVActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorTool, UVActions), Z_Construct_UClass_UAttributeEditorUVActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_UVActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_UVActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_LightmapUVActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_LightmapUVActions = { "LightmapUVActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorTool, LightmapUVActions), Z_Construct_UClass_UAttributeEditorLightmapUVActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_LightmapUVActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_LightmapUVActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_AttributeProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_AttributeProps = { "AttributeProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorTool, AttributeProps), Z_Construct_UClass_UAttributeEditorAttribProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_AttributeProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_AttributeProps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_NewAttributeProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_NewAttributeProps = { "NewAttributeProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorTool, NewAttributeProps), Z_Construct_UClass_UAttributeEditorNewAttributeActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_NewAttributeProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_NewAttributeProps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_ModifyAttributeProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_ModifyAttributeProps = { "ModifyAttributeProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorTool, ModifyAttributeProps), Z_Construct_UClass_UAttributeEditorModifyAttributeActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_ModifyAttributeProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_ModifyAttributeProps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_CopyAttributeProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_CopyAttributeProps = { "CopyAttributeProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeEditorTool, CopyAttributeProps), Z_Construct_UClass_UAttributeEditorCopyAttributeActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_CopyAttributeProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_CopyAttributeProps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeEditorTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_NormalsActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_UVActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_LightmapUVActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_AttributeProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_NewAttributeProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_ModifyAttributeProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeEditorTool_Statics::NewProp_CopyAttributeProps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeEditorTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeEditorTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeEditorTool_Statics::ClassParams = {
		&UAttributeEditorTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttributeEditorTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeEditorTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeEditorTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeEditorTool()
	{
		if (!Z_Registration_Info_UClass_UAttributeEditorTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeEditorTool.OuterSingleton, Z_Construct_UClass_UAttributeEditorTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeEditorTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UAttributeEditorTool>()
	{
		return UAttributeEditorTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeEditorTool);
	UAttributeEditorTool::~UAttributeEditorTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_AttributeEditorTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_AttributeEditorTool_h_Statics::EnumInfo[] = {
		{ EAttributeEditorElementType_StaticEnum, TEXT("EAttributeEditorElementType"), &Z_Registration_Info_UEnum_EAttributeEditorElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2702311795U) },
		{ EAttributeEditorAttribType_StaticEnum, TEXT("EAttributeEditorAttribType"), &Z_Registration_Info_UEnum_EAttributeEditorAttribType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2590844918U) },
		{ EAttributeEditorToolActions_StaticEnum, TEXT("EAttributeEditorToolActions"), &Z_Registration_Info_UEnum_EAttributeEditorToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 131708961U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_AttributeEditorTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeEditorToolBuilder, UAttributeEditorToolBuilder::StaticClass, TEXT("UAttributeEditorToolBuilder"), &Z_Registration_Info_UClass_UAttributeEditorToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEditorToolBuilder), 1240593783U) },
		{ Z_Construct_UClass_UAttributeEditorAttribProperties, UAttributeEditorAttribProperties::StaticClass, TEXT("UAttributeEditorAttribProperties"), &Z_Registration_Info_UClass_UAttributeEditorAttribProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEditorAttribProperties), 4205279080U) },
		{ Z_Construct_UClass_UAttributeEditorActionPropertySet, UAttributeEditorActionPropertySet::StaticClass, TEXT("UAttributeEditorActionPropertySet"), &Z_Registration_Info_UClass_UAttributeEditorActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEditorActionPropertySet), 2456939645U) },
		{ Z_Construct_UClass_UAttributeEditorNormalsActions, UAttributeEditorNormalsActions::StaticClass, TEXT("UAttributeEditorNormalsActions"), &Z_Registration_Info_UClass_UAttributeEditorNormalsActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEditorNormalsActions), 2892991690U) },
		{ Z_Construct_UClass_UAttributeEditorUVActions, UAttributeEditorUVActions::StaticClass, TEXT("UAttributeEditorUVActions"), &Z_Registration_Info_UClass_UAttributeEditorUVActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEditorUVActions), 1147739077U) },
		{ Z_Construct_UClass_UAttributeEditorLightmapUVActions, UAttributeEditorLightmapUVActions::StaticClass, TEXT("UAttributeEditorLightmapUVActions"), &Z_Registration_Info_UClass_UAttributeEditorLightmapUVActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEditorLightmapUVActions), 795134924U) },
		{ Z_Construct_UClass_UAttributeEditorNewAttributeActions, UAttributeEditorNewAttributeActions::StaticClass, TEXT("UAttributeEditorNewAttributeActions"), &Z_Registration_Info_UClass_UAttributeEditorNewAttributeActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEditorNewAttributeActions), 794984326U) },
		{ Z_Construct_UClass_UAttributeEditorModifyAttributeActions, UAttributeEditorModifyAttributeActions::StaticClass, TEXT("UAttributeEditorModifyAttributeActions"), &Z_Registration_Info_UClass_UAttributeEditorModifyAttributeActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEditorModifyAttributeActions), 4145813395U) },
		{ Z_Construct_UClass_UAttributeEditorCopyAttributeActions, UAttributeEditorCopyAttributeActions::StaticClass, TEXT("UAttributeEditorCopyAttributeActions"), &Z_Registration_Info_UClass_UAttributeEditorCopyAttributeActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEditorCopyAttributeActions), 1377723368U) },
		{ Z_Construct_UClass_UAttributeEditorTool, UAttributeEditorTool::StaticClass, TEXT("UAttributeEditorTool"), &Z_Registration_Info_UClass_UAttributeEditorTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeEditorTool), 3706201149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_AttributeEditorTool_h_622471738(TEXT("/Script/MeshModelingToolsEditorOnlyExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_AttributeEditorTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_AttributeEditorTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_AttributeEditorTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_AttributeEditorTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
