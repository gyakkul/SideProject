// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PreviewMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewMesh() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewMeshActor();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewMeshActor_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void APreviewMeshActor::StaticRegisterNativesAPreviewMeshActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APreviewMeshActor);
	UClass* Z_Construct_UClass_APreviewMeshActor_NoRegister()
	{
		return APreviewMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_APreviewMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APreviewMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInternalToolFrameworkActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APreviewMeshActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPreviewMesh internally spawns a APreviewMeshActor to hold the preview mesh object.\n * We use this AInternalToolFrameworkActor subclass so that we can identify such objects\n * at higher levels (for example to prevent them from being deleted in the Editor)\n */" },
		{ "IncludePath", "PreviewMesh.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PreviewMesh.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "UPreviewMesh internally spawns a APreviewMeshActor to hold the preview mesh object.\nWe use this AInternalToolFrameworkActor subclass so that we can identify such objects\nat higher levels (for example to prevent them from being deleted in the Editor)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APreviewMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APreviewMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APreviewMeshActor_Statics::ClassParams = {
		&APreviewMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x019002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APreviewMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APreviewMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APreviewMeshActor()
	{
		if (!Z_Registration_Info_UClass_APreviewMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APreviewMeshActor.OuterSingleton, Z_Construct_UClass_APreviewMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APreviewMeshActor.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<APreviewMeshActor>()
	{
		return APreviewMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APreviewMeshActor);
	APreviewMeshActor::~APreviewMeshActor() {}
	void UPreviewMesh::StaticRegisterNativesUPreviewMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPreviewMesh);
	UClass* Z_Construct_UClass_UPreviewMesh_NoRegister()
	{
		return UPreviewMesh::StaticClass();
	}
	struct Z_Construct_UClass_UPreviewMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildSpatialDataStructure_MetaData[];
#endif
		static void NewProp_bBuildSpatialDataStructure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildSpatialDataStructure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPreviewMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * UPreviewMesh is a utility object that spawns and owns a transient mesh object in the World.\n * This can be used to show live preview geometry during modeling operations.\n * Call CreateInWorld() to set it up, and Disconnect() to shut it down.\n * \n * Currently implemented via an internal Actor that has a UDynamicMeshComponent root component,\n * with an AABBTree created/updated if FProperty bBuildSpatialDataStructure=true.\n * The Actor is destroyed on Disconnect().\n * \n * The intention with UPreviewMesh is to provide a higher-level interface than the Component.\n * In future the internal Component may be replaced with another class (eg OctreeDynamicMeshComponent),\n * or automatically swap between the two, etc.\n * \n * As a result direct access to the Actor/Component, or a non-const FDynamicMesh3, is intentionally not provided.\n * Wrapper functions are provided (or should be added) for necessary Actor/Component parameters.\n * To edit the mesh either a copy is done, or EditMesh()/ApplyChange() must be used.\n * These functions automatically update necessary internal data structures.\n * \n */" },
		{ "IncludePath", "PreviewMesh.h" },
		{ "ModuleRelativePath", "Public/PreviewMesh.h" },
		{ "ToolTip", "UPreviewMesh is a utility object that spawns and owns a transient mesh object in the World.\nThis can be used to show live preview geometry during modeling operations.\nCall CreateInWorld() to set it up, and Disconnect() to shut it down.\n\nCurrently implemented via an internal Actor that has a UDynamicMeshComponent root component,\nwith an AABBTree created/updated if FProperty bBuildSpatialDataStructure=true.\nThe Actor is destroyed on Disconnect().\n\nThe intention with UPreviewMesh is to provide a higher-level interface than the Component.\nIn future the internal Component may be replaced with another class (eg OctreeDynamicMeshComponent),\nor automatically swap between the two, etc.\n\nAs a result direct access to the Actor/Component, or a non-const FDynamicMesh3, is intentionally not provided.\nWrapper functions are provided (or should be added) for necessary Actor/Component parameters.\nTo edit the mesh either a copy is done, or EditMesh()/ApplyChange() must be used.\nThese functions automatically update necessary internal data structures." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewMesh_Statics::NewProp_bBuildSpatialDataStructure_MetaData[] = {
		{ "Comment", "/** If true, we build a spatial data structure internally for the preview mesh, which allows for hit-testing */" },
		{ "ModuleRelativePath", "Public/PreviewMesh.h" },
		{ "ToolTip", "If true, we build a spatial data structure internally for the preview mesh, which allows for hit-testing" },
	};
#endif
	void Z_Construct_UClass_UPreviewMesh_Statics::NewProp_bBuildSpatialDataStructure_SetBit(void* Obj)
	{
		((UPreviewMesh*)Obj)->bBuildSpatialDataStructure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPreviewMesh_Statics::NewProp_bBuildSpatialDataStructure = { "bBuildSpatialDataStructure", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPreviewMesh), &Z_Construct_UClass_UPreviewMesh_Statics::NewProp_bBuildSpatialDataStructure_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPreviewMesh_Statics::NewProp_bBuildSpatialDataStructure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewMesh_Statics::NewProp_bBuildSpatialDataStructure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewMesh_Statics::NewProp_DynamicMeshComponent_MetaData[] = {
		{ "Comment", "/** This component is set as the root component of TemporaryParentActor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PreviewMesh.h" },
		{ "ToolTip", "This component is set as the root component of TemporaryParentActor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPreviewMesh_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPreviewMesh, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPreviewMesh_Statics::NewProp_DynamicMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewMesh_Statics::NewProp_DynamicMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewMesh_Statics::NewProp_bBuildSpatialDataStructure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewMesh_Statics::NewProp_DynamicMeshComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPreviewMesh_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UPreviewMesh, IMeshVertexCommandChangeTarget), false },  // 84206154
			{ Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UPreviewMesh, IMeshCommandChangeTarget), false },  // 4016242093
			{ Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UPreviewMesh, IMeshReplacementCommandChangeTarget), false },  // 2403131168
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPreviewMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreviewMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPreviewMesh_Statics::ClassParams = {
		&UPreviewMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPreviewMesh_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewMesh_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPreviewMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPreviewMesh()
	{
		if (!Z_Registration_Info_UClass_UPreviewMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPreviewMesh.OuterSingleton, Z_Construct_UClass_UPreviewMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPreviewMesh.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UPreviewMesh>()
	{
		return UPreviewMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPreviewMesh);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APreviewMeshActor, APreviewMeshActor::StaticClass, TEXT("APreviewMeshActor"), &Z_Registration_Info_UClass_APreviewMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APreviewMeshActor), 3186444515U) },
		{ Z_Construct_UClass_UPreviewMesh, UPreviewMesh::StaticClass, TEXT("UPreviewMesh"), &Z_Registration_Info_UClass_UPreviewMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPreviewMesh), 532500274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_2421181105(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PreviewMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
