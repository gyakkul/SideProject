// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterICVFXCameraComponent.h"
#include "DisplayClusterConfigurationTypes_ICVFX.h"
#include "DisplayClusterEditorPropertyReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterICVFXCameraComponent() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterICVFXCameraComponent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_NoRegister();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationICVFX_CameraSettings();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterICVFXCameraComponent::StaticRegisterNativesUDisplayClusterICVFXCameraComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterICVFXCameraComponent);
	UClass* Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_NoRegister()
	{
		return UDisplayClusterICVFXCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsEnabledRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IsEnabledRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenICVFXViewportsRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HiddenICVFXViewportsRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalCameraActorRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalCameraActorRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferRatioRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BufferRatioRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomFrustumRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomFrustumRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftEdgeRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftEdgeRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrustumRotationRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrustumRotationRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrustumOffsetRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrustumOffsetRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateMipsRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GenerateMipsRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMotionBlurRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraMotionBlurRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraHideListRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraHideListRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyEnabledRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChromaKeyEnabledRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromakeyColorRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChromakeyColorRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromakeyMarkersRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChromakeyMarkersRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromakeyRenderTextureRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChromakeyRenderTextureRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableInnerFrustuOCIORef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnableInnerFrustuOCIORef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllNodesOCIOConfigurationRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllNodesOCIOConfigurationRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerNodeOCIOProfilesRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerNodeOCIOProfilesRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableInnerFrustumColorGrading_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnableInnerFrustumColorGrading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllNodesColorGradingRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllNodesColorGradingRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerNodeColorGradingRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerNodeColorGradingRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureReplacementEnabledRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureReplacementEnabledRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTextureRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTextureRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldUseTextureRegionRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShouldUseTextureRegionRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureRegionRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureRegionRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderOrderRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderOrderRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomFrameSizeRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomFrameSizeRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetRatioRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetRatioRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUIndexRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GPUIndexRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoGPUIndexRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StereoGPUIndexRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoModeRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StereoModeRef;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCineCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "DisplayCluster" },
		{ "Comment", "/**\n * nDisplay in-camera VFX camera representation\n */" },
		{ "DisplayName", "ICVFX Camera" },
		{ "HideCategories", "AssetUserData Collision Cooking ComponentReplication Events Physics Sockets Activation Tags ComponentTick CameraSettings Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "HideFunctions", "SetFieldOfView SetAspectRatio" },
		{ "IncludePath", "Components/DisplayClusterICVFXCameraComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "nDisplay in-camera VFX camera representation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraSettings_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraSettings = { "CameraSettings", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, CameraSettings), Z_Construct_UScriptStruct_FDisplayClusterConfigurationICVFX_CameraSettings, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraSettings_MetaData)) }; // 4203676632
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_IsEnabledRef_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.bEnable" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_IsEnabledRef = { "IsEnabledRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, IsEnabledRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_IsEnabledRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_IsEnabledRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_HiddenICVFXViewportsRef_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.HiddenICVFXViewports" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_HiddenICVFXViewportsRef = { "HiddenICVFXViewportsRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, HiddenICVFXViewportsRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_HiddenICVFXViewportsRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_HiddenICVFXViewportsRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ExternalCameraActorRef_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.ExternalCameraActor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ExternalCameraActorRef = { "ExternalCameraActorRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, ExternalCameraActorRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ExternalCameraActorRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ExternalCameraActorRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_BufferRatioRef_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.BufferRatio" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_BufferRatioRef = { "BufferRatioRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, BufferRatioRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_BufferRatioRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_BufferRatioRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CustomFrustumRef_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "DisplayName", "Inner Frustum Overscan" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.CustomFrustum" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CustomFrustumRef = { "CustomFrustumRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, CustomFrustumRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CustomFrustumRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CustomFrustumRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_SoftEdgeRef_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.SoftEdge" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_SoftEdgeRef = { "SoftEdgeRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, SoftEdgeRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_SoftEdgeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_SoftEdgeRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_BorderRef_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.Border" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_BorderRef = { "BorderRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, BorderRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_BorderRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_BorderRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_FrustumRotationRef_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.FrustumRotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_FrustumRotationRef = { "FrustumRotationRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, FrustumRotationRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_FrustumRotationRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_FrustumRotationRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_FrustumOffsetRef_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.FrustumOffset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_FrustumOffsetRef = { "FrustumOffsetRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, FrustumOffsetRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_FrustumOffsetRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_FrustumOffsetRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_GenerateMipsRef_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "EditConditionPath", "CameraSettings.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.RenderSettings.GenerateMips" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_GenerateMipsRef = { "GenerateMipsRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, GenerateMipsRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_GenerateMipsRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_GenerateMipsRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraMotionBlurRef_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "EditConditionPath", "CameraSettings.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.CameraMotionBlur" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraMotionBlurRef = { "CameraMotionBlurRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, CameraMotionBlurRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraMotionBlurRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraMotionBlurRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraHideListRef_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "EditConditionPath", "CameraSettings.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.CameraHideList" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraHideListRef = { "CameraHideListRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, CameraHideListRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraHideListRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraHideListRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromaKeyEnabledRef_MetaData[] = {
		{ "Category", "Chromakey" },
		{ "EditConditionPath", "CameraSettings.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.Chromakey.bEnable" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromaKeyEnabledRef = { "ChromaKeyEnabledRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, ChromaKeyEnabledRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromaKeyEnabledRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromaKeyEnabledRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyColorRef_MetaData[] = {
		{ "Category", "Chromakey" },
		{ "EditConditionPath", "CameraSettings.bEnable && CameraSettings.Chromakey.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.Chromakey.ChromakeyColor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyColorRef = { "ChromakeyColorRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, ChromakeyColorRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyColorRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyColorRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyMarkersRef_MetaData[] = {
		{ "Category", "Chromakey" },
		{ "EditConditionPath", "CameraSettings.bEnable && CameraSettings.Chromakey.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.Chromakey.ChromakeyMarkers" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyMarkersRef = { "ChromakeyMarkersRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, ChromakeyMarkersRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyMarkersRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyMarkersRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyRenderTextureRef_MetaData[] = {
		{ "Category", "Chromakey" },
		{ "EditConditionPath", "CameraSettings.bEnable && CameraSettings.Chromakey.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.Chromakey.ChromakeyRenderTexture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyRenderTextureRef = { "ChromakeyRenderTextureRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, ChromakeyRenderTextureRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyRenderTextureRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyRenderTextureRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_EnableInnerFrustuOCIORef_MetaData[] = {
		{ "Category", "OCIO" },
		{ "DisplayName", "Enable Inner Frustum OCIO" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.CameraOCIO.AllNodesOCIOConfiguration.bIsEnabled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_EnableInnerFrustuOCIORef = { "EnableInnerFrustuOCIORef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, EnableInnerFrustuOCIORef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_EnableInnerFrustuOCIORef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_EnableInnerFrustuOCIORef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_AllNodesOCIOConfigurationRef_MetaData[] = {
		{ "Category", "OCIO" },
		{ "DisplayName", "All Nodes Color Configuration" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.CameraOCIO.AllNodesOCIOConfiguration.ColorConfiguration" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_AllNodesOCIOConfigurationRef = { "AllNodesOCIOConfigurationRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, AllNodesOCIOConfigurationRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_AllNodesOCIOConfigurationRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_AllNodesOCIOConfigurationRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_PerNodeOCIOProfilesRef_MetaData[] = {
		{ "Category", "OCIO" },
		{ "DisplayName", "Per-Node OCIO Overrides" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.CameraOCIO.PerNodeOCIOProfiles" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_PerNodeOCIOProfilesRef = { "PerNodeOCIOProfilesRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, PerNodeOCIOProfilesRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_PerNodeOCIOProfilesRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_PerNodeOCIOProfilesRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_EnableInnerFrustumColorGrading_MetaData[] = {
		{ "Category", "Inner Frustum Color Grading" },
		{ "DisplayName", "Enable Inner Frustum Color Grading" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.EnableInnerFrustumColorGrading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_EnableInnerFrustumColorGrading = { "EnableInnerFrustumColorGrading", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, EnableInnerFrustumColorGrading), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_EnableInnerFrustumColorGrading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_EnableInnerFrustumColorGrading_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_AllNodesColorGradingRef_MetaData[] = {
		{ "Category", "Inner Frustum Color Grading" },
		{ "DisplayName", "All Nodes" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.AllNodesColorGrading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_AllNodesColorGradingRef = { "AllNodesColorGradingRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, AllNodesColorGradingRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_AllNodesColorGradingRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_AllNodesColorGradingRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_PerNodeColorGradingRef_MetaData[] = {
		{ "Category", "Inner Frustum Color Grading" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.PerNodeColorGrading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_PerNodeColorGradingRef = { "PerNodeColorGradingRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, PerNodeColorGradingRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_PerNodeColorGradingRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_PerNodeColorGradingRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_TextureReplacementEnabledRef_MetaData[] = {
		{ "Category", "Texture Replacement" },
		{ "DisplayName", "Enable Inner Frustum Texture Replacement" },
		{ "EditConditionPath", "CameraSettings.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.RenderSettings.Replace.bAllowReplace" },
		{ "ToolTip", "Set to True to replace the entire inner frustum with the specified texture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_TextureReplacementEnabledRef = { "TextureReplacementEnabledRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, TextureReplacementEnabledRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_TextureReplacementEnabledRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_TextureReplacementEnabledRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_SourceTextureRef_MetaData[] = {
		{ "Category", "Texture Replacement" },
		{ "EditConditionPath", "CameraSettings.bEnable && CameraSettings.RenderSettings.Replace.bAllowReplace" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.RenderSettings.Replace.SourceTexture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_SourceTextureRef = { "SourceTextureRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, SourceTextureRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_SourceTextureRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_SourceTextureRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ShouldUseTextureRegionRef_MetaData[] = {
		{ "Category", "Texture Replacement" },
		{ "EditConditionPath", "CameraSettings.bEnable && CameraSettings.RenderSettings.Replace.bAllowReplace" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.RenderSettings.Replace.bShouldUseTextureRegion" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ShouldUseTextureRegionRef = { "ShouldUseTextureRegionRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, ShouldUseTextureRegionRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ShouldUseTextureRegionRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ShouldUseTextureRegionRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_TextureRegionRef_MetaData[] = {
		{ "Category", "Texture Replacement" },
		{ "EditConditionPath", "CameraSettings.bEnable && CameraSettings.RenderSettings.Replace.bAllowReplace && CameraSettings.RenderSettings.Replace.bShouldUseTextureRegion" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.RenderSettings.Replace.TextureRegion" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_TextureRegionRef = { "TextureRegionRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, TextureRegionRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_TextureRegionRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_TextureRegionRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_MediaRef_MetaData[] = {
		{ "Category", "Media" },
		{ "EditConditionPath", "CameraSettings.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.RenderSettings.Media" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_MediaRef = { "MediaRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, MediaRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_MediaRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_MediaRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_RenderOrderRef_MetaData[] = {
		{ "Category", "Configuration" },
		{ "EditConditionPath", "CameraSettings.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.RenderSettings.RenderOrder" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_RenderOrderRef = { "RenderOrderRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, RenderOrderRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_RenderOrderRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_RenderOrderRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CustomFrameSizeRef_MetaData[] = {
		{ "Category", "Configuration" },
		{ "EditConditionPath", "CameraSettings.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.RenderSettings.CustomFrameSize" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CustomFrameSizeRef = { "CustomFrameSizeRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, CustomFrameSizeRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CustomFrameSizeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CustomFrameSizeRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_RenderTargetRatioRef_MetaData[] = {
		{ "Category", "Configuration" },
		{ "EditConditionPath", "CameraSettings.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.RenderSettings.AdvancedRenderSettings.RenderTargetRatio" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_RenderTargetRatioRef = { "RenderTargetRatioRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, RenderTargetRatioRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_RenderTargetRatioRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_RenderTargetRatioRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_GPUIndexRef_MetaData[] = {
		{ "Category", "Configuration" },
		{ "EditConditionPath", "CameraSettings.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.RenderSettings.AdvancedRenderSettings.GPUIndex" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_GPUIndexRef = { "GPUIndexRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, GPUIndexRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_GPUIndexRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_GPUIndexRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_StereoGPUIndexRef_MetaData[] = {
		{ "Category", "Configuration" },
		{ "EditConditionPath", "CameraSettings.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.RenderSettings.AdvancedRenderSettings.StereoGPUIndex" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_StereoGPUIndexRef = { "StereoGPUIndexRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, StereoGPUIndexRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_StereoGPUIndexRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_StereoGPUIndexRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_StereoModeRef_MetaData[] = {
		{ "Category", "Configuration" },
		{ "EditConditionPath", "CameraSettings.bEnable" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterICVFXCameraComponent.h" },
		{ "PropertyPath", "CameraSettings.RenderSettings.AdvancedRenderSettings.StereoMode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_StereoModeRef = { "StereoModeRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterICVFXCameraComponent, StereoModeRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_StereoModeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_StereoModeRef_MetaData)) }; // 3388615158
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_IsEnabledRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_HiddenICVFXViewportsRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ExternalCameraActorRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_BufferRatioRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CustomFrustumRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_SoftEdgeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_BorderRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_FrustumRotationRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_FrustumOffsetRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_GenerateMipsRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraMotionBlurRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CameraHideListRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromaKeyEnabledRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyColorRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyMarkersRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ChromakeyRenderTextureRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_EnableInnerFrustuOCIORef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_AllNodesOCIOConfigurationRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_PerNodeOCIOProfilesRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_EnableInnerFrustumColorGrading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_AllNodesColorGradingRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_PerNodeColorGradingRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_TextureReplacementEnabledRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_SourceTextureRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_ShouldUseTextureRegionRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_TextureRegionRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_MediaRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_RenderOrderRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_CustomFrameSizeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_RenderTargetRatioRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_GPUIndexRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_StereoGPUIndexRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::NewProp_StereoModeRef,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterICVFXCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::ClassParams = {
		&UDisplayClusterICVFXCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterICVFXCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterICVFXCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterICVFXCameraComponent.OuterSingleton, Z_Construct_UClass_UDisplayClusterICVFXCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterICVFXCameraComponent.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterICVFXCameraComponent>()
	{
		return UDisplayClusterICVFXCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterICVFXCameraComponent);
	UDisplayClusterICVFXCameraComponent::~UDisplayClusterICVFXCameraComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterICVFXCameraComponent, UDisplayClusterICVFXCameraComponent::StaticClass, TEXT("UDisplayClusterICVFXCameraComponent"), &Z_Registration_Info_UClass_UDisplayClusterICVFXCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterICVFXCameraComponent), 3484677885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_1977207401(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterICVFXCameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
