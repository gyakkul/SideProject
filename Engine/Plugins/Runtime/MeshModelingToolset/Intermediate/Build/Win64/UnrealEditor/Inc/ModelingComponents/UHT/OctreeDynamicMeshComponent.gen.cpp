// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/OctreeDynamicMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOctreeDynamicMeshComponent() {}
// Cross Module References
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UBaseDynamicMeshComponent();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOctreeDynamicMeshComponent();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOctreeDynamicMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	DEFINE_FUNCTION(UOctreeDynamicMeshComponent::execSetDynamicMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDynamicMesh(Z_Param_NewMesh);
		P_NATIVE_END;
	}
	void UOctreeDynamicMeshComponent::StaticRegisterNativesUOctreeDynamicMeshComponent()
	{
		UClass* Class = UOctreeDynamicMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDynamicMesh", &UOctreeDynamicMeshComponent::execSetDynamicMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics
	{
		struct OctreeDynamicMeshComponent_eventSetDynamicMesh_Parms
		{
			UDynamicMesh* NewMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OctreeDynamicMeshComponent_eventSetDynamicMesh_Parms, NewMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMesh" },
		{ "ModuleRelativePath", "Public/Components/OctreeDynamicMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOctreeDynamicMeshComponent, nullptr, "SetDynamicMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::OctreeDynamicMeshComponent_eventSetDynamicMesh_Parms), Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOctreeDynamicMeshComponent);
	UClass* Z_Construct_UClass_UOctreeDynamicMeshComponent_NoRegister()
	{
		return UOctreeDynamicMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseDynamicMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh, "SetDynamicMesh" }, // 687289969
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * UOctreeDynamicMeshComponent is a mesh component similar to UProceduralMeshComponent,\n * except it bases the renderable geometry off an internal FDynamicMesh3 instance.\n * The class generally has the same capabilities as UDynamicMeshComponent.\n * \n * A FDynamicMeshOctree3 is available to dynamically track the triangles of the mesh\n * (however the client is responsible for updating this octree).\n * Based on the Octree, the mesh is partitioned into chunks that are stored in separate\n * RenderBuffers in the FOctreeDynamicMeshSceneProxy.\n * Calling NotifyMeshUpdated() will result in only the \"dirty\" chunks being updated,\n * rather than the entire mesh.\n * \n * (So, if you don't need this capability, and don't want to update an Octree, use UDynamicMeshComponent!)\n */" },
		{ "HideCategories", "LOD Physics Collision LOD Mobility Trigger" },
		{ "IncludePath", "Components/OctreeDynamicMeshComponent.h" },
		{ "ModuleRelativePath", "Public/Components/OctreeDynamicMeshComponent.h" },
		{ "ToolTip", "UOctreeDynamicMeshComponent is a mesh component similar to UProceduralMeshComponent,\nexcept it bases the renderable geometry off an internal FDynamicMesh3 instance.\nThe class generally has the same capabilities as UDynamicMeshComponent.\n\nA FDynamicMeshOctree3 is available to dynamically track the triangles of the mesh\n(however the client is responsible for updating this octree).\nBased on the Octree, the mesh is partitioned into chunks that are stored in separate\nRenderBuffers in the FOctreeDynamicMeshSceneProxy.\nCalling NotifyMeshUpdated() will result in only the \"dirty\" chunks being updated,\nrather than the entire mesh.\n\n(So, if you don't need this capability, and don't want to update an Octree, use UDynamicMeshComponent!)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::NewProp_MeshObject_MetaData[] = {
		{ "Comment", "//~ Begin USceneComponent Interface.\n" },
		{ "ModuleRelativePath", "Public/Components/OctreeDynamicMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::NewProp_MeshObject = { "MeshObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOctreeDynamicMeshComponent, MeshObject), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::NewProp_MeshObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::NewProp_MeshObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::NewProp_MeshObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOctreeDynamicMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::ClassParams = {
		&UOctreeDynamicMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOctreeDynamicMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UOctreeDynamicMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOctreeDynamicMeshComponent.OuterSingleton, Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOctreeDynamicMeshComponent.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UOctreeDynamicMeshComponent>()
	{
		return UOctreeDynamicMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOctreeDynamicMeshComponent);
	UOctreeDynamicMeshComponent::~UOctreeDynamicMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Components_OctreeDynamicMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Components_OctreeDynamicMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOctreeDynamicMeshComponent, UOctreeDynamicMeshComponent::StaticClass, TEXT("UOctreeDynamicMeshComponent"), &Z_Registration_Info_UClass_UOctreeDynamicMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOctreeDynamicMeshComponent), 3033705184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Components_OctreeDynamicMeshComponent_h_3961708986(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Components_OctreeDynamicMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Components_OctreeDynamicMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
