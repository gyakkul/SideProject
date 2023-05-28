// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingToolsEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelingToolsEditorMode() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommand_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionManager_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingSceneSnappingManager_NoRegister();
	MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UModelingSelectionInteraction_NoRegister();
	MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UModelingToolsEditorMode();
	MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UModelingToolsEditorMode_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeSelectInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingToolsEditorMode();
// End Cross Module References
	void UModelingToolsEditorMode::StaticRegisterNativesUModelingToolsEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelingToolsEditorMode);
	UClass* Z_Construct_UClass_UModelingToolsEditorMode_NoRegister()
	{
		return UModelingToolsEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UModelingToolsEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVolumeElementSelection_MetaData[];
#endif
		static void NewProp_bEnableVolumeElementSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVolumeElementSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStaticMeshElementSelection_MetaData[];
#endif
		static void NewProp_bEnableStaticMeshElementSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStaticMeshElementSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneSnappingManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneSnappingManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionInteraction;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModelingModeCommands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelingModeCommands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModelingModeCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModelingToolsEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLegacyWidgetEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ModelingToolsEditorMode.h" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorMode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableVolumeElementSelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingToolsEditorMode.h" },
	};
#endif
	void Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableVolumeElementSelection_SetBit(void* Obj)
	{
		((UModelingToolsEditorMode*)Obj)->bEnableVolumeElementSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableVolumeElementSelection = { "bEnableVolumeElementSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingToolsEditorMode), &Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableVolumeElementSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableVolumeElementSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableVolumeElementSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableStaticMeshElementSelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingToolsEditorMode.h" },
	};
#endif
	void Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableStaticMeshElementSelection_SetBit(void* Obj)
	{
		((UModelingToolsEditorMode*)Obj)->bEnableStaticMeshElementSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableStaticMeshElementSelection = { "bEnableStaticMeshElementSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingToolsEditorMode), &Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableStaticMeshElementSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableStaticMeshElementSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableStaticMeshElementSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SceneSnappingManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingToolsEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SceneSnappingManager = { "SceneSnappingManager", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsEditorMode, SceneSnappingManager), Z_Construct_UClass_UModelingSceneSnappingManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SceneSnappingManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SceneSnappingManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SelectionManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingToolsEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SelectionManager = { "SelectionManager", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsEditorMode, SelectionManager), Z_Construct_UClass_UGeometrySelectionManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SelectionManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SelectionManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SelectionInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingToolsEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SelectionInteraction = { "SelectionInteraction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsEditorMode, SelectionInteraction), Z_Construct_UClass_UModelingSelectionInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SelectionInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SelectionInteraction_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_ModelingModeCommands_Inner = { "ModelingModeCommands", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInteractiveCommand_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_ModelingModeCommands_MetaData[] = {
		{ "Comment", "// UInteractiveCommand support. Currently implemented by creating instances of\n// commands on mode startup and holding onto them. This perhaps should be revisited,\n// command instances could probably be created as needed...\n" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorMode.h" },
		{ "ToolTip", "UInteractiveCommand support. Currently implemented by creating instances of\ncommands on mode startup and holding onto them. This perhaps should be revisited,\ncommand instances could probably be created as needed..." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_ModelingModeCommands = { "ModelingModeCommands", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsEditorMode, ModelingModeCommands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_ModelingModeCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_ModelingModeCommands_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModelingToolsEditorMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableVolumeElementSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_bEnableStaticMeshElementSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SceneSnappingManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SelectionManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_SelectionInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_ModelingModeCommands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorMode_Statics::NewProp_ModelingModeCommands,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UModelingToolsEditorMode_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULegacyEdModeSelectInterface_NoRegister, (int32)VTABLE_OFFSET(UModelingToolsEditorMode, ILegacyEdModeSelectInterface), false },  // 3415642726
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModelingToolsEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelingToolsEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelingToolsEditorMode_Statics::ClassParams = {
		&UModelingToolsEditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModelingToolsEditorMode_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorMode_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModelingToolsEditorMode()
	{
		if (!Z_Registration_Info_UClass_UModelingToolsEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelingToolsEditorMode.OuterSingleton, Z_Construct_UClass_UModelingToolsEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModelingToolsEditorMode.OuterSingleton;
	}
	template<> MODELINGTOOLSEDITORMODE_API UClass* StaticClass<UModelingToolsEditorMode>()
	{
		return UModelingToolsEditorMode::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModelingToolsEditorMode, UModelingToolsEditorMode::StaticClass, TEXT("UModelingToolsEditorMode"), &Z_Registration_Info_UClass_UModelingToolsEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelingToolsEditorMode), 846565569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorMode_h_2128664012(TEXT("/Script/ModelingToolsEditorMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
