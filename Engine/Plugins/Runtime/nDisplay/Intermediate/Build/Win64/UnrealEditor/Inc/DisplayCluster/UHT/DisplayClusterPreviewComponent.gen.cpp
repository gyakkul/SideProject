// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterPreviewComponent.h"
#include "DisplayClusterConfigurationTypes_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterPreviewComponent() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterRootActor_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterPreviewComponent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterPreviewComponent_NoRegister();
	DISPLAYCLUSTERCONFIGURATION_API UClass* Z_Construct_UClass_UDisplayClusterConfigurationViewport_NoRegister();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterPreviewComponent::StaticRegisterNativesUDisplayClusterPreviewComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterPreviewComponent);
	UClass* Z_Construct_UClass_UDisplayClusterPreviewComponent_NoRegister()
	{
		return UDisplayClusterPreviewComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetPostProcess_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTargetPostProcess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpMeshSavedProjectionPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpMeshSavedProjectionPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ViewportId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClusterNodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewportConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRootActorPreviewMesh_MetaData[];
#endif
		static void NewProp_bIsRootActorPreviewMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRootActorPreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "DisplayCluster" },
		{ "Comment", "/**\n * nDisplay Viewport preview component (Editor)\n */" },
		{ "IncludePath", "Components/DisplayClusterPreviewComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "nDisplay Viewport preview component (Editor)" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "// Texture for preview material\n" },
		{ "DisplayName", "Render Target" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
		{ "ToolTip", "Texture for preview material" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0024080800022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterPreviewComponent, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RenderTargetPostProcess_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "// Texture when DCRA has post process disabled but is requesting a post process render target.\n" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
		{ "ToolTip", "Texture when DCRA has post process disabled but is requesting a post process render target." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RenderTargetPostProcess = { "RenderTargetPostProcess", nullptr, (EPropertyFlags)0x0024080800022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterPreviewComponent, RenderTargetPostProcess), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RenderTargetPostProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RenderTargetPostProcess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_WarpMeshSavedProjectionPolicy_MetaData[] = {
		{ "Comment", "// Saved mesh policy params\n" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
		{ "ToolTip", "Saved mesh policy params" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_WarpMeshSavedProjectionPolicy = { "WarpMeshSavedProjectionPolicy", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterPreviewComponent, WarpMeshSavedProjectionPolicy), Z_Construct_UScriptStruct_FDisplayClusterConfigurationProjection, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_WarpMeshSavedProjectionPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_WarpMeshSavedProjectionPolicy_MetaData)) }; // 1920878084
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RootActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RootActor = { "RootActor", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterPreviewComponent, RootActor), Z_Construct_UClass_ADisplayClusterRootActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RootActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RootActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ViewportId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ViewportId = { "ViewportId", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterPreviewComponent, ViewportId), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ViewportId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ViewportId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ClusterNodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ClusterNodeId = { "ClusterNodeId", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterPreviewComponent, ClusterNodeId), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ClusterNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ClusterNodeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ViewportConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ViewportConfig = { "ViewportConfig", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterPreviewComponent, ViewportConfig), Z_Construct_UClass_UDisplayClusterConfigurationViewport_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ViewportConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ViewportConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0044000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterPreviewComponent, PreviewMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_bIsRootActorPreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_bIsRootActorPreviewMesh_SetBit(void* Obj)
	{
		((UDisplayClusterPreviewComponent*)Obj)->bIsRootActorPreviewMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_bIsRootActorPreviewMesh = { "bIsRootActorPreviewMesh", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterPreviewComponent), &Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_bIsRootActorPreviewMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_bIsRootActorPreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_bIsRootActorPreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_OriginalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_OriginalMaterial = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterPreviewComponent, OriginalMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_OriginalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_OriginalMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterPreviewComponent, PreviewMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMaterialInstance = { "PreviewMaterialInstance", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterPreviewComponent, PreviewMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_OverrideTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DisplayClusterPreviewComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_OverrideTexture = { "OverrideTexture", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterPreviewComponent, OverrideTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_OverrideTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_OverrideTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RenderTargetPostProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_WarpMeshSavedProjectionPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_RootActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ViewportId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ClusterNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_ViewportConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_bIsRootActorPreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_OriginalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_PreviewMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::NewProp_OverrideTexture,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterPreviewComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::ClassParams = {
		&UDisplayClusterPreviewComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::PropPointers), 0),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterPreviewComponent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterPreviewComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterPreviewComponent.OuterSingleton, Z_Construct_UClass_UDisplayClusterPreviewComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterPreviewComponent.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterPreviewComponent>()
	{
		return UDisplayClusterPreviewComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterPreviewComponent);
	UDisplayClusterPreviewComponent::~UDisplayClusterPreviewComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterPreviewComponent, UDisplayClusterPreviewComponent::StaticClass, TEXT("UDisplayClusterPreviewComponent"), &Z_Registration_Info_UClass_UDisplayClusterPreviewComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterPreviewComponent), 1658633491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewComponent_h_3818444775(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
