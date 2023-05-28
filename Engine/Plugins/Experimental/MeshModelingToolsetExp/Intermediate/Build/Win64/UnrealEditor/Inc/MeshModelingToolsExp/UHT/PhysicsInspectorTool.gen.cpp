// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Physics/PhysicsInspectorTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsInspectorTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsInspectorTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsInspectorTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsInspectorToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsInspectorToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UPhysicsInspectorToolBuilder::StaticRegisterNativesUPhysicsInspectorToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsInspectorToolBuilder);
	UClass* Z_Construct_UClass_UPhysicsInspectorToolBuilder_NoRegister()
	{
		return UPhysicsInspectorToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsInspectorToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsInspectorToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsInspectorToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/PhysicsInspectorTool.h" },
		{ "ModuleRelativePath", "Public/Physics/PhysicsInspectorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsInspectorToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsInspectorToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsInspectorToolBuilder_Statics::ClassParams = {
		&UPhysicsInspectorToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsInspectorToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsInspectorToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsInspectorToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UPhysicsInspectorToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsInspectorToolBuilder.OuterSingleton, Z_Construct_UClass_UPhysicsInspectorToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsInspectorToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPhysicsInspectorToolBuilder>()
	{
		return UPhysicsInspectorToolBuilder::StaticClass();
	}
	UPhysicsInspectorToolBuilder::UPhysicsInspectorToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsInspectorToolBuilder);
	UPhysicsInspectorToolBuilder::~UPhysicsInspectorToolBuilder() {}
	void UPhysicsInspectorTool::StaticRegisterNativesUPhysicsInspectorTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsInspectorTool);
	UClass* Z_Construct_UClass_UPhysicsInspectorTool_NoRegister()
	{
		return UPhysicsInspectorTool::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsInspectorTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VizSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VizSettings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineMaterial;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewElements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewElements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewElements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsInspectorTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsInspectorTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Inspector Tool for visualizing mesh information\n */" },
		{ "IncludePath", "Physics/PhysicsInspectorTool.h" },
		{ "ModuleRelativePath", "Public/Physics/PhysicsInspectorTool.h" },
		{ "ToolTip", "Mesh Inspector Tool for visualizing mesh information" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_VizSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/PhysicsInspectorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_VizSettings = { "VizSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsInspectorTool, VizSettings), Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_VizSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_VizSettings_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_ObjectData_Inner = { "ObjectData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_ObjectData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/PhysicsInspectorTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_ObjectData = { "ObjectData", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsInspectorTool, ObjectData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_ObjectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_ObjectData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_LineMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/PhysicsInspectorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsInspectorTool, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_LineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_LineMaterial_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_PreviewElements_Inner = { "PreviewElements", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_PreviewElements_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/PhysicsInspectorTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_PreviewElements = { "PreviewElements", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsInspectorTool, PreviewElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_PreviewElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_PreviewElements_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsInspectorTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_VizSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_ObjectData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_ObjectData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_LineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_PreviewElements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsInspectorTool_Statics::NewProp_PreviewElements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsInspectorTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsInspectorTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsInspectorTool_Statics::ClassParams = {
		&UPhysicsInspectorTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsInspectorTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsInspectorTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsInspectorTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsInspectorTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsInspectorTool()
	{
		if (!Z_Registration_Info_UClass_UPhysicsInspectorTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsInspectorTool.OuterSingleton, Z_Construct_UClass_UPhysicsInspectorTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsInspectorTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPhysicsInspectorTool>()
	{
		return UPhysicsInspectorTool::StaticClass();
	}
	UPhysicsInspectorTool::UPhysicsInspectorTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsInspectorTool);
	UPhysicsInspectorTool::~UPhysicsInspectorTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_PhysicsInspectorTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_PhysicsInspectorTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsInspectorToolBuilder, UPhysicsInspectorToolBuilder::StaticClass, TEXT("UPhysicsInspectorToolBuilder"), &Z_Registration_Info_UClass_UPhysicsInspectorToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsInspectorToolBuilder), 2207430596U) },
		{ Z_Construct_UClass_UPhysicsInspectorTool, UPhysicsInspectorTool::StaticClass, TEXT("UPhysicsInspectorTool"), &Z_Registration_Info_UClass_UPhysicsInspectorTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsInspectorTool), 3486562116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_PhysicsInspectorTool_h_280316286(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_PhysicsInspectorTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_PhysicsInspectorTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
