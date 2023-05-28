// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VolumeToMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeToMeshTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVolumeToMeshTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVolumeToMeshTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVolumeToMeshToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVolumeToMeshToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVolumeToMeshToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVolumeToMeshToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UVolumeToMeshToolBuilder::StaticRegisterNativesUVolumeToMeshToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeToMeshToolBuilder);
	UClass* Z_Construct_UClass_UVolumeToMeshToolBuilder_NoRegister()
	{
		return UVolumeToMeshToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "VolumeToMeshTool.h" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeToMeshToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics::ClassParams = {
		&UVolumeToMeshToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumeToMeshToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UVolumeToMeshToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeToMeshToolBuilder.OuterSingleton, Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVolumeToMeshToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVolumeToMeshToolBuilder>()
	{
		return UVolumeToMeshToolBuilder::StaticClass();
	}
	UVolumeToMeshToolBuilder::UVolumeToMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeToMeshToolBuilder);
	UVolumeToMeshToolBuilder::~UVolumeToMeshToolBuilder() {}
	void UVolumeToMeshToolProperties::StaticRegisterNativesUVolumeToMeshToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeToMeshToolProperties);
	UClass* Z_Construct_UClass_UVolumeToMeshToolProperties_NoRegister()
	{
		return UVolumeToMeshToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UVolumeToMeshToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWeldEdges_MetaData[];
#endif
		static void NewProp_bWeldEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRepair_MetaData[];
#endif
		static void NewProp_bAutoRepair_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRepair;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeMesh_MetaData[];
#endif
		static void NewProp_bOptimizeMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[];
#endif
		static void NewProp_bShowWireframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VolumeToMeshTool.h" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bWeldEdges_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bWeldEdges_SetBit(void* Obj)
	{
		((UVolumeToMeshToolProperties*)Obj)->bWeldEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bWeldEdges = { "bWeldEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVolumeToMeshToolProperties), &Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bWeldEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bWeldEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bWeldEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bAutoRepair_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bAutoRepair_SetBit(void* Obj)
	{
		((UVolumeToMeshToolProperties*)Obj)->bAutoRepair = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bAutoRepair = { "bAutoRepair", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVolumeToMeshToolProperties), &Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bAutoRepair_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bAutoRepair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bAutoRepair_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bOptimizeMesh_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bOptimizeMesh_SetBit(void* Obj)
	{
		((UVolumeToMeshToolProperties*)Obj)->bOptimizeMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bOptimizeMesh = { "bOptimizeMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVolumeToMeshToolProperties), &Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bOptimizeMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bOptimizeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bOptimizeMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
	{
		((UVolumeToMeshToolProperties*)Obj)->bShowWireframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVolumeToMeshToolProperties), &Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bShowWireframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bShowWireframe_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bWeldEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bAutoRepair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bOptimizeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bShowWireframe,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeToMeshToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::ClassParams = {
		&UVolumeToMeshToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumeToMeshToolProperties()
	{
		if (!Z_Registration_Info_UClass_UVolumeToMeshToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeToMeshToolProperties.OuterSingleton, Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVolumeToMeshToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVolumeToMeshToolProperties>()
	{
		return UVolumeToMeshToolProperties::StaticClass();
	}
	UVolumeToMeshToolProperties::UVolumeToMeshToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeToMeshToolProperties);
	UVolumeToMeshToolProperties::~UVolumeToMeshToolProperties() {}
	void UVolumeToMeshTool::StaticRegisterNativesUVolumeToMeshTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeToMeshTool);
	UClass* Z_Construct_UClass_UVolumeToMeshTool_NoRegister()
	{
		return UVolumeToMeshTool::StaticClass();
	}
	struct Z_Construct_UClass_UVolumeToMeshTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputTypeProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVolume_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_TargetVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeEdgesSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VolumeEdgesSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumeToMeshTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeToMeshTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "VolumeToMeshTool.h" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumeToMeshTool, Settings), Z_Construct_UClass_UVolumeToMeshToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_OutputTypeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumeToMeshTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_OutputTypeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_OutputTypeProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumeToMeshTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_TargetVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_TargetVolume = { "TargetVolume", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumeToMeshTool, TargetVolume), Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_TargetVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_TargetVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_VolumeEdgesSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_VolumeEdgesSet = { "VolumeEdgesSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumeToMeshTool, VolumeEdgesSet), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_VolumeEdgesSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_VolumeEdgesSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumeToMeshTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_OutputTypeProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_TargetVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_VolumeEdgesSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumeToMeshTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeToMeshTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeToMeshTool_Statics::ClassParams = {
		&UVolumeToMeshTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVolumeToMeshTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVolumeToMeshTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumeToMeshTool()
	{
		if (!Z_Registration_Info_UClass_UVolumeToMeshTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeToMeshTool.OuterSingleton, Z_Construct_UClass_UVolumeToMeshTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVolumeToMeshTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVolumeToMeshTool>()
	{
		return UVolumeToMeshTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeToMeshTool);
	UVolumeToMeshTool::~UVolumeToMeshTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VolumeToMeshTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VolumeToMeshTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVolumeToMeshToolBuilder, UVolumeToMeshToolBuilder::StaticClass, TEXT("UVolumeToMeshToolBuilder"), &Z_Registration_Info_UClass_UVolumeToMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeToMeshToolBuilder), 2233522643U) },
		{ Z_Construct_UClass_UVolumeToMeshToolProperties, UVolumeToMeshToolProperties::StaticClass, TEXT("UVolumeToMeshToolProperties"), &Z_Registration_Info_UClass_UVolumeToMeshToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeToMeshToolProperties), 2897781020U) },
		{ Z_Construct_UClass_UVolumeToMeshTool, UVolumeToMeshTool::StaticClass, TEXT("UVolumeToMeshTool"), &Z_Registration_Info_UClass_UVolumeToMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeToMeshTool), 758368894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VolumeToMeshTool_h_2324018807(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VolumeToMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VolumeToMeshTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
