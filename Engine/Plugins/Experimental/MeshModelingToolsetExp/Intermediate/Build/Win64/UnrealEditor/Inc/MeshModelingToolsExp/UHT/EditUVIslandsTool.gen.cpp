// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditUVIslandsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditUVIslandsTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditUVIslandsTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditUVIslandsTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditUVIslandsToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditUVIslandsToolBuilder_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UEditUVIslandsToolBuilder::StaticRegisterNativesUEditUVIslandsToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditUVIslandsToolBuilder);
	UClass* Z_Construct_UClass_UEditUVIslandsToolBuilder_NoRegister()
	{
		return UEditUVIslandsToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEditUVIslandsToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditUVIslandsToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditUVIslandsToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ToolBuilder\n */" },
		{ "IncludePath", "EditUVIslandsTool.h" },
		{ "ModuleRelativePath", "Public/EditUVIslandsTool.h" },
		{ "ToolTip", "ToolBuilder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditUVIslandsToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditUVIslandsToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditUVIslandsToolBuilder_Statics::ClassParams = {
		&UEditUVIslandsToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditUVIslandsToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditUVIslandsToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditUVIslandsToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UEditUVIslandsToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditUVIslandsToolBuilder.OuterSingleton, Z_Construct_UClass_UEditUVIslandsToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditUVIslandsToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UEditUVIslandsToolBuilder>()
	{
		return UEditUVIslandsToolBuilder::StaticClass();
	}
	UEditUVIslandsToolBuilder::UEditUVIslandsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditUVIslandsToolBuilder);
	UEditUVIslandsToolBuilder::~UEditUVIslandsToolBuilder() {}
	void UEditUVIslandsTool::StaticRegisterNativesUEditUVIslandsTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditUVIslandsTool);
	UClass* Z_Construct_UClass_UEditUVIslandsTool_NoRegister()
	{
		return UEditUVIslandsTool::StaticClass();
	}
	struct Z_Construct_UClass_UEditUVIslandsTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckerMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CheckerMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMeshActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditUVIslandsTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditUVIslandsTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "EditUVIslandsTool.h" },
		{ "ModuleRelativePath", "Public/EditUVIslandsTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditUVIslandsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditUVIslandsTool, MaterialSettings), Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_MaterialSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_CheckerMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditUVIslandsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_CheckerMaterial = { "CheckerMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditUVIslandsTool, CheckerMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_CheckerMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_CheckerMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_PreviewMeshActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditUVIslandsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_PreviewMeshActor = { "PreviewMeshActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditUVIslandsTool, PreviewMeshActor), Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_PreviewMeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_PreviewMeshActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_DynamicMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EditUVIslandsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditUVIslandsTool, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_DynamicMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_DynamicMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_SelectionMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditUVIslandsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_SelectionMechanic = { "SelectionMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditUVIslandsTool, SelectionMechanic), Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_SelectionMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_SelectionMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditUVIslandsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditUVIslandsTool, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_TransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_TransformGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditUVIslandsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditUVIslandsTool, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_TransformProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditUVIslandsTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_MaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_CheckerMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_PreviewMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_DynamicMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_SelectionMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_TransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditUVIslandsTool_Statics::NewProp_TransformProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditUVIslandsTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditUVIslandsTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditUVIslandsTool_Statics::ClassParams = {
		&UEditUVIslandsTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditUVIslandsTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditUVIslandsTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditUVIslandsTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditUVIslandsTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditUVIslandsTool()
	{
		if (!Z_Registration_Info_UClass_UEditUVIslandsTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditUVIslandsTool.OuterSingleton, Z_Construct_UClass_UEditUVIslandsTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditUVIslandsTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UEditUVIslandsTool>()
	{
		return UEditUVIslandsTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditUVIslandsTool);
	UEditUVIslandsTool::~UEditUVIslandsTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditUVIslandsTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditUVIslandsTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditUVIslandsToolBuilder, UEditUVIslandsToolBuilder::StaticClass, TEXT("UEditUVIslandsToolBuilder"), &Z_Registration_Info_UClass_UEditUVIslandsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditUVIslandsToolBuilder), 646544104U) },
		{ Z_Construct_UClass_UEditUVIslandsTool, UEditUVIslandsTool::StaticClass, TEXT("UEditUVIslandsTool"), &Z_Registration_Info_UClass_UEditUVIslandsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditUVIslandsTool), 1449568890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditUVIslandsTool_h_495881157(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditUVIslandsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditUVIslandsTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
