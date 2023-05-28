// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothEditorMode() {}
// Cross Module References
	BASECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UBaseCharacterFXEditorMode();
	CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UChaosClothAssetEditorMode();
	CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UChaosClothAssetEditorMode_NoRegister();
	DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_UDataflowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditor();
// End Cross Module References
	void UChaosClothAssetEditorMode::StaticRegisterNativesUChaosClothAssetEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothAssetEditorMode);
	UClass* Z_Construct_UClass_UChaosClothAssetEditorMode_NoRegister()
	{
		return UChaosClothAssetEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothAssetEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WireframesToTick_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframesToTick_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WireframesToTick;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObjectsToTick_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObjectsToTick_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyObjectsToTick;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicMeshComponents;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshComponentParentActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponentParentActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicMeshComponentParentActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataflowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataflowComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCharacterFXEditorMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The cloth editor mode is the mode used in the cloth asset editor. It holds most of the inter-tool state.\n * We put things in a mode instead of directly into the asset editor in case we want to someday use the mode\n * in multiple asset editors.\n */" },
		{ "IncludePath", "ChaosClothAsset/ClothEditorMode.h" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
		{ "ToolTip", "The cloth editor mode is the mode used in the cloth asset editor. It holds most of the inter-tool state.\nWe put things in a mode instead of directly into the asset editor in case we want to someday use the mode\nin multiple asset editors." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_WireframesToTick_Inner = { "WireframesToTick", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_WireframesToTick_MetaData[] = {
		{ "Comment", "// Rest space wireframes. They have to get ticked to be able to respond to setting changes. \n" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
		{ "ToolTip", "Rest space wireframes. They have to get ticked to be able to respond to setting changes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_WireframesToTick = { "WireframesToTick", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAssetEditorMode, WireframesToTick), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_WireframesToTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_WireframesToTick_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick_Inner = { "PropertyObjectsToTick", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick_MetaData[] = {
		{ "Comment", "// Mode-level property objects (visible or not) that get ticked.\n" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
		{ "ToolTip", "Mode-level property objects (visible or not) that get ticked." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick = { "PropertyObjectsToTick", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAssetEditorMode, PropertyObjectsToTick), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponents_Inner = { "DynamicMeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponents_MetaData[] = {
		{ "Comment", "// Rest space editable meshes\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
		{ "ToolTip", "Rest space editable meshes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponents = { "DynamicMeshComponents", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAssetEditorMode, DynamicMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponents_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponentParentActors_Inner = { "DynamicMeshComponentParentActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponentParentActors_MetaData[] = {
		{ "Comment", "// Actors required for hit testing DynamicMeshComponents\n" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
		{ "ToolTip", "Actors required for hit testing DynamicMeshComponents" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponentParentActors = { "DynamicMeshComponentParentActors", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAssetEditorMode, DynamicMeshComponentParentActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponentParentActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponentParentActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowComponent = { "DataflowComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothAssetEditorMode, DataflowComponent), Z_Construct_UClass_UDataflowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_WireframesToTick_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_WireframesToTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponentParentActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponentParentActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothAssetEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::ClassParams = {
		&UChaosClothAssetEditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothAssetEditorMode()
	{
		if (!Z_Registration_Info_UClass_UChaosClothAssetEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothAssetEditorMode.OuterSingleton, Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothAssetEditorMode.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITOR_API UClass* StaticClass<UChaosClothAssetEditorMode>()
	{
		return UChaosClothAssetEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothAssetEditorMode);
	UChaosClothAssetEditorMode::~UChaosClothAssetEditorMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosClothAssetEditorMode, UChaosClothAssetEditorMode::StaticClass, TEXT("UChaosClothAssetEditorMode"), &Z_Registration_Info_UClass_UChaosClothAssetEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothAssetEditorMode), 506112795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorMode_h_2094268150(TEXT("/Script/ChaosClothAssetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
