// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Selection/PersistentMeshSelectionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersistentMeshSelectionManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UDEPRECATED_PersistentMeshSelectionManager::StaticRegisterNativesUDEPRECATED_PersistentMeshSelectionManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PersistentMeshSelectionManager);
	UClass* Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_NoRegister()
	{
		return UDEPRECATED_PersistentMeshSelectionManager::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionDisplay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDEPRECATED_PersistentMeshSelectionManager manages an active Mesh Selection.\n * The assumption is that this class will be registered with the ContextStore of an InteractiveToolsContext,\n * and the various Tool implementations will get/set the selection.\n * \n * \n * \n * StoredMeshSelectionUtil.h contains various utility functions to simplify usage of this class,\n * those functions are preferable to directly using the Manager.\n * \n *///UE_DEPRECATED(5.1, \"UPersistentMeshSelection and related functions are deprecated\")\n" },
		{ "IncludePath", "Selection/PersistentMeshSelectionManager.h" },
		{ "ModuleRelativePath", "Public/Selection/PersistentMeshSelectionManager.h" },
		{ "ToolTip", "UDEPRECATED_PersistentMeshSelectionManager manages an active Mesh Selection.\nThe assumption is that this class will be registered with the ContextStore of an InteractiveToolsContext,\nand the various Tool implementations will get/set the selection.\n\n\n\nStoredMeshSelectionUtil.h contains various utility functions to simplify usage of this class,\nthose functions are preferable to directly using the Manager.\n\n //UE_DEPRECATED(5.1, \"UPersistentMeshSelection and related functions are deprecated\")" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_ParentContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/PersistentMeshSelectionManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_ParentContext = { "ParentContext", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_PersistentMeshSelectionManager, ParentContext), Z_Construct_UClass_UInteractiveToolsContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_ParentContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_ParentContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_ActiveSelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/PersistentMeshSelectionManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_ActiveSelection = { "ActiveSelection", nullptr, (EPropertyFlags)0x0024080020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_PersistentMeshSelectionManager, ActiveSelection_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_ActiveSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_ActiveSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_SelectionDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/PersistentMeshSelectionManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_SelectionDisplay = { "SelectionDisplay", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_PersistentMeshSelectionManager, SelectionDisplay), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_SelectionDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_SelectionDisplay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_ParentContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_ActiveSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::NewProp_SelectionDisplay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PersistentMeshSelectionManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::ClassParams = {
		&UDEPRECATED_PersistentMeshSelectionManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::PropPointers),
		0,
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_PersistentMeshSelectionManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PersistentMeshSelectionManager.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_PersistentMeshSelectionManager.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UDEPRECATED_PersistentMeshSelectionManager>()
	{
		return UDEPRECATED_PersistentMeshSelectionManager::StaticClass();
	}
	UDEPRECATED_PersistentMeshSelectionManager::UDEPRECATED_PersistentMeshSelectionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PersistentMeshSelectionManager);
	UDEPRECATED_PersistentMeshSelectionManager::~UDEPRECATED_PersistentMeshSelectionManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PersistentMeshSelectionManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PersistentMeshSelectionManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PersistentMeshSelectionManager, UDEPRECATED_PersistentMeshSelectionManager::StaticClass, TEXT("UDEPRECATED_PersistentMeshSelectionManager"), &Z_Registration_Info_UClass_UDEPRECATED_PersistentMeshSelectionManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PersistentMeshSelectionManager), 82539523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PersistentMeshSelectionManager_h_3354925883(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PersistentMeshSelectionManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PersistentMeshSelectionManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
