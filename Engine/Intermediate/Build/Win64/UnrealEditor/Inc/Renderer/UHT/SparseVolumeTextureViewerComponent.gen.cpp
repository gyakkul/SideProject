// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSparseVolumeTextureViewerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();
	RENDERER_API UClass* Z_Construct_UClass_ASparseVolumeTextureViewer();
	RENDERER_API UClass* Z_Construct_UClass_ASparseVolumeTextureViewer_NoRegister();
	RENDERER_API UClass* Z_Construct_UClass_USparseVolumeTextureViewerComponent();
	RENDERER_API UClass* Z_Construct_UClass_USparseVolumeTextureViewerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Renderer();
// End Cross Module References
	void USparseVolumeTextureViewerComponent::StaticRegisterNativesUSparseVolumeTextureViewerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USparseVolumeTextureViewerComponent);
	UClass* Z_Construct_UClass_USparseVolumeTextureViewerComponent_NoRegister()
	{
		return USparseVolumeTextureViewerComponent::StaticClass();
	}
	struct Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTexturePreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SparseVolumeTexturePreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnimate_MetaData[];
#endif
		static void NewProp_bAnimate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationFrame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToVisualize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentToVisualize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Renderer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * A component used to inspect sparse volume textures.\n */" },
		{ "HideCategories", "Object Mobility Activation Components|Activation Mobility VirtualTexture Trigger" },
		{ "IncludePath", "SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "ToolTip", "A component used to inspect sparse volume textures." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_SparseVolumeTexturePreview_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_SparseVolumeTexturePreview = { "SparseVolumeTexturePreview", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USparseVolumeTextureViewerComponent, SparseVolumeTexturePreview), Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_SparseVolumeTexturePreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_SparseVolumeTexturePreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bAnimate_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
#endif
	void Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bAnimate_SetBit(void* Obj)
	{
		((USparseVolumeTextureViewerComponent*)Obj)->bAnimate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bAnimate = { "bAnimate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USparseVolumeTextureViewerComponent), &Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bAnimate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bAnimate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bAnimate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_AnimationFrame_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "!bAnimate" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_AnimationFrame = { "AnimationFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USparseVolumeTextureViewerComponent, AnimationFrame), METADATA_PARAMS(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_AnimationFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_AnimationFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ClampMax", "120.000000" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "bAnimate" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "UIMax", "120.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USparseVolumeTextureViewerComponent, FrameRate), METADATA_PARAMS(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_AnimationTime_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "UIMax", "60.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_AnimationTime = { "AnimationTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USparseVolumeTextureViewerComponent, AnimationTime), METADATA_PARAMS(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_AnimationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_AnimationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_ComponentToVisualize_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ClampMax", "7" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_ComponentToVisualize = { "ComponentToVisualize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USparseVolumeTextureViewerComponent, ComponentToVisualize), METADATA_PARAMS(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_ComponentToVisualize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_ComponentToVisualize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_SparseVolumeTexturePreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bAnimate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_AnimationFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_AnimationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_ComponentToVisualize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USparseVolumeTextureViewerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::ClassParams = {
		&USparseVolumeTextureViewerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::PropPointers),
		0,
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USparseVolumeTextureViewerComponent()
	{
		if (!Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent.OuterSingleton, Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent.OuterSingleton;
	}
	template<> RENDERER_API UClass* StaticClass<USparseVolumeTextureViewerComponent>()
	{
		return USparseVolumeTextureViewerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USparseVolumeTextureViewerComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USparseVolumeTextureViewerComponent)
	void ASparseVolumeTextureViewer::StaticRegisterNativesASparseVolumeTextureViewer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASparseVolumeTextureViewer);
	UClass* Z_Construct_UClass_ASparseVolumeTextureViewer_NoRegister()
	{
		return ASparseVolumeTextureViewer::StaticClass();
	}
	struct Z_Construct_UClass_ASparseVolumeTextureViewer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTextureViewerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SparseVolumeTextureViewerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Renderer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "Comment", "/**\n * A placeable actor that represents a participating media material around a planet, e.g. clouds.\n */" },
		{ "HideCategories", "Info Object Input Input WorldPartition Collision HLOD" },
		{ "IncludePath", "SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A placeable actor that represents a participating media material around a planet, e.g. clouds." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::NewProp_SparseVolumeTextureViewerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::NewProp_SparseVolumeTextureViewerComponent = { "SparseVolumeTextureViewerComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASparseVolumeTextureViewer, SparseVolumeTextureViewerComponent), Z_Construct_UClass_USparseVolumeTextureViewerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::NewProp_SparseVolumeTextureViewerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::NewProp_SparseVolumeTextureViewerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::NewProp_SparseVolumeTextureViewerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASparseVolumeTextureViewer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::ClassParams = {
		&ASparseVolumeTextureViewer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASparseVolumeTextureViewer()
	{
		if (!Z_Registration_Info_UClass_ASparseVolumeTextureViewer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASparseVolumeTextureViewer.OuterSingleton, Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASparseVolumeTextureViewer.OuterSingleton;
	}
	template<> RENDERER_API UClass* StaticClass<ASparseVolumeTextureViewer>()
	{
		return ASparseVolumeTextureViewer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASparseVolumeTextureViewer);
	ASparseVolumeTextureViewer::~ASparseVolumeTextureViewer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USparseVolumeTextureViewerComponent, USparseVolumeTextureViewerComponent::StaticClass, TEXT("USparseVolumeTextureViewerComponent"), &Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USparseVolumeTextureViewerComponent), 4097317063U) },
		{ Z_Construct_UClass_ASparseVolumeTextureViewer, ASparseVolumeTextureViewer::StaticClass, TEXT("ASparseVolumeTextureViewer"), &Z_Registration_Info_UClass_ASparseVolumeTextureViewer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASparseVolumeTextureViewer), 925673380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_3520517411(TEXT("/Script/Renderer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
