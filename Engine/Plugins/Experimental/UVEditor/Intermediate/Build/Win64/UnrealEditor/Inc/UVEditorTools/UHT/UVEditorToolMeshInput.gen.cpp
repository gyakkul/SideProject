// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolTargets/UVEditorToolMeshInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorToolMeshInput() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTarget();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolMeshInput();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister();
// End Cross Module References
	void UUVEditorToolMeshInput::StaticRegisterNativesUUVEditorToolMeshInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorToolMeshInput);
	UClass* Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister()
	{
		return UUVEditorToolMeshInput::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorToolMeshInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnwrapPreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnwrapPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedPreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AppliedPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframeDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WireframeDisplay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorToolMeshInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorToolMeshInput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A package of the needed information for an asset being operated on by a\n * UV editor tool. It includes a UV unwrap mesh, a mesh with the UV layer applied,\n * and background-op-compatible previews for each. It also has convenience methods\n * for updating all of the represenations from just one of them, using a \"fast update\"\n * code path when possible.\n * \n * This tool target is a bit different from usual in that it is not created\n * by a tool target manager, and therefore doesn't have an accompanying factory.\n * Instead, it is created by the mode, because the mode has access to the worlds\n * in which the previews need to be created.\n * \n * It's arguable whether this should even inherit from UToolTarget.\n */" },
		{ "IncludePath", "ToolTargets/UVEditorToolMeshInput.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/UVEditorToolMeshInput.h" },
		{ "ToolTip", "A package of the needed information for an asset being operated on by a\nUV editor tool. It includes a UV unwrap mesh, a mesh with the UV layer applied,\nand background-op-compatible previews for each. It also has convenience methods\nfor updating all of the represenations from just one of them, using a \"fast update\"\ncode path when possible.\n\nThis tool target is a bit different from usual in that it is not created\nby a tool target manager, and therefore doesn't have an accompanying factory.\nInstead, it is created by the mode, because the mode has access to the worlds\nin which the previews need to be created.\n\nIt's arguable whether this should even inherit from UToolTarget." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_UnwrapPreview_MetaData[] = {
		{ "Comment", "/**\n\x09 * Preview of the unwrapped UV layer, suitable for being manipulated by background ops.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolTargets/UVEditorToolMeshInput.h" },
		{ "ToolTip", "Preview of the unwrapped UV layer, suitable for being manipulated by background ops." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_UnwrapPreview = { "UnwrapPreview", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorToolMeshInput, UnwrapPreview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_UnwrapPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_UnwrapPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_AppliedPreview_MetaData[] = {
		{ "Comment", "/**\n\x09 * 3d preview of the asset with the UV layer updated, suitable for use with background ops. \n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolTargets/UVEditorToolMeshInput.h" },
		{ "ToolTip", "3d preview of the asset with the UV layer updated, suitable for use with background ops." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_AppliedPreview = { "AppliedPreview", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorToolMeshInput, AppliedPreview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_AppliedPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_AppliedPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_WireframeDisplay_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional: a wireframe to track the mesh in unwrap preview. If set, it gets updated whenever the\n\x09 * class updates the unwrap preview, and it is destroyed on Shutdown().\n\x09 * TODO: We should have a fast path for updating the wireframe...\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolTargets/UVEditorToolMeshInput.h" },
		{ "ToolTip", "Optional: a wireframe to track the mesh in unwrap preview. If set, it gets updated whenever the\nclass updates the unwrap preview, and it is destroyed on Shutdown().\nTODO: We should have a fast path for updating the wireframe..." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_WireframeDisplay = { "WireframeDisplay", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorToolMeshInput, WireframeDisplay), Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_WireframeDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_WireframeDisplay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorToolMeshInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_UnwrapPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_AppliedPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorToolMeshInput_Statics::NewProp_WireframeDisplay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorToolMeshInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorToolMeshInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorToolMeshInput_Statics::ClassParams = {
		&UUVEditorToolMeshInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorToolMeshInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorToolMeshInput_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorToolMeshInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorToolMeshInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorToolMeshInput()
	{
		if (!Z_Registration_Info_UClass_UUVEditorToolMeshInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorToolMeshInput.OuterSingleton, Z_Construct_UClass_UUVEditorToolMeshInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorToolMeshInput.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorToolMeshInput>()
	{
		return UUVEditorToolMeshInput::StaticClass();
	}
	UUVEditorToolMeshInput::UUVEditorToolMeshInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorToolMeshInput);
	UUVEditorToolMeshInput::~UUVEditorToolMeshInput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ToolTargets_UVEditorToolMeshInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ToolTargets_UVEditorToolMeshInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorToolMeshInput, UUVEditorToolMeshInput::StaticClass, TEXT("UUVEditorToolMeshInput"), &Z_Registration_Info_UClass_UUVEditorToolMeshInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorToolMeshInput), 946329117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ToolTargets_UVEditorToolMeshInput_h_2989066692(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ToolTargets_UVEditorToolMeshInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ToolTargets_UVEditorToolMeshInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
