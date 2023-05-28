// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PixelInspectorView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelInspectorView() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
	PIXELINSPECTORMODULE_API UClass* Z_Construct_UClass_UPixelInspectorView();
	PIXELINSPECTORMODULE_API UClass* Z_Construct_UClass_UPixelInspectorView_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PixelInspectorModule();
// End Cross Module References
	void UPixelInspectorView::StaticRegisterNativesUPixelInspectorView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelInspectorView);
	UClass* Z_Construct_UClass_UPixelInspectorView_NoRegister()
	{
		return UPixelInspectorView::StaticClass();
	}
	struct Z_Construct_UClass_UPixelInspectorView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinalColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreExposure_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreExposure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Luminance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Luminance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HdrColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HdrColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerObjectGBufferData_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerObjectGBufferData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metallic_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Metallic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Specular_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Specular;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Roughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialShadingModel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialShadingModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectiveOutputMask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectiveOutputMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectIrradiance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndirectIrradiance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSurfaceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubSurfaceColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubsurfaceProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearCoat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClearCoat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearCoatRoughness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClearCoatRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackLit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackLit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cloth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cloth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EyeTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IrisMask_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IrisMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IrisDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IrisDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelInspectorView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelInspectorModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PixelInspectorView.h" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_FinalColor_MetaData[] = {
		{ "Category", "FinalColor" },
		{ "Comment", "/** Final RGBA 8bits Color after tone mapping, default value is black. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "Final RGBA 8bits Color after tone mapping, default value is black." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_FinalColor = { "FinalColor", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, FinalColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_FinalColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_FinalColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SceneColor_MetaData[] = {
		{ "Category", "SceneColor" },
		{ "Comment", "/** HDR RGB Color. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "HDR RGB Color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SceneColor = { "SceneColor", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, SceneColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SceneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SceneColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PreExposure_MetaData[] = {
		{ "Category", "SceneColor" },
		{ "Comment", "/** HDR Luminance. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "HDR Luminance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PreExposure = { "PreExposure", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, PreExposure), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PreExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PreExposure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Luminance_MetaData[] = {
		{ "Category", "HDR" },
		{ "Comment", "/** HDR Luminance. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "HDR Luminance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Luminance = { "Luminance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, Luminance), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Luminance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Luminance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_HdrColor_MetaData[] = {
		{ "Category", "HDR" },
		{ "Comment", "/** HDR RGB Color. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "HDR RGB Color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_HdrColor = { "HdrColor", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, HdrColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_HdrColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_HdrColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "GBufferA" },
		{ "Comment", "/** From the GBufferA RGB Channels. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferA RGB Channels." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PerObjectGBufferData_MetaData[] = {
		{ "Category", "GBufferA" },
		{ "Comment", "/** From the GBufferA A Channel. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferA A Channel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PerObjectGBufferData = { "PerObjectGBufferData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, PerObjectGBufferData), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PerObjectGBufferData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PerObjectGBufferData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Metallic_MetaData[] = {
		{ "Category", "GBufferB" },
		{ "Comment", "/** From the GBufferB R Channel. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferB R Channel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Metallic = { "Metallic", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, Metallic), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Metallic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Metallic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Specular_MetaData[] = {
		{ "Category", "GBufferB" },
		{ "Comment", "/** From the GBufferB G Channel. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferB G Channel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Specular = { "Specular", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, Specular), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Specular_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Specular_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Roughness_MetaData[] = {
		{ "Category", "GBufferB" },
		{ "Comment", "/** From the GBufferB B Channel. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferB B Channel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, Roughness), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Roughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Roughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_MaterialShadingModel_MetaData[] = {
		{ "Category", "GBufferB" },
		{ "Comment", "/** From the GBufferB A Channel encoded with SelectiveOutputMask. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferB A Channel encoded with SelectiveOutputMask." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_MaterialShadingModel = { "MaterialShadingModel", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, MaterialShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_MaterialShadingModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_MaterialShadingModel_MetaData)) }; // 3734556393
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SelectiveOutputMask_MetaData[] = {
		{ "Category", "GBufferB" },
		{ "Comment", "/** From the GBufferB A Channel encoded with ShadingModel. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferB A Channel encoded with ShadingModel." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SelectiveOutputMask = { "SelectiveOutputMask", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, SelectiveOutputMask), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SelectiveOutputMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SelectiveOutputMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BaseColor_MetaData[] = {
		{ "Category", "GBufferC" },
		{ "Comment", "/** From the GBufferC RGB Channels. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferC RGB Channels." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, BaseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BaseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BaseColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IndirectIrradiance_MetaData[] = {
		{ "Category", "GBufferC" },
		{ "Comment", "/** From the GBufferC A Channel encoded with AmbientOcclusion. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferC A Channel encoded with AmbientOcclusion." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IndirectIrradiance = { "IndirectIrradiance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, IndirectIrradiance), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IndirectIrradiance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IndirectIrradiance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_AmbientOcclusion_MetaData[] = {
		{ "Category", "GBufferC" },
		{ "Comment", "/** From the GBufferC A Channel encoded with IndirectIrradiance. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferC A Channel encoded with IndirectIrradiance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_AmbientOcclusion = { "AmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, AmbientOcclusion), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_AmbientOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_AmbientOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubSurfaceColor_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "Comment", "/** From the GBufferD RGB Channels. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD RGB Channels." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubSurfaceColor = { "SubSurfaceColor", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, SubSurfaceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubSurfaceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubSurfaceColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubsurfaceProfile_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "Comment", "/** From the GBufferD RGB Channels. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD RGB Channels." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubsurfaceProfile = { "SubsurfaceProfile", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, SubsurfaceProfile), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubsurfaceProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubsurfaceProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Opacity_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "Comment", "/** From the GBufferD A Channel. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD A Channel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, Opacity), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Opacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Opacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoat_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "Comment", "/** From the GBufferD R Channel. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD R Channel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoat = { "ClearCoat", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, ClearCoat), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoatRoughness_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "Comment", "/** From the GBufferD G Channel. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD G Channel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoatRoughness = { "ClearCoatRoughness", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, ClearCoatRoughness), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoatRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoatRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_WorldNormal_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "Comment", "/** From the GBufferD RG Channels. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD RG Channels." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_WorldNormal = { "WorldNormal", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, WorldNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_WorldNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_WorldNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BackLit_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "Comment", "/** From the GBufferD B Channel. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD B Channel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BackLit = { "BackLit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, BackLit), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BackLit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BackLit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Cloth_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "Comment", "/** From the GBufferD A Channel. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD A Channel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Cloth = { "Cloth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, Cloth), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Cloth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Cloth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_EyeTangent_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "Comment", "/** From the GBufferD RG Channels. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD RG Channels." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_EyeTangent = { "EyeTangent", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, EyeTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_EyeTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_EyeTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisMask_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "Comment", "/** From the GBufferD B Channel. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD B Channel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisMask = { "IrisMask", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, IrisMask), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisDistance_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "Comment", "/** From the GBufferD A Channel. */" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD A Channel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisDistance = { "IrisDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelInspectorView, IrisDistance), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPixelInspectorView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_FinalColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SceneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PreExposure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Luminance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_HdrColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PerObjectGBufferData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Metallic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Specular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Roughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_MaterialShadingModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SelectiveOutputMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BaseColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IndirectIrradiance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_AmbientOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubSurfaceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubsurfaceProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Opacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoatRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_WorldNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BackLit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Cloth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_EyeTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelInspectorView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelInspectorView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelInspectorView_Statics::ClassParams = {
		&UPixelInspectorView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPixelInspectorView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelInspectorView()
	{
		if (!Z_Registration_Info_UClass_UPixelInspectorView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelInspectorView.OuterSingleton, Z_Construct_UClass_UPixelInspectorView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelInspectorView.OuterSingleton;
	}
	template<> PIXELINSPECTORMODULE_API UClass* StaticClass<UPixelInspectorView>()
	{
		return UPixelInspectorView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelInspectorView);
	UPixelInspectorView::~UPixelInspectorView() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PixelInspector_Private_PixelInspectorView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PixelInspector_Private_PixelInspectorView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelInspectorView, UPixelInspectorView::StaticClass, TEXT("UPixelInspectorView"), &Z_Registration_Info_UClass_UPixelInspectorView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelInspectorView), 4159221314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PixelInspector_Private_PixelInspectorView_h_2527384145(TEXT("/Script/PixelInspectorModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PixelInspector_Private_PixelInspectorView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PixelInspector_Private_PixelInspectorView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
