// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshToVolumeTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshToVolumeTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMeshToVolumeTool();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMeshToVolumeTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMeshToVolumeToolBuilder();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMeshToVolumeToolBuilder_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMeshToVolumeToolProperties();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMeshToVolumeToolProperties_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EMeshToVolumeMode();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp();
// End Cross Module References
	void UMeshToVolumeToolBuilder::StaticRegisterNativesUMeshToVolumeToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshToVolumeToolBuilder);
	UClass* Z_Construct_UClass_UMeshToVolumeToolBuilder_NoRegister()
	{
		return UMeshToVolumeToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMeshToVolumeToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshToVolumeToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshToVolumeToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MeshToVolumeTool.h" },
		{ "ModuleRelativePath", "Public/MeshToVolumeTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshToVolumeToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshToVolumeToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshToVolumeToolBuilder_Statics::ClassParams = {
		&UMeshToVolumeToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshToVolumeToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshToVolumeToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshToVolumeToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMeshToVolumeToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshToVolumeToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshToVolumeToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshToVolumeToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UMeshToVolumeToolBuilder>()
	{
		return UMeshToVolumeToolBuilder::StaticClass();
	}
	UMeshToVolumeToolBuilder::UMeshToVolumeToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshToVolumeToolBuilder);
	UMeshToVolumeToolBuilder::~UMeshToVolumeToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshToVolumeMode;
	static UEnum* EMeshToVolumeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshToVolumeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshToVolumeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EMeshToVolumeMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp(), TEXT("EMeshToVolumeMode"));
		}
		return Z_Registration_Info_UEnum_EMeshToVolumeMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* StaticEnum<EMeshToVolumeMode>()
	{
		return EMeshToVolumeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EMeshToVolumeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EMeshToVolumeMode_Statics::Enumerators[] = {
		{ "EMeshToVolumeMode::TriangulatePolygons", (int64)EMeshToVolumeMode::TriangulatePolygons },
		{ "EMeshToVolumeMode::MinimalPolygons", (int64)EMeshToVolumeMode::MinimalPolygons },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EMeshToVolumeMode_Statics::Enum_MetaDataParams[] = {
		{ "MinimalPolygons.Comment", "/** Create Volume Faces based on Planar Polygons */" },
		{ "MinimalPolygons.Name", "EMeshToVolumeMode::MinimalPolygons" },
		{ "MinimalPolygons.ToolTip", "Create Volume Faces based on Planar Polygons" },
		{ "ModuleRelativePath", "Public/MeshToVolumeTool.h" },
		{ "TriangulatePolygons.Comment", "/** Create a separate Volume Face for each Triangle */" },
		{ "TriangulatePolygons.Name", "EMeshToVolumeMode::TriangulatePolygons" },
		{ "TriangulatePolygons.ToolTip", "Create a separate Volume Face for each Triangle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EMeshToVolumeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
		nullptr,
		"EMeshToVolumeMode",
		"EMeshToVolumeMode",
		Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EMeshToVolumeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EMeshToVolumeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EMeshToVolumeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EMeshToVolumeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EMeshToVolumeMode()
	{
		if (!Z_Registration_Info_UEnum_EMeshToVolumeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshToVolumeMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EMeshToVolumeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshToVolumeMode.InnerSingleton;
	}
	void UMeshToVolumeToolProperties::StaticRegisterNativesUMeshToVolumeToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshToVolumeToolProperties);
	UClass* Z_Construct_UClass_UMeshToVolumeToolProperties_NoRegister()
	{
		return UMeshToVolumeToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshToVolumeToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ConversionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConversionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewVolumeType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewVolumeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVolume_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_TargetVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshToVolumeTool.h" },
		{ "ModuleRelativePath", "Public/MeshToVolumeTool.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_ConversionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_ConversionMode_MetaData[] = {
		{ "Category", "ConversionOptions" },
		{ "Comment", "/** Method for converting the input mesh to a set of Planar Polygonal Faces in the output Volume. */" },
		{ "ModuleRelativePath", "Public/MeshToVolumeTool.h" },
		{ "ToolTip", "Method for converting the input mesh to a set of Planar Polygonal Faces in the output Volume." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_ConversionMode = { "ConversionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshToVolumeToolProperties, ConversionMode), Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EMeshToVolumeMode, METADATA_PARAMS(Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_ConversionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_ConversionMode_MetaData)) }; // 1860862449
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_NewVolumeType_MetaData[] = {
		{ "Category", "NewVolume" },
		{ "Comment", "/** Type of new Volume to create on Accept */" },
		{ "EditCondition", "TargetVolume == nullptr" },
		{ "ModuleRelativePath", "Public/MeshToVolumeTool.h" },
		{ "ToolTip", "Type of new Volume to create on Accept" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_NewVolumeType = { "NewVolumeType", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshToVolumeToolProperties, NewVolumeType), Z_Construct_UClass_UClass, Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_NewVolumeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_NewVolumeType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_TargetVolume_MetaData[] = {
		{ "Category", "UpdateExisting" },
		{ "Comment", "/** If set, the target Volume will be updated, rather than creating a new Volume. */" },
		{ "ModuleRelativePath", "Public/MeshToVolumeTool.h" },
		{ "ToolTip", "If set, the target Volume will be updated, rather than creating a new Volume." },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_TargetVolume = { "TargetVolume", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshToVolumeToolProperties, TargetVolume), Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_TargetVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_TargetVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_ConversionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_ConversionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_NewVolumeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::NewProp_TargetVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshToVolumeToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::ClassParams = {
		&UMeshToVolumeToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshToVolumeToolProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshToVolumeToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshToVolumeToolProperties.OuterSingleton, Z_Construct_UClass_UMeshToVolumeToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshToVolumeToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UMeshToVolumeToolProperties>()
	{
		return UMeshToVolumeToolProperties::StaticClass();
	}
	UMeshToVolumeToolProperties::UMeshToVolumeToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshToVolumeToolProperties);
	UMeshToVolumeToolProperties::~UMeshToVolumeToolProperties() {}
	void UMeshToVolumeTool::StaticRegisterNativesUMeshToVolumeTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshToVolumeTool);
	UClass* Z_Construct_UClass_UMeshToVolumeTool_NoRegister()
	{
		return UMeshToVolumeTool::StaticClass();
	}
	struct Z_Construct_UClass_UMeshToVolumeTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleSourcesProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandleSourcesProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeEdgesSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VolumeEdgesSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshToVolumeTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshToVolumeTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Converts a mesh to a volume.\n *\n * Note: If ConversionUtils/DynamicMeshToVolume is rewritten to be safe for runtime, this\n * tool can be moved out of the editor-only section and put with VolumeToMeshTool.\n */" },
		{ "IncludePath", "MeshToVolumeTool.h" },
		{ "ModuleRelativePath", "Public/MeshToVolumeTool.h" },
		{ "ToolTip", "Converts a mesh to a volume.\n\nNote: If ConversionUtils/DynamicMeshToVolume is rewritten to be safe for runtime, this\ntool can be moved out of the editor-only section and put with VolumeToMeshTool." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshToVolumeTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshToVolumeTool, Settings), Z_Construct_UClass_UMeshToVolumeToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_HandleSourcesProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshToVolumeTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_HandleSourcesProperties = { "HandleSourcesProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshToVolumeTool, HandleSourcesProperties), Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_HandleSourcesProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_HandleSourcesProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshToVolumeTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshToVolumeTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_VolumeEdgesSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshToVolumeTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_VolumeEdgesSet = { "VolumeEdgesSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshToVolumeTool, VolumeEdgesSet), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_VolumeEdgesSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_VolumeEdgesSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshToVolumeTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_HandleSourcesProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshToVolumeTool_Statics::NewProp_VolumeEdgesSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshToVolumeTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshToVolumeTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshToVolumeTool_Statics::ClassParams = {
		&UMeshToVolumeTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshToVolumeTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshToVolumeTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshToVolumeTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshToVolumeTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshToVolumeTool()
	{
		if (!Z_Registration_Info_UClass_UMeshToVolumeTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshToVolumeTool.OuterSingleton, Z_Construct_UClass_UMeshToVolumeTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshToVolumeTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UMeshToVolumeTool>()
	{
		return UMeshToVolumeTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshToVolumeTool);
	UMeshToVolumeTool::~UMeshToVolumeTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MeshToVolumeTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MeshToVolumeTool_h_Statics::EnumInfo[] = {
		{ EMeshToVolumeMode_StaticEnum, TEXT("EMeshToVolumeMode"), &Z_Registration_Info_UEnum_EMeshToVolumeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1860862449U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MeshToVolumeTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshToVolumeToolBuilder, UMeshToVolumeToolBuilder::StaticClass, TEXT("UMeshToVolumeToolBuilder"), &Z_Registration_Info_UClass_UMeshToVolumeToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshToVolumeToolBuilder), 4242035835U) },
		{ Z_Construct_UClass_UMeshToVolumeToolProperties, UMeshToVolumeToolProperties::StaticClass, TEXT("UMeshToVolumeToolProperties"), &Z_Registration_Info_UClass_UMeshToVolumeToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshToVolumeToolProperties), 785454184U) },
		{ Z_Construct_UClass_UMeshToVolumeTool, UMeshToVolumeTool::StaticClass, TEXT("UMeshToVolumeTool"), &Z_Registration_Info_UClass_UMeshToVolumeTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshToVolumeTool), 1405468605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MeshToVolumeTool_h_3303932283(TEXT("/Script/MeshModelingToolsEditorOnlyExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MeshToVolumeTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MeshToVolumeTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MeshToVolumeTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MeshToVolumeTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
