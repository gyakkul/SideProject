// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditorPlacement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorPlacement() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorPlacement();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorPlacement_NoRegister();
// End Cross Module References
	void UVREditorPlacement::StaticRegisterNativesUVREditorPlacement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVREditorPlacement);
	UClass* Z_Construct_UClass_UVREditorPlacement_NoRegister()
	{
		return UVREditorPlacement::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorPlacement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VRMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportWorldInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewportWorldInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatingUIAssetDraggedFrom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FloatingUIAssetDraggedFrom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacingMaterialOrTextureAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlacingMaterialOrTextureAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorPlacement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorPlacement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * VR Editor interaction with the 3D world\n */" },
		{ "IncludePath", "VREditorPlacement.h" },
		{ "ModuleRelativePath", "VREditorPlacement.h" },
		{ "ToolTip", "VR Editor interaction with the 3D world" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_VRMode_MetaData[] = {
		{ "Comment", "/** Owning object */" },
		{ "ModuleRelativePath", "VREditorPlacement.h" },
		{ "ToolTip", "Owning object" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_VRMode = { "VRMode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorPlacement, VRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_VRMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_VRMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_ViewportWorldInteraction_MetaData[] = {
		{ "Comment", "/** The actual ViewportWorldInteraction */" },
		{ "ModuleRelativePath", "VREditorPlacement.h" },
		{ "ToolTip", "The actual ViewportWorldInteraction" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_ViewportWorldInteraction = { "ViewportWorldInteraction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorPlacement, ViewportWorldInteraction), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_ViewportWorldInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_ViewportWorldInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_FloatingUIAssetDraggedFrom_MetaData[] = {
		{ "Comment", "/** The UI used to drag an asset into the level */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorPlacement.h" },
		{ "ToolTip", "The UI used to drag an asset into the level" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_FloatingUIAssetDraggedFrom = { "FloatingUIAssetDraggedFrom", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorPlacement, FloatingUIAssetDraggedFrom), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_FloatingUIAssetDraggedFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_FloatingUIAssetDraggedFrom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_PlacingMaterialOrTextureAsset_MetaData[] = {
		{ "Comment", "/** The material or texture asset we're dragging to place on an object */" },
		{ "ModuleRelativePath", "VREditorPlacement.h" },
		{ "ToolTip", "The material or texture asset we're dragging to place on an object" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_PlacingMaterialOrTextureAsset = { "PlacingMaterialOrTextureAsset", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorPlacement, PlacingMaterialOrTextureAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_PlacingMaterialOrTextureAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_PlacingMaterialOrTextureAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREditorPlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_VRMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_ViewportWorldInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_FloatingUIAssetDraggedFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorPlacement_Statics::NewProp_PlacingMaterialOrTextureAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorPlacement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorPlacement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVREditorPlacement_Statics::ClassParams = {
		&UVREditorPlacement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVREditorPlacement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorPlacement_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorPlacement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorPlacement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorPlacement()
	{
		if (!Z_Registration_Info_UClass_UVREditorPlacement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVREditorPlacement.OuterSingleton, Z_Construct_UClass_UVREditorPlacement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVREditorPlacement.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<UVREditorPlacement>()
	{
		return UVREditorPlacement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorPlacement);
	UVREditorPlacement::~UVREditorPlacement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorPlacement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorPlacement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVREditorPlacement, UVREditorPlacement::StaticClass, TEXT("UVREditorPlacement"), &Z_Registration_Info_UClass_UVREditorPlacement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVREditorPlacement), 1263769016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorPlacement_h_4205317138(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorPlacement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorPlacement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
