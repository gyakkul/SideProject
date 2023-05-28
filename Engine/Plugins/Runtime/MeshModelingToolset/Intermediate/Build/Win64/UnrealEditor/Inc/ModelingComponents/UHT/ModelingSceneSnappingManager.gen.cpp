// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Snapping/ModelingSceneSnappingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelingSceneSnappingManager() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USceneSnappingManager();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingSceneSnappingManager();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingSceneSnappingManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UModelingSceneSnappingManager::StaticRegisterNativesUModelingSceneSnappingManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelingSceneSnappingManager);
	UClass* Z_Construct_UClass_UModelingSceneSnappingManager_NoRegister()
	{
		return UModelingSceneSnappingManager::StaticClass();
	}
	struct Z_Construct_UClass_UModelingSceneSnappingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModelingSceneSnappingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneSnappingManager,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingSceneSnappingManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UModelingSceneSnappingManager is an implementation of snapping suitable for use in\n * Modeling Tools/Gizmos (and potentially other places). \n * \n * Currently Supports:\n *    - snap to position/rotation grid\n *    - snap to mesh vertex position\n *    - snap to mesh edge position\n * \n * Snapping to mesh vertex/edge positions currently works for Volume (BrushComponent), StaticMeshComponent, \n * and DynamicMeshComponent. \n * \n * Currently the StaticMesh vertex/edge snapping is dependent on the Physics\n * system, and may fail or return nonsense results in some cases, due to the physics\n * complex-collision mesh deviating from the source-model mesh.\n */" },
		{ "IncludePath", "Snapping/ModelingSceneSnappingManager.h" },
		{ "ModuleRelativePath", "Public/Snapping/ModelingSceneSnappingManager.h" },
		{ "ToolTip", "UModelingSceneSnappingManager is an implementation of snapping suitable for use in\nModeling Tools/Gizmos (and potentially other places).\n\nCurrently Supports:\n   - snap to position/rotation grid\n   - snap to mesh vertex position\n   - snap to mesh edge position\n\nSnapping to mesh vertex/edge positions currently works for Volume (BrushComponent), StaticMeshComponent,\nand DynamicMeshComponent.\n\nCurrently the StaticMesh vertex/edge snapping is dependent on the Physics\nsystem, and may fail or return nonsense results in some cases, due to the physics\ncomplex-collision mesh deviating from the source-model mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingSceneSnappingManager_Statics::NewProp_ParentContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/Snapping/ModelingSceneSnappingManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingSceneSnappingManager_Statics::NewProp_ParentContext = { "ParentContext", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingSceneSnappingManager, ParentContext), Z_Construct_UClass_UInteractiveToolsContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingSceneSnappingManager_Statics::NewProp_ParentContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSceneSnappingManager_Statics::NewProp_ParentContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModelingSceneSnappingManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingSceneSnappingManager_Statics::NewProp_ParentContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModelingSceneSnappingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelingSceneSnappingManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelingSceneSnappingManager_Statics::ClassParams = {
		&UModelingSceneSnappingManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModelingSceneSnappingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSceneSnappingManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModelingSceneSnappingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSceneSnappingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModelingSceneSnappingManager()
	{
		if (!Z_Registration_Info_UClass_UModelingSceneSnappingManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelingSceneSnappingManager.OuterSingleton, Z_Construct_UClass_UModelingSceneSnappingManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModelingSceneSnappingManager.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UModelingSceneSnappingManager>()
	{
		return UModelingSceneSnappingManager::StaticClass();
	}
	UModelingSceneSnappingManager::UModelingSceneSnappingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModelingSceneSnappingManager);
	UModelingSceneSnappingManager::~UModelingSceneSnappingManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModelingSceneSnappingManager, UModelingSceneSnappingManager::StaticClass, TEXT("UModelingSceneSnappingManager"), &Z_Registration_Info_UClass_UModelingSceneSnappingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelingSceneSnappingManager), 1391365136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_4170708466(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
